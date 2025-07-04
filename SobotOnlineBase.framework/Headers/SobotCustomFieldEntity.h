//
//  SobotCustomFieldEntity.h
//  SobotOnline
//
//  Created by zhangxy on 2020/9/6.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCustomFieldEntity : SobotBaseEntity

//field_type ：1 单行文本 2 多行文本 3 日期 4 时间 5 数值 6 下拉列表 7 复选框 8 单选框 9 级联字段
//fill_flag：是否必填 0 否 1 是
//field_remark：字段描述
//field_name：字段标题

@property (nonatomic,strong) NSString * text;// 男

@property (nonatomic,strong) NSString * value;// 1
@property (nonatomic,strong) NSString * dataValue;// 1
@property (nonatomic,strong) NSString * dataName;// 1
@property (nonatomic,assign) BOOL isChecked;

@property (nonatomic,strong) NSString * title;// 性别


@property (nonatomic,strong) NSString * companyId;

@property (nonatomic,strong) NSString * fieldId;    // 自定义字段ID

@property (nonatomic,strong) NSString * fieldName;  // 自定义字段昵称
// 临时数据
@property (nonatomic,strong) NSString * fieldValue;  // 自定义字段显示值
@property (nonatomic,strong) NSString * fieldSaveValue;  // 自定义字段上传值

// 1禁止输入空格   2 禁止输入小数点  3 小数点后只允许2位  4 禁止输入特殊字符  5只允许输入数字 6最多允许输入字符  7判断邮箱格式  8判断手机格式
@property (nonatomic,strong) NSString * limitOptions;

@property (nonatomic,strong) NSString * fieldRemark;

@property (nonatomic,strong) NSString * fieldStatus;

@property (nonatomic,strong) NSString * fieldType;

@property (nonatomic,strong) NSString * fieldVariable;

@property (nonatomic,strong) NSString * fillFlag;

@property (nonatomic,strong) NSString * openFlag;

@property (nonatomic,strong) NSString * operateType;

@property (nonatomic,strong) NSString * sortNo;

@property (nonatomic,strong) NSString * workShowFlag;

@property (nonatomic,strong) NSString * workSortNo;




@property (nonatomic,strong) NSMutableArray * cusFieldDataInfoListArr;// 多选，下拉列表字段存储
@property (nonatomic,strong) NSMutableArray * cusArray;// 多选，下拉列表字段存储
@property (nonatomic,strong) NSMutableArray * detailArray;// 多选，下拉列表字段存储

@property (nonatomic,copy) NSString * tempOpenFlag;// 工单分类模板中是否开启当前字段

// queryFlag 下拉列表字段 是否开启模糊收索 在新建工单和编辑工单使用   0和1
@property (nonatomic,assign) int  queryFlag;

// 表单型组合字段
@property (nonatomic,strong) NSMutableArray * combinFormFieldListArr;

// 级别 最多三级
@property (nonatomic,assign) int  fieldLevel;


// 存放组合字段的数据
@property (nonatomic,strong) NSMutableArray * comBinArr;

// "operateUnitId1":"ab963e2f90ae414f8c691efeb0ee8a15",
// "operateUnitId2":"8cc4f24d0a6742a0ba5eea31d0b8594e",
//"computedUnit":2,   1 相加  2 相乘
@property (nonatomic,copy) NSString * operateUnitId1;

@property (nonatomic,copy) NSString * operateUnitId2;

@property (nonatomic,assign) int  computedUnit;

@property (nonatomic,strong) SobotCustomFieldEntity * clearComModel;// 空model，用于增加新数据。

@property (nonatomic,assign) CGFloat  reultNum; // 合计的值


@property (nonatomic,copy) NSString * dataID;// 级联字段 查询下一级用参数

@property (nonatomic,copy) NSString * relatedField;// 级联字段的id 同上一级的fieldID 相同

@property (nonatomic,copy) NSString * summary; // 和值 【xxx】[xxx] 合计：88

@property (nonatomic,assign) int  relatedFlag;// 是否开启 关联赋值  1 开启 0 关闭

@property (nonatomic,copy) NSString * numerical;// 2级 3级 级联字段 的影藏赋值 关联赋值

@property (nonatomic,copy) NSString * optionValue;// 1级分类中 关联赋值

@property (nonatomic,assign) int numericalFlag;// 是否开启合计 0 关闭 1 开启


@end

NS_ASSUME_NONNULL_END
