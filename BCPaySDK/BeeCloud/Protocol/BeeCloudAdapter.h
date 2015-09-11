//
//  BCProtocol.h
//  BeeCloud
//
//  Created by Ewenlong03 on 15/9/9.
//  Copyright (c) 2015年 BeeCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeeCloud.h"



@interface BeeCloudAdapter : NSObject

+ (void)beeCloud:(NSString *)object doSetDelegate:(id<BeeCloudDelegate>)delegate;
+ (BOOL)beeCloudRegisterWeChat:(NSString *)appid;
+ (BOOL)beeCloudIsWXAppInstalled;
+ (void)beeCloudRegisterPayPal:(NSString *)clientID secret:(NSString *)secret sanBox:(BOOL)isSandBox;
+ (BOOL)beeCloud:(NSString *)object handleOpenUrl:(NSURL *)url;
+ (void)beeCloudWXPay:(NSMutableDictionary *)dic;
+ (void)beeCloudAliPay:(NSMutableDictionary *)dic;
+ (void)beeCloudUnionPay:(NSMutableDictionary *)dic;
+ (void)beeCloudPayPal:(NSMutableDictionary *)dic;
+ (void)beeCloudPayPalVerify:(NSMutableDictionary *)dic;

@end