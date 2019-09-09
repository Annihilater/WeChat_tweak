//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavMMUIViewController.h"

#import "FavBaseTableDataControllerDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "FavSearchControllerDelegate.h"
#import "IFavoritesExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class FavBaseSearchConfig, FavBaseTableDataController, FavMultiSelectToolView, MMFavoritesSearchController, MMTableView, NSString, UILabel, UIView;

@interface FavBaseSearchViewController : FavMMUIViewController <FavSearchControllerDelegate, IFavoritesExt, FavForwardLogicDelegate, FavBaseTableDataControllerDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate>
{
    _Bool _bUseFilter;
    _Bool _bHasClickSearchResult;
    _Bool _bHasSearchResult;
    _Bool _bReceiveSearchResult;
    unsigned int _searchType;
    unsigned int _entranceTime;
    int _deleteType;
    id <FavBaseSearchViewControllerDelegate> _delegate;
    NSString *_searchTitle;
    FavBaseSearchConfig *_searchConfig;
    MMTableView *_tableView;
    UIView *_headerView;
    FavBaseTableDataController *_dataController;
    FavMultiSelectToolView *_multiSelectToolView;
    UIView *_loadingView;
    UILabel *_loadingLabel;
    unsigned long long _beforeEntranceScene;
    MMFavoritesSearchController *_searchController;
}

- (void).cxx_destruct;
- (void)OnForwardDone;
- (void)OnSearch:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool bHasClickSearchResult; // @synthesize bHasClickSearchResult=_bHasClickSearchResult;
@property(nonatomic) _Bool bHasSearchResult; // @synthesize bHasSearchResult=_bHasSearchResult;
@property(nonatomic) _Bool bReceiveSearchResult; // @synthesize bReceiveSearchResult=_bReceiveSearchResult;
@property(nonatomic) _Bool bUseFilter; // @synthesize bUseFilter=_bUseFilter;
@property(nonatomic) unsigned long long beforeEntranceScene; // @synthesize beforeEntranceScene=_beforeEntranceScene;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
@property(retain, nonatomic) FavBaseTableDataController *dataController; // @synthesize dataController=_dataController;
- (void)dealloc;
@property(nonatomic) __weak id <FavBaseSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteData:(id)arg1;
@property(nonatomic) int deleteType; // @synthesize deleteType=_deleteType;
- (unsigned int)entranceScene;
@property(nonatomic) unsigned int entranceTime; // @synthesize entranceTime=_entranceTime;
- (void)forwardDataAndItems:(id)arg1;
- (id)getCurrentViewController;
- (id)getFavForawrdViewController;
- (int)getPageType;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)hideSearchBar;
- (void)hideSelectToolView;
- (void)hideVisibleCellMenu;
- (id)init;
- (void)initConfig;
- (void)initData;
- (void)initHeaderView;
- (void)initLoadingView;
- (void)initMultiSelectToolView;
- (void)initNavigationBar;
- (void)initTableView;
- (_Bool)itemEditable;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) FavMultiSelectToolView *multiSelectToolView; // @synthesize multiSelectToolView=_multiSelectToolView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onDeleteData;
- (void)onDidEndSearch;
- (void)onForwardData;
- (void)onMultiSelect;
- (void)onMultiSelectDone;
- (void)onReturn;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)onShowEmptyView;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)onWillBeginSearch;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)processSearchResultDone;
- (void)reportClickFavItemId:(unsigned int)arg1 index:(unsigned int)arg2;
- (void)reportSearchData:(unsigned int)arg1 index:(unsigned int)arg2 actionType:(unsigned long long)arg3;
- (void)resetHeaderView:(id)arg1;
@property(retain, nonatomic) FavBaseSearchConfig *searchConfig; // @synthesize searchConfig=_searchConfig;
@property(retain, nonatomic) MMFavoritesSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property(nonatomic) unsigned int searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)setTableViewBottomInset:(double)arg1;
- (_Bool)shouldShowSearchResult:(id)arg1;
- (void)showSearchBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
