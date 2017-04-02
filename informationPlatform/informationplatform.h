#ifndef INFORMATIONPLATFORM_H
#define INFORMATIONPLATFORM_H

#include <QtGui>
#include <QString>
#include <QtWidgets>
#include <QStandardItemModel> 
#include <QHeaderView>
#include "ui_informationplatform.h"
#include "mysql.h"
#include "stdio.h"

#define USER "yaoj"
#define PASSWORD "sodothem"
#define DBNAME "world"
#define HOST "localhost"
#define PORT 3306

typedef struct STUDENT_INFO
{
	unsigned int		id;
	QString				name;
	unsigned int		age;
	bool					sex;
	unsigned int		phoneNo;
	QString				school;
}Student_Info;


class CStudent_Info: public QObject
{
	Q_OBJECT
public:
	CStudent_Info() 
	{ 
		id = 0;
		name = "";
		age = 0;
		sex = -1;
		phoneNo = 0;
		school = "";
	}
	unsigned int		id;
	QString				name;
	unsigned int		age;
	unsigned int		sex;
	unsigned int		phoneNo;
	QString				school;
};


class informationPlatform : public QMainWindow
{
	Q_OBJECT

public:
	informationPlatform(QWidget *parent = 0);
	~informationPlatform();

public slots:
	//提交信息槽函数
	bool slt_submitInfo(void);

private:
	//初始化数据信息
	void initData(void);

	//初始化表头信息
	void initTableView(void);
	//更新表页信息
	void updateTable(Student_Info &info);

	//初始化Mysql数据库连接
	bool initMySqlConnection(void);

	//插入学生数据
	bool insertStudentInfo(CStudent_Info &info);

	bool getStudentInfo(void);

private:
	Ui::informationPlatformClass ui;

	MYSQL mysql; //mysql连接
	MYSQL_FIELD *fd;  //字段列数组
	char field[32][32];  //存字段名二维数组
	MYSQL_RES *res; //这个结构代表返回行的一个查询结果集
	MYSQL_ROW column; //一个行数据的类型安全(type-safe)的表示，表示数据行的列

	QStandardItemModel *student_model;

	int					m_currentId;

};

#endif // INFORMATIONPLATFORM_H
