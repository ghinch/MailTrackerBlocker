//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (HFSDataConversion)
+ (unsigned long long)quotedPrintableLengthOfHeaderBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000006bffc
- (id)wrapperForBinHex40DataWithFileEncodingHint:(unsigned long long)arg1;	// IMP=0x000000000005179a
- (id)wrapperForAppleFileDataWithFileEncodingHint:(unsigned long long)arg1;	// IMP=0x00000000000301ec
- (id)encodeQuotedPrintableForText:(BOOL)arg1 allowCancel:(BOOL)arg2;	// IMP=0x000000000006bb77
- (id)decodeQuotedPrintableForText:(BOOL)arg1;	// IMP=0x000000000000ccc9
- (struct _NSRange)rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000000b03b
- (struct _NSRange)rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000031d02
- (struct _NSRange)rangeOfCString:(const char *)arg1;	// IMP=0x000000000000d1fd
@property(readonly, nonatomic) struct _NSRange rangeOfRFC822HeaderData;
- (id)initWithDataConvertingLineEndingsFromNetworkToUnix:(id)arg1;	// IMP=0x0000000000020179
- (id)initWithDataConvertingLineEndingsFromUnixToNetwork:(id)arg1;	// IMP=0x0000000000010bd6
- (id)uuencodedDataWithFile:(id)arg1 mode:(unsigned int)arg2;	// IMP=0x000000000009e6d4
- (id)uudecodedDataIntoFile:(id *)arg1 mode:(unsigned int *)arg2;	// IMP=0x000000000009e0db
@end

