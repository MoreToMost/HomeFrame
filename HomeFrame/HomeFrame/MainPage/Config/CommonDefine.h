//
//  CommonDefine.h
//  HomeFrame
//
//  Created by 徐靖凯 on 2017/8/18.
//  Copyright © 2017年 徐靖凯. All rights reserved.
//

#ifndef CommonDefine_h
#define CommonDefine_h

/*
 * 屏幕宽高
 */
#define ScreenHeight    ([[UIScreen mainScreen] bounds].size.height)
#define ScreenWidth     ([[UIScreen mainScreen] bounds].size.width)

/*
 * View加圆角
 */
#define ViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]

/*
 * View加边框
 */
#define ViewBorder(View, BorderColor, BorderWidth )\
\
View.layer.borderColor = BorderColor.CGColor;\
View.layer.borderWidth = BorderWidth;

/*
 * 打印输出（DeBug模式打印，Release模式不打印）
 */
#ifdef DEBUG
#define XJKLog(fmt, ...) NSLog((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" fmt"\n"), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define XJKLog(...) {}
#endif

/*
 * rgbColor
 */
#define UIColorFromS(s) [UIColor colorWithRed:(((s & 0xFF0000) >> 16))/255.0 green:(((s &0xFF00) >>8))/255.0 blue:((s &0xFF))/255.0 alpha:1.0]
#define UIColorRGB(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define UIColorRGBA(r, g, b, a) [UIColor colorWithRed:(r * 246/255) green:(g)/255.0 blue:(b)/255.0 alpha:a]

/*
 * Font
 */
#define kFont(size) [UIFont systemFontOfSize:size]
#define kBoldFont(size)  [UIFont boldSystemFontOfSize:size]

#endif /* CommonDefine_h */
