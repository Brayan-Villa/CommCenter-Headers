/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/


@protocol CTXPCServiceCellularPlanManagerInterface
@required
-(void)getCurrentIMessageIccidsWithCompletion:(/*^block*/id)arg1;
-(void)supportsPlanProvisioning:(id)arg1 carrierDescriptors:(id)arg2 smdpUrl:(id)arg3 iccidPrefix:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteZone:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getRemoteDevicesForTransferWithCompletion:(/*^block*/id)arg1;
-(void)plansPendingInstallWithCompletion:(/*^block*/id)arg1;
-(void)isAnyPlanTransferableFromThisDeviceWithCompletion:(/*^block*/id)arg1;
-(void)endPlanTransferForEndPoint:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)getRemoteDeviceForTransferWithEID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)unhideTransferPlan:(id)arg1 completion:(/*^block*/id)arg2;
-(id)cancelCellularPlanTransfer:(id)arg1 fromDevice:(id)arg2;
-(void)deleteTransferPlansForImei:(id)arg1 completion:(/*^block*/id)arg2;
-(void)installPendingPlanList:(id)arg1 completion:(/*^block*/id)arg2;
-(void)installPendingPlan:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getRemoteDevices:(/*^block*/id)arg1;
-(void)hiddenTransferPlans:(/*^block*/id)arg1;
-(void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 availableForThisDeviceWithCompletion:(/*^block*/id)arg2;
-(id)cancelPlanTransfer:(id)arg1 fromDevice:(id)arg2;
-(void)transferPlans:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)addPlanWith:(id)arg1 appName:(id)arg2 appType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)getTransferPlanListWithCompletion:(/*^block*/id)arg1;
-(void)getTransferPlansWithCompletion:(/*^block*/id)arg1;
-(void)remotePlanSignupInfoFor:(id)arg1 completion:(/*^block*/id)arg2;
-(void)hideTransferCellularPlan:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transferCellularPlans:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)addPlanWith:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)purchaseAddOnPlan:(id)arg1 completion:(/*^block*/id)arg2;
-(void)transferCellularPlan:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)transferRemotePlan:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transferPlan:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getCameraScanInfoForCardData:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)bootstrapPlanTransferForEndpoint:(unsigned long long)arg1 usingMessageSession:(id)arg2 completion:(/*^block*/id)arg3;
-(void)hideTransferPlan:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3;

@end

