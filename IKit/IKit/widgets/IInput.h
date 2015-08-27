/*
 Copyright (c) 2014 ideawu. All rights reserved.
 Use of this source code is governed by a license that can be
 found in the LICENSE file.
 
 @author:  ideawu
 @website: http://www.cocoaui.com/
 */

#import "IView.h"

@interface IInput : IView

+ (IInput *)textInput;
+ (IInput *)passwordInput;
+ (IInput *)numberInput;

@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic) NSString *value;
@property (nonatomic) NSString *placeholder;

- (BOOL)isPasswordInput;
- (BOOL)isNumberInput;
- (void)setIsPasswordInput:(BOOL)yesno;

@end
