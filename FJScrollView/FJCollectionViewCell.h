//
//  SDCollectionViewCell.h
//  FJScrollView
//
//  Created by JohnGump on 15-3-22.
//  Copyright (c) 2015年 FJ. All rights reserved.
//





#import <UIKit/UIKit.h>

@interface FJCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *title;

@property (nonatomic, strong) UIColor *titleLabelTextColor;
@property (nonatomic, strong) UIFont *titleLabelTextFont;
@property (nonatomic, strong) UIColor *titleLabelBackgroundColor;
@property (nonatomic, assign) CGFloat titleLabelHeight;

@property (nonatomic, assign) BOOL hasConfigured;

@end
