/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * AS IS BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Copyright (c) 2021, OPEN AI LAB
 * Author:
 */

#ifndef __UNARY_KERNEL_REF_H__
#define __UNARY_KERNEL_REF_H__


#include "graph/tensor.h"
#include "graph/node.h"
#include "graph/graph.h"

#include "unary_param.h"

int ref_unary_fp32(struct tensor* input_tensor, struct tensor* output_tensor, struct unary_param* param);

int ref_unary_uint8(struct tensor* input_tensor, struct tensor* output_tensor, struct unary_param* param);

#endif
