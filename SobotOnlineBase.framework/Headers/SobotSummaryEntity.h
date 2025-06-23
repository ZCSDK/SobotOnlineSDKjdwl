//
//  SobotSummaryEntity.h
//  SobotOnline
//
//  Created by zhangxy on 2020/9/6.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <SobotCommon/SobotCommon.h>
#import "SobotUnitEntity.h"
NS_ASSUME_NONNULL_BEGIN

@interface SobotSummaryEntity : SobotBaseEntity

@property (nonatomic, strong) SobotUnitEntity      *unitInfo;
@property (nonatomic, strong, nullable) NSMutableArray *unitTypeInfo;
@property (nonatomic, assign) int       questionStatus;
@property (nonatomic, strong) NSString  *questionRemark;
@property (nonatomic, strong) NSString  *updateTime;
@property (nonatomic, strong) NSString  *aname;

@end

NS_ASSUME_NONNULL_END
