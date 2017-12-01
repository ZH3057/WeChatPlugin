//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

__attribute__((visibility("hidden")))
@interface PerformanceMonitor : NSObject
{
    int timeoutCount;
    int depth;
    struct __CFRunLoopObserver *entryObserver;
    NSObject<OS_dispatch_semaphore> *semaphore;
    unsigned long long activity;
    int phase;
    unsigned long long timestamp;
    CDUnknownBlockType dumpHandler;
    BOOL didSignal;
    BOOL isOnMonitoring;
    unsigned long long lastDumpTimestamp;
    unsigned long long lastDumpHash;
    unsigned long long lastLogTimestamp;
    unsigned char dumpSpanFactor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getBackStracesForHighCpuThreads;
- (void)checkCPUUsage;
- (void)start;
- (BOOL)isUncaughtBackStrace:(id)arg1 currentPhase:(int)arg2;
- (BOOL)isPhaseEnd:(int)arg1;
- (BOOL)isPhaseBegin:(int)arg1;
- (void)setDumpHandler:(CDUnknownBlockType)arg1;
- (void)signalMonitor:(int)arg1;
- (void)stop;

@end
