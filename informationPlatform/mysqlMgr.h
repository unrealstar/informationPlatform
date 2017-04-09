#pragma once

#include "mysql.h"
#include <QString>

class MySqlMgr
{
public:
	static MySqlMgr& instance(void);

	bool connect(QString user, QString password, QString dbname, QString host, int port);
	
private:
	MySqlMgr(void);
	~MySqlMgr();

	

private:
	static MySqlMgr m_mySqlMgr;
	QString m_user;
	QString m_password;
	QString m_dbname;
	QString m_host;
	int			m_port;

	MYSQL mysql; //mysql¡¨Ω”

};
