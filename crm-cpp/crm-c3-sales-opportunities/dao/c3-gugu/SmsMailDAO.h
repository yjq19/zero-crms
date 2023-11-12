#pragma once
#ifndef _SMSEMAIL_DAO_
#define _SMSEMAIL_DAO_
#include "BaseDAO.h"
#include"domain/do/c3-gugu/SmsMailDO.h"

/**
 * 查询数据库操作实现
 */

class SmsEmailDAO : public BaseDAO
{
public:
	//查询电子邮箱
	list<EmailDO> queryEmail(const int& customer_no);
	//查询联系手机
	list<SmsDO> queryMobile(const int& customer_no);
};
#endif // !_SMSEMAIL_DAO_

