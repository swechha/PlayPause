//
//  PanelController.h
//  MenuReminders
//
//  Created by Rounak on 29/11/12.
//  Copyright (c) 2012 Rounak. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Background.h"


@interface PanelController : NSWindowController <NSWindowDelegate>
{
    __unsafe_unretained Background *_background;
}


@property (getter = hasActivePanel, setter = setActivePanel:) BOOL hasActivePanel;
@property IBOutlet NSTextField *songLabel;
@property IBOutlet NSTextField *artistLabel;
@property IBOutlet NSImageView *albumArt;
@property IBOutlet NSView *controlsView;
@property IBOutlet NSView *songInfoView;
@property IBOutlet NSImage *nextImage;
@property IBOutlet NSImage *previousImage;
@property IBOutlet NSImage *playImage;
@property IBOutlet NSImage *pauseImage;
@property IBOutlet NSButton *nextButton;
@property IBOutlet NSButton *prevButton;
@property IBOutlet NSButton *playPauseButton;
@property IBOutlet NSSlider *volumeSlider;
@property (nonatomic, unsafe_unretained) IBOutlet Background *background;

-(IBAction)nextTrack:(id)sender;
-(IBAction)previousTrack:(id)sender;
-(IBAction)playToggle:(id)sender;
-(IBAction)sliderMoved:(id)sender;
- (id)init;
@end

