/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/


@protocol CTXPCServiceSubscriberInterface
@required
-(void)fetchSIMLockValue:(id)arg1 completion:(/*^block*/id)arg2;
-(void)copyMobileSubscriberIsoSubregionCode:(id)arg1 MNC:(id)arg2 completion:(/*^block*/id)arg3;
-(void)copyMobileSubscriberIsoCountryCode:(id)arg1 completion:(/*^block*/id)arg2;
-(void)copyMobileSubscriberCountryCode:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getTypeAllocationCode:(id)arg1 completion:(/*^block*/id)arg2;
-(void)shouldAllowSimLockFor:(id)arg1 completion:(/*^block*/id)arg2;
-(void)refreshUserAuthToken:(id)arg1 completion:(/*^block*/id)arg2;
-(void)authenticate:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3;
-(void)isEsimFor:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getUserAuthToken:(id)arg1 completion:(/*^block*/id)arg2;
-(void)SIMUnlockProcedureDidComplete;
-(void)unlockPIN:(id)arg1 pin:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setActiveUserDataSelection:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getSimLabel:(id)arg1 completion:(/*^block*/id)arg2;
-(void)createEncryptedIdentity:(id)arg1 identity:(id)arg2 completion:(/*^block*/id)arg3;
-(void)copyGid1:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getUserDefaultVoiceSubscriptionContext:(/*^block*/id)arg1;
-(void)saveSIMLockValue:(id)arg1 enabled:(BOOL)arg2 pin:(id)arg3 completion:(/*^block*/id)arg4;
-(void)copySIMIdentity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getRemainingPUKAttemptCount:(id)arg1 completion:(/*^block*/id)arg2;
-(void)promptForSIMUnlock:(id)arg1 completion:(/*^block*/id)arg2;
-(void)copyLastKnownMobileSubscriberCountryCode:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setDefaultVoice:(id)arg1 completion:(/*^block*/id)arg2;
-(void)copyLabel:(id)arg1 completion:(/*^block*/id)arg2;
-(void)unlockPUK:(id)arg1 puk:(id)arg2 newPin:(id)arg3 completion:(/*^block*/id)arg4;
-(void)copyFirmwareUpdateInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getMobileSubscriberHomeCountryList:(id)arg1 completion:(/*^block*/id)arg2;
-(void)copyMobileEquipmentInfo:(/*^block*/id)arg1;
-(void)copyMobileSubscriberIdentity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setLabel:(id)arg1 label:(id)arg2 completion:(/*^block*/id)arg3;
-(void)copyMobileSubscriberNetworkCode:(id)arg1 completion:(/*^block*/id)arg2;
-(void)copyGid2:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getSIMTrayStatus:(/*^block*/id)arg1;
-(void)changePIN:(id)arg1 oldPin:(id)arg2 newPin:(id)arg3 completion:(/*^block*/id)arg4;
-(void)getRemainingPINAttemptCount:(id)arg1 completion:(/*^block*/id)arg2;
-(void)evaluateMobileSubscriberIdentity:(id)arg1 identity:(id)arg2 completion:(/*^block*/id)arg3;
-(void)context:(id)arg1 supportedIdentityProtectionFor:(id)arg2 completion:(/*^block*/id)arg3;
-(void)context:(id)arg1 isProtectedIdentitySupported:(id)arg2 completion:(/*^block*/id)arg3;
-(void)generateAuthenticationInfoUsingSim:(id)arg1 authParams:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getSIMStatus:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getShortLabel:(id)arg1 completion:(/*^block*/id)arg2;
-(void)context:(id)arg1 getPseudoIdentityFor:(id)arg2 completion:(/*^block*/id)arg3;

@end

