//
//  SobotOnlineMessage.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/10.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotOnlineIMMessage : NSObject

+(SobotOnlineIMMessage *) shareSobotOnlineIM;

// 返回同步
@property(nonatomic,strong,nullable) NSMutableArray *onlineUsers;

-(void)startIM:(NSString *) ipPort;
-(void)startMaxLooper;
-(void)startMinLooper;
-(void)checkIMConnect;

-(void)closeOnlineIM;

/// 清理列表数据
-(void)clearIMData;



-(void)notifyUnReadNumber;

@end

NS_ASSUME_NONNULL_END
