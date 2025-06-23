//
//  SobotOnlineService.h
//  SobotOnline
//
//  Created by zhangxy on 2020/9/8.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SobotOnlineBase/SobotOnlineBase.h>

NS_ASSUME_NONNULL_BEGIN


/// <#Description#>
@interface SobotOnlineService : NSObject


/// 相关属性配置
/// 注意只要不为空都会覆盖已有配置，如果需要修改请使用getCurOnlincConfig获取后赋值
+(void)configSobotOnline:(SobotOnlineConfig *) config;

// 获取已有配置信息
+(SobotOnlineConfig *) getCurOnlincConfig;

/// 初始化SDK，设置域名和认证token
/// @param token 认证token
/// @param host  可以为空，默认阿里云服务；如果需要，请设置自己的域名
/// @param resultBlock 返回结果
+(void)initWithToken:(NSString *) token host:(NSString * __nullable) host result:(void (^)(id object))resultBlock;



/// 初始化SDK，设置域名，获取token
/// @param appid  公司appid
/// @param appkey 商户appkey
/// @param host  可以为空，默认阿里云服务；如果需要，请设置自己的域名
+(void)initWithAppid:(NSString *) appid appkey:(NSString *) appkey host:(NSString * __nullable) host result:(void (^)(id object))resultBlock;



/// 启动客服认证页面
/// @param account 客服账户(邮箱)
/// @param loginStatus 登录状态 2:忙碌，1:在线，0默认
/// @param byController 启动的controller,如果为空将返回要启动的UIViewController
/// 注意：返回值可能为空，如果为空请查看result中日志信息
+(UIViewController *)startAuthWithAcount:(NSString *) account status:(int) loginStatus vc:(UIViewController *) byController result:(void (^)(id object))resultBlock;

/// 启动首页
/// @param account 客服账户(邮箱)
/// @param loginStatus 登录状态 2:忙碌，1:在线，0默认
/// @param byController 启动的controller,如果为空将返回要启动的UIViewController
/// 注意：返回值可能为空，如果为空请查看result中日志信息
+(void )startHomeWithAcount:(NSString *) account status:(int) loginStatus vc:(UIViewController *) byController result:(void (^)(id object))resultBlock;



/// 仅登录客服，不执行页面逻辑
/// @param account 客服账户(邮箱)
/// @param loginStatus 登录状态 2:忙碌，1:在线，0默认 
/// @param resultBlock 登录结果
+(void)doLoginWithAccount:(NSString *) account status:(int) loginStatus result:(void (^)(id object))resultBlock;


/// 手动离线客服
+(void)outAdmin;

/// 当前客服是否正常登录
+(BOOL)isAdminLogin;

/// 获取未读消息数
+(int) getUnReadNumber;


/// 监听实时信息
+(void)setReceiveMessageDelegate:(id<SobotReceivedMessageDelegate>) delegate;


/// 监听实时消息，block方式
+(void)setReceiveMessageBlock:(SobotReceivedMessageBlock ) block;


/// 页面链接点击事件监听
+(void)setSobotLinkBlock:(SobotLinkClickBlock ) block;


@end

NS_ASSUME_NONNULL_END
