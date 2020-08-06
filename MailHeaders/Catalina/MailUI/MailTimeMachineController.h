//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TerminationHandler-Protocol.h"

@class MessageViewer, NSString, NSTimer;

@interface MailTimeMachineController : NSObject <TerminationHandler>
{
    id _tableOfContentsSaveLock;	// 8 = 0x8
    NSTimer *_tableOfContentsSaveTimer;	// 16 = 0x10
    BOOL _savingTOC;	// 24 = 0x18
    MessageViewer *_messageViewer;	// 32 = 0x20
    struct CGRect _originalMailWindowFrame;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x000000010000314e
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001cd4d1
+ (id)log;	// IMP=0x00000001001cd474
@property(nonatomic) struct CGRect originalMailWindowFrame; // @synthesize originalMailWindowFrame=_originalMailWindowFrame;
@property(nonatomic) BOOL savingTOC; // @synthesize savingTOC=_savingTOC;
@property(retain, nonatomic) MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
// - (void).cxx_destruct;	// IMP=0x00000001001cfd9d
- (void)relinquishTimeMachineAccess;	// IMP=0x00000001001cfd17
- (void)exitTimeMachine;	// IMP=0x00000001001cfa7c
- (void)prepareToExitTimeMachineModeWithDisplayState:(id)arg1;	// IMP=0x00000001001cf8ac
- (void)enterTimeMachineMode;	// IMP=0x00000001001cf80c
- (unsigned char)_launchTimeMachineHelperApp;	// IMP=0x00000001001ce258
- (id)_mailTimeMachineDescriptionForMessage:(id)arg1 withColumns:(id)arg2 selected:(BOOL)arg3;	// IMP=0x00000001001cdbd5
- (void)_threadedSaveTableOfContentsApprovedQuit:(BOOL)arg1;	// IMP=0x00000001001cda92
- (BOOL)_timingOutSaveTableOfContents;	// IMP=0x00000001001cd86f
- (void)_threadedSaveTableOfContentsEnded:(id)arg1;	// IMP=0x00000001000854bc
- (void)_thread_saveTableOfContents:(id)arg1;	// IMP=0x000000010008510f
- (void)_saveTableOfContents;	// IMP=0x0000000100085348
- (void)_approvedQuit;	// IMP=0x0000000100094d18
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;	// IMP=0x0000000100094c3f
- (void)unregisterTimeMachineHandlers;	// IMP=0x0000000100095d6e
- (void)registerTimeMachineHandlers;	// IMP=0x00000001000032ac
- (void)disableTableOfContentsSaveTimer:(BOOL)arg1;	// IMP=0x00000001001cd75c
- (void)_setTableOfContentsTimer:(id)arg1;	// IMP=0x000000010007d623
- (void)_setTableOfContentsIsValid:(BOOL)arg1;	// IMP=0x000000010007d4fb
- (void)forceSaveTableOfContentsNow;	// IMP=0x00000001001cd729
- (void)_saveTableOfContents:(id)arg1;	// IMP=0x00000001001cd6a3
- (void)_invalidateTableOfContents:(id)arg1;	// IMP=0x000000010007d486
- (void)_invalidateTableOfContentsAndBackupManager:(id)arg1;	// IMP=0x000000010007d400
- (void)registerNotificationHandlers;	// IMP=0x0000000100040633
- (void)dealloc;	// IMP=0x00000001001cd58b
- (id)init;	// IMP=0x0000000100003207

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
