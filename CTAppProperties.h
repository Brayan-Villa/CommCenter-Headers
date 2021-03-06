/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/


@class LSApplicationProxy, ACXRemoteApplication;

@interface CTAppProperties : NSObject {

	int _bucketOverride;
	LSApplicationProxy* _lsAppProxy;
	ACXRemoteApplication* _remoteAppInfo;

}

@property (retain) LSApplicationProxy * lsAppProxy;                   //@synthesize lsAppProxy=_lsAppProxy - In the implementation block
@property (retain) ACXRemoteApplication * remoteAppInfo;              //@synthesize remoteAppInfo=_remoteAppInfo - In the implementation block
@property (assign) int bucketOverride;                                //@synthesize bucketOverride=_bucketOverride - In the implementation block
-(id)init:(id)arg1 ;
-(BOOL)isInstalledApp;
-(BOOL)isUninstalledApp;
-(BOOL)isInternalApp;
-(BOOL)isRemoteApp;
-(BOOL)isSystemService;
-(id)localizedName;
-(id)bundleId;
-(id)remoteLocalizedName;
-(LSApplicationProxy *)lsAppProxy;
-(void)setLsAppProxy:(LSApplicationProxy *)arg1 ;
-(ACXRemoteApplication *)remoteAppInfo;
-(void)setRemoteAppInfo:(ACXRemoteApplication *)arg1 ;
-(int)bucketOverride;
-(void)setBucketOverride:(int)arg1 ;
@end

