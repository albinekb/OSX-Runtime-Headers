//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSMenuItemCell.h>

@class NSArray, NSMenu, NSMenuItem, NSString;

@interface NSPopUpButtonCell : NSMenuItemCell
{
    NSMenu *_menu;
    int _selectedIndex;
    struct __pbcFlags {
        unsigned int pullsDown:1;
        unsigned int preferredEdge:3;
        unsigned int menuIsAttached:1;
        unsigned int usesItemFromMenu:1;
        unsigned int altersStateOfSelectedItem:1;
        unsigned int decoding:1;
        unsigned int arrowPosition:2;
        unsigned int ignoreMenuLayout:1;
        unsigned int drawing:1;
        unsigned int menuShouldBeUniquedAgainstMain:1;
        unsigned int RESERVED:19;
    } _pbcFlags;
    id _popupReserved;
}

+ (id)_attachedCell;
+ (void)initialize;
- (void)_createAndPopulateKeyEquivalentUniquerIfNecessary;
- (id)_keyEquivalentUniquerCreatingIfNecessary:(BOOL)arg1;
- (void)_setMenuShouldBeUniquedAgainstMainMenu:(BOOL)arg1;
@property unsigned long long arrowPosition;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_highlightTextColor;
- (id)_highlightColor;
- (BOOL)_allowsContextMenus;
- (BOOL)_canBecomeDefaultButtonCell;
- (void)_menuWillSendAction:(id)arg1;
- (void)_popUpItemAction:(id)arg1;
- (void)performClickWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (unsigned long long)_preferredFocusLocationMask;
- (BOOL)isOpaque;
- (BOOL)_obeysHiddenBit;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct __CFDictionary *)_coreUIBezelDrawOptionsWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_shouldDrawIndicatorOnlyForFrame:(struct CGRect)arg1;
- (void)_drawStandardPopUpBorderWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (int)_effectiveBackgroundStyleInView:(id)arg1;
- (void)_drawIndicatorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_indicatorFrameForCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_indicatorFrameForCellFrame:(struct CGRect)arg1 isFlipped:(BOOL)arg2;
- (unsigned long long)_applicableArrowLocation;
- (struct CGSize)_defaultIndicatorSize;
- (BOOL)_popupHeightIsFlexible;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGSize)_autolayout_cellSize;
- (unsigned long long)_maxItemsToMeasureForCellSize;
- (double)_autolayout_preferredPopupHeight;
- (double)_preferredPopupHeight;
- (id)_indicatorImage;
- (id)_defaultIndicatorImage;
- (id)_coreUIDefaultIndicatorImage;
- (BOOL)_shouldTweakRoundingBehaviorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (double)_extraWidthForCellHeight:(double)arg1;
- (struct CGRect)keyEquivalentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_separatorRectForCellFrame:(struct CGRect)arg1 isFlipped:(BOOL)arg2;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (double)_menuLocationHorizontalOffset;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (long long)interiorBackgroundStyle;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_availableContentRectForCellFrame:(struct CGRect)arg1 isFlipped:(BOOL)arg2;
- (unsigned long long)_effectiveAlignment;
- (id)attributedTitle;
- (struct CGSize)_popupImageSizeForCellFrame:(struct CGRect)arg1;
- (double)_imageToTitleHorizontalOffset;
- (struct NSEdgeInsets)_popupPaddingInsets;
- (double)_popupIndicatorToContentPaddingOffset;
- (double)_popupBezelToContentPaddingOffset;
- (struct NSEdgeInsets)_indicatorInsets;
- (struct NSEdgeInsets)_bezelToIndicatorInsets;
- (struct CGPoint)_bezelToIndicatorOffsets;
- (struct NSEdgeInsets)_popupBezelInsetsForCellFrame:(struct CGRect)arg1;
- (struct NSEdgeInsets)_popupBezelInsets;
- (struct NSEdgeInsets)_pulldownExtraBezelInsets;
- (BOOL)_useTigerMetricsForHorizontalUnborderedOffset;
- (double)_bezelBottomPadding;
- (double)_bezelTopPadding;
- (double)_bezelBottomOffset;
- (double)_bezelTopOffset;
- (double)_imageToBezelOrIndicatorPadding;
- (BOOL)_alwaysShowBezelForCurrentBezelStyleAndState;
- (struct CGRect)stateImageRectForBounds:(struct CGRect)arg1;
- (double)keyEquivalentWidth;
- (id)_indicatorImageForCellHeight:(double)arg1;
- (BOOL)_popupStyleDrawsIndicator;
- (BOOL)keyDown:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_doPopupSearchString;
- (void)dismissPopUp;
- (void)attachPopUpWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_handleWillPopUpNotification;
- (struct CGPoint)_locationForPopUpMenuWithFrame:(struct CGRect)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (id)_popUpMenuOptionsForFlags:(unsigned long long)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGSize)_labelOffsetInCellFrame:(struct CGRect)arg1 ofView:(id)arg2;
- (unsigned long long)_popUpMenuFlags:(BOOL)arg1;
- (double)_menuMinimumWidthForEvent:(id)arg1 inCellFrame:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGPoint)_menuLocationForEvent:(id)arg1 inCellFrame:(struct CGRect)arg2 ofView:(id)arg3;
- (double)_horzOffsetForTitleInFrame:(struct CGRect)arg1 withAlignment:(unsigned long long)arg2 direction:(long long)arg3 font:(id)arg4;
- (BOOL)_positionsMenuRelativeToRightEdge;
- (BOOL)_positionsMenuAsPullDown;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)_performKeyEquivalent:(id)arg1 conditionally:(BOOL)arg2;
@property(readonly, copy) NSString *titleOfSelectedItem;
@property(readonly, copy) NSArray *itemTitles;
- (id)itemTitleAtIndex:(long long)arg1;
- (void)synchronizeTitleAndSelectedItem;
@property(readonly) long long indexOfSelectedItem;
@property(readonly) NSMenuItem *selectedItem;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)selectItemWithTag:(long long)arg1;
- (void)selectItemWithTitle:(id)arg1;
- (void)selectItemAtIndex:(long long)arg1;
- (void)selectItem:(id)arg1;
- (void)_rawSetSelectedIndex:(long long)arg1;
@property(readonly) NSMenuItem *lastItem;
- (id)itemWithTitle:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)indexOfItemWithTarget:(id)arg1 andAction:(SEL)arg2;
- (long long)indexOfItemWithRepresentedObject:(id)arg1;
- (long long)indexOfItemWithTag:(long long)arg1;
- (long long)indexOfItemWithTitle:(id)arg1;
- (long long)indexOfItem:(id)arg1;
@property(readonly) long long numberOfItems;
@property(readonly, copy) NSArray *itemArray;
- (void)_itemChanged:(id)arg1;
- (void)_allItemsRemoved:(id)arg1;
- (void)_itemRemoved:(id)arg1;
- (void)removeAllItems;
- (void)removeItemAtIndex:(long long)arg1;
- (void)removeItemWithTitle:(id)arg1;
- (void)_itemAdded:(id)arg1;
- (void)insertItemWithTitle:(id)arg1 atIndex:(long long)arg2;
- (void)addItemsWithTitles:(id)arg1;
- (void)addItemWithTitle:(id)arg1;
@property BOOL altersStateOfSelectedItem;
- (void)setMenuItem:(id)arg1;
@property BOOL usesItemFromMenu;
@property unsigned long long preferredEdge;
@property BOOL autoenablesItems;
@property BOOL pullsDown;
- (BOOL)_shouldDrawTextWithDisabledAppearance;
- (void)setFont:(id)arg1;
- (id)menuView;
@property(retain) NSMenu *menu;
- (void)_clearTargetsFromMenuPointingAtSelf:(id)arg1;
- (void)_fixTargetsForMenu:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithoutMenu;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (id)initTextCell:(id)arg1 pullsDown:(BOOL)arg2;
- (BOOL)canSmoothFontsInFrame:(struct CGRect)arg1 forLayerBackedView:(id)arg2;
- (BOOL)wantsUpdateLayerInView:(id)arg1;
- (Class)_classForOverrideCheck;
- (void)accessibilityPerformAction:(id)arg1;
- (void)_accessibilityPressAction:(id)arg1;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

