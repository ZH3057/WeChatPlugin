//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ExtDeviceLoginConfirmOKRequest : PBGeneratedMessage
{
    unsigned int hasLoginUrl:1;
    unsigned int hasSessionList:1;
    NSString *loginUrl;
    NSString *sessionList;
    NSMutableArray *mutableUnReadChatContactListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableUnReadChatContactListList; // @synthesize mutableUnReadChatContactListList;
@property(retain, nonatomic, setter=SetSessionList:) NSString *sessionList; // @synthesize sessionList;
@property(readonly, nonatomic) BOOL hasSessionList; // @synthesize hasSessionList;
@property(retain, nonatomic, setter=SetLoginUrl:) NSString *loginUrl; // @synthesize loginUrl;
@property(readonly, nonatomic) BOOL hasLoginUrl; // @synthesize hasLoginUrl;
- (void).cxx_destruct;
- (void)addUnReadChatContactListFromArray:(id)arg1;
- (void)addUnReadChatContactList:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *unReadChatContactList; // @dynamic unReadChatContactList;
- (id)unReadChatContactListList;
- (id)init;

@end

