/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/


@protocol CTXPCServiceDeviceManagementInterface
@required
-(void)getUIConfiguredApns:(id)arg1 completion:(/*^block*/id)arg2;
-(void)renamePersonalWallet:(id)arg1 to:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setUIConfiguredApns:(id)arg1 apns:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getConfiguredApns:(id)arg1 completion:(/*^block*/id)arg2;
-(void)listPersonalWallets:(/*^block*/id)arg1;
-(void)resetUIConfiguredApns:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deletePersonalWallet:(id)arg1 completion:(/*^block*/id)arg2;

@end

