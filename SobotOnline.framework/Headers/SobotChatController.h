//
//  SobotChatController.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/5.
//  Copyright © 2020 sobot. All rights reserved.
//

#import "SobotOnlineBaseController.h"

#import <SobotOnlineBase/SobotOnlineBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotChatController : SobotOnlineBaseController

@property(nonatomic,strong) SobotOnlineUser *user;

@property(nonatomic,strong) void(^onLastMessageBlock)(NSString *message ,SobotOnlineUser *userModel, NSString *ts);

@end

NS_ASSUME_NONNULL_END
