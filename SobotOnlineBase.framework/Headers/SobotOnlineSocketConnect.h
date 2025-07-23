//
//  SobotOnlineSocketConnect.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/10.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,SobotSocketSendActionType) {
    SobotActionConnect   = 0,  // 连接认证
    SobotActionheartbeat = 1,  // 心跳
    SobotActionConfim    = 2,  // 消息确认
    SobotActionBusiness  = 3,  // 业务
};
typedef NS_ENUM(NSInteger,SobotOnlineSocketConnectStatus) {
    SobotOnlineSocketConnectSuccess = 0,
    SobotOnlineSocketConnectError   = 1,
    SobotOnlineSocketConnectClosed  = 2,
    SobotSocketHttpLoop       = 3 // 轮询无法成功，转为http轮询
};


@protocol SobotSocketDelegate <NSObject>
/**
 *  消息接收
 *  @param dict  解析到的消息对象
 *  @param num     未读消息，暂时未使用
 *  @param obj     预留对象
 */
-(void)onReceivedMessage:(NSDictionary *) dict unReaded:(int) num object:(id)obj showType:(int) type;

/**
 *  连接状态变化
 *
 *  @param status 智齿连接业务状态码
 */
-(void)onConnectStatusChanged:(SobotOnlineSocketConnectStatus) status;

@end

@interface SobotOnlineSocketConnect : NSObject

// 接收消息回调
@property(nonatomic,strong) id<SobotSocketDelegate> __nullable delegate;

//临时需要，以后优化不需要
@property(nonatomic,strong) NSString *uid;


+(SobotOnlineSocketConnect *)getSobotOnlineSocketConnect;


/**
 *  创建链接
 */
-(void)onConnection:(NSString *) ipWithPort;
-(void)onConnection:(NSString *) ipWithPort httpURL:(NSString *__nullable) loopUrl ack:(NSString *__nullable) loopAckURL autoChangeLoop:(BOOL) autoChange;


// 检测通道是否正常
-(void)checkConnection;

/**
 *  关闭连接
 */
-(void)closeConnection;



/// 当前连接状态
-(BOOL)currentConnected;


/// 获取当前连接状态
-(SobotOnlineSocketConnectStatus) getConnectStatus;


/**
 *  发送消息
 *
 *  @param text 文本
 *  @param type   动作说明
 */
-(void)sendMessage:(NSString *)text action:(SobotSocketSendActionType) actionType;



/**
 缓存未送达消息标记

 @param uid 用户ID
 @return 该用户所有未接收消息
 */
-(NSMutableDictionary *)getUnDeliveredDictByUserId:(NSString *)uid;

@end

NS_ASSUME_NONNULL_END
