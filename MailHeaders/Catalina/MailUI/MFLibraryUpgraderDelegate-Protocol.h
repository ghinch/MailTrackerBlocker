//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MFLibraryUpgrader, NSError;

@protocol MFLibraryUpgraderDelegate <NSObject>
- (void)upgrader:(MFLibraryUpgrader *)arg1 didFailWithError:(NSError *)arg2;
- (void)upgraderDidFinish:(MFLibraryUpgrader *)arg1;
@end
