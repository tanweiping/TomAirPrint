//
//  Model.h
//  printManagerTest
//
//  Created by tanweiping on 17/10/14.
//  Copyright © 2017年 tanweiping. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Model : NSObject
@property (nonatomic,copy) NSString* nameStr;
@property (nonatomic,copy) NSString* numberStr;
@property (nonatomic,copy) NSString* orderstr;
/**
 *  初始化方法
 *
 *  @param nameStr         姓名
 *  @param numberStr       序列号
 *  @param orderStr        订单号
 *
 *  @return                模型对象
 */
-(instancetype)initWithNameStr:(NSString*)nameStr numberStr:(NSString*)numberStr orderStr:(NSString*)orderStr;
@end
