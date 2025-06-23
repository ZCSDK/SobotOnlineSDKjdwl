//
//  SobotUnitEntity.h
//  SobotOnline
//
//  Created by zhangxy on 2020/9/6.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotUnitEntity : SobotBaseEntity

@property(nonatomic,strong) NSString *typeId;
// 业务编号
@property(nonatomic,strong) NSString *unitId;
// 业务名称
@property(nonatomic,strong) NSString *unitName;

// 业务状态
@property(nonatomic,assign) int unitStatus;

// 业务描述
@property(nonatomic,strong) NSString *unitDoc;

// 所属企业编号
@property(nonatomic,strong) NSString *companyId;


// 所属企业编号
@property(nonatomic,strong) NSString *parentId;

// 排序号
@property(nonatomic,assign) int sortFlag;

@property(nonatomic,strong) NSString *createId;
// 创建时间
@property(nonatomic,strong) NSString *createTime;

@property(nonatomic,strong) NSString *updateId;
// 更新时间
@property(nonatomic,strong) NSString *updateTime;

@property(nonatomic,assign) BOOL     isChecked;

@property(nonatomic,strong) NSString *typeName;
@property(nonatomic,strong) NSString *typeStr;
@property(nonatomic,assign) int checkLevel;
@property(nonatomic,assign) int nodeFlag;


@property(nonatomic,copy) NSMutableArray *searchTypes;


@end

NS_ASSUME_NONNULL_END
