//
//  SobotOnlineBaseDefine.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/5.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SobotCommon/SobotCommon.h>
#import <SobotOnlineBase/SobotOnlineUITools.h>
#import <SobotOnlineBase/SobotOnlineCache.h>

// UTF8 字符串
#define ZCUTF8Data(str) [str dataUsingEncoding:NSUTF8StringEncoding]


// 是否为iOS7或者iOS7以上的版本，如果设备版本<iOS7 返回NO 否则返回YES
#define iOS7  ((floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_6_1)? NO:YES)


// 是否为竖屏
#define ZC_IsPortrait  ([[UIApplication sharedApplication] statusBarOrientation] == UIDeviceOrientationPortrait || [[UIApplication sharedApplication] statusBarOrientation] == UIDeviceOrientationPortraitUpsideDown)


// 格式化转换(int转String)
#define ZCIntToString(x)                      [NSString stringWithFormat:@"%d",x]


// 获取NSUserDefaults对象
#define SobotUserDefaults                        [NSUserDefaults standardUserDefaults]


// 获取发送通知对象
#define ZCNotificatCenter                 [NSNotificationCenter defaultCenter]


// 设备屏幕尺寸的宽度
#define SysScreenWidth                      [[UIScreen mainScreen] bounds].size.width

// 设备屏幕尺寸的高度
#define SysScreenHeight                     [[UIScreen mainScreen] bounds].size.height

// iPhoneX
#define ZC_iPhoneX  [SobotUITools getIsIphonX]//(((SysScreenWidth == 375.f && SysScreenHeight == 812.f ) ||(SysScreenHeight == 375.f && SysScreenWidth == 812.f ) || (SysScreenHeight == 414.f && SysScreenWidth == 896.f ) || (SysScreenWidth == 414.f && SysScreenHeight == 896.f ))? YES : NO)

// 导航栏的高度
#define isLandspace     ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationLandscapeRight || [UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationLandscapeLeft)


#define isiPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

// View的宽度
#define SobotViewWidth(v)                        v.frame.size.width

// View的高度
#define SobotViewHeight(v)                       v.frame.size.height

// View的X轴坐标
#define SobotViewX(v)                            v.frame.origin.x

// View的Y轴坐标
#define SobotViewY(v)                            v.frame.origin.y


#define SOBOTNotification_NetworkChange     @"NetworkChanged"
#define SobotNotification_SocketNewMessage  @"SobotNoticeNewMessage"

// token失效
#define SobotNotification_TokenExprise   @"SobotNoticeTokenExprise"

#define SobotFormateTime @"yyyy-MM-dd HH:mm:ss"


#define onlineSDKGetColor(colorName) [SobotOnlineUITools getOnlineSDKColor:colorName alpha:1.0f]
#define onlineSDKGetColorA(colorName,a) [SobotOnlineUITools getOnlineSDKColor:colorName alpha:a]

#define SobotOnlineGetImage(imageName) [SobotOnlineUITools getOnlineSDKImage:imageName]
#define SobotOnlineLocalString(key) [[SobotOnlineCache shareSobotOnlineCache] localOnlineString:key]

#define SobotOnlineIsRTL [SobotOnlineUITools sobotCheckRTL]
