//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLocationManagerDelegate.h"

@class NSString, QLocationManager, QLocationMarkerWrapper, QMapContext;

@interface QUserLocationManager : NSObject <QLocationManagerDelegate>
{
    QMapContext *_mapContext;
    id <QUserLocationManagerDelegate> _delegate;
    QLocationManager *_manager;
    QLocationMarkerWrapper *_locationMarkerWrapper;
}

+ (id)correctLocation:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
- (void)configureUserLocationPresentation:(id)arg1;
@property(nonatomic) __weak id <QUserLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
@property(nonatomic) double headingFilter;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocation:(id)arg2;
@property(retain, nonatomic) QLocationMarkerWrapper *locationMarkerWrapper; // @synthesize locationMarkerWrapper=_locationMarkerWrapper;
@property(retain, nonatomic) QLocationManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
- (void)requestWhenInUseAuthorization;
- (void)setLocationHidden:(_Bool)arg1;
- (void)setup;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)updateLocationWithHeading:(double)arg1;
- (void)updateLocationWithMapPoint:(CDStruct_c3b9c2ee)arg1 course:(double)arg2 horizontalAccuracy:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
