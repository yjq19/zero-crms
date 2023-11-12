/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 11:13:11

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#include "stdafx.h"
#include "AddPayRecordService.h"
#include "../../dao/add-pay-record/AddPayRecordDAO.h"
#include "../../../arch-demo/Macros.h"

uint64_t AddPayRecordService::dealWithResult(const AddPayRecordDTO::Wrapper& dto) {
	AddPayRecordDO data;
	// 	data.setName(dto->name.getValue(""));
	// 	data.setSex(dto->sex.getValue(""));
	// 	data.setAge(dto->age.getValue(1));
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, ContractName, contract_name, SupplierName, supplier_name, BankId, bank_id, PayDate, pay_date,Money, money, ZeroMoney, zero_money, Stages, stages,Intro, intro,CreateUserId,create_user_id);
		// 执行数据添加;
		AddPayRecordDAO dao;
//		list<AddPayRecordDO> a = dao.selectContractNameById(data);
		list<AddPayRecordDO> a = dao.selectContractNameByName(data);
//		list<AddPayRecordDO> b = dao.selectSupplierNameById(data);
		list<AddPayRecordDO> b = dao.selectSupplierNameByName(data);
		//data.setContractName(data.ContracttoString());
		//data.setSupplierName(data.SuppliertoString());
		auto it1 = a.begin(); // 获取列表的起始迭代器
		auto it2 = b.begin(); // 获取列表的起始迭代器
		if (a.empty()) {
			cout << "找不到合同" << endl;
			return -1;
		}
			
		else 
			advance(it1, 0); // 将迭代器移动到第 index 个位置
		if (b.empty()) {
			cout << "找不到供应商" << endl;
			return -1;
		}
		else
			advance(it2, 0); // 将迭代器移动到第 index 个位置


		//cout << it1->getContractName()<<endl;
		data.setContractId(it1->getContractId());
		data.setContractName(it1->getContractName());
		data.setSupplierId(it2->getSupplierId());
		data.setSupplierName(it2->getSupplierName());
		return dao.insert(data);
}