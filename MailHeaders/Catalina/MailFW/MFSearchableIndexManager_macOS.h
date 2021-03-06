//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDSearchableIndexManager.h>

@class EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler;

@interface MFSearchableIndexManager_macOS : EDSearchableIndexManager
{
    EDSearchableIndex *_index;	// 8 = 0x8
    EDSearchableIndexPersistence *_persistence;	// 16 = 0x10
    EDSearchableIndexScheduler *_scheduler;	// 24 = 0x18
}

@property(retain, nonatomic) EDSearchableIndexScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) EDSearchableIndexPersistence *persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) EDSearchableIndex *index; // @synthesize index=_index;
// - (void).cxx_destruct;	// IMP=0x00000000001fca9d
- (void)enableIndexingAndBeginScheduling:(BOOL)arg1 budgetConfiguration:(id)arg2;	// IMP=0x00000000001fc879
- (void)enableIndexingAndBeginScheduling:(BOOL)arg1;	// IMP=0x00000000001fc821
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;	// IMP=0x00000000001fc76e

@end

