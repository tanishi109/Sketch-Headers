//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MSCloudExportable <NSObject>
- (void)setIsMarkedForCloudExport:(BOOL)arg1;
- (long long)includeForCloudExportState;
- (NSString *)objectID;
- (NSString *)name;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
- (BOOL)hasChildren;
@end

