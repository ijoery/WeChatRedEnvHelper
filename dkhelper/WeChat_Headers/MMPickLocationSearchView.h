//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMLocationSearchBarDelegate-Protocol.h"
#import "MMLocationSearchResultTableViewDelegate-Protocol.h"
#import "POITableViewCellDelegate-Protocol.h"

@class MMLocationSearchBar, MMPickLocationContentView, MMPickLocationTopView, MMUIViewController, NSString, WCTimeLineFooterView;
@protocol MMPickLocationActionDelegate;

@interface MMPickLocationSearchView : MMUIView <MMLocationSearchBarDelegate, MMLocationSearchResultTableViewDelegate, POITableViewCellDelegate>
{
    _Bool _isFoldAnimating;
    _Bool _expandViewForSearchBecomeActive;
    _Bool _isExpanded;
    _Bool _isSearchTableAutoScrolling;
    id <MMPickLocationActionDelegate> _actionDelegate;
    MMLocationSearchBar *_searchBarLogic;
    long long _currSearchState;
    NSString *_searchKeyword;
    MMPickLocationTopView *_topView;
    MMPickLocationContentView *_contentView;
    MMUIViewController *_contentController;
    double _lastContentHeight;
}

@property(nonatomic) double lastContentHeight; // @synthesize lastContentHeight=_lastContentHeight;
@property(nonatomic) __weak MMUIViewController *contentController; // @synthesize contentController=_contentController;
@property(retain, nonatomic) MMPickLocationContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMPickLocationTopView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(readonly, nonatomic) long long currSearchState; // @synthesize currSearchState=_currSearchState;
@property(readonly, nonatomic) _Bool isSearchTableAutoScrolling; // @synthesize isSearchTableAutoScrolling=_isSearchTableAutoScrolling;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) MMLocationSearchBar *searchBarLogic; // @synthesize searchBarLogic=_searchBarLogic;
@property(nonatomic) __weak id <MMPickLocationActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) _Bool expandViewForSearchBecomeActive; // @synthesize expandViewForSearchBecomeActive=_expandViewForSearchBecomeActive;
@property(nonatomic) _Bool isFoldAnimating; // @synthesize isFoldAnimating=_isFoldAnimating;
- (void).cxx_destruct;
- (double)expandTableViewVisbleHeight;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
@property(readonly, nonatomic) _Bool isSearching;
- (id)searchResultItemAt:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectAt:(id)arg2;
- (void)didSearchViewTableEndDecelerating:(id)arg1;
- (void)didSearchViewTableEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didSearchViewTableEndScrollingAnimation:(id)arg1;
- (void)didSearchViewTableBeginDragging:(id)arg1;
- (void)didSearchViewTableScroll:(id)arg1;
- (void)searchTableViewCellWillDisplay:(id)arg1 index:(id)arg2;
- (id)cellForSearchViewTable:(id)arg1 AtIndexPath:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)mmsearchBarResignActive;
- (void)mmsearchBarWillBeginSearch;
- (void)mmsearchBarBecomeActive;
- (void)mmSearchBarCancelButtonClicked:(id)arg1;
- (void)mmSearchBarSearchButtonClicked:(id)arg1;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmSearchBarTextDidBeginEditing:(id)arg1;
@property(readonly, nonatomic) WCTimeLineFooterView *nearTableFooterView;
@property(readonly, nonatomic) WCTimeLineFooterView *searchTableFooterView;
- (void)refreshSearchTableViewDataDidFinishLoading;
- (void)refreshNearTableViewDataDidFinishLoading;
- (void)setSearchErrorTipsHidden:(_Bool)arg1;
- (void)updateFooterView:(id)arg1 WithState:(long long)arg2;
- (void)updateSearchFooterView:(long long)arg1;
- (void)updateNearbyFooterView:(long long)arg1;
- (void)reloadSearchResultTableView;
- (_Bool)isSearchCellIndexVisible:(unsigned long long)arg1;
- (void)scrollSearchTableViewToVisibleCompletely:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (_Bool)isNearbyCellIndexVisible:(unsigned long long)arg1;
- (void)scrollNearbyTableViewToVisibleCompletely:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)scrollNearbyTableViewToVisible:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)reloadNearbyTableView;
- (void)setTableViewIsScrolling:(_Bool)arg1;
- (void)stopTableViewScrolling;
- (void)updateContentViewFrame;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSearchBarLogic;
- (id)initWithContentController:(id)arg1 Manager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
