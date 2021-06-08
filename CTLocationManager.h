/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSString;

@interface CTLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _manager;
	CLLocation* _location;
	BOOL _locationRequested;
	BOOL _locationAvailable;
	BOOL _locationServiceDenied;
	BOOL _locationServiceAuthorized;
	unique_ptr<ctu::OsLogLogger, std::__1::default_delete<ctu::OsLogLogger>>* logger;
	queue* _queue;

}

@property (assign,nonatomic) BOOL locationRequested;                //@synthesize locationRequested=_locationRequested - In the implementation block
@property (assign,nonatomic) BOOL locationAvailable;                //@synthesize locationAvailable=_locationAvailable - In the implementation block
@property (copy) CLLocation * location;                             //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)shouldUpdateLocation:(BOOL)arg1 ;
-(void)startLocationUpdatesWithReason:(const char*)arg1 ;
-(void)stopLocationUpdates;
-(BOOL)isLocationServiceEnabled;
-(id)copyLastKnownLocation;
-(BOOL)isLocationServiceDenied;
-(BOOL)isLocationServiceAuthorized;
-(void)startLocationMonitoringVisitsWithReason:(const char*)arg1 ;
-(void)stopLocationMonitoringVisits;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didVisit:(id)arg2 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)locationRequested;
-(void)setLocationRequested:(BOOL)arg1 ;
-(BOOL)locationAvailable;
-(void)setLocationAvailable:(BOOL)arg1 ;
@end

