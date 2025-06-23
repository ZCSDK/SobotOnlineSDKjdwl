//
//  SobotUserSessionInfoEntity.h
//  SobotOnline
//
//  Created by zhangxy on 2020/12/23.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@class SobotVisitMsgEntity;

@interface SobotUserSessionInfoEntity : SobotBaseEntity

// 访问着陆页
@property (nonatomic,strong) NSString *visitLandPage;

// 发起会话页
@property (nonatomic,strong) NSString *conLaunchPage;

// 系统
@property (nonatomic,strong) NSString *os;

// 技能组
@property (nonatomic,strong) NSString *groupName;

// 排队时长
@property (nonatomic,strong) NSString *remainTime;

// 接入渠道
@property (nonatomic,assign) NSString *source;

// 浏览器 终端
@property (nonatomic,strong) NSString *terminal;

// IP
@property (nonatomic,strong) NSString *IPNub;

// 收索 类型
@property (nonatomic,assign) NSString *visitSourceType;

// 收索引擎model
@property (nonatomic,strong) SobotVisitMsgEntity *visitMsg;

@end

@interface SobotVisitMsgEntity : SobotBaseEntity

@property(nonatomic,strong) NSString *visitSourcePage;//":"访问来源页",

@property(nonatomic,strong) NSString *searchEngine;//":"搜索引擎",

@property(nonatomic,strong) NSString *utmCampaign;//":"广告名称",

@property(nonatomic,strong) NSString *utmContent;//":"广告内容",

@property(nonatomic,strong) NSString *utmMedium;//":"广告媒介",

@property(nonatomic,strong) NSString *utmSource;//":"广告来源",

@property(nonatomic,strong) NSString *utmTerm;//":"广告关键词",

@property(nonatomic,strong) NSString *keyWord;//":"关键字"

@end

NS_ASSUME_NONNULL_END
