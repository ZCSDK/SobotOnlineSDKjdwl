//
//  SobotOnlineCache.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/19.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SobotOnlineBase/SobotOnlineCommon.h>
#import <SobotOnlineBase/SobotOnlineConfig.h>
#import <SobotOnlineBase/SobotAuthConfigEntity.h>
#import <SobotOnlineBase/SobotOnlineUser.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotOnlineCache : NSObject

+(SobotOnlineCache *) shareSobotOnlineCache;

@property(nonatomic,strong) NSString *apiHost;
@property(nonatomic,strong) NSString *appid;
@property (nonatomic,strong)NSString *appkey;
@property (nonatomic,strong)NSString *account;

@property (nonatomic,strong)SobotOnlineConfig *onlineConfig;


-(void) cleanCache;
-(void)outLoginStatus;
-(void)outLoginStatusWithBack:(BOOL) goBack;

// 是否初始化
-(BOOL) isInstall;
-(NSString *)getExpiresToken;

@property(nonatomic,copy) id<SobotReceivedMessageDelegate> messageDelegate;
@property(nonatomic,copy) SobotReceivedMessageBlock messageBlock;

// 链接点击
@property(nonatomic,copy) SobotLinkClickBlock linkClickBlock;

// 页面事件监听
@property(nonatomic,copy) SobotPageLoadBlock pageLoadBlock;

// 查询登录信息
-(SobotLoginEntity *) getLoginUser;
-(BOOL) isLogin;


// 权限配置信息
-(SobotAuthConfigEntity *)getConfig;
-(void)setConfig:(SobotAuthConfigEntity *) config;


-(NSString *)localOnlineString:(NSString *) key;


// 历史记录筛选条件
// 接待客服：receiveType 0我的，1所有
// 会话时间：startDate，endDate
// 总结：summaryStatus
// 状态：questionStatus
@property(nonatomic,strong) NSMutableDictionary *chatHistoryFilterConditon;

// 坐席状态
@property (nonatomic,strong)NSMutableArray *userStatusArray;

// 当前正在聊天的客户
@property(nonatomic,strong,nullable) SobotOnlineUser *currentChatUser;

// 获取未读消息数
-(int)getUnReadTotalNumber;


@end

NS_ASSUME_NONNULL_END
