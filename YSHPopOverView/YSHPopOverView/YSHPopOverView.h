//
//  YSHPopOverView.h
//  YSHPopOverView
//
//  Created by 杨上海 on 16/5/21.
//  Copyright © 2016年 杨上海. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>

typedef NS_ENUM(NSUInteger,WBArrowDirection){
    
    //箭头位置
    WBArrowDirectionLeft1 = 1, //左上
    WBArrowDirectionLeft2,     //左中
    WBArrowDirectionLeft3,     //左下
    WBArrowDirectionRight1,    //右上
    WBArrowDirectionRight2,    //右中
    WBArrowDirectionRight3,    //右下
    WBArrowDirectionUp1,       //上左
    WBArrowDirectionUp2,       //上中
    WBArrowDirectionUp3,       //上右
    WBArrowDirectionDown1,     //下左
    WBArrowDirectionDown2,     //下中
    WBArrowDirectionDown3,     //下右
    
};


@interface YSHPopOverView : UIView

@property (nonatomic, strong) UIView *backView;

-(instancetype)initWithOrigin:(CGPoint)origin Width:(CGFloat)width Height:(float)height Direction:(WBArrowDirection)direction;//初始化

-(void)popView;//弹出视图
-(void)dismiss;//隐藏视图

@end
