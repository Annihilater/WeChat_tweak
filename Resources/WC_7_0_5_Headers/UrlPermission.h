//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class DeepLinkBitSet, GeneralControlBitSet, JSAPIPermissionBitSet;

@interface UrlPermission : NSObject <NSCoding>
{
    JSAPIPermissionBitSet *m_permissionBitSet;
    GeneralControlBitSet *m_generalControlBitSet;
    DeepLinkBitSet *m_deepLinkBitSet;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) DeepLinkBitSet *m_deepLinkBitSet; // @synthesize m_deepLinkBitSet;
@property(retain, nonatomic) GeneralControlBitSet *m_generalControlBitSet; // @synthesize m_generalControlBitSet;
@property(retain, nonatomic) JSAPIPermissionBitSet *m_permissionBitSet; // @synthesize m_permissionBitSet;

@end
