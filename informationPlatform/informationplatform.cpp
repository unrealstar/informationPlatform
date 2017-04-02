#pragma once
#pragma execution_character_set("utf-8")

#include "informationplatform.h"


informationPlatform::informationPlatform(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	initData();

	if (initMySqlConnection())
	{
		initTableView();
	}	

	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(slt_submitInfo()));



	//sprintf(query, "select * from studentinfo"); //执行查询语句，这里是查询所有，user是表名，不用加引号，用strcpy也可以
	//mysql_query(&mysql, "set names gbk"); //设置编码格式（SET NAMES GBK也行），否则cmd下中文乱码
	//									  //返回0 查询成功，返回1查询失败
	//if (mysql_query(&mysql, query))        //执行SQL语句
	//{
	//	printf("Query failed (%s)\n", mysql_error(&mysql));
	//}
	//else
	//{
	//	printf("query success\n");
	//}
	////获取结果集
	//if (!(res = mysql_store_result(&mysql)))    //获得sql语句结束后返回的结果集
	//{
	//	printf("Couldn't get result from %s\n", mysql_error(&mysql));
	//}

	////打印数据行数
	//printf("number of dataline returned: %d\n", mysql_affected_rows(&mysql));

	////获取字段的信息
	//char *str_field[32];  //定义一个字符串数组存储字段信息
	//for (int i = 0; i < 4; i++)   //在已知字段数量的情况下获取字段名
	//{
	//	str_field[i] = mysql_fetch_field(res)->name;
	//}
	//for (int i = 0; i < 4; i++)   //打印字段
	//	printf("%10s\t", str_field[i]);
	//printf("\n");
	////打印获取的数据
	//while (column = mysql_fetch_row(res))   //在已知字段数量情况下，获取并打印下一行
	//{
	//	printf("%10s\t%10s\t%10s\t%10s\n", column[0], column[1], column[2], column[3]);  //column是列数组
	//}





}

bool informationPlatform::getStudentInfo(void)
{
	char query[150];
	sprintf(query, "select * from studentinfo"); //执行查询语句，这里是查询所有，user是表名，不用加引号，用strcpy也可以
	mysql_query(&mysql, "set names gbk"); //设置编码格式（SET NAMES GBK也行），否则cmd下中文乱码
										  //返回0 查询成功，返回1查询失败
	if (mysql_query(&mysql, query))        //执行SQL语句
	{
		printf("Query failed (%s)\n", mysql_error(&mysql));
	}
	else
	{
		printf("query success\n");
	}
	//获取结果集
	if (!(res = mysql_store_result(&mysql)))    //获得sql语句结束后返回的结果集
	{
		printf("Couldn't get result from %s\n", mysql_error(&mysql));
	}

	int rowNum = mysql_affected_rows(&mysql);


	//获取字段的信息
	char *str_field[32];  //定义一个字符串数组存储字段信息
	for (int i = 0; i < 5; i++)   //在已知字段数量的情况下获取字段名
	{
		str_field[i] = mysql_fetch_field(res)->name;
	}
	QString result = "";
	for (int i = 0; i < 5; i++)   //打印字段
	{
		result = str_field[i];
	}
		
	//打印获取的数据
	while (column = mysql_fetch_row(res))   //在已知字段数量情况下，获取并打印下一行
	{
		printf("%10s\t%10s\t%10s\t%10s\n", column[0], column[1], column[2], column[3]);  //column是列数组
	}

	return true;
}

informationPlatform::~informationPlatform()
{

}

void informationPlatform::initData(void)
{
	//目前默认填为0，之后通过其他方式初始化该值
	m_currentId = 0;

	//设置输入数据值限制条件
	ui.age->setValidator(new QIntValidator(1, 100, this));
	//ui.phone->setValidator(new QIntValidator(10000000000, 20000000000, this));
}

bool informationPlatform::initMySqlConnection(void)
{
	//初始化mysql
	mysql_init(&mysql);  //连接mysql，数据库

	//返回false则连接失败，返回true则连接成功
	if (!(mysql_real_connect(&mysql, HOST, USER, PASSWORD, DBNAME, PORT, NULL, 0))) //中间分别是主机，用户名，密码，数据库名，端口号（可以写默认0或者3306等），可以先写成参数再传进去
	{
		printf("Error connecting to database:%s\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		printf("Connected...\n");
		return true;
	}
}

void informationPlatform::initTableView(void)
{
	//一 添加表头
	//准备数据模型
	student_model = new QStandardItemModel();
	student_model->setHorizontalHeaderItem(0, new QStandardItem("NO."));
	student_model->setHorizontalHeaderItem(1, new QStandardItem(QStringLiteral("姓名")));
	student_model->setHorizontalHeaderItem(2, new QStandardItem(QStringLiteral("性别")));
	student_model->setHorizontalHeaderItem(3, new QStandardItem(QStringLiteral("年龄")));
	student_model->setHorizontalHeaderItem(4, new QStandardItem(QStringLiteral("电话")));
	student_model->setHorizontalHeaderItem(5, new QStandardItem(QStringLiteral("学校")));
	//利用setModel()方法将数据模型与QTableView绑定
	ui.student_tableview->setModel(student_model);

	//二 设置表格属性
	//设置列宽不可变动，即不能通过鼠标拖动增加列宽        
	//ui.student_tableview->horizontalHeader()->setResizeMode(0, QHeaderView::Fixed);
	//ui.student_tableview->horizontalHeader()->setResizeMode(1, QHeaderView::Fixed);
	//ui.student_tableview->horizontalHeader()->setResizeMode(2, QHeaderView::Fixed);
	//ui.student_tableview->horizontalHeader()->setResizeMode(3, QHeaderView::Fixed);
	//ui.student_tableview->horizontalHeader()->setResizeMode(4, QHeaderView::Fixed);
	//ui.student_tableview->horizontalHeader()->setResizeMode(5, QHeaderView::Fixed);
	//设置表格的各列的宽度值        
	ui.student_tableview->setColumnWidth(0, 100);
	ui.student_tableview->setColumnWidth(1, 100);
	ui.student_tableview->setColumnWidth(2, 100);
	ui.student_tableview->setColumnWidth(3, 100);
	ui.student_tableview->setColumnWidth(4, 100);
	//默认显示行头，如果你觉得不美观的话，我们可以将隐藏        
	//ui.student_tableview->verticalHeader()->hide();
	//设置选中时为整行选中        
	ui.student_tableview->setSelectionBehavior(QAbstractItemView::SelectRows);

	//设置表格的单元为只读属性，即不能编辑        
	ui.student_tableview->setEditTriggers(QAbstractItemView::NoEditTriggers);
	//如果你用在QTableView中使用右键菜单，需启用该属性        
	ui.student_tableview->setContextMenuPolicy(Qt::CustomContextMenu);

	//设置排序方式，按年龄降序显示
	student_model->sort(3, Qt::DescendingOrder);
}

bool informationPlatform::insertStudentInfo(CStudent_Info &info)
{
	char query[150]; //查询语句
	memset(query, 0, 150);
	QString queryString;
	queryString += "insert into studentinfo values(";
	queryString += QString::number(info.id)+",'";
	queryString += info.name + "',";
	queryString += QString::number(info.sex) + ",";
	queryString += QString::number(info.age) + ",";
	queryString += QString::number(info.phoneNo) + ",'";
	queryString += info.school + "');";
	QByteArray buff = queryString.toLocal8Bit();
	std::string str = queryString.toStdString();
	strcpy(query, buff.data());
	//query = queryString.toStdString().c_str();  //可以想办法实现手动在控制台手动输入指令
	if (mysql_query(&mysql, query))        //执行SQL语句
	{
		QString qstr(mysql_error(&mysql));
		qstr = qstr;
		printf("Query failed (%s)\n", mysql_error(&mysql));
		return false;
	}
	else
	{
		printf("Insert success\n");
		return true;
	}

}

void informationPlatform::updateTable(Student_Info &info)
{
	int rowCount = student_model->rowCount();
	student_model->insertRow(rowCount-1);
	//三 动态添加行
	//在表格中添加行时，我们只需要在model中插入数据即可，一旦model中的数据发生变化，QTabelView显示就会做相应的变动
	//在第一行添加学生张三的个人信息(setItem函数的第一个参数表示行号，第二个表示列号，第三个为要显示的数据)
	student_model->setItem(rowCount, 0, new QStandardItem(QString::number(info.id)));
	student_model->setItem(rowCount, 1, new QStandardItem(info.name));
	switch (info.sex)
	{
	case 0:
	{
		student_model->setItem(rowCount, 2, new QStandardItem(u8"男"));
		break;
	}
	case 1:
	{
		student_model->setItem(rowCount, 2, new QStandardItem(u8"女"));
		break;
	}
	default:
	{
		student_model->setItem(rowCount, 2, new QStandardItem(""));
		break;
	}
	}
	
	student_model->setItem(rowCount, 3, new QStandardItem(QString::number(info.age)));
	student_model->setItem(rowCount, 4, new QStandardItem(QString::number(info.phoneNo)));
	student_model->setItem(rowCount, 5, new QStandardItem(info.school));

	//四 设置数据显示的样式 
		//设置单元格文本居中，张三的数据设置为居中显示
	student_model->item(rowCount, 0)->setTextAlignment(Qt::AlignCenter);
	student_model->item(rowCount, 1)->setTextAlignment(Qt::AlignCenter);
	student_model->item(rowCount, 2)->setTextAlignment(Qt::AlignCenter);
	student_model->item(rowCount, 3)->setTextAlignment(Qt::AlignCenter);
	student_model->item(rowCount, 4)->setTextAlignment(Qt::AlignCenter);
	student_model->item(rowCount, 5)->setTextAlignment(Qt::AlignCenter);
	//设置单元格文本颜色，张三的数据设置为红色
	//student_model->item(rowCount, 0)->setForeground(QBrush(QColor(255, 0, 0)));
	//student_model->item(rowCount, 1)->setForeground(QBrush(QColor(255, 0, 0)));
	//student_model->item(rowCount, 2)->setForeground(QBrush(QColor(255, 0, 0)));
	//student_model->item(rowCount, 3)->setForeground(QBrush(QColor(255, 0, 0)));
	//student_model->item(rowCount, 4)->setForeground(QBrush(QColor(255, 0, 0)));
	//student_model->item(rowCount, 5)->setForeground(QBrush(QColor(255, 0, 0)));
	//将字体加粗
	//student_model->item(rowCount, 0)->setFont(QFont("Times", 10, QFont::Black ));
	//student_model->item(rowCount, 1)->setFont(QFont("Times", 10, QFont::Black ));
	//student_model->item(rowCount, 2)->setFont(QFont("Times", 10, QFont::Black ));
	//student_model->item(rowCount, 3)->setFont(QFont("Times", 10, QFont::Black ));
	//student_model->item(rowCount, 4)->setFont(QFont("Times", 10, QFont::Black ));
	//student_model->item(rowCount, 5)->setFont(QFont("Times", 10, QFont::Black ));

}

bool informationPlatform::slt_submitInfo(void)
{
	bool suc = true;
	CStudent_Info info;

	info.id = m_currentId;
	QString name = ui.name->text();
	if (name != "")
	{
		info.name = name;
	}
	else
	{
		return false;
	}

	info.age = ui.age->text().toInt();
	info.phoneNo = ui.phone->text().toInt();

	info.sex = ui.sex->currentIndex();
	QString school = ui.school->text();
	if (school != "")
	{
		info.school = school;
	}
	else
	{
		return false;
	}

	suc= insertStudentInfo(info);

	getStudentInfo();
	
	return suc;
}