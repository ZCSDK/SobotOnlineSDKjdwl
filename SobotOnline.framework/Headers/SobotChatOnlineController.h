//
//  SobotChatOnlineController.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/12.
//  Copyright © 2020 sobot. All rights reserved.
//

#import "SobotOnlineBaseController.h"
#import <SobotOnlineBase/SobotOnlineBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotChatOnlineController : SobotOnlineBaseController
@property(nonatomic,strong) UIViewController *preController;



/// action 1:删除/离线，2会话总结，3拉黑
@property (nonatomic,strong) void(^onSobotDataChangedListner)(NSInteger action,SobotOnlineUser *model,id object);

-(void)listenerNewMessage:(NSNotification *) info;

@end

NS_ASSUME_NONNULL_END
