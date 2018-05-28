//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMBasePreviewPanelWindowController.h"

#import "IMessageExt.h"
#import "MMFavoritesMgrExt.h"

@class MMPreviewView, MMQLPhotoPreviewItem, NSString;

@interface MMFilePreviewPanelWindowController : MMBasePreviewPanelWindowController <IMessageExt, MMFavoritesMgrExt>
{
    MMQLPhotoPreviewItem *m_currentPreviewingFileItem;
    MMPreviewView *_filePreviewView;
}

@property(retain, nonatomic) MMPreviewView *filePreviewView; // @synthesize filePreviewView=_filePreviewView;
- (void).cxx_destruct;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2;
- (void)openWith:(id)arg1;
- (BOOL)shouldUseCompactStyle;
- (void)setupPreviewView;
- (id)getCurrentPreviewItem;
- (void)close;
- (void)show;
- (void)dealloc;
- (id)initWithPreviewItemList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
