﻿#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 11:52:32

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

#include "../DoInclude.h"
/**
 * 发送短信数据库实体类
 * 负责人: 柏下微雨
 */
class SendMessageDO
{
	//名字
	CC_SYNTHESIZE(string, name, Name);
	//电话
	CC_SYNTHESIZE(string, mobile, Mobile);
public:
	SendMessageDO() {
		name = "";
		mobile = "";
	}
};
