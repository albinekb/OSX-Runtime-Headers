//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSUserInterfaceItemIdentification.h"

@class NSArray, NSFont, NSMenuItem, NSString;

@interface NSMenu : NSObject <NSUserInterfaceItemIdentification, NSCopying, NSCoding>
{
    NSMenu *_supermenu;
    NSString *_title;
    id _itemArray;
    id _extra;
    struct __mFlags {
        unsigned int noAutoenable:1;
        unsigned int inMain:1;
        unsigned int internalPerformAction:1;
        unsigned int condenseSeparators:1;
        unsigned int disabled:1;
        unsigned int ownedByPopUp:1;
        unsigned int delegateNeedsUpdate:1;
        unsigned int delegateUpdateItem:1;
        unsigned int delegateHasKeyEquiv:1;
        unsigned int delegateHasAltKeyEquiv:1;
        unsigned int excludeMarkColumn:1;
        unsigned int isContextualMenu:1;
        unsigned int cmPluginMode:2;
        unsigned int invertedCMPluginTypes:2;
        unsigned int allowsDifferentSelection:1;
        unsigned int noTopPadding:1;
        unsigned int noBottomPadding:1;
        unsigned int hasNCStyle:1;
        unsigned int delegateIsUnsafeUnretained:1;
        unsigned int RESERVED:11;
    } _mFlags;
    NSString *_uiid;
}

+ (void)_drawHelpResultsSeparatorInRect:(struct CGRect)arg1 withClipRect:(struct CGRect)arg2 flags:(unsigned long long)arg3;
+ (void)_drawOverlayForMenuHelpResultsInRect:(struct CGRect)arg1 withClipRect:(struct CGRect)arg2 flags:(unsigned long long)arg3;
+ (double)menuBarHeight;
+ (void)_restoreTornOffMenus;
+ (void)_saveTornOffMenus;
+ (void)_setHelpMenu:(id)arg1;
+ (id)_helpMenu;
+ (id)_currentTrackingInfo;
+ (BOOL)menuBarVisible;
+ (void)setMenuBarVisible:(BOOL)arg1;
+ (void)_setAppleMenuEnabled:(BOOL)arg1;
+ (void)popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 withFont:(id)arg4;
+ (void)popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3;
+ (id)_contextMenuTarget;
+ (void)_setContextMenuTarget:(id)arg1;
+ (id)_contextMenuEvent;
+ (void)_setContextMenuEvent:(id)arg1;
+ (long long)menuTypeForEvent:(id)arg1;
+ (id)_menusWithName:(id)arg1;
+ (struct _NSZone *)menuZone;
+ (void)setMenuZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)_captureKeyEquivalentsWithOptions:(unsigned long long)arg1 inMode:(id)arg2 finalEvent:(id *)arg3 status:(long long *)arg4 additionalEventProcessing:(CDUnknownBlockType)arg5;
+ (id)_captureKeyEquivalentsFromEvent:(id)arg1 withOptions:(unsigned long long)arg2;
+ (BOOL)_validateCaptureKeyEquivalentsFromEvent:(id)arg1 withOptions:(unsigned long long)arg2;
+ (BOOL)_canUseKeyEquivalentForMenuItem:(id)arg1;
+ (void)_recursivelyUnregisterMenuItem:(id)arg1 forKeyEquivalentUniquingInMenu:(id)arg2;
+ (void)_recursivelyRegisterMenuItem:(id)arg1 forKeyEquivalentUniquingInMenu:(id)arg2;
+ (void)_recursivelyUnregisterMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_recursivelyRegisterMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_unregisterMenuItemForKeyEquivalentUniquing:(id)arg1;
+ (void)_registerMenuItemForKeyEquivalentUniquing:(id)arg1;
+ (void)_unregisterOneMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_registerOneMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_unregisterMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_registerMenuForKeyEquivalentUniquing:(id)arg1;
- (void)_menuDidChangeAccessibilityOverriddenAttribute:(id)arg1 from:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeRespectsKeyEquivalentWhileHiddenFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeAccessibilityOverriddenAttribute:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 didChangeSeparatorStatusFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeHiddenFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeCustomViewHandlesEventsFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeCustomViewFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeTooltipFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeIndentFrom:(long long)arg2 to:(long long)arg3;
- (void)_menuItem:(id)arg1 didChangeNextItemIsAlternateFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeRadialMenuTitleFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeRadialMenuImageFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeDestructiveFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeAlternateFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeKeyEquivalentModifierMaskFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)_menuItem:(id)arg1 didChangeKeyEquivalentVirtualKeyCodeFrom:(unsigned short)arg2 to:(unsigned short)arg3;
- (void)_menuItem:(id)arg1 didChangeKeyEquivalentFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeImageFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeStateImageFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeActionFrom:(SEL)arg2 to:(SEL)arg3;
- (void)_menuItem:(id)arg1 didChangeNewItemsCountFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)_menuItem:(id)arg1 didChangeFontFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeAttributedTitleFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeTitleFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeSubmenuContentsWithSubmenu:(id)arg2;
- (void)_menuItem:(id)arg1 didChangeSubmenuFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeEnabledStateFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_notifySupermenuOfSubmenuChange;
- (void)_limitedViewWantsRedisplayForItem:(id)arg1 inRect:(struct CGRect)arg2;
- (const struct AEDesc *)_contextMenuPluginAEDesc;
- (void)_setContextMenuPluginAEDesc:(const struct AEDesc *)arg1;
@property BOOL showsStateColumn;
- (void)_sendMenuClosedNotification:(BOOL)arg1;
- (void)_sendMenuOpeningNotification:(BOOL)arg1;
- (void)_associateStatusItem:(id)arg1;
- (struct CGRect)_confinementRectForScreen:(id)arg1;
- (void)_unlockMenuPosition;
- (void)_lockMenuPosition;
- (void)cancelTracking;
- (void)cancelTrackingWithoutAnimation;
- (void)_cancelTrackingWithFade:(BOOL)arg1;
@property(readonly) NSMenuItem *highlightedItem;
- (void)highlightItem:(id)arg1;
- (void)_informDelegateOfHighlightedItem:(id)arg1;
@property(readonly) double menuBarHeight;
- (BOOL)_menuOwnerCanUseMenuWhenModal;
- (BOOL)_isInMainMenu;
- (void)_recursivelyNoteChangedIsInMainMenu:(BOOL)arg1;
- (void)_recursivelyChangeLayoutDirectionFrom:(long long)arg1 to:(long long)arg2;
- (void)_setMenuOwner:(id)arg1;
- (id)_menuOwner;
- (id)_owningPopUp;
- (void)_setOwnedByPopUp:(id)arg1;
- (BOOL)_ownedByPopUp;
- (void)_performSidebandUpdatersForRole:(long long)arg1 withEventRef:(void *)arg2;
- (void)_removeSidebandMenuUpdaterForToken:(id)arg1;
- (void)_addSidebandMenuUpdaterForRoles:(long long)arg1 token:(id)arg2 priority:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (long long)_sidebandUpdaterRoles;
- (void)_populate:(BOOL)arg1;
- (BOOL)_populateWithEventRef:(void *)arg1;
- (void)_populateFromSidebandUpdatersOfSign:(int)arg1 withEventRef:(void *)arg2;
- (BOOL)_populateFromDelegateWithEventRef:(void *)arg1;
- (BOOL)_delegateWantsDidFailToOpenCall;
- (BOOL)_delegateWantsPrepareCall;
- (BOOL)_delegateWantsConfinementRectCall;
- (BOOL)_delegateWantsHighlightedCall;
- (BOOL)_delegateWantsCloseCall;
- (BOOL)_delegateWantsOpenCall;
- (BOOL)_delegateWantsPopulateCall;
@property id <NSMenuDelegate> delegate;
- (void)_endHandlingCarbonEvents:(id)arg1;
- (id)_handleCarbonEvents:(const struct EventTypeSpec *)arg1 count:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)_hasPendingCancellationEvent;
@property long long userInterfaceLayoutDirection;
- (long long)_layoutDirectionIfExists;
- (void)_setIndentationWidth:(unsigned long long)arg1;
- (unsigned long long)_indentationWidth;
- (void)_setHasNCStyle:(BOOL)arg1;
- (BOOL)_hasNCStyle;
- (void)_setHasPadding:(BOOL)arg1 onEdge:(unsigned long long)arg2;
- (BOOL)_hasPaddingOnEdge:(unsigned long long)arg1;
- (BOOL)_condensesSeparators;
- (void)_setCondensesSeparators:(BOOL)arg1;
- (id)_menuServicesStartingRequestor;
- (void)_setMenuServicesStartingRequestor:(id)arg1;
- (unsigned long long)_menuPluginTypes;
- (void)_setMenuPluginTypes:(unsigned long long)arg1;
- (long long)_menuPluginInsertionMode;
- (void)_setMenuPluginInsertionMode:(long long)arg1;
@property BOOL allowsContextMenuPlugIns;
- (void)_setAllowsDifferentInitialPopupSelection:(BOOL)arg1;
- (BOOL)_allowsDifferentInitialPopupSelection;
- (long long)_backgroundStyle;
@property(retain) NSFont *font;
- (id)_fontOrNilIfDefault;
@property(readonly) struct CGSize size;
@property double minimumWidth;
- (void)_popUpMenuWithEvent:(id)arg1 forView:(id)arg2;
- (void)_updateEnabled;
- (BOOL)_isEnabled;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setIsContextualMenu:(BOOL)arg1;
- (BOOL)_isContextualMenu;
- (void)_image:(id *)arg1 frame:(struct CGRect *)arg2 forPopUpMenuPositioningItem:(id)arg3 atLocation:(struct CGPoint)arg4 inView:(id)arg5 appearance:(id)arg6;
- (BOOL)popUpMenuPositioningItem:(id)arg1 atLocation:(struct CGPoint)arg2 inView:(id)arg3 appearance:(id)arg4;
- (BOOL)popUpMenuPositioningItem:(id)arg1 atLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 withFont:(id)arg4;
- (void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3;
- (BOOL)_servicesMenuItemsAreForContextMenu;
- (id)_insertItemInSortedOrderWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;
- (void)_internalPerformActionForItemAtIndex:(long long)arg1;
- (void)performActionForItemAtIndex:(long long)arg1;
- (struct CGPoint)locationForSubmenu:(id)arg1;
- (void)sizeToFit;
- (BOOL)isAttached;
- (id)attachedMenu;
- (BOOL)isTornOff;
- (id)tearOffMenuRepresentation;
- (void)setTearOffMenuRepresentation:(id)arg1;
- (id)contextMenuRepresentation;
- (id)_contextMenuImpl;
- (void)setContextMenuRepresentation:(id)arg1;
- (id)menuRepresentation;
- (void)_createExtraIvars;
- (unsigned long long)propertiesToUpdate;
- (unsigned long long)_currentMenuUpdateFlags;
- (id)_menuImplIfExists;
- (id)_menuImpl;
- (id)_createMenuImpl;
- (void)setMenuRepresentation:(id)arg1;
- (void)helpRequested:(id)arg1;
- (void)_postItemChangedNotificationButIgnoringItOurselves:(id)arg1;
- (void)itemChanged:(id)arg1;
- (void)_menuChanged;
- (BOOL)menuChangedMessagesEnabled;
- (void)setMenuChangedMessagesEnabled:(BOOL)arg1;
- (void)update;
- (void)_updateForTracking;
- (void)_enableItems;
- (void)_enableItem:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)_performActionWithHighlightingForItemAtIndex:(long long)arg1;
- (void)_performActionWithHighlightingForItemAtIndex:(long long)arg1 sendAccessibilityNotification:(BOOL)arg2;
- (BOOL)_performKeyEquivalentWithDelegate:(id)arg1;
@property BOOL autoenablesItems;
- (void)_setSuppressAutoenabling:(BOOL)arg1;
- (id)itemWithTag:(long long)arg1;
- (id)itemWithTitle:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)_indexOfItemWithPartialTitle:(id)arg1;
- (long long)indexOfItemWithTarget:(id)arg1 andAction:(SEL)arg2;
- (long long)indexOfItemWithSubmenu:(id)arg1;
- (long long)indexOfItemWithRepresentedObject:(id)arg1;
- (long long)indexOfItemWithTag:(long long)arg1;
- (long long)indexOfItemWithTitle:(id)arg1;
- (long long)indexOfItem:(id)arg1;
@property(readonly) long long numberOfItems;
- (id)_itemArray;
@property(readonly, copy) NSArray *itemArray;
- (void)setSubmenu:(id)arg1 forItem:(id)arg2;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)removeItemAtIndex:(long long)arg1;
- (id)addItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;
- (id)insertItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 atIndex:(long long)arg4;
- (void)addItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
@property NSMenu *supermenu;
- (id)_menuName;
- (void)_setMenuName:(id)arg1;
@property(copy) NSString *title;
- (id)_trackingInfo;
- (void)_finishedMakingConnections;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithTitle:(id)arg1;
@property(copy) NSString *identifier;
- (void)setUserInterfaceItemIdentifier:(id)arg1;
- (id)userInterfaceItemIdentifier;
- (void)presentControllerAsModalWindow:(id)arg1;
- (void)_setStoryboard:(id)arg1;
- (id)storyboard;
@property long long radialMenuStyle;
- (id)_menuPanelInitWithCoder:(id)arg1;
- (id)_panelInitWithCoder:(id)arg1;
- (id)_windowInitWithCoder:(id)arg1;
- (id)_responderInitWithCoder:(id)arg1;
- (void)_recursivelyUpdateKeyEquivalents;
- (id)_getKeyEquivalentUniquerCreatingIfNecessary:(BOOL)arg1;
- (BOOL)accessibilitySetOverrideValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilitySupportsOverriddenAttributes;
- (BOOL)accessibilityIsIgnored;

@end

