// Copyright Contributors to the Open Shading Language project.
// SPDX-License-Identifier: BSD-3-Clause
// https://github.com/AcademySoftwareFoundation/OpenShadingLanguage

#include <vector4.h>

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

#define osl_xxxx(val) \
	vector4(osl_x(val), osl_x(val), osl_x(val), osl_x(val))
#define osl_xxxy(val) \
	vector4(osl_x(val), osl_x(val), osl_x(val), osl_y(val))
#define osl_xxxz(val) \
	vector4(osl_x(val), osl_x(val), osl_x(val), osl_z(val))
#define osl_xxxw(val) \
	vector4(osl_x(val), osl_x(val), osl_x(val), osl_w(val))
#define osl_xxyx(val) \
	vector4(osl_x(val), osl_x(val), osl_y(val), osl_x(val))
#define osl_xxyy(val) \
	vector4(osl_x(val), osl_x(val), osl_y(val), osl_y(val))
#define osl_xxyz(val) \
	vector4(osl_x(val), osl_x(val), osl_y(val), osl_z(val))
#define osl_xxyw(val) \
	vector4(osl_x(val), osl_x(val), osl_y(val), osl_w(val))
#define osl_xxzx(val) \
	vector4(osl_x(val), osl_x(val), osl_z(val), osl_x(val))
#define osl_xxzy(val) \
	vector4(osl_x(val), osl_x(val), osl_z(val), osl_y(val))
#define osl_xxzz(val) \
	vector4(osl_x(val), osl_x(val), osl_z(val), osl_z(val))
#define osl_xxzw(val) \
	vector4(osl_x(val), osl_x(val), osl_z(val), osl_w(val))
#define osl_xxwx(val) \
	vector4(osl_x(val), osl_x(val), osl_w(val), osl_x(val))
#define osl_xxwy(val) \
	vector4(osl_x(val), osl_x(val), osl_w(val), osl_y(val))
#define osl_xxwz(val) \
	vector4(osl_x(val), osl_x(val), osl_w(val), osl_z(val))
#define osl_xxww(val) \
	vector4(osl_x(val), osl_x(val), osl_w(val), osl_w(val))
#define osl_xyxx(val) \
	vector4(osl_x(val), osl_y(val), osl_x(val), osl_x(val))
#define osl_xyxy(val) \
	vector4(osl_x(val), osl_y(val), osl_x(val), osl_y(val))
#define osl_xyxz(val) \
	vector4(osl_x(val), osl_y(val), osl_x(val), osl_z(val))
#define osl_xyxw(val) \
	vector4(osl_x(val), osl_y(val), osl_x(val), osl_w(val))
#define osl_xyyx(val) \
	vector4(osl_x(val), osl_y(val), osl_y(val), osl_x(val))
#define osl_xyyy(val) \
	vector4(osl_x(val), osl_y(val), osl_y(val), osl_y(val))
#define osl_xyyz(val) \
	vector4(osl_x(val), osl_y(val), osl_y(val), osl_z(val))
#define osl_xyyw(val) \
	vector4(osl_x(val), osl_y(val), osl_y(val), osl_w(val))
#define osl_xyzx(val) \
	vector4(osl_x(val), osl_y(val), osl_z(val), osl_x(val))
#define osl_xyzy(val) \
	vector4(osl_x(val), osl_y(val), osl_z(val), osl_y(val))
#define osl_xyzz(val) \
	vector4(osl_x(val), osl_y(val), osl_z(val), osl_z(val))
#define osl_xyzw(val) \
	vector4(osl_x(val), osl_y(val), osl_z(val), osl_w(val))
#define osl_xywx(val) \
	vector4(osl_x(val), osl_y(val), osl_w(val), osl_x(val))
#define osl_xywy(val) \
	vector4(osl_x(val), osl_y(val), osl_w(val), osl_y(val))
#define osl_xywz(val) \
	vector4(osl_x(val), osl_y(val), osl_w(val), osl_z(val))
#define osl_xyww(val) \
	vector4(osl_x(val), osl_y(val), osl_w(val), osl_w(val))
#define osl_xzxx(val) \
	vector4(osl_x(val), osl_z(val), osl_x(val), osl_x(val))
#define osl_xzxy(val) \
	vector4(osl_x(val), osl_z(val), osl_x(val), osl_y(val))
#define osl_xzxz(val) \
	vector4(osl_x(val), osl_z(val), osl_x(val), osl_z(val))
#define osl_xzxw(val) \
	vector4(osl_x(val), osl_z(val), osl_x(val), osl_w(val))
#define osl_xzyx(val) \
	vector4(osl_x(val), osl_z(val), osl_y(val), osl_x(val))
#define osl_xzyy(val) \
	vector4(osl_x(val), osl_z(val), osl_y(val), osl_y(val))
#define osl_xzyz(val) \
	vector4(osl_x(val), osl_z(val), osl_y(val), osl_z(val))
#define osl_xzyw(val) \
	vector4(osl_x(val), osl_z(val), osl_y(val), osl_w(val))
#define osl_xzzx(val) \
	vector4(osl_x(val), osl_z(val), osl_z(val), osl_x(val))
#define osl_xzzy(val) \
	vector4(osl_x(val), osl_z(val), osl_z(val), osl_y(val))
#define osl_xzzz(val) \
	vector4(osl_x(val), osl_z(val), osl_z(val), osl_z(val))
#define osl_xzzw(val) \
	vector4(osl_x(val), osl_z(val), osl_z(val), osl_w(val))
#define osl_xzwx(val) \
	vector4(osl_x(val), osl_z(val), osl_w(val), osl_x(val))
#define osl_xzwy(val) \
	vector4(osl_x(val), osl_z(val), osl_w(val), osl_y(val))
#define osl_xzwz(val) \
	vector4(osl_x(val), osl_z(val), osl_w(val), osl_z(val))
#define osl_xzww(val) \
	vector4(osl_x(val), osl_z(val), osl_w(val), osl_w(val))
#define osl_xwxx(val) \
	vector4(osl_x(val), osl_w(val), osl_x(val), osl_x(val))
#define osl_xwxy(val) \
	vector4(osl_x(val), osl_w(val), osl_x(val), osl_y(val))
#define osl_xwxz(val) \
	vector4(osl_x(val), osl_w(val), osl_x(val), osl_z(val))
#define osl_xwxw(val) \
	vector4(osl_x(val), osl_w(val), osl_x(val), osl_w(val))
#define osl_xwyx(val) \
	vector4(osl_x(val), osl_w(val), osl_y(val), osl_x(val))
#define osl_xwyy(val) \
	vector4(osl_x(val), osl_w(val), osl_y(val), osl_y(val))
#define osl_xwyz(val) \
	vector4(osl_x(val), osl_w(val), osl_y(val), osl_z(val))
#define osl_xwyw(val) \
	vector4(osl_x(val), osl_w(val), osl_y(val), osl_w(val))
#define osl_xwzx(val) \
	vector4(osl_x(val), osl_w(val), osl_z(val), osl_x(val))
#define osl_xwzy(val) \
	vector4(osl_x(val), osl_w(val), osl_z(val), osl_y(val))
#define osl_xwzz(val) \
	vector4(osl_x(val), osl_w(val), osl_z(val), osl_z(val))
#define osl_xwzw(val) \
	vector4(osl_x(val), osl_w(val), osl_z(val), osl_w(val))
#define osl_xwwx(val) \
	vector4(osl_x(val), osl_w(val), osl_w(val), osl_x(val))
#define osl_xwwy(val) \
	vector4(osl_x(val), osl_w(val), osl_w(val), osl_y(val))
#define osl_xwwz(val) \
	vector4(osl_x(val), osl_w(val), osl_w(val), osl_z(val))
#define osl_xwww(val) \
	vector4(osl_x(val), osl_w(val), osl_w(val), osl_w(val))
#define osl_yxxx(val) \
	vector4(osl_y(val), osl_x(val), osl_x(val), osl_x(val))
#define osl_yxxy(val) \
	vector4(osl_y(val), osl_x(val), osl_x(val), osl_y(val))
#define osl_yxxz(val) \
	vector4(osl_y(val), osl_x(val), osl_x(val), osl_z(val))
#define osl_yxxw(val) \
	vector4(osl_y(val), osl_x(val), osl_x(val), osl_w(val))
#define osl_yxyx(val) \
	vector4(osl_y(val), osl_x(val), osl_y(val), osl_x(val))
#define osl_yxyy(val) \
	vector4(osl_y(val), osl_x(val), osl_y(val), osl_y(val))
#define osl_yxyz(val) \
	vector4(osl_y(val), osl_x(val), osl_y(val), osl_z(val))
#define osl_yxyw(val) \
	vector4(osl_y(val), osl_x(val), osl_y(val), osl_w(val))
#define osl_yxzx(val) \
	vector4(osl_y(val), osl_x(val), osl_z(val), osl_x(val))
#define osl_yxzy(val) \
	vector4(osl_y(val), osl_x(val), osl_z(val), osl_y(val))
#define osl_yxzz(val) \
	vector4(osl_y(val), osl_x(val), osl_z(val), osl_z(val))
#define osl_yxzw(val) \
	vector4(osl_y(val), osl_x(val), osl_z(val), osl_w(val))
#define osl_yxwx(val) \
	vector4(osl_y(val), osl_x(val), osl_w(val), osl_x(val))
#define osl_yxwy(val) \
	vector4(osl_y(val), osl_x(val), osl_w(val), osl_y(val))
#define osl_yxwz(val) \
	vector4(osl_y(val), osl_x(val), osl_w(val), osl_z(val))
#define osl_yxww(val) \
	vector4(osl_y(val), osl_x(val), osl_w(val), osl_w(val))
#define osl_yyxx(val) \
	vector4(osl_y(val), osl_y(val), osl_x(val), osl_x(val))
#define osl_yyxy(val) \
	vector4(osl_y(val), osl_y(val), osl_x(val), osl_y(val))
#define osl_yyxz(val) \
	vector4(osl_y(val), osl_y(val), osl_x(val), osl_z(val))
#define osl_yyxw(val) \
	vector4(osl_y(val), osl_y(val), osl_x(val), osl_w(val))
#define osl_yyyx(val) \
	vector4(osl_y(val), osl_y(val), osl_y(val), osl_x(val))
#define osl_yyyy(val) \
	vector4(osl_y(val), osl_y(val), osl_y(val), osl_y(val))
#define osl_yyyz(val) \
	vector4(osl_y(val), osl_y(val), osl_y(val), osl_z(val))
#define osl_yyyw(val) \
	vector4(osl_y(val), osl_y(val), osl_y(val), osl_w(val))
#define osl_yyzx(val) \
	vector4(osl_y(val), osl_y(val), osl_z(val), osl_x(val))
#define osl_yyzy(val) \
	vector4(osl_y(val), osl_y(val), osl_z(val), osl_y(val))
#define osl_yyzz(val) \
	vector4(osl_y(val), osl_y(val), osl_z(val), osl_z(val))
#define osl_yyzw(val) \
	vector4(osl_y(val), osl_y(val), osl_z(val), osl_w(val))
#define osl_yywx(val) \
	vector4(osl_y(val), osl_y(val), osl_w(val), osl_x(val))
#define osl_yywy(val) \
	vector4(osl_y(val), osl_y(val), osl_w(val), osl_y(val))
#define osl_yywz(val) \
	vector4(osl_y(val), osl_y(val), osl_w(val), osl_z(val))
#define osl_yyww(val) \
	vector4(osl_y(val), osl_y(val), osl_w(val), osl_w(val))
#define osl_yzxx(val) \
	vector4(osl_y(val), osl_z(val), osl_x(val), osl_x(val))
#define osl_yzxy(val) \
	vector4(osl_y(val), osl_z(val), osl_x(val), osl_y(val))
#define osl_yzxz(val) \
	vector4(osl_y(val), osl_z(val), osl_x(val), osl_z(val))
#define osl_yzxw(val) \
	vector4(osl_y(val), osl_z(val), osl_x(val), osl_w(val))
#define osl_yzyx(val) \
	vector4(osl_y(val), osl_z(val), osl_y(val), osl_x(val))
#define osl_yzyy(val) \
	vector4(osl_y(val), osl_z(val), osl_y(val), osl_y(val))
#define osl_yzyz(val) \
	vector4(osl_y(val), osl_z(val), osl_y(val), osl_z(val))
#define osl_yzyw(val) \
	vector4(osl_y(val), osl_z(val), osl_y(val), osl_w(val))
#define osl_yzzx(val) \
	vector4(osl_y(val), osl_z(val), osl_z(val), osl_x(val))
#define osl_yzzy(val) \
	vector4(osl_y(val), osl_z(val), osl_z(val), osl_y(val))
#define osl_yzzz(val) \
	vector4(osl_y(val), osl_z(val), osl_z(val), osl_z(val))
#define osl_yzzw(val) \
	vector4(osl_y(val), osl_z(val), osl_z(val), osl_w(val))
#define osl_yzwx(val) \
	vector4(osl_y(val), osl_z(val), osl_w(val), osl_x(val))
#define osl_yzwy(val) \
	vector4(osl_y(val), osl_z(val), osl_w(val), osl_y(val))
#define osl_yzwz(val) \
	vector4(osl_y(val), osl_z(val), osl_w(val), osl_z(val))
#define osl_yzww(val) \
	vector4(osl_y(val), osl_z(val), osl_w(val), osl_w(val))
#define osl_ywxx(val) \
	vector4(osl_y(val), osl_w(val), osl_x(val), osl_x(val))
#define osl_ywxy(val) \
	vector4(osl_y(val), osl_w(val), osl_x(val), osl_y(val))
#define osl_ywxz(val) \
	vector4(osl_y(val), osl_w(val), osl_x(val), osl_z(val))
#define osl_ywxw(val) \
	vector4(osl_y(val), osl_w(val), osl_x(val), osl_w(val))
#define osl_ywyx(val) \
	vector4(osl_y(val), osl_w(val), osl_y(val), osl_x(val))
#define osl_ywyy(val) \
	vector4(osl_y(val), osl_w(val), osl_y(val), osl_y(val))
#define osl_ywyz(val) \
	vector4(osl_y(val), osl_w(val), osl_y(val), osl_z(val))
#define osl_ywyw(val) \
	vector4(osl_y(val), osl_w(val), osl_y(val), osl_w(val))
#define osl_ywzx(val) \
	vector4(osl_y(val), osl_w(val), osl_z(val), osl_x(val))
#define osl_ywzy(val) \
	vector4(osl_y(val), osl_w(val), osl_z(val), osl_y(val))
#define osl_ywzz(val) \
	vector4(osl_y(val), osl_w(val), osl_z(val), osl_z(val))
#define osl_ywzw(val) \
	vector4(osl_y(val), osl_w(val), osl_z(val), osl_w(val))
#define osl_ywwx(val) \
	vector4(osl_y(val), osl_w(val), osl_w(val), osl_x(val))
#define osl_ywwy(val) \
	vector4(osl_y(val), osl_w(val), osl_w(val), osl_y(val))
#define osl_ywwz(val) \
	vector4(osl_y(val), osl_w(val), osl_w(val), osl_z(val))
#define osl_ywww(val) \
	vector4(osl_y(val), osl_w(val), osl_w(val), osl_w(val))
#define osl_zxxx(val) \
	vector4(osl_z(val), osl_x(val), osl_x(val), osl_x(val))
#define osl_zxxy(val) \
	vector4(osl_z(val), osl_x(val), osl_x(val), osl_y(val))
#define osl_zxxz(val) \
	vector4(osl_z(val), osl_x(val), osl_x(val), osl_z(val))
#define osl_zxxw(val) \
	vector4(osl_z(val), osl_x(val), osl_x(val), osl_w(val))
#define osl_zxyx(val) \
	vector4(osl_z(val), osl_x(val), osl_y(val), osl_x(val))
#define osl_zxyy(val) \
	vector4(osl_z(val), osl_x(val), osl_y(val), osl_y(val))
#define osl_zxyz(val) \
	vector4(osl_z(val), osl_x(val), osl_y(val), osl_z(val))
#define osl_zxyw(val) \
	vector4(osl_z(val), osl_x(val), osl_y(val), osl_w(val))
#define osl_zxzx(val) \
	vector4(osl_z(val), osl_x(val), osl_z(val), osl_x(val))
#define osl_zxzy(val) \
	vector4(osl_z(val), osl_x(val), osl_z(val), osl_y(val))
#define osl_zxzz(val) \
	vector4(osl_z(val), osl_x(val), osl_z(val), osl_z(val))
#define osl_zxzw(val) \
	vector4(osl_z(val), osl_x(val), osl_z(val), osl_w(val))
#define osl_zxwx(val) \
	vector4(osl_z(val), osl_x(val), osl_w(val), osl_x(val))
#define osl_zxwy(val) \
	vector4(osl_z(val), osl_x(val), osl_w(val), osl_y(val))
#define osl_zxwz(val) \
	vector4(osl_z(val), osl_x(val), osl_w(val), osl_z(val))
#define osl_zxww(val) \
	vector4(osl_z(val), osl_x(val), osl_w(val), osl_w(val))
#define osl_zyxx(val) \
	vector4(osl_z(val), osl_y(val), osl_x(val), osl_x(val))
#define osl_zyxy(val) \
	vector4(osl_z(val), osl_y(val), osl_x(val), osl_y(val))
#define osl_zyxz(val) \
	vector4(osl_z(val), osl_y(val), osl_x(val), osl_z(val))
#define osl_zyxw(val) \
	vector4(osl_z(val), osl_y(val), osl_x(val), osl_w(val))
#define osl_zyyx(val) \
	vector4(osl_z(val), osl_y(val), osl_y(val), osl_x(val))
#define osl_zyyy(val) \
	vector4(osl_z(val), osl_y(val), osl_y(val), osl_y(val))
#define osl_zyyz(val) \
	vector4(osl_z(val), osl_y(val), osl_y(val), osl_z(val))
#define osl_zyyw(val) \
	vector4(osl_z(val), osl_y(val), osl_y(val), osl_w(val))
#define osl_zyzx(val) \
	vector4(osl_z(val), osl_y(val), osl_z(val), osl_x(val))
#define osl_zyzy(val) \
	vector4(osl_z(val), osl_y(val), osl_z(val), osl_y(val))
#define osl_zyzz(val) \
	vector4(osl_z(val), osl_y(val), osl_z(val), osl_z(val))
#define osl_zyzw(val) \
	vector4(osl_z(val), osl_y(val), osl_z(val), osl_w(val))
#define osl_zywx(val) \
	vector4(osl_z(val), osl_y(val), osl_w(val), osl_x(val))
#define osl_zywy(val) \
	vector4(osl_z(val), osl_y(val), osl_w(val), osl_y(val))
#define osl_zywz(val) \
	vector4(osl_z(val), osl_y(val), osl_w(val), osl_z(val))
#define osl_zyww(val) \
	vector4(osl_z(val), osl_y(val), osl_w(val), osl_w(val))
#define osl_zzxx(val) \
	vector4(osl_z(val), osl_z(val), osl_x(val), osl_x(val))
#define osl_zzxy(val) \
	vector4(osl_z(val), osl_z(val), osl_x(val), osl_y(val))
#define osl_zzxz(val) \
	vector4(osl_z(val), osl_z(val), osl_x(val), osl_z(val))
#define osl_zzxw(val) \
	vector4(osl_z(val), osl_z(val), osl_x(val), osl_w(val))
#define osl_zzyx(val) \
	vector4(osl_z(val), osl_z(val), osl_y(val), osl_x(val))
#define osl_zzyy(val) \
	vector4(osl_z(val), osl_z(val), osl_y(val), osl_y(val))
#define osl_zzyz(val) \
	vector4(osl_z(val), osl_z(val), osl_y(val), osl_z(val))
#define osl_zzyw(val) \
	vector4(osl_z(val), osl_z(val), osl_y(val), osl_w(val))
#define osl_zzzx(val) \
	vector4(osl_z(val), osl_z(val), osl_z(val), osl_x(val))
#define osl_zzzy(val) \
	vector4(osl_z(val), osl_z(val), osl_z(val), osl_y(val))
#define osl_zzzz(val) \
	vector4(osl_z(val), osl_z(val), osl_z(val), osl_z(val))
#define osl_zzzw(val) \
	vector4(osl_z(val), osl_z(val), osl_z(val), osl_w(val))
#define osl_zzwx(val) \
	vector4(osl_z(val), osl_z(val), osl_w(val), osl_x(val))
#define osl_zzwy(val) \
	vector4(osl_z(val), osl_z(val), osl_w(val), osl_y(val))
#define osl_zzwz(val) \
	vector4(osl_z(val), osl_z(val), osl_w(val), osl_z(val))
#define osl_zzww(val) \
	vector4(osl_z(val), osl_z(val), osl_w(val), osl_w(val))
#define osl_zwxx(val) \
	vector4(osl_z(val), osl_w(val), osl_x(val), osl_x(val))
#define osl_zwxy(val) \
	vector4(osl_z(val), osl_w(val), osl_x(val), osl_y(val))
#define osl_zwxz(val) \
	vector4(osl_z(val), osl_w(val), osl_x(val), osl_z(val))
#define osl_zwxw(val) \
	vector4(osl_z(val), osl_w(val), osl_x(val), osl_w(val))
#define osl_zwyx(val) \
	vector4(osl_z(val), osl_w(val), osl_y(val), osl_x(val))
#define osl_zwyy(val) \
	vector4(osl_z(val), osl_w(val), osl_y(val), osl_y(val))
#define osl_zwyz(val) \
	vector4(osl_z(val), osl_w(val), osl_y(val), osl_z(val))
#define osl_zwyw(val) \
	vector4(osl_z(val), osl_w(val), osl_y(val), osl_w(val))
#define osl_zwzx(val) \
	vector4(osl_z(val), osl_w(val), osl_z(val), osl_x(val))
#define osl_zwzy(val) \
	vector4(osl_z(val), osl_w(val), osl_z(val), osl_y(val))
#define osl_zwzz(val) \
	vector4(osl_z(val), osl_w(val), osl_z(val), osl_z(val))
#define osl_zwzw(val) \
	vector4(osl_z(val), osl_w(val), osl_z(val), osl_w(val))
#define osl_zwwx(val) \
	vector4(osl_z(val), osl_w(val), osl_w(val), osl_x(val))
#define osl_zwwy(val) \
	vector4(osl_z(val), osl_w(val), osl_w(val), osl_y(val))
#define osl_zwwz(val) \
	vector4(osl_z(val), osl_w(val), osl_w(val), osl_z(val))
#define osl_zwww(val) \
	vector4(osl_z(val), osl_w(val), osl_w(val), osl_w(val))
#define osl_wxxx(val) \
	vector4(osl_w(val), osl_x(val), osl_x(val), osl_x(val))
#define osl_wxxy(val) \
	vector4(osl_w(val), osl_x(val), osl_x(val), osl_y(val))
#define osl_wxxz(val) \
	vector4(osl_w(val), osl_x(val), osl_x(val), osl_z(val))
#define osl_wxxw(val) \
	vector4(osl_w(val), osl_x(val), osl_x(val), osl_w(val))
#define osl_wxyx(val) \
	vector4(osl_w(val), osl_x(val), osl_y(val), osl_x(val))
#define osl_wxyy(val) \
	vector4(osl_w(val), osl_x(val), osl_y(val), osl_y(val))
#define osl_wxyz(val) \
	vector4(osl_w(val), osl_x(val), osl_y(val), osl_z(val))
#define osl_wxyw(val) \
	vector4(osl_w(val), osl_x(val), osl_y(val), osl_w(val))
#define osl_wxzx(val) \
	vector4(osl_w(val), osl_x(val), osl_z(val), osl_x(val))
#define osl_wxzy(val) \
	vector4(osl_w(val), osl_x(val), osl_z(val), osl_y(val))
#define osl_wxzz(val) \
	vector4(osl_w(val), osl_x(val), osl_z(val), osl_z(val))
#define osl_wxzw(val) \
	vector4(osl_w(val), osl_x(val), osl_z(val), osl_w(val))
#define osl_wxwx(val) \
	vector4(osl_w(val), osl_x(val), osl_w(val), osl_x(val))
#define osl_wxwy(val) \
	vector4(osl_w(val), osl_x(val), osl_w(val), osl_y(val))
#define osl_wxwz(val) \
	vector4(osl_w(val), osl_x(val), osl_w(val), osl_z(val))
#define osl_wxww(val) \
	vector4(osl_w(val), osl_x(val), osl_w(val), osl_w(val))
#define osl_wyxx(val) \
	vector4(osl_w(val), osl_y(val), osl_x(val), osl_x(val))
#define osl_wyxy(val) \
	vector4(osl_w(val), osl_y(val), osl_x(val), osl_y(val))
#define osl_wyxz(val) \
	vector4(osl_w(val), osl_y(val), osl_x(val), osl_z(val))
#define osl_wyxw(val) \
	vector4(osl_w(val), osl_y(val), osl_x(val), osl_w(val))
#define osl_wyyx(val) \
	vector4(osl_w(val), osl_y(val), osl_y(val), osl_x(val))
#define osl_wyyy(val) \
	vector4(osl_w(val), osl_y(val), osl_y(val), osl_y(val))
#define osl_wyyz(val) \
	vector4(osl_w(val), osl_y(val), osl_y(val), osl_z(val))
#define osl_wyyw(val) \
	vector4(osl_w(val), osl_y(val), osl_y(val), osl_w(val))
#define osl_wyzx(val) \
	vector4(osl_w(val), osl_y(val), osl_z(val), osl_x(val))
#define osl_wyzy(val) \
	vector4(osl_w(val), osl_y(val), osl_z(val), osl_y(val))
#define osl_wyzz(val) \
	vector4(osl_w(val), osl_y(val), osl_z(val), osl_z(val))
#define osl_wyzw(val) \
	vector4(osl_w(val), osl_y(val), osl_z(val), osl_w(val))
#define osl_wywx(val) \
	vector4(osl_w(val), osl_y(val), osl_w(val), osl_x(val))
#define osl_wywy(val) \
	vector4(osl_w(val), osl_y(val), osl_w(val), osl_y(val))
#define osl_wywz(val) \
	vector4(osl_w(val), osl_y(val), osl_w(val), osl_z(val))
#define osl_wyww(val) \
	vector4(osl_w(val), osl_y(val), osl_w(val), osl_w(val))
#define osl_wzxx(val) \
	vector4(osl_w(val), osl_z(val), osl_x(val), osl_x(val))
#define osl_wzxy(val) \
	vector4(osl_w(val), osl_z(val), osl_x(val), osl_y(val))
#define osl_wzxz(val) \
	vector4(osl_w(val), osl_z(val), osl_x(val), osl_z(val))
#define osl_wzxw(val) \
	vector4(osl_w(val), osl_z(val), osl_x(val), osl_w(val))
#define osl_wzyx(val) \
	vector4(osl_w(val), osl_z(val), osl_y(val), osl_x(val))
#define osl_wzyy(val) \
	vector4(osl_w(val), osl_z(val), osl_y(val), osl_y(val))
#define osl_wzyz(val) \
	vector4(osl_w(val), osl_z(val), osl_y(val), osl_z(val))
#define osl_wzyw(val) \
	vector4(osl_w(val), osl_z(val), osl_y(val), osl_w(val))
#define osl_wzzx(val) \
	vector4(osl_w(val), osl_z(val), osl_z(val), osl_x(val))
#define osl_wzzy(val) \
	vector4(osl_w(val), osl_z(val), osl_z(val), osl_y(val))
#define osl_wzzz(val) \
	vector4(osl_w(val), osl_z(val), osl_z(val), osl_z(val))
#define osl_wzzw(val) \
	vector4(osl_w(val), osl_z(val), osl_z(val), osl_w(val))
#define osl_wzwx(val) \
	vector4(osl_w(val), osl_z(val), osl_w(val), osl_x(val))
#define osl_wzwy(val) \
	vector4(osl_w(val), osl_z(val), osl_w(val), osl_y(val))
#define osl_wzwz(val) \
	vector4(osl_w(val), osl_z(val), osl_w(val), osl_z(val))
#define osl_wzww(val) \
	vector4(osl_w(val), osl_z(val), osl_w(val), osl_w(val))
#define osl_wwxx(val) \
	vector4(osl_w(val), osl_w(val), osl_x(val), osl_x(val))
#define osl_wwxy(val) \
	vector4(osl_w(val), osl_w(val), osl_x(val), osl_y(val))
#define osl_wwxz(val) \
	vector4(osl_w(val), osl_w(val), osl_x(val), osl_z(val))
#define osl_wwxw(val) \
	vector4(osl_w(val), osl_w(val), osl_x(val), osl_w(val))
#define osl_wwyx(val) \
	vector4(osl_w(val), osl_w(val), osl_y(val), osl_x(val))
#define osl_wwyy(val) \
	vector4(osl_w(val), osl_w(val), osl_y(val), osl_y(val))
#define osl_wwyz(val) \
	vector4(osl_w(val), osl_w(val), osl_y(val), osl_z(val))
#define osl_wwyw(val) \
	vector4(osl_w(val), osl_w(val), osl_y(val), osl_w(val))
#define osl_wwzx(val) \
	vector4(osl_w(val), osl_w(val), osl_z(val), osl_x(val))
#define osl_wwzy(val) \
	vector4(osl_w(val), osl_w(val), osl_z(val), osl_y(val))
#define osl_wwzz(val) \
	vector4(osl_w(val), osl_w(val), osl_z(val), osl_z(val))
#define osl_wwzw(val) \
	vector4(osl_w(val), osl_w(val), osl_z(val), osl_w(val))
#define osl_wwwx(val) \
	vector4(osl_w(val), osl_w(val), osl_w(val), osl_x(val))
#define osl_wwwy(val) \
	vector4(osl_w(val), osl_w(val), osl_w(val), osl_y(val))
#define osl_wwwz(val) \
	vector4(osl_w(val), osl_w(val), osl_w(val), osl_z(val))
#define osl_wwww(val) \
	vector4(osl_w(val), osl_w(val), osl_w(val), osl_w(val))