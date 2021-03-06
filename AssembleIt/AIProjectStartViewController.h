//
//  AIProjectStartViewController.h
//  AssembleIt
//
//  Created by Evian张 on 2019/3/8.
//  Copyright © 2019 Evian张. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "AIPrefix.h"

NS_ASSUME_NONNULL_BEGIN

@interface AIProjectStartViewController : NSViewController <NSTextFieldDelegate>

@property (nonatomic) IBOutlet NSTextField *projectNameField;
@property (nonatomic) IBOutlet NSButton *okButton;
@property (nonatomic) IBOutlet NSButton *cancelButton;

@end

NS_ASSUME_NONNULL_END
