//
//  ADPageControl.h
//  DianzikedaBookStore
//
//  Created by Adward on 14-4-21.
//  Copyright (c) 2014年 BeiJing Mouee Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADPageControl : UIPageControl
//{
//    UIImage *_activeImage;
//    UIImage *_inactiveImage;
//}
@property (nonatomic,assign) float _kSpacing;
- (id)initWithFrame:(CGRect)frame currentImageName:(NSString *)current commonImageName:(NSString *)common;
@end
