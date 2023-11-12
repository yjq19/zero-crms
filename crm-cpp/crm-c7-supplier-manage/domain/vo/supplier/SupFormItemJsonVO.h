#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: Andrew211vibe
 @Date: 2023/10/20 19:55:56

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
#ifndef _SUPFORMITEMVO_H_
#define _SUPFORMITEMVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/supplier/SupFormItemDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 供应商表单数据项JsonVO
 * 负责人: Andrew
 */
class SupFormItemJsonVO : public JsonVO<SupFormItemListDTO::Wrapper>
{
	DTO_INIT(SupFormItemJsonVO, JsonVO<SupFormItemListDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SUPFORMITEMVO_H_