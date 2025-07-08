//
//  SobotMessageDetailEntity.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/23.
//  Copyright © 2020 sobot. All rights reserved.
//



#import <SobotCommon/SobotCommon.h>

//typedef NS_ENUM(NSInteger,SobotMessageType) {
//    // 0文本 1图片 2音频 3、视频、4文件,5对象
////    文件类型：
////    DOC(0,"doc"),
////    PPT(1,"ppt"),
////    XLS(2,"xls"),
////    PDF(3,"pdf"),
////    MP3(4,"mp3"),
////    MP4(5,"mp4"),
////    RAR(6,"rar"),
////    TXT(7,"txt"),
////    OTHER(8,"other");
////    对象类型：
////    * 0-富文本
////    * 1-多伦会话
////    * 2-位置
////    * 3-小卡片
////    * 4-订单卡片
//    
//    SobotMessageTypeText  = 0, //文本
//    SobotMessageTypePhoto = 1, //图片
//    SobotMessageTypeSound = 2, // 声音
//    SobotMessageTypeVideo = 3, // 视频
//    SobotMessageTypeFile  = 4, // 文件
//    SobotMessageTypeRichJson = 5, // 富文本中纯文字
//    
//    // 临时使用
//    SobotMessageTypeStartSound = -4,//正在录音
//    // 临时使用
//    SobotMessageTypeCancelSound = -5,//取消正在闪烁的语音cell
//};

typedef NS_ENUM(NSInteger,SobotMessageRichType) {
//    对象类型：
//    * 0-富文本
//    * 1-多伦会话
//    * 2-位置
//    * 3-小卡片
//    * 4-订单卡片
    
    SobotMessageRichTypeRichText  = 0, //文本
    SobotMessageRichTypeLoop = 1, //图片
    SobotMessageRichTypeLocation = 2, // 声音
    SobotMessageRichTypeGoods = 3, // 小卡片
    SobotMessageRichTypeOrder  = 4, // 订单
    SobotMessageRichTypeWeChatCard  = 5, // 微信小卡片
    SobotMessageRichTypeTemplateMsg  = 20, // 模版
    SobotMessageRichTypeBrowseTrack  = 114, // 浏览轨迹
};

NS_ASSUME_NONNULL_BEGIN

@class SobotMessageWheelEntity;
@class SobotMessageRichEntity;

@interface SobotMessageDetailEntity : SobotBaseEntity

// 消息体，当时图片和语音时，为图片、语音地址
@property (nonatomic,strong  ) NSString         * content;

// 语音时长
@property (nonatomic,strong  ) NSString         * duration;


// 视频字段
@property (nonatomic,strong  ) NSString         * fileName;
@property (nonatomic,strong  ) NSString         * fileSize;
@property (nonatomic,strong  ) NSString         * snapshot;
@property (nonatomic,strong  ) NSString         * url;

// 文件类型
//文件类型：
//DOC(0,"doc"),
//PPT(1,"ppt"),
//XLS(2,"xls"),
//PDF(3,"pdf"),
//MP3(4,"mp3"),
//MP4(5,"mp4"),
//RAR(6,"rar"),
//TXT(7,"txt"),
//OTHER(8,"other");
@property (nonatomic,assign  ) int              fileType;


//位置
// 经度
@property (nonatomic,strong  ) NSString         *longitude;
// 维度
@property (nonatomic,strong  ) NSString         *latitude;
// 地址
@property (nonatomic,strong  ) NSString         *localName;
@property (nonatomic,strong  ) NSString         *localLabel;


// 回答建议
@property (nonatomic,strong  ) NSArray          * sugguestions;


/**
 *  1 直接回答，2 理解回答，3 不能回答, 4引导回答，6互联网寒暄，
 *  7 私有寒暄（包括第三方天气、快递接口）,8百科, 9 向导回答,10 业务接口 //新增 151 152 153 待接口 多轮会话的类型
 */
@property (nonatomic,assign  ) int              answerType;




@property (nonatomic,strong  ) NSString         * question;
@property (nonatomic,strong  ) NSString         * time;

@property (nonatomic,strong  ) NSString         * docId;
@property (nonatomic,strong  ) NSString         * docName;


// 建议引导
@property (nonatomic,strong  ) NSString         * stripe;

@property (nonatomic,copy) NSString * answerStrip;// 引导语，多轮会话中 15239 1523 1524 时 megtype ==11 时 添加


// 0文本 1图片 2音频 4 富文本中有图片 5 富文本中纯文字 6 富文本中有视频 114浏览轨迹 117未送达
@property (nonatomic,assign  ) SobotMessageType              msgType;


//    * 0-富文本
//    * 1-多伦会话
//    * 2-位置
//    * 3-小卡片(商品)
//    * 4-订单卡片
@property (nonatomic,assign) SobotMessageRichType          richType;


// 富文本数组:0：文本，1：图片，2：音频，3：视频，4：文件
// {type:0,1,2,3,msg:}
@property (nonatomic,strong) NSArray         *richList;

@property (nonatomic,copy) NSString          *richMoreUrl;//富文本内容
@property (nonatomic,copy) NSString          *thumbnail;//富文本内容
@property (nonatomic,copy) NSString          *label;//富文本内容
@property (nonatomic,strong) SobotMessageRichEntity  * richCardModel;

@property (nonatomic,strong) SobotMessageWheelEntity * multiModel;

@end

@interface SobotMessageRichEntity : SobotBaseEntity

@property(nonatomic,assign) int             type;

// 回答建议
@property (nonatomic,strong) NSArray         *goods;

@property (nonatomic,assign) int          orderStatus;//:订单状态
@property (nonatomic,copy) NSString          *orderStatusStr;//:订单状态
@property (nonatomic,copy) NSString          *orderCode;//:订单编号
@property (nonatomic,copy) NSString          *orderUrl;//:订单链接
@property (nonatomic,copy) NSString          *createTime;//:创建时间
@property (nonatomic,copy) NSString          *totalFee;//:总金额
@property (nonatomic,copy) NSString          *goodsCount;//:商品个数
@property (nonatomic,copy) NSString          *createTimeFormat;//：格式化后的时间url:位置链接地址
@property (nonatomic,copy) NSString          *title;//:位置标题
@property (nonatomic,copy) NSString          *desc;//:描述
@property (nonatomic,copy) NSString          *lng;//:经度
@property (nonatomic,copy) NSString          *lat;//:维度
@property (nonatomic,copy) NSString          *picUrl;//:位置缩略图

@property (nonatomic,copy) NSString          *snapshot;//富文本内容

@property (nonatomic,copy) NSString          *url;//富文本内容
@property (nonatomic,copy) NSString          *thumbnail;//富文本内容
@property (nonatomic,copy) NSString          *label;//富文本内容

@end


@interface SobotMessageWheelEntity : SobotBaseEntity

@property (nonatomic,copy) NSString          * conversationId;// "8a6f49a0-2148-4d6d-84f0-dacf56c1f930",多轮会话id
@property (nonatomic,copy) NSString          * docId;// 1a3a05c7025044e9a44a55e87c8dd0b9
@property (nonatomic,assign) BOOL             endFlag; // false 多轮会话是否结束
@property (nonatomic,strong) NSMutableArray   *interfaceRetList;// 问题列表
@property (nonatomic,copy) NSString          * level;
// 2.8.2  clickFlag 0: 只能点击一次，1 可以多次点击
@property (nonatomic,copy) NSString *clickFlag;
// 如果inputContentList字段不为空，显示为链接样式
@property (nonatomic,assign) BOOL   showLinkStyle;// 问题列表

@property (nonatomic,strong) NSString         * outPutParamList;// "movieId#movieId"
@property (nonatomic,copy) NSString          * retCode;//"000000",接口返回的请求状态


// 0 横向，1、标签，2竖，3富媒体 4、存文本,5、富文本 对应template
@property (nonatomic,assign) int            templateId;// 模板类型

@property (nonatomic,strong) NSMutableArray         *inputContentList;// \"北京,上海,成都\",     手动输入
@property (nonatomic,copy) NSString          *retErrorMsg;// 失败时返回的数据

@property (nonatomic,copy) NSString          *remindQuestion;// "机器人提示问题",

@property (nonatomic,copy) NSString          * msg;// 消息体，机器人的回复

@property (nonatomic,assign) BOOL            isHistoryMessages;// 是否是历史记录

@property (nonatomic,copy) NSString * answerStrip;// 引导语，多轮会话中 15239 1523 1524 时 megtype ==11 时 添加


@end

NS_ASSUME_NONNULL_END
