//
//  SobotAuthConfigEntity.h
//  SobotOnline
//
//  Created by zhangxy on 2020/9/7.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotAuthConfigEntity : SobotBaseEntity

// chat接口使用，根据appid和appkey，获取到的token，仅用于判断当前SDK已经初始化了
@property(nonatomic,strong) NSString *installToken;

// 登录账号类型（0 工单账号  ，1 普通账号）
@property (nonatomic,assign)int imFlag;


// 未读消息数
@property(nonatomic,assign) int      unReadMessage;

// 当前正在聊天的ID，不记录此人的未读消息
@property(nonatomic,strong) NSString *chatUid;


// 是否展示备注
@property(nonatomic,assign) int qDescribeShowFlag;

// 是否必填备注
@property(nonatomic,assign) int qDescribeInputFlag;

// 是否显示浏览轨迹
@property(nonatomic,assign) int scanPathFlag;

// 是否开启会话总结
@property(nonatomic,assign) int openSummaryFlag;

// 主动邀请会话 0 开启  1关闭
@property(nonatomic,assign) int isInvite;


@property(nonatomic,assign) int summaryOperationFlag; //咨询总结业务单元开关  1-开启0-关闭（以下咨询总结相关同此设置）

@property(nonatomic,assign) int summaryOperationInputFlag;//咨询总结业务单元必填开关

@property(nonatomic,assign) int summaryTypeFlag; //咨询总结业务类型开关

@property(nonatomic,assign) int summaryStatusFlag; //咨询总结处理状态开关

@property(nonatomic,assign) int summaryStatusInputFlag;//咨询总结处理状态必填开关

@end

NS_ASSUME_NONNULL_END
