package com.zeroone.star.systemmanagement.service;

import com.baomidou.mybatisplus.extension.service.IService;
import com.zeroone.star.project.dto.PageDTO;
import com.zeroone.star.project.dto.j1.systemmanagement.CstFieldExtGetDTO;
import com.zeroone.star.project.dto.j1.systemmanagement.CstFieldExtGetPageDTO;
import com.zeroone.star.project.query.j1.systemmanagement.CstFieldExtGetPageQuery;
import com.zeroone.star.project.query.j1.systemmanagement.CstFieldExtGetQuery;
import com.zeroone.star.systemmanagement.entity.CstFieldExt;

public interface CstFieldExtGetPageService extends IService<CstFieldExt> {
    PageDTO<CstFieldExtGetPageDTO> listAll(CstFieldExtGetPageQuery query);
}
