//
//  algorithm.h
//  Position
//
//  Created by mac on 2019/9/1.
//  Copyright © 2019 WangCi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface algorithm : NSObject

@property (nonatomic,strong) NSDictionary *rssis;

- (NSDictionary *)getPostionFormRssi:(NSDictionary *)rssis finger:(NSArray *)finger;
- (NSMutableArray *)addRssi:(CGFloat)newrssi to:(NSMutableArray *)sliderssi;
- (CGFloat)averageRssiWith:(NSMutableArray *)newsliderssi;
- (CGFloat)sqrtNumber:(CGFloat)number;

@end

NS_ASSUME_NONNULL_END
