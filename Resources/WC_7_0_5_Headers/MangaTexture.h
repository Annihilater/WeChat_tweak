//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MultiFilterConnect.h"

@interface MangaTexture : MultiFilterConnect
{
    int flag;
    _Bool _bigImageFlag;
}

- (void)NewFilter;
- (id)initWithFlag:(int)arg1 andQuality:(int)arg2 andBigImageFlag:(_Bool)arg3;
- (void)setParameter:(float)arg1;
- (void)setTextureForEdge:(id)arg1;
- (void)setTextureForEdge:(char *)arg1 withWidth:(int)arg2 andHeight:(int)arg3;

@end
