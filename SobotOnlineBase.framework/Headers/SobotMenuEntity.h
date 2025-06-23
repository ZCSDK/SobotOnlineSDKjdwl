//
//  SobotMenuEntity.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/20.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotMenuEntity : SobotBaseEntity

// code
@property (nonatomic,strong) NSString * code;

// 标题
@property (nonatomic,strong) NSString * title;

// icon
@property (nonatomic,strong) NSString * imageIcon;

// 显示数量
@property (nonatomic,strong) NSString * number;

// 点击事件
@property (nonatomic,strong) NSString * url;


@property(nonatomic,strong) NSString * question;
@property(nonatomic,strong) NSString * docId;

@property(nonatomic,strong) NSString * groupId;

@property(nonatomic,strong) NSString * groupName;
@property(nonatomic,assign) int groupLevel;

@property(nonatomic,strong) NSMutableArray *children;
@property(nonatomic,assign) int replyCount;
@property (nonatomic,strong) NSString * answer;
@property (nonatomic,strong) NSString * answerTxt;
@property(nonatomic,strong) NSArray *richList;


@property (nonatomic,strong) UIColor * titleColor;
@property (nonatomic,strong) UIColor * tinTitleColor;
@end

NS_ASSUME_NONNULL_END
