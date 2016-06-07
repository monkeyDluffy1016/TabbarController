//
//  LCTabBarItem.h
//  LCTabBarControllerDemo
//
//  Created by Leo on 15/12/2.
//  Copyright © 2015年 Leo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LCTabBarItem : UIButton

@property (nonatomic, strong) UITabBarItem *tabBarItem;

@property (nonatomic, assign) NSInteger tabBarItemCount;

/**
 *  Tabbar item title color
 */
@property (nonatomic, strong) UIColor *itemTitleColor;

/**
 *  Tabbar selected item title color
 */
@property (nonatomic, strong) UIColor *selectedItemTitleColor;

/**
 *  Tabbar item title font
 */
@property (nonatomic, strong) UIFont *itemTitleFont;

/**
 *  Tabbar item's badge title font
 */
@property (nonatomic, strong) UIFont *badgeTitleFont;

/**
 *  Tabbar item image ratio
 */
@property (nonatomic, assign) CGFloat itemImageRatio;

- (instancetype)initWithItemImageRatio:(CGFloat)itemImageRatio;

- (instancetype)initWithFrame:(CGRect)frame;
- (CGRect)titleRectForContentRect:(CGRect)contentRect;
- (CGRect)imageRectForContentRect:(CGRect)contentRect ;
- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context;
- (void)setTabBarItem:(UITabBarItem *)tabBarItem;
- (void)setTabBarItemCount:(NSInteger)tabBarItemCount;
- (void)setBadgeTitleFont:(UIFont *)badgeTitleFont;
- (void)setSelectedItemTitleColor:(UIColor *)selectedItemTitleColor;
- (void)setItemTitleColor:(UIColor *)itemTitleColor;
- (void)setItemTitleFont:(UIFont *)itemTitleFont;

@end



