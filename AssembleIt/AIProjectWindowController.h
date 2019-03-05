//
//  AIProjectWindowController.h
//  AssembleIt
//
//  Created by Evian张 on 2019/3/5.
//  Copyright © 2019 Evian张. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "AIProjectViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface AIProjectWindowController : NSWindowController

@property (nonatomic) AIProjectViewController *projectViewController;

@end

NS_ASSUME_NONNULL_END