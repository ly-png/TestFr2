//
//  DispatchTools.h
//  KeyboardSearch
//
//  Created by mac02 on 2021/10/14.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface DispatchTools : NSObject
void serialInNPSQueue(dispatch_block_t block);
void concorrentInNPSQueue(dispatch_block_t block);
void serialInSocketQueue(dispatch_block_t block);
void asyncInMainQueue(dispatch_block_t block);
void serialInMainQueue(dispatch_block_t block);
void serialInUpdateQueue(dispatch_block_t block);
void serialInSQLQueue(dispatch_block_t block);
@end

NS_ASSUME_NONNULL_END
