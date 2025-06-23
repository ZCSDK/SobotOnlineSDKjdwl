//
//  SobotAuthorController.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/5.
//  Copyright © 2020 sobot. All rights reserved.
//

#import "SobotOnlineBaseController.h"

NS_ASSUME_NONNULL_BEGIN

@interface SobotAuthorController : SobotOnlineBaseController

@property(nonatomic,strong) NSString *account;

// 0,未指定，1在线，2忙碌
@property(nonatomic,assign) int loginStatus;


@property(nonatomic,strong) void(^onResultBlock)(NSString *message);

@end

NS_ASSUME_NONNULL_END
