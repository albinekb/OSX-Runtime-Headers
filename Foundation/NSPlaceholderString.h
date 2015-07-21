//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSPlaceholderString : NSString
{
}

- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (id)initWithString:(id)arg1;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)init;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;

@end

