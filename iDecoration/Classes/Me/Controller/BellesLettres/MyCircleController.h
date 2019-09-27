//
//  MyCircleController.h
//  iDecoration
//
//  Created by 丁 on 2018/3/16.
//  Copyright © 2018年 RealSeven. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyCircleController : SNViewController
@property (nonatomic, assign) BOOL isHavePower;

@property (copy, nonatomic) NSString *agencyId; //名片主人的id

@property (nonatomic,assign) BOOL  isCuste; //dxp 进入全部文章界面还是本来界面
//bys 创建人员id
@property (copy, nonatomic) NSString *myAgencysId;
// 公司id
@property (copy, nonatomic) NSString *myCompanyId;
// 个人美文还是公司美文
@property (copy, nonatomic) NSString *myType;
// 美文id
@property (copy, nonatomic) NSString *myDesignsId;
// 推荐美文id
@property (copy, nonatomic) NSString *recommendDesign;

@property (copy, nonatomic) NSString *myFlag;

@end