//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

@class NSMutableDictionary;

@interface WCCanvasLinearLayout : WCCanvasComponent
{
    _Bool _needRelayout;
    NSMutableDictionary *_viewContainer;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(nonatomic) _Bool needRelayout; // @synthesize needRelayout=_needRelayout;
@property(retain, nonatomic) NSMutableDictionary *viewContainer; // @synthesize viewContainer=_viewContainer;
- (void).cxx_destruct;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentDidFullyApperaInMainScreen:(_Bool)arg1;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillApperaInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;

@end
