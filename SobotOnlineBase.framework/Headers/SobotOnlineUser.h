//
//  SobotOnlineUser.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/23.
//  Copyright © 2020 sobot. All rights reserved.
//


#import <SobotCommon/SobotCommon.h>
NS_ASSUME_NONNULL_BEGIN

@interface SobotOnlineUser : SobotBaseEntity

@property (nonatomic,assign) BOOL isAutoCreatNewModel;// 是否是自动创建的
@property (nonatomic,assign) NSInteger orderType;// 工单来源
@property (nonatomic,strong) NSString *lastCid;

@property (nonatomic,assign) BOOL     isBlack;

@property (nonatomic,strong) NSString *uid;

@property (nonatomic,strong) NSString *ts;
@property (nonatomic,strong) NSString *addtime;
@property (nonatomic,strong) NSString *remainTime;



@property (nonatomic,strong) NSString *groupId;
@property (nonatomic,strong) NSString *groupName;

//用户 来源0 pc 1微信 2APP 3微博 4WAP 5融云
@property (nonatomic,assign) int      source;

// 是否星标
@property (nonatomic,assign) BOOL     ismark;

// 是否转接
@property (nonatomic,assign) BOOL     isTransfer;

@property (nonatomic,strong) NSString *face;

@property (nonatomic,strong) NSString *uname;

@property (nonatomic,strong) NSString *lastMessage;
@property (nonatomic,strong) NSString *lastStaffId;


// 是否下线，本地判断使用
@property (nonatomic,assign) BOOL     isOnline;

// 未读消息，本地使用
@property (nonatomic,assign) int      newsNum;



@property (nonatomic,strong) NSString *browser;


@property (nonatomic,strong) NSString *companyId;

// 邮箱
@property (nonatomic,strong) NSString *email;

// 系统
@property (nonatomic,strong) NSString *os;

// qq
@property (nonatomic,strong) NSString *qq;

// 备注
@property (nonatomic,strong) NSString *remark;

// 电话
@property (nonatomic,strong) NSString *tel;

@property(nonatomic,strong)NSArray *telList;

@property (nonatomic,strong)NSString *encrypt;//电话号码密文
@property (nonatomic,strong)NSString *oldTel;// 未修改前的电话号码

// 性别
@property (nonatomic,strong) NSString *sex;

// 微信
@property (nonatomic,strong) NSString *weiChat;

// 微博
@property (nonatomic,strong) NSString *weiBo;

// 年龄
@property (nonatomic,strong) NSString *age;

// 姓名
@property (nonatomic,strong) NSString *realname;

// 对接ID
@property (nonatomic,strong) NSString * partnerId;

// 客户ID，如果存在说明客户中心有此用户，不存在说明没有此用户需要去新增
@property (nonatomic,strong) NSString * customerId;

// 内容
@property (nonatomic,strong) NSString *contentStr;

// 用户自定义字段
@property (nonatomic,strong) NSMutableArray *customArr;



@property (nonatomic,strong) NSMutableArray *params;

@property(nonatomic,strong)NSString *createTime;//": 1480414638,
@property(nonatomic,strong)NSString *img;//": "https://img.sobot.com/console/common/face/user.png",
@property(nonatomic,strong)NSString *nick;//": "饭后活动",
@property(nonatomic,strong)NSString *passwd;//": "3c22fa43b6c91a35d68fd6121be61231",
@property(nonatomic,strong)NSString *pid;//": "73afd340f45148d58f71c33477439c7a",
@property(nonatomic,strong)NSMutableArray *resultList;//": [],
@property(nonatomic,strong)NSString *rowkey;//": "73afd340f45148d58f71c33477439c7a_0ee847a79dd249a684c70e5a5e8bcea8",
@property(nonatomic,strong)NSString *salt;//": "60c9f85704d54e27a1e612a825e34e85",


// 来源0 pc 1微信 2APP 3微博 4WAP 5融云
@property(nonatomic,strong)NSString *sourceName;//": "jchfffj"
@property(nonatomic,strong)NSString *sourceImgName;//": "jchfffj"
@property(nonatomic,assign)int      status;//": 8,
@property(nonatomic,assign)int      statusCode;//": 8,

@property(nonatomic,strong)NSString *visitorIds;//": "18611622736",
@property(nonatomic,assign)int      type;//": 0,
@property(nonatomic,assign)BOOL      isVip;//": 0,
@property(nonatomic,strong)NSString *vipLevelName;//": "18611622736",
@property(nonatomic,strong)NSString *vipLevel;//": "18611622736",



// 省市县
@property (nonatomic,strong)NSString *areaName;
@property (nonatomic,strong)NSString *areaId;

@property (nonatomic,strong)NSString *cityName;
@property (nonatomic,strong)NSString *cityId;

@property (nonatomic,strong)NSString *proviceName;
@property (nonatomic,strong)NSString *proviceId;


@property (nonatomic,strong)NSString *enterpriseId;// 公司ID
@property (nonatomic,strong)NSString *enterpriseName;//公司名称


@property (nonatomic,strong)NSString *countryId;
@property (nonatomic,strong)NSString *countryName;


// 10.29新增语言
@property (nonatomic,strong)NSString *languageValue;
@property (nonatomic,strong)NSString *language;

// 10.29新增时区
@property (nonatomic,strong)NSString *timezoneValue;
@property (nonatomic,strong)NSString *timezoneId;

@property (nonatomic,strong)NSString *QQNumber;// QQ
@property(nonatomic,strong)NSString *wx;


-(void)setSourceNameFromSource;

@end

NS_ASSUME_NONNULL_END
