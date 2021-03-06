//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCStackTracePool;
@protocol WCPowerConsumeStackCollectorDelegate;

@interface WCPowerConsumeStackCollector : NSObject
{
    id <WCPowerConsumeStackCollectorDelegate> _delegate;
    WCStackTracePool *_stackTracePool;
}

+ (float)getCurrentCPUUsage;
@property(retain, nonatomic) WCStackTracePool *stackTracePool; // @synthesize stackTracePool=_stackTracePool;
@property(nonatomic) __weak id <WCPowerConsumeStackCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (float)getCostCpuThreads:(unsigned int **)arg1 cpuValueList:(float **)arg2 cpuThreadCount:(unsigned int *)arg3 totCpu:(float *)arg4 threadList:(unsigned int *)arg5 threadCount:(unsigned int)arg6 kr:(int *)arg7 costCpuThreadArray:(id *)arg8 isCpuHighLog:(_Bool)arg9;
- (void)getPowerConsumingStackWithThreadCount:(unsigned int)arg1 costCpuThreadList:(unsigned int *)arg2 costCpuValueList:(float *)arg3 isCpuHighLog:(_Bool)arg4;
- (_Bool)checkTaskInfo:(int *)arg1 thinfo:(int (*)[32])arg2 thread:(unsigned int)arg3;
- (_Bool)checkTaskThreads:(int *)arg1 thread_list:(unsigned int **)arg2 thread_count:(unsigned int *)arg3;
- (_Bool)checkTaskInfo:(int *)arg1;
- (float)getCPUUsageAndPowerConsumeStack;
- (float)makeCPUHighConclusionHelper;
- (_Bool)makeCPUHighConclusion;
- (float *)getCpuHighThreadValueArray;
- (int)getCurrentCpuHighStackNumber;
- (struct KSStackCursor **)getCPUStackCursor;
- (void)makeConclusion;
- (id)initWithCPULimit:(float)arg1;

@end

