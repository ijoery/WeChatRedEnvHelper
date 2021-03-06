//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol WAProfileSectionHeaderViewDelegate;

@interface WAProfileSectionHeaderView : UIView
{
    unsigned int _type;
    UIButton *_contentButton;
    UILabel *_titleLabel;
    id <WAProfileSectionHeaderViewDelegate> _delegate;
}

+ (double)headerHeight;
@property(nonatomic) __weak id <WAProfileSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviewsImmediately;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1 type:(unsigned int)arg2;
- (void)setupSubviews;
- (id)init;

@end

