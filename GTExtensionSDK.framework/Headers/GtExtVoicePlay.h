//
//  GtExtVoicePlay.h
//  GTExtensionSDK
//
//  Created by 赵伟 on 2018/7/18.
//  Copyright © 2018年 getui. All rights reserved.
//
//  语音播报模块，可以继承重写模块，使用其他语音播报
//

#import <Foundation/Foundation.h>

@interface GtExtVoicePlay : NSObject

- (GtExtVoicePlay *)initPlayVoiceMsg:(NSString *)msg onComplete:(void (^)(void))completeBlock;
- (void)destroy; // 注销自身,该方法和Init相对

// 继承子类使用方法
- (void)finishPlayVoice;

@end
