//
//  XJKRequest.m
//  HomeFrame
//
//  Created by 徐靖凯 on 2017/8/18.
//  Copyright © 2017年 徐靖凯. All rights reserved.
//

#import <AFNetworking.h>
#import "XJKRequest.h"
#import "APIDefine.h"

@implementation XJKRequest

+ (AFHTTPSessionManager *)defaultSessionManager
{
    AFJSONResponseSerializer * responseSerializer = [AFJSONResponseSerializer serializer];
    AFJSONRequestSerializer * requestSerializer = [AFJSONRequestSerializer serializer];
    
    requestSerializer.timeoutInterval = Request_TimeOut;
    [requestSerializer setValue:Content_Json forHTTPHeaderField:@"Content-Type"];
    [requestSerializer setValue:Content_Json forHTTPHeaderField:@"Accept"];
    
    responseSerializer.acceptableContentTypes = [NSSet setWithObjects:Content_Json, nil];
    
    AFHTTPSessionManager * httpSessionManager = [AFHTTPSessionManager manager];
    httpSessionManager.responseSerializer = responseSerializer;
    httpSessionManager.requestSerializer = requestSerializer;
    
    return httpSessionManager;
}

@end
