//
//  APIDefine.h
//  HomeFrame
//
//  Created by 徐靖凯 on 2017/8/18.
//  Copyright © 2017年 徐靖凯. All rights reserved.
//

#ifndef APIDefine_h
#define APIDefine_h

#define Content_Json @"application/json"
#define Request_TimeOut 10.0f

typedef NS_ENUM(NSInteger, XJKResponseCode)
{
    XJKResponseCodeSuccess,             // 请求成功，数据返回成功
    XJKResponseCodeFail,                // 请求成功，后端返回错误
    XJKResponseCodeProcess,             // 请求过程中
    XJKResponseCodeNetworkError,        // 请求失败，网络错误
    XJKResponseCodeParameterError,      // 请求所需参数不合法
    XJKResponseCodeTokenFail            // Token失效
};

#endif /* APIDefine_h */
