//
//  SobotOnlineApi.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/19.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SobotOnlineBase/SobotOnlineBase.h>
#import <SobotCommon/SobotCommon.h>


NS_ASSUME_NONNULL_BEGIN


/**
 *  开始请求，每次发送请求时调用
 */
typedef void(^OnlineStartBlock)(NSString *url);

/**
 *  请求成功
 *
 *  @param obj 成功后，解析的返回
 */
typedef void(^OnlineSuccessBlock)(id obj);

/**
 *  请求完成，不管失败、成功，只要完成都会执行，可为nil
 *
 *  @param jsonString  请求返回字符串
 */
typedef void(^OnlineFinishBlock)(NSString *jsonString);

/**
 *  请求失败
 *
 *  @param code      请求返回code
 *  @param errorMsg  失败的原因
 */
typedef void(^OnlineFailBlock)(NSString *code,NSString *errorMsg);


/**
 *  上传、下载进度
 *
 *  @param progress 上传、下载进度，如0.2，0.5
 */
typedef void(^OnlineProgressBlock)(CGFloat progress);



@interface SobotOnlineApi : NSObject


/// 当前SDK版本
+(NSString *)getOnlineSDKVersion;

/// 获取登录token
/// @param appId  appid服务端生成
/// @param appkey 生成sign使用
/// @param startBlock start
/// @param resultBlock result
/// @param failBlock fail
/// @param finishBlock finish
+(void)getTokenWithAppId:(NSString *) appId appkey:(NSString *) appkey start:(nonnull OnlineStartBlock)startBlock successBlock:(nonnull OnlineSuccessBlock)resultBlock failBlock:(nonnull OnlineFailBlock)failBlock finish:(nonnull OnlineFinishBlock)finishBlock;


/// 根据token 登录客服
/// @param email 账户
/// @param token token
/// @param status 状态
/// @param block 结果
/// @param failBlock  fail
+(void)doLogin:(NSString *)email token:(NSString *)token status:(int)status successBlock:(void (^)(SobotLoginEntity *loginUser))block failBlock:(void (^)(NSString *error,NSString *code))failBlock;



/// 查询坐席状态
+(void)getUserStatusList:(nonnull OnlineSuccessBlock)resultBlock failBlock:(nonnull OnlineFailBlock)failBlock finish:(nonnull OnlineFinishBlock)finishBlock;

/// 忙碌
/// @param statusCode 忙碌的具体状态（小休。。。。）
/// 合并接口，0，离线，1在线，其他为指定状态设置
+(void)setAdminStatus:(int ) statusCode success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;


/// 确定是否修改状态
/// @param dict //当前状态 nowStatus;//申请状态 cutStatus;//申请理由 cutReason; //标记  1-通过 2-驳回 3-待审核  cutFlag;
+(void)setConfirmAdminStatus:(NSMutableDictionary *) dict success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

/// 离线用户
/// @param userId  用户id
/// @param cid  会话id
+(void)offlineUser:(NSString *) userId cid:(NSString *)cid success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

// 查询历史会话用户
+(void)getChatHistroyUsers:(NSMutableDictionary *) dict Chat:(BOOL) isChat page:(NSInteger) pageNum start:(OnlineStartBlock ) startBlock successBlock:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock finish:(OnlineFinishBlock) finishBlock;


// 查询在线用户
+(void)getOnlineChatUsers:(OnlineStartBlock ) startBlock successBlock:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock finish:(OnlineFinishBlock) finishBlock;


// 查询排队用户
+(void)getWaitingChatUsers:(int) page start:(OnlineStartBlock)startBlock successBlock:(OnlineSuccessBlock)resultBlock failBlock:(OnlineFailBlock)failBlock finish:(OnlineFinishBlock)finishBlock;



/// 查询可转接客服
/// @param type 0、客服；1客服组
+(void)getOtherOnlineAdminList:(int) type keyWord:(NSString *)keyWord start:(OnlineStartBlock)startBlock successBlock:(OnlineSuccessBlock)resultBlock failBlock:(OnlineFailBlock)failBlock finish:(OnlineFinishBlock)finishBlock;


/// 转接
/// @param joinId  客服id
/// @param uid 用户id
/// @param cid 转接会话id
+(void)transferAdmin:(NSString *)joinId uid:(NSString *)uid cid:(NSString *) cid groupId:(NSString *) groupId groupName:(NSString *) groupName start:(OnlineStartBlock)startBlock successBlock:(OnlineSuccessBlock)resultBlock failBlock:(OnlineFailBlock)failBlock finish:(OnlineFinishBlock)finishBlock;

// 发送消息
+(void)sendMessage:(SobotMessageEntity *)message uid:(NSString *) uid isOnline:(BOOL )isOnline docId:(NSString *) docId start:(nonnull OnlineStartBlock)startBlock successBlock:(nonnull OnlineSuccessBlock)resultBlock failBlock:(nonnull OnlineFailBlock)failBlock finish:(nonnull OnlineFinishBlock)finishBlock progress:(OnlineProgressBlock) progressBlock;


// 查询用户会话列表
+(void)getChatHistoryCids:(NSString *) uid start:(nonnull OnlineStartBlock)startBlock successBlock:(nonnull OnlineSuccessBlock)resultBlock failBlock:(nonnull OnlineFailBlock)failBlock finish:(nonnull OnlineFinishBlock)finishBlock;


// 根据会话id查询会话详情
+(void)getChatHistoryMessage:(NSString *) uid cid:(NSString *) cid  start:(nonnull OnlineStartBlock)startBlock successBlock:(nonnull OnlineSuccessBlock)resultBlock failBlock:(nonnull OnlineFailBlock)failBlock finish:(nonnull OnlineFinishBlock)finishBlock;

// 消息撤回
+(void)revokeChatMessage:(NSString *) msgId uid:(NSString *) uid cid:(NSString *) cid successBlock:(nonnull OnlineSuccessBlock)resultBlock failBlock:(nonnull OnlineFailBlock)failBlock finish:(nonnull OnlineFinishBlock)finishBlock;


/// 邀请用户会话
/// @param uid  用户id
+(void)inviteUser:(NSString *)uid start:(OnlineStartBlock)startBlock successBlock:(OnlineSuccessBlock)resultBlock failBlock:(OnlineFailBlock)failBlock finish:(OnlineFinishBlock)finishBlock;


/// 查询用户状态
/// @param uid 用户id
+(void)queryUserStatus:(NSString *)uid start:(OnlineStartBlock)startBlock successBlock:(OnlineSuccessBlock)resultBlock failBlock:(OnlineFailBlock)failBlock finish:(OnlineFinishBlock)finishBlock;


// 获取客户中心用户信息
+(void)getUserInfo:(NSString *) uid start:(nonnull OnlineStartBlock)startBlock successBlock:(nonnull OnlineSuccessBlock)resultBlock failBlock:(nonnull OnlineFailBlock)failBlock finish:(nonnull OnlineFinishBlock)finishBlock;


// 查询用户详细信息，包含自定义字段内容
+(void)getUserInfoDetail:(NSString *)customerId start:(OnlineStartBlock)startBlock successBlock:(OnlineSuccessBlock)resultBlock failBlock:(OnlineFailBlock)failBlock finish:(OnlineFinishBlock)finishBlock;

// 邀请评价
+(void)inviteEvaluation:(NSString *)uid cid:(NSString *) cid successBlock:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

// 是否可以邀请评价
+(void)canInviteEvaluation:(NSString *)uid cid:(NSString *) cid successBlock:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;



/// 拉黑用户
/// @param userId 用户id
/// @param text   拉黑原因
/// @param type   1、24小时拉黑，其他为永久拉黑
+(void)addUserToBlock:(NSString *)userId reason:(NSString *) text type:(int) type successBlock:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;


/// 解除拉黑
/// @param userId 解除拉黑的用户id
+(void)removeBlockUser:(NSString *)userId  successBlock:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;



/// 标记新标
/// @param userId  用户id
/// @param isDelete  是否为删除
+(void)updateMarkUser:(NSString *)userId del:(BOOL) isDelete  successBlock:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;



/// 获取自定义字段
/// @param type  1、用户字段，3工单
+(void)getCustomFields:(int )type successBlock:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;



/// 编辑或新增一条用户信息
/// @param isSave YES 新增用户
/// @param params 接口参数
+(void)saveOrUpdateUserInfo:(BOOL )isSave param:(NSMutableDictionary *)params successBlock:(OnlineSuccessBlock)resultBlock failBlock:(OnlineFailBlock)failBlock finish:(OnlineFinishBlock)finishBlock;


/// 上传附件，包括工单、用户头像，用户内部中的
/// @param params 参数
+(void)sobotUploadFile:(NSMutableDictionary *)params successBlock:(OnlineSuccessBlock)resultBlock failBlock:(OnlineFailBlock)failBlock finish:(OnlineFinishBlock)finishBlock;


/// 登录信息配置 
+(void)getAuthorConfig:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

// 查询是否已经会话总结
+(void)getChatConversion:(NSString *)cid successBlock:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

// 查询会话总结业务类型
+(void)getConversionBiz:(NSString *)searchText  success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

// 查询会话总结业务下的分类
+(void)getConversionType:(NSString *)unitId  success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

// 查询会话总结业务类型子类
+(void)getConversionTypeInfo:(NSString *)typeId unitId:(NSString *) unitId  success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

// 根据业务id，搜索会话总结业务类型，
+(void)searchConversionTypeInfo:(NSString *)keyword cid:(NSString *) cid  success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

// 提交会话总结
+(void)saveChatConversion:(NSMutableDictionary *) params  success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

// 获取用户vip等级
+(void)getUserVipLevelWithSuccess:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;


// 获取企业信息
+(void)getEnterpriseList:(int) page search:(NSString *) searchName success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;


/// 快捷回复,分组查询
/// @param adminFlag 0:客服查询  1:公用查询
+(void)getQuickReplyGroup:(int) adminFlag success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;


/// 快捷回复 搜索
/// @param adminFlag 0:客服查询  1:公用查询
/// @param text 检索文字
+(void)searchQuickReplyGroup:(int) adminFlag search:(NSString *) text success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;


/// 快捷回复，查询分组详情
/// @param groupId  分组id
+(void)getQuickReplyDetailByGroupID:(NSString *) groupId success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;


/// 智能回复
/// @param requestText 查询内如
/// @param robotFlag   机器人id
/// @param isInnerData     是否为内部知识库
+(void)getSmartReplys:(NSString *) requestText robot:(int )robotFlag innerData:(BOOL ) isInnerData success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;

/// 智能回复
/// @param chooseRobotIds 机器人id
+(void)getSmartReplyChooseRobotIds:(NSString *) chooseRobotIds success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;


// 查询用户会话记录
+(void)getUserRecordDetail:(NSString *) uid cid:(NSString *) cid success:(OnlineSuccessBlock) resultBlock failBlock:(OnlineFailBlock) failBlock  finish:(OnlineFinishBlock)finishBlock;


/// 创建临时消息体
/// @param dict  @{msgType:, content}
/// @param user  当前用户
/// @param action  当前动作SobotMessageAction_CHAT
+(SobotMessageEntity *) createMessage:(NSDictionary *) dict user:(SobotOnlineUser *) user action:(SobotMessageAction ) action;
+(SobotMessageEntity *) createMessage:(NSDictionary *) dict user:(SobotOnlineUser *) user action:(SobotMessageAction ) action actionText:(NSString *) text;


@end

NS_ASSUME_NONNULL_END
