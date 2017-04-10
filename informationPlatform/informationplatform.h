#ifndef INFORMATIONPLATFORM_H
#define INFORMATIONPLATFORM_H

#pragma execution_character_set("utf-8")

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

typedef struct CLASS_INFO
{
	QString		class_code;
	QString		class_name;
	int				grade;
	QString		subject;
	int				totalNum;
	int				assignNum;
	int				value;
	int				classNum;
	QString		teacherName;
}Class_Info;


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
	//学生信息槽函数
	void slt_addStudent(void);
	void slt_searchInfo(void);
	void slt_modifyStudent(void);
	void slt_studentTableItemClicked(const QModelIndex&);

	//课程信息槽函数
	void slt_addClass(void);
	void slt_modifyClass(void);
	void slt_classTableItemClicked(const QModelIndex&);
	void slt_classCodeChanged(const QString &);

private:
	//初始化数据信息
	void initData(void);

	//初始化表头信息
	void initTableView(void);
	//更新表页信息
	void updateTable(Student_Info &info);
	void updateTable(Class_Info &info);

	//初始化Mysql数据库连接
	bool initMySqlConnection(void);

	//插入学生数据
	bool insertStudentInfo(Student_Info &info);
	bool updateStudentInfo(Student_Info &info);

	//插入课程数据
	bool insertClassInfo(Class_Info &info);
	bool updateClassInfo(Class_Info &info);

	bool getStudentInfo(void);
	bool getClassInfo(void);

private:
	Ui::informationPlatformClass ui;

	MYSQL mysql; //mysql连接
	MYSQL_FIELD *fd;  //字段列数组
	char field[32][32];  //存字段名二维数组
	MYSQL_RES *res; //这个结构代表返回行的一个查询结果集
	MYSQL_ROW column; //一个行数据的类型安全(type-safe)的表示，表示数据行的列

	QStandardItemModel *student_model;
	QStandardItemModel *class_model;

	int					m_newStudentID;			//新增学生编号
	int					m_selectStudentID;		//选中学生编号

	QString			m_selectClassCode;		//选中课程编码

};

#endif // INFORMATIONPLATFORM_H
