//
//  SobotOnlineCommon.h
//  SobotOnline
//
//  Created by zhangxy on 2020/9/10.
//  Copyright © 2020 sobot. All rights reserved.
//

#ifndef SobotOnlineCommon_h
#define SobotOnlineCommon_h

// 记住登录状态
#define SobotCacheRemenberLoginStatus @"SobotRemenberLoginStatus"


/**
 *  成功转发用户
 *
 *  @return
 */
#define SobotNotification_TransferUser @"SobotTransferUser"



/**
 *  加入黑名单
 *
 *  @return
 */
#define SobotNotification_BlackUser @"SobotBlockUser"


/**
 *  取消黑名单
 *
 *  @return
 */
#define SobotNotification_UnBlackUser @"SobotUnBlockUser"


/**
 *  成功标记用户
 *
 *  @return
 */
#define SobotNotification_MarkUser @"SobotMarkUser"

/**
 *  取消标记用户
 *
 *  @return
 */
#define SobotNotification_UnMarkUser @"SobotUnMarkUser"


/**
 *  修改客户信息
 *
 *  @return
 */
#define SobotNotification_ChangeCustomerInfo @"SobotChangeCustomerInfo"


/**
 *  取消标记用户
 *
 *  @return
 */
#define SobotNotification_AdminOutSuccess @"SobotAdminOutSuccess"


/**
 *
 *  消息回调
 *
 */
@protocol SobotReceivedMessageDelegate <NSObject>

//未读消息数获取
-(void)onReceivedMessage:(id) message unRead:(int) nleft obj:(id) object;

@end

/**
 *  未读消息数，block方式获取
 *
 *  @param message 当前消息
 *  @param nleft   未读消息数
 */
typedef void(^SobotReceivedMessageBlock)(id message,int nleft,NSDictionary *object);


// 链接点击
typedef BOOL (^SobotLinkClickBlock)(id object,NSString *linkUrl);;

// 页面事件监听
typedef void (^SobotPageLoadBlock)(id object,int type);



#endif /* SobotOnlineCommon_h */
