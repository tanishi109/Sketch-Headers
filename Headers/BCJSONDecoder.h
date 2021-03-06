//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSJSONUnarchiver, NSDictionary, NSError;

@interface BCJSONDecoder : NSObject
{
    id _userInfo;
    NSError *_error;
    id <BCJSONDecoderDelegate> _delegate;
    NSObject *_root;
    NSDictionary *_currentObjectDict;
}

+ (id)decodeFileAtURL:(id)arg1 error:(id *)arg2;
+ (id)decodeData:(id)arg1 error:(id *)arg2;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
@property(retain, nonatomic) NSDictionary *currentObjectDict; // @synthesize currentObjectDict=_currentObjectDict;
@property(retain, nonatomic) NSObject *root; // @synthesize root=_root;
@property(nonatomic) __weak id <BCJSONDecoderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)decode:(id *)arg1;
- (id)decodeObject:(id)arg1;
- (id)decodeArray:(id)arg1;
- (id)decodeDictionary:(id)arg1;
- (struct CGSize)decodeSizeForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (struct CGPoint)decodePointForKey:(id)arg1;
- (struct CGRect)decodeRectForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (id)decodeDictionary:(id)arg1 error:(id *)arg2;
- (id)decodeData:(id)arg1 error:(id *)arg2;
- (void)convertDataToJSONDictionary:(id)arg1;
- (id)JSONDataByFixingData:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithRootObject:(id)arg1;
- (Class)classFromClassName:(id)arg1;
@property(nonatomic) __weak MSJSONUnarchiver *unarchiver;

@end

