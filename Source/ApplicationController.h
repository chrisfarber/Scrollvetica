//
//  ApplicationController.h
//
//  Created by Jim Correia on 3/4/11.
//  Copyright 2011 Jim Correia. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class ScrollingInverterEventTap;

@interface ApplicationController : NSObject <NSApplicationDelegate> {
  @private
    ScrollingInverterEventTap *_eventTap;
    NSStatusItem *_statusItem;
    NSMenu *_statusItemMenu;
    LSSharedFileListRef _loginItemsFileList;
}

@property (nonatomic) BOOL showStatusItem;
@property (nonatomic, retain) IBOutlet NSMenu *statusItemMenu;

- (IBAction)statusItemShowAboutBox:(id)sender;
- (IBAction)toggleLaunchAutomaticallyAtLogIn:(id)sender;
- (IBAction)toggleInvertScrollEvents:(id)sender;

@end
