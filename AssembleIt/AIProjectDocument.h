//
//  AIProjectDocument.h
//  AssembleIt
//
//  Created by Evian张 on 2019/3/4.
//  Copyright © 2019 Evian张. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "AIPrefix.h"
#import "AIProjectViewController.h"
#import "AIProjectWindowController.h"
#import "AIOpenSavePanelAccessoryViewController.h"
#import "AIFileNode.h"

NS_ASSUME_NONNULL_BEGIN

@interface AIProjectDocument : NSDocument <NSOpenSavePanelDelegate>

@property (nonatomic) AIOpenSavePanelAccessoryViewController *accessoryViewController;
@property (nonatomic) NSString *projectName;
@property (nonatomic, strong) NSMutableDictionary *projectContents;
@property (nonatomic, strong) NSMutableDictionary<NSURL *, NSMutableDictionary *> *fileInfos;
@property (nonatomic) AIPanelStatus panelStatus;

@end

NS_ASSUME_NONNULL_END

