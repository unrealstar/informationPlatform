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

	//��ʼ��mysql
	mysql_init(&mysql);  //����mysql�����ݿ�

						 //����false������ʧ�ܣ�����true�����ӳɹ�
	if (!(mysql_real_connect(&mysql, m_host.toLocal8Bit(), m_user.toLocal8Bit(), m_password.toLocal8Bit(), m_dbname.toLocal8Bit(), m_port, NULL, 0))) //�м�ֱ����������û��������룬���ݿ������˿ںţ�����дĬ��0����3306�ȣ���������д�ɲ����ٴ���ȥ
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