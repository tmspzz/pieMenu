//
//  pieSlice.h
//  pieMenu
//
//  Created by Tommaso Piazza on 2/17/12.
//  Copyright (c) 2012 ChalmersTH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface pieSliceView : UIView
{
    CGPoint _center;
    CGFloat _radius;
    CGFloat _angle;
    CGFloat _lineWidth;
    UIColor* _color;
}

@property (strong, atomic) UIColor* color;

+ (pieSliceView *) sliceWithFrame:(CGRect) frame angle:(CGFloat) angle;
+ (UIColor *) defaultColor;
-(id) initWithFrame:(CGRect)frame angle:(CGFloat) angle;
- (void) changeColor:(UIColor *) newColor;
@end
