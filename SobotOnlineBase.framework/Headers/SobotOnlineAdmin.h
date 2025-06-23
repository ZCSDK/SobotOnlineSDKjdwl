//
//  SobotOnlineAdmin.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/19.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <SobotCommon/SobotCommon.h>
NS_ASSUME_NONNULL_BEGIN

@interface SobotOnlineAdmin : SobotBaseEntity

// code
@property (nonatomic,assign) int code;

// 融云的token
@property (nonatomic,strong) NSString * rcToken;

// 是否开通呼叫线路
@property (nonatomic,strong) NSString * centerNumber;


// 头像
@property (nonatomic,strong) NSString * face;

// 最大接待数量
@property (nonatomic,assign) int        maxServiceCount;

// 用户状态，0,离线，2忙碌、1在线,-1在线(有在线会话数据需要同步)  2.6.0新增 1-在线，2-忙碌 statusCode:3-小休，4-培训，5-会议，6-用餐，7-活动
@property (nonatomic,assign) int        status;


// 客服昵称
@property (nonatomic,strong) NSString * nickName;


@property (nonatomic,strong) NSString * serviceId;


// 工单tempId
@property (nonatomic,strong) NSString * token;

// 用户标识
@property (nonatomic,strong) NSString * tempId;

// 客服名称
@property (nonatomic,strong) NSString * staffName;

@property (nonatomic,strong) NSString * pid;
@property (nonatomic,strong) NSString * companyId;

// 用户aid
@property (nonatomic,strong) NSString * aid;

@property (nonatomic,strong) NSString * pu;
@property (nonatomic,strong) NSString * puid;

///**
// *  技能组ID
// */
//@property (nonatomic,strong) NSArray * groupId;
//
//// 技能组昵称
//@property (nonatomic,strong) NSArray * groupName;


// 以下字符本地使用
@property (nonatomic,strong) NSString * tel;
@property (nonatomic,strong) NSString * email;
@property (nonatomic,strong) NSString * password;


// 以下字段，在线管理员使用
@property (nonatomic,strong) NSString * transferId;
@property (nonatomic,strong) NSString * uname;
@property (nonatomic,assign) int        currentServiceCount;


// 角色
@property (nonatomic,strong) NSString * cusRoleName;
// 是否是超级管理员和管理员账号
@property (nonatomic,assign) int        cusRoleId;


// 是否为工单账号
@property (nonatomic,assign) int  imFlag;



// 查询机器人列表时使用
@property (nonatomic,strong) NSArray *robots;



@property (nonatomic,strong) NSString *wslink_default;
@property (nonatomic,strong) NSArray  *wslink_bak;

// 是否有拉黑的权限  0无 1有
@property (nonatomic,assign) int blackFunction;

// 星标置顶 0不置顶 1置顶
@property (nonatomic,assign) int topFlag ;

// 会话排序 0 按接入顺序 1 按新消息时间
@property (nonatomic,assign) int  sortFlag;

// 标记是否显示会话顺序
@property (nonatomic,assign) BOOL  sortTag;

// 0 未开启，1开启。修改状态是否需要审核
@property (nonatomic,assign) BOOL  auditFlag;



// 0默认值忙碌 3.小休 4.培训 5.会议 6.用餐 7.活动  (当前客服是在忙碌的状态下 子集的状态码)
@property (nonatomic,assign) int  statusCode;

// 当前客服账号是否有转接权限  0 没有  1 有
@property (nonatomic,assign) int  transferFunction ;


@property (nonatomic,assign) long  loginTime;

-(id)initWithLoginDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
