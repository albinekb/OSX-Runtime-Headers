//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSBrowser.h>

@interface NSNavBrowser : NSBrowser
{
    unsigned int _delegate_labelColorForRow:1;
    unsigned int _delegate_isEnabledRow:1;
    unsigned int _delegate_didClickDisabledRow:1;
    unsigned int _reserved:29;
}

+ (Class)browserTableViewClass;
- (void)didClickOnDisabledRow:(long long)arg1 column:(long long)arg2;
- (BOOL)isEnabledRow:(long long)arg1 column:(long long)arg2;
- (long long)labelColorIndexForRow:(long long)arg1 column:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)_useSnowLeopardBehavior;

@end

