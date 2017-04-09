#include "mysqlMgr.h"

MySqlMgr MySqlMgr::m_mySqlMgr;

MySqlMgr::MySqlMgr()
{
	
	
}


MySqlMgr::~MySqlMgr()
{

}

MySqlMgr& MySqlMgr::instance(void)
{
	return m_mySqlMgr;
}


bool MySqlMgr::connect(QString user, QString password, QString dbname, QString host, int port)
{
	m_user = user;
	m_password = password;
	m_dbname = dbname;
	m_host = host;
	m_port = port;

	//初始化mysql
	mysql_init(&mysql);  //连接mysql，数据库

						 //返回false则连接失败，返回true则连接成功
	if (!(mysql_real_connect(&mysql, m_host.toLocal8Bit(), m_user.toLocal8Bit(), m_password.toLocal8Bit(), m_dbname.toLocal8Bit(), m_port, NULL, 0))) //中间分别是主机，用户名，密码，数据库名，端口号（可以写默认0或者3306等），可以先写成参数再传进去
	{
		printf("Connected failed\n");
		return false;
	}
	else
	{
		printf("Connected...\n");
		return true;
	}
}