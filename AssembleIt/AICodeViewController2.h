//
//  AICodeViewController2.h
//  AssembleIt
//
//  Created by Evian张 on 2019/3/3.
//  Copyright © 2019 Evian张. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "AIRulerView.h"

NS_ASSUME_NONNULL_BEGIN

@interface AICodeViewController2 : NSViewController

@property (nonatomic) IBOutlet NSTextView *codeView;
@property (nonatomic) IBOutlet NSScrollView *scrollView;

@property (nonatomic) NSString* content;

@end

NS_ASSUME_NONNULL_END
