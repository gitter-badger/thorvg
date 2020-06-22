/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd All Rights Reserved
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *               http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */
#ifndef _TVG_COMMON_H_
#define _TVG_COMMON_H_

#include <iostream>
#include <cassert>
#include <vector>
#include <math.h>
#include <float.h>
#include <string.h>
#include "tizenvg.h"

using namespace std;
using namespace tvg;

#define SCENE_IMPL scene->pImpl.get()
#define SHAPE_IMPL shape->pImpl.get()

#define PAINT_ID_SHAPE 0
#define PAINT_ID_SCENE 1

#define FILL_ID_LINEAR 0
#define FILL_ID_RADIAL 1

#include "tvgBezier.h"
#include "tvgLoader.h"
#include "tvgLoaderMgr.h"
#include "tvgRender.h"
#include "tvgShapePath.h"
#include "tvgShapeImpl.h"
#include "tvgSceneImpl.h"

#endif //_TVG_COMMON_H_
