// Copyright Contributors to the Open Shading Language project.
// SPDX-License-Identifier: BSD-3-Clause
// https://github.com/AcademySoftwareFoundation/OpenShadingLanguage

#include <vector2.h>

#ifndef osl_x
#define osl_x(val) val.x
#endif
#ifndef osl_y
#define osl_y(val) val.y
#endif
#ifndef osl_z
#define osl_z(val) val.z
#endif
#ifndef osl_w
#define osl_w(val) val.w
#endif

#define osl_xx(val) \
	vector2(osl_x(val), osl_x(val))
#define osl_xy(val) \
	vector2(osl_x(val), osl_y(val))
#define osl_xz(val) \
	vector2(osl_x(val), osl_z(val))
#define osl_xw(val) \
	vector2(osl_x(val), osl_w(val))
#define osl_yx(val) \
	vector2(osl_y(val), osl_x(val))
#define osl_yy(val) \
	vector2(osl_y(val), osl_y(val))
#define osl_yz(val) \
	vector2(osl_y(val), osl_z(val))
#define osl_yw(val) \
	vector2(osl_y(val), osl_w(val))
#define osl_zx(val) \
	vector2(osl_z(val), osl_x(val))
#define osl_zy(val) \
	vector2(osl_z(val), osl_y(val))
#define osl_zz(val) \
	vector2(osl_z(val), osl_z(val))
#define osl_zw(val) \
	vector2(osl_z(val), osl_w(val))
#define osl_wx(val) \
	vector2(osl_w(val), osl_x(val))
#define osl_wy(val) \
	vector2(osl_w(val), osl_y(val))
#define osl_wz(val) \
	vector2(osl_w(val), osl_z(val))
#define osl_ww(val) \
	vector2(osl_w(val), osl_w(val))