//
//  BlePosition.h
//  PositionFramework
//
//  Created by 🙊忘词 on 2020/2/29.
//  Copyright © 2020 忘词. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreLocation/CoreLocation.h>
#import "KalmanFilter.h"
#import "algorithm.h"
NS_ASSUME_NONNULL_BEGIN

@interface BlePosition : NSObject<CLLocationManagerDelegate>

/// 必需调用的初始化方法，不能使用init
/// @param path 指纹库的相对路径
- (instancetype)initWithFinger:(NSString *)path;

/// 开始定位的方法
/// @param callback 定位结果的回调，loc为二维NSArray，loc[0]为x，loc[1]为y
- (void)startWithBlock:(void(^)(NSArray* loc))callback;

/// 停止定位
- (void)stop;
@end

NS_ASSUME_NONNULL_END
