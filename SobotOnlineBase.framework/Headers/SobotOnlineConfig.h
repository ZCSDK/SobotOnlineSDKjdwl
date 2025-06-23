//
//  SobotOnlineConfig.h
//  SobotOnline
//
//  Created by zhangxy on 2020/9/15.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotOnlineConfig : SobotCacheEntity

// 离开聊天页面是否提醒新消息
@property(nonatomic,assign) BOOL autoNotifaction;


// 是否隐藏主页面返回按钮
@property(nonatomic,assign) BOOL hideMainPageBack;


@end

NS_ASSUME_NONNULL_END
