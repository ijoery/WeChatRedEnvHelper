//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface BTBaseSectionData : MMObject
{
    double _sectionWidth;
}

@property(nonatomic) double sectionWidth; // @synthesize sectionWidth=_sectionWidth;
@property(readonly, nonatomic) double viewHeight;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (id)initWithSectionWidth:(double)arg1;

@end
