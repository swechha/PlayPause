//
//  PanelController.h
//  MenuReminders
//
//  Created by Rounak on 29/11/12.
//  Copyright (c) 2012 Rounak. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PanelController : NSWindowController


@property (getter = hasActivePanel, setter = setActivePanel:) BOOL hasActivePanel;
@property IBOutlet NSTextField *songLabel;
@property IBOutlet NSTextField *artistLabel;
@property IBOutlet NSImageView *albumArt;
@end

