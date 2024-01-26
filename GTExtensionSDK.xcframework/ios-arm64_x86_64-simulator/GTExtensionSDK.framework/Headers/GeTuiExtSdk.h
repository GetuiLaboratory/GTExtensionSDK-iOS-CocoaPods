//
//  GeTuiExtSdk.h
//  GtExtensionSdk
//
//  Created by gexin on 16/9/14.
//  Copyright © 2016年 getui. All rights reserved.
//
//  GTExtensionSDK-Version: 3.0.3

#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>


@interface GeTuiExtSdk : NSObject

/**
 *  设置语音播报的类(系统的还是其它第三方的)
 */
+ (void)setVoicePlayClass:(id)aClass __attribute((deprecated("该接口已经废弃")));

/**
 *  统计APNs到达情况和多媒体推送支持, 建议使用该接口
 */
+ (void)handelNotificationServiceRequest:(UNNotificationRequest *)request withAttachmentsComplete:(void (^)(NSArray *attachments, NSArray *errors))completeBlock;


/**
 *  设置 App Groups Id (如有使用 iOS Extension SDK，请设置该值)
 */
+ (void)setApplicationGroupIdentifier:(NSString*)identifier;

/**
 * sdk销毁，资源释放
 */
+ (void)destory;
@end
