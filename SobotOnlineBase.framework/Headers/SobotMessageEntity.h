//
//  SobotMessageEntity.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/23.
//  Copyright © 2020 sobot. All rights reserved.
//


#import "SobotMessageDetailEntity.h"

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger,SobotMessageAction) {
    
    /**用户下线*/
    SobotMessageAction_UserOffline     = 108,
    /**
     *  用户正在输入
     */
    SobotMessageAction_UserWriting     = 111,
    /**
     *  收到新消息
     */
    SobotMessageAction_UserReceived    = 103,
    /**
     *  客服被下线
     */
    SobotMessageAction_Offline         = 109,
    /**
     *  新用户进入
     */
    SobotMessageAction_NewUser         = 102,
    /**
     *  排队数量
     */
    SobotMessageAction_WaitingNums     = 110,
    /**
     *  用户发起通话请求
     */
    SobotMessageAction_UserCallRequest = 112,
    /**
     *  用户浏览轨迹
     */
    SobotMessageAction_UserBrowseTrack = 114,
    
    /**
     *  用户评价完成
     */
    SobotMessageAction_UserFeedback = 116,
    
    /**
     *  配置信息改变(服务总结开关)
     */
    SobotMessageAction_ConfigChangedSummary = 135,
    /**
     * 状态切换申请被操作后给客服推送消息,{"type":122,"flag":1,"auditStaff":"张晓","status":2},//flag标记  1-通过 2-驳回 3-待审核
     */
    SobotMessageAction_AUDIT_STATUS_SERVICE = 122,
    /**
     * 客服申请切换状态时推送消息给负责人
     */
    SobotMessageAction_SERVICE_CUT_STATUS = 123,
    /**
     * 会话转接 请求
     */
    SobotMessageAction_TRANSFER_AUDIT_REQUEST = 124,

    /**
     * 会话转接 审批结果
     */
    SobotMessageAction_TRANSFER_AUDIT_RETURN = 125,
    
    /**
     * 消息撤回
     */
    SobotMessageAction_UnDo       = 211,
    
    /**
     * 客服上线
     */
    SobotMessageAction_ADMIN_ONLINE= 1,
    /**
     * 客服下线
     */
    SobotMessageAction_ADMIN_OFFLINE = 2,
    /**
     * 用户初始化
     */
    SobotMessageAction_ADMIN_USER_INIT = 3,  // 新增 1.0.2
    /**
     * 用户和机器人客服建立会话
     */
    SobotMessageAction_USER_ROBOT_ONLINE = 4,
    /**
     * 聊天记录
     */
    SobotMessageAction_CHAT= 5,
    /**
     * 用户请求由机器人转人工客服
     */
    SobotMessageAction_SOBOT_TRANSFER_ADMIN = 6,
    /**
     * 用户排队
     */
    SobotMessageAction_USER_QUEUE = 7,
    /**
     * 用户与客服建立会话
     */
    SobotMessageAction_USER_ADMIN_CONNECTED = 8,
    /**
     * 客服间会话转接
     */
    SobotMessageAction_ADMIN_TRANSFER_ADMIN = 9,
    /**
     * 用户下线
     */
    SobotMessageAction_USER_OFFLINE= 10,
    
    /**
     * 加入黑名单
     */
    SobotMessageAction_ADD_BLACKLIST = 11,
    
    /**
     * 移除黑名单
     */
    SobotMessageAction_DELETE_BLACKLIST = 12,
    
    /**
     * 响应时间
     */
    SobotMessageAction_RESPONSE_TIME = 13,
    
    /**
     * 服务时间
     */
    SobotMessageAction_INTERVAL_TIME = 14,
    
    /**
     * 管理员忙碌
     */
    SobotMessageAction_ADMIN_BUSY = 15,
    /**
     * 添加标星
     */
    SobotMessageAction_ADD_MARKLIST = 16,
    /**
     * 移除标星
     */
    SobotMessageAction_DELETE_MARKLIST = 17,
    /**
     * 客户打电话申请application calls
     */
    SobotMessageAction_USRE_APPLICATION_CALLS = 18,
    /**
     * 客服给用户回拨电话
     */
    SobotMessageAction_ADMIN_CALL_BACK = 19,
    /**
     * 用户进入页面访问
     */
    SobotMessageAction_USER_VISIT_BY_TITLE = 20,
    /**
     * 客服邀请用户建立会话
     */
    SobotMessageAction_ADMIN_CONNECTED_USER = 21,
    /**
     * 客服由忙碌转为上线
     */
    SobotMessageAction_ADMIN_TOBE_ONLINE = 22,
    /**
     * 用户评价
     */
    SobotMessageAction_USER_COMMENT = 23, // 客户已对「znw」的服务进行了评价
    /**
     * 自动应答语  向用户发送系统消息
     */
    SobotMessageAction_Auto_Tips = 25,
    /**
     *  用户会话被锁定
     */
    SobotMessageAction_USER_BE_LOCK = 26, // 1.0.2新增
    /**
     *  用户会话被解锁
     */
    SobotMessageAction_USER_UN_LOCK = 27,// 1.0.2新增
    /**
     *  用户会话转人工标识
     */
    SobotMessageAction_TO_ADMIN  = 28,// 1.0.2新增
    /**
     *  用户收到系统消息--仅用户可见
     */
    SobotMessageAction_USER_GET_SYS_MSG = 29,// 1.0.2新增
    
    /**
     *   转接申请
     **/
    SobotMessageAction_TRANSFERAUDIA = 30,// 1.0.2新增
    
    /**
     *   转接审核
     **/
    SobotMessageAction_TRANSRER_REVIEW = 31,// 1.0.2新增
    /**
     *   客服发起远程协助
     **/
    SobotMessageAction_REMOTE_ADMIN_LAUNCH = 32,// 1.0.2新增
    /**
     *   客服开始远程协助
     **/
    SobotMessageAction_REMOTE_ADMIN_START = 33,// 1.0.2新增
    /**
     *   客服取消远程协助
     **/
    SobotMessageAction_REMOTE_ADMIN_CANCEL = 34,// 1.0.2新增
    /**
     *   客服结束远程协助
     **/
    SobotMessageAction_REMOTE_ADMIN_END = 35,// 1.0.2新增
    /**
     *   客户接受远程协助
     **/
    SobotMessageAction_REMOTE_USER_ACCEPT = 36,// 1.0.2新增
    /**
     *   客户拒绝远程协助
     **/
    SobotMessageAction_REMOTE_USER_REFUSE = 37,// 1.0.2新增
    /**
     *   客户结束远程系统
     **/
    SobotMessageAction_REMOTE_USER_END = 38,// 1.0.2新增
    /**
     *   超管结束远程协助
     **/
    SobotMessageAction_REMOTE_SUPER_END = 39,// 1.0.2新增
    /**
     *   头条用户离线
     **/
    SobotMessageAction_TT_TO_ADMIN_SYS_MSG = 40,// 1.0.2新增
    /**
     *   头条用户进线
     **/
    SobotMessageAction_TT_SYS_IN_PAGE_MSG = 41,// 1.0.2新增
    /**
     *   用户触发了转人工操作
     **/
    SobotMessageAction_MSG_TYPE_USER_TRANSFER_ACTION  = 42,// 1.0.2新增
    /**
     *   用户咨询页授权
     **/
    SobotMessageAction_CONSULT_AUTH_SAFETY  = 43,// 1.0.2新增
    /**
     *   用户同意敏感词授权
     **/
    SobotMessageAction_SENSITIVE_AUTH_AGREE  = 44,// 1.0.2新增
    /**
     *   用户拒绝敏感词授权
     **/
    SobotMessageAction_SENSITIVE_AUTH_REFUSE  = 45,// 1.0.2新增
    /**
     *   主动邀请评价之后提示
     **/
    SobotMessageAction_EVALUATE1 = 98,
    
    /**
     * 未送达
     */
    SobotMessageAction_UN_DEIVED = 117,
    
    /**
     *  被抢接
     */
    SobotMessageAction_OtherReceived   = 118,
    
    /**
     *  敏感词提示
     **/
    SobotMessageAction_SENSITIVE = 99,
};



/**
 *  聊天消息model
 */
@interface SobotMessageEntity : SobotBaseEntity

// 会话时间
@property (nonatomic , strong) NSString *msgId;

// 是否撤回，如果==1，已经被撤回
@property (nonatomic , assign) int      revokeFlag;


// 会话时间
@property (nonatomic , strong) NSString *date;

// 内容
@property (nonatomic , strong) NSString *tempContent;

// 会话id
@property (nonatomic , strong) NSString *cid;

//会话类型0，用户，1机器人 2客服
@property (nonatomic , assign) SobotMessageAction      action;

//用户id
@property (nonatomic , strong) NSString *sender;

//用户名称
@property (nonatomic , strong) NSString *senderName;

//发送,0，客户，1机器人，2客服
@property (nonatomic , assign) int      senderType;

//头像
@property (nonatomic , strong) NSString *senderFace;

//发送时间戳 -long
@property (nonatomic , strong) NSString *t;

//发送时间
@property (nonatomic , strong) NSString *ts;

//客服ID
@property (nonatomic , strong) NSString *receiver;

//客服名称
@property (nonatomic , strong) NSString *receiverName;

//下线类型
@property (nonatomic , assign) int      offlineType;

//客服头像
@property (nonatomic , strong) NSString *receiverFace;

// 是否已读，YES是已读，NO是未读
@property (nonatomic , assign) BOOL isRead;


// 上传进度
@property (nonatomic , assign) CGFloat progress;

// 发送状态，1 开始发送，2发送失败，0，发送完成，117未送达
@property (nonatomic , assign) int sendStatus;


@property (nonatomic , strong) SobotMessageDetailEntity *richMessage;


// 提醒,上下线等
@property (nonatomic , strong) NSString *sysTips;
@property (nonatomic , strong) NSString *title;

// 声音是否正在播放
@property (nonatomic , assign) BOOL     isPlaying;
// 输入中
@property (nonatomic , assign) BOOL     isWriting;


// 用户userId,缓存使用
@property (nonatomic , strong) NSString *userId;


@property (nonatomic , assign) BOOL     isHistory;
@property (nonatomic , assign) BOOL     isRichMsg;

// 显示时间，临时使用
@property (nonatomic , strong) NSString *showTime;

@property (nonatomic,assign) BOOL userNoSeeFlag;// 历史记录中是否是敏感词

@property (nonatomic,copy) NSString *msg;

@property (nonatomic,copy) NSMutableAttributedString    *attr;

-(NSString *) getActionMsg:(SobotMessageAction ) action;

-(NSString *)getLastMessage;

@end

NS_ASSUME_NONNULL_END
