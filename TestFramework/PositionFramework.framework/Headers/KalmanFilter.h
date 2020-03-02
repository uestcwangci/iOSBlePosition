//
//  KalmanFilter.h
//  Position
//
//  Created by mac on 2019/9/6.
//  Copyright © 2019 WangCi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KalmanFilter : NSObject

/*-----------------------------------------------*\
 |  Kalman Filter equations                        |
 |                                                 |
 |  state equation                                 |
 |  x(k) = A·x(k-1) + B·u(k) + w(k-1)              |
 |                                                 |
 |  observations equation                          |
 |  z(k) = H·x(k) + y(k)                           |
 |                                                 |
 |  prediction equations                           |
 |  x(k|k-1) = A·x(k-1|k-1) + B·u(k)               |
 |  P(k|k-1) = A·P(k-1|k-1)·A^T + Q                |
 |                                                 |
 |  correction equations                           |
 |  K(k) = P(k|k-1)·H^T·(H·P(k|k-1)·H^T + R)^(-1)  |
 |  x(k|k) = x(k|k-1) + K(k)·(z(k) - H·x(k|k-1))   |
 |  P(k|k) = (I - K(k)·H)·P(k|k-1)                 |
 \*-----------------------------------------------*/

@property (assign, nonatomic) UInt64 timestamp;
@property (assign, nonatomic) CGFloat Q;              // Process noise covariance
@property (assign, nonatomic) CGFloat R;              // Observation noise covariance
@property (assign, nonatomic) CGFloat K;              // Kalman gain
@property (assign, nonatomic) CGFloat X;              // State
@property (assign, nonatomic) CGFloat P;              // Covariance

- (KalmanFilter *)initWithQ:(CGFloat)q R:(CGFloat)r X0:(CGFloat)x0 P0:(CGFloat)p0;
- (CGFloat)filterWithObservation:(CGFloat)observation;

@end

NS_ASSUME_NONNULL_END
