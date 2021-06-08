/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/


@protocol CTXPCServiceCarrierBundleInterface
@required
-(void)context:(id)arg1 getAttachApnSettingsWithCompletion:(/*^block*/id)arg2;
-(void)copyBundleIdentifier:(id)arg1 bundleType:(id)arg2 completion:(/*^block*/id)arg3;
-(void)isAttachApnSettingAllowed:(id)arg1 completion:(/*^block*/id)arg2;
-(void)restoreToSystemBundles:(/*^block*/id)arg1;
-(void)context:(id)arg1 modifyAttachApnSettings:(id)arg2 completion:(/*^block*/id)arg3;
-(void)copyBundleVersion:(id)arg1 bundleType:(id)arg2 completion:(/*^block*/id)arg3;
-(void)copyCarrierBundleLocation:(id)arg1 completion:(/*^block*/id)arg2;
-(void)copyCarrierBundleValueWithDefault:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4;
-(void)getWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 completion:(/*^block*/id)arg3;
-(void)copyCarrierBundleValue:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4;
-(void)copyCarrierBundleVersion:(id)arg1 completion:(/*^block*/id)arg2;
-(void)copyCarrierBookmarks:(id)arg1 completion:(/*^block*/id)arg2;
-(void)copyCarrierBundleValue:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4;
-(void)setWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4;
-(void)copyCarrierBundleValueWithDefault:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4;

@end

