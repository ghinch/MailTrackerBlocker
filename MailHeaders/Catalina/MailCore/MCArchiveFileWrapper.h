//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCFileWrapper.h>

@class NSData, NSProgress, NSURL;

@interface MCArchiveFileWrapper : MCFileWrapper
{
    MCFileWrapper *_realFileWrapper;	// 56 = 0x38
    NSData *_archiveData;	// 64 = 0x40
    long long _archiveType;	// 72 = 0x48
    NSURL *_compressedFileURL;	// 80 = 0x50
    unsigned long long _approximateSize;	// 88 = 0x58
    NSProgress *_overallProgress;	// 96 = 0x60
    NSProgress *_fileProgress;	// 104 = 0x68
}

+ (BOOL)supportsSecureCoding;	// IMP=0x000000000003dd56
+ (id)log;	// IMP=0x000000000003c708
@property(retain, nonatomic) NSProgress *fileProgress; // @synthesize fileProgress=_fileProgress;
@property(retain, nonatomic) NSProgress *overallProgress; // @synthesize overallProgress=_overallProgress;
@property(nonatomic) unsigned long long approximateSize; // @synthesize approximateSize=_approximateSize;
@property(readonly, nonatomic) NSURL *compressedFileURL; // @synthesize compressedFileURL=_compressedFileURL;
@property(readonly, nonatomic) long long archiveType; // @synthesize archiveType=_archiveType;
@property(readonly, nonatomic) NSData *archiveData; // @synthesize archiveData=_archiveData;
// - (void).cxx_destruct;	// IMP=0x000000000003671c
- (void)getCompressedData:(id *)arg1 compressedFileURL:(id *)arg2 archiveType:(long long *)arg3;	// IMP=0x000000000003e67f
- (id)preferredFilename;	// IMP=0x00000000000357ab
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;	// IMP=0x000000000003e5e6
- (id)keyForFileWrapper:(id)arg1;	// IMP=0x000000000003e489
- (id)fileWrappers;	// IMP=0x000000000003e439
- (void)removeFileWrapper:(id)arg1;	// IMP=0x000000000003e2ed
- (id)addFileWrapper:(id)arg1;	// IMP=0x000000000003e190
- (id)serializedRepresentation;	// IMP=0x000000000003e140
- (BOOL)isSymbolicLink;	// IMP=0x000000000003e138
- (BOOL)isDirectory;	// IMP=0x00000000000358ed
- (BOOL)isRegularFile;	// IMP=0x000000000003e130
- (unsigned long long)approximateSizeAllowingDiskIO:(BOOL)arg1;	// IMP=0x000000000003e0e2
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000358f8
- (id)_temporaryDirectoryURL;	// IMP=0x000000000003df7e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003debf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003dd61
- (id)initWithSerializedRepresentation:(id)arg1;	// IMP=0x000000000003dc87
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;	// IMP=0x000000000003dbb8
- (id)initRegularFileWithContents:(id)arg1;	// IMP=0x000000000003dae9
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000003da1a
- (id)initWithURL:(id)arg1 compressionLevel:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000003cb45
- (id)initDirectoryWithFileWrappers:(id)arg1;	// IMP=0x000000000003cb16
- (id)initWithData:(id)arg1 archiveType:(long long)arg2;	// IMP=0x00000000000356be
@property(readonly, nonatomic) MCFileWrapper *realFileWrapper;

@end

