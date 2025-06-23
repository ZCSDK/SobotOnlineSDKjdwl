//
//  SobotHttpInterface.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/6.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreText/CoreText.h>


/**
 *  超时时间
 */
#define HttpGetTimeOut       10
#define HttpPostTimeOut      30
#define HttpPostSmallTimeOut 10

// 1,ASI(不可用) 2,NSURLConnection 3,NSURLSession
//#define HttpRequestType  3

/*
 通过宏预编译 减少包体大小
 */
#define HTTP_REQUEST_DEPENDENT_ON_NSURLCONNECTION 0

#define HTTP_REQUEST_DEPENDENT_ON_NSURLSESSION 1

#define HTTP_REQUEST_DEPENDENT_ON_AFNETWORKING 0

//#define HttpNetWorkError    ZCSTLocalString(@"网络错误，请检查网络后重试")
#define HttpNetWorkTimeOut  @"Network connection timeout"

/**
 *  开始请求，每次发送请求时调用
 */
typedef void(^StartBlock)(void);

/**
 *  请求成功
 *
 *  @param dict 成功后，解析的返回
 */
typedef void(^CompleteBlock)(NSDictionary *dict);

/**
 *  请求完成，不管失败、成功，只要完成都会执行，可为nil
 *
 *  @param response 请求返回NSURLResponse
 */
typedef void(^FinishBlock)(id response,NSData  *data,NSString *jsonString);

/**
 *  请求失败
 *
 *  @param response     请求返回NSURLResponse
 *  @param connectError 失败的connectError
 */
typedef void(^FailBlock)(id response,NSString *errorMsg,NSError *connectError);


/**
 *  上传、下载进度
 *
 *  @param progress 上传、下载进度，如0.2，0.5
 */
typedef void(^ProgressBlock)(CGFloat progress);

#pragma clang diagnostic ignored "-Wdocumentation"
@interface SobotHttpInterface : NSObject


/**
 *  异步Get请求
 */

+(void)get:(NSString *) stringURL
    header:(NSDictionary *) header
     start:(StartBlock) startBlock
    finish:(FinishBlock) finishBlock
  complete:(CompleteBlock) completeBlock
      fail:(FailBlock) failBlock
  progress:(ProgressBlock) progressBlock;



-(void)startPost:(NSString *) stringURL
           param:(NSDictionary *) dict
          header:(NSDictionary *) header
         timeOut:(CGFloat) timeOut
           start:(StartBlock) startBlock
          finish:(FinishBlock) finishBlock
        complete:(CompleteBlock) completeBlock
            fail:(FailBlock) failBlock
        progress:(ProgressBlock)progressBlock;



+(SobotHttpInterface *) getZCHttpInerface;

// 取消 当前对应的文件上传的请求 删除缓存
-(void)cancelConnectMsgId:(NSString *)msgid;

// 添加缓存
-(void)addCache:(NSDictionary*)dict URL:(NSString *)url Connect:(NSURLConnection*)connect MsgId:(NSString *)msgid;

@end
