//
//  SobotOnlineUITools.h
//  SobotOnlineBase
//
//  Created by zhangxy on 2023/10/23.
//

#import <Foundation/Foundation.h>
#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotOnlineUITools : NSObject

+(SobotOnlineUITools *) shareSobotOnlineUITools;

+(UIImage *) getOnlineSDKImage:(NSString *) imageName;

+(UIColor *)getOnlineSDKColor:(NSString *)colorName alpha:(CGFloat ) a;

+(BOOL)sobotCheckRTL;
@end

NS_ASSUME_NONNULL_END
