//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMKRedirectUrl, NSString;

@interface MMKJumpRemindInfo : NSObject
{
    _Bool _isPopUpWindows;
    int _jumpType;
    NSString *_wording;
    NSString *_leftButtonWording;
    NSString *_rightButtonWording;
    MMKRedirectUrl *_url;
    NSString *_title;
}

+ (id)KJumpRemindInfoWithJumpType:(int)arg1 isPopUpWindows:(_Bool)arg2 wording:(id)arg3 leftButtonWording:(id)arg4 rightButtonWording:(id)arg5 url:(id)arg6 title:(id)arg7;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) MMKRedirectUrl *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *rightButtonWording; // @synthesize rightButtonWording=_rightButtonWording;
@property(readonly, nonatomic) NSString *leftButtonWording; // @synthesize leftButtonWording=_leftButtonWording;
@property(readonly, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(readonly, nonatomic) _Bool isPopUpWindows; // @synthesize isPopUpWindows=_isPopUpWindows;
@property(readonly, nonatomic) int jumpType; // @synthesize jumpType=_jumpType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithJumpType:(int)arg1 isPopUpWindows:(_Bool)arg2 wording:(id)arg3 leftButtonWording:(id)arg4 rightButtonWording:(id)arg5 url:(id)arg6 title:(id)arg7;

@end

