//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString;

@interface NSView (MUIAdditions)
- (id)_briefDescriptionWithoutPII;	// IMP=0x000000000001c8a1
- (id)_subtreeDescriptionWithoutPIIWithDepth:(unsigned long long)arg1;	// IMP=0x000000000001c653
@property(readonly, copy, nonatomic) NSString *subtreeDescriptionWithoutPII;
- (BOOL)mui_centeredScrollRectToVisible:(struct CGRect)arg1;	// IMP=0x000000000001c440
- (void)mui_cancelSynchronousLayout;	// IMP=0x000000000001c313
- (void)mui_performLayoutSynchronously;	// IMP=0x000000000001c1e6
- (void)mui_prepareToLayoutSynchronously:(CDUnknownBlockType)arg1;	// IMP=0x000000000001be19
- (void)mui_cancelAnimation;	// IMP=0x000000000001bcec
- (void)mui_performAnimation;	// IMP=0x000000000001bbbf
- (void)mui_prepareToAnimate:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b7f2
- (void)mui_didCacheDisplayInRect;	// IMP=0x000000000001b6c5
- (void)mui_prepareToCacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b0ae
- (void)mui_cacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ac9b
@end

