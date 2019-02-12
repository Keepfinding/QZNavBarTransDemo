//
//  UINavigationController+QZCategory.h
//  QZNavBarTransDemo
//
//  Created by Stephen Hu on 2018/12/10.
//  Copyright © 2018 Stephen Hu. All rights reserved.
//  参考https://www.jianshu.com/p/454b06590cf1 swift版本翻译的，后来发现有人写过https://github.com/90ck/CKNavSmoothDemo oc版本

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UINavigationController (QZCategory)<UINavigationBarDelegate, UINavigationControllerDelegate>
@end
@interface UIViewController (QZCategory)

/** 导航栏背景透明度*/
@property (assign, nonatomic) CGFloat navBarBgAlpha;
/** 文字和图标的颜色*/
@property (nonatomic, strong) UIColor *navBarTintColor;
/** 标题颜色*/
@property (nonatomic, strong) UIColor *navTitleColor;
/** 导航栏分割线显隐,不设置的话默认显示*/
@property (assign, nonatomic) BOOL showNavShadowLine;
@end
NS_ASSUME_NONNULL_END
