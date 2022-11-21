//  TSQSH
//  LYSelModelLite.h
//  Created by mac02 on 2022/9/11.
//  Copyright © 2022 TSQ. All rights reserved.
//  ══════════════════════════════════════════════════

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    LYSelStateNone,
    LYSelStatePart,
    LYSelStateAll,
} LYSelState;

@interface LYSelModelLite : NSObject
- (instancetype)init NS_UNAVAILABLE;
/// 第一层@[[NSString stringWithFormat:@"%ld", i]]
- (instancetype)initWithPath:(NSArray *)pArr;
/// start from 1
@property (nonatomic, readonly) NSInteger k_level;
/// 必须重写：子类必须给k_disArr提供返回值
@property (nonatomic, readonly) NSArray *k_disArr;


- (LYSelState)k_k_selState;
- (BOOL)k_k_selStateChange:(LYSelState)k_k_selState;

- (void)k_k_changeSubLevel:(LYSelModelLite*)mo selState:(LYSelState)selState;
- (void)k_k_changeUpperLevelStateInSource:(NSArray<LYSelModelLite*>*)sources;

@end


NS_ASSUME_NONNULL_END
