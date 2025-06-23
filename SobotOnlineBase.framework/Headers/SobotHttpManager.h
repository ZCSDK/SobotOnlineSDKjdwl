//
//  SobotHttpManager.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/6.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SobotHttpInterface.h"



NS_ASSUME_NONNULL_BEGIN


/// 网络对外调用类型
@interface SobotHttpManager : NSObject

+(void)get:(NSString *) stringURL
    header:(NSDictionary *) header
     start:(StartBlock) startBlock
    finish:(FinishBlock) finishBlock
  complete:(CompleteBlock) completeBlock
      fail:(FailBlock) failBlock ;

+(void)get:(NSString *)stringURL header:(NSDictionary *) header start:(StartBlock)startBlock finish:(FinishBlock)finishBlock complete:(CompleteBlock)completeBlock fail:(FailBlock)failBlock progress:(ProgressBlock __nullable)progressBlock;


+(void)post:(NSString *) stringURL
      param:(NSDictionary *) dict
     header:(NSDictionary *) header
    timeOut:(CGFloat) timeOut
      start:(StartBlock) startBlock
     finish:(FinishBlock) finishBlock
   complete:(CompleteBlock) completeBlock
       fail:(FailBlock) failBlock;

+(void)post:(NSString *)stringURL
      param:(NSDictionary *)dict
     header:(NSDictionary *) header
      start:(StartBlock)startBlock
     finish:(FinishBlock)finishBlock
   complete:(CompleteBlock)completeBlock
       fail:(FailBlock)failBlock
   progress:(ProgressBlock __nullable)progressBlock;

+(void)post:(NSString *)stringURL
      param:(NSDictionary *)dict
     header:(NSDictionary *) header
    timeOut:(CGFloat) timeOut
      start:(StartBlock)startBlock
     finish:(FinishBlock)finishBlock
   complete:(CompleteBlock)completeBlock
       fail:(FailBlock)failBlock
   progress:(ProgressBlock __nullable)progressBlock;


@end

NS_ASSUME_NONNULL_END
