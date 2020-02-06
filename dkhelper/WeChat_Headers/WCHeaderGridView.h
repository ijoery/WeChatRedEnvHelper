//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, RichTextView, UIImageView, UILabel;

@interface WCHeaderGridView : UIView
{
    NSMutableArray *m_arrContacts;
    double imageHeight;
    double rowSpace;
    double sectionSpace;
    unsigned int countPerLine;
    unsigned int likeCount;
    UILabel *m_titleLabel;
    UIImageView *m_iconImageView;
    RichTextView *m_richText;
    NSMutableArray *m_arrHeaderViews;
    NSMutableArray *m_arrHeaderMatteViews;
    _Bool isHBComment;
    _Bool isRewardGrid;
    CDUnknownBlockType _onHedaImageClick;
}

@property(copy, nonatomic) CDUnknownBlockType onHedaImageClick; // @synthesize onHedaImageClick=_onHedaImageClick;
@property(readonly, nonatomic) UIImageView *m_iconImageView; // @synthesize m_iconImageView;
@property(readonly, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel;
@property(nonatomic) unsigned int countPerLine; // @synthesize countPerLine;
@property(nonatomic) double sectionSpace; // @synthesize sectionSpace;
@property(nonatomic) double rowSpace; // @synthesize rowSpace;
@property(nonatomic) double imageHeight; // @synthesize imageHeight;
- (void).cxx_destruct;
- (void)updateView;
- (void)initView;
- (id)getTextContent;
- (void)onClickHeadImageView:(id)arg1;
- (id)initWithRewardInfos:(id)arg1 likeCount:(unsigned int)arg2 isRewardGrid:(_Bool)arg3;
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2 isHBComment:(_Bool)arg3;
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2;

@end
