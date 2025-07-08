//
//  SobotOnlineBaseController.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/5.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <SobotCommon/SobotCommon.h>
#import <SobotOnlineBase/SobotOnlineBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotOnlineBaseController : SobotBaseController

@property(nonatomic,assign) CGFloat contentY;
@property(nonatomic,assign) CGFloat contentHeight;
@property(nonatomic,assign) BOOL isAppear;

@property(nonatomic,strong) NSString *realName;

// 创建导航头
-(void)createVCTitleView;
-(void)setNavigationBarLeft:(NSArray *__nullable)leftTags right:(NSArray *__nullable)rightTags;
-(void)setNavTitle:(NSString *) title;

// 获取页面内容的起始坐标
-(CGFloat )getVCContentY;
-(void)setViewFrameInViewAppear;
@end

NS_ASSUME_NONNULL_END
