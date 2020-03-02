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

- (instancetype)initWithFinger:(NSString *)path;

- (void)startWithBlock:(void(^)(NSArray* loc))callback;

- (void)stop;
@end

NS_ASSUME_NONNULL_END
