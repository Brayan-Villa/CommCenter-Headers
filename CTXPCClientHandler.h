/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libCommCenterBase.dylib/OCSharedLoggable.h>
#import <libobjc.A.dylib/CTXPCServiceSMSInterface.h>
#import <libobjc.A.dylib/CTXPCServiceDeviceManagementInterface.h>
#import <libobjc.A.dylib/CTXPCServiceCarrierBundleInterface.h>
#import <libobjc.A.dylib/CTXPCServiceVoicemailInterface.h>
#import <libobjc.A.dylib/CTXPCServicePNRInterface.h>
#import <libobjc.A.dylib/CTXPCServiceDataInterface.h>
#import <libobjc.A.dylib/CTXPCServiceCellularPlanManagerInterface.h>
#import <libobjc.A.dylib/CTXPCServiceEmergencyInterface.h>
#import <libobjc.A.dylib/CTXPCServiceCallInterface.h>
#import <libobjc.A.dylib/CTXPCServicePostponementInterface.h>
#import <libobjc.A.dylib/CTXPCServiceFTInterface.h>
#import <libobjc.A.dylib/CTXPCServiceSIMToolkitInterface.h>
#import <libobjc.A.dylib/CTXPCServiceCellularUsagePolicyInterface.h>
#import <libobjc.A.dylib/CTXPCServiceRadioInterface.h>
#import <libobjc.A.dylib/CTXPCServicePhonebookInterface.h>
#import <libobjc.A.dylib/CTXPCServiceSubscriberInterface.h>
#import <libobjc.A.dylib/CTXPCServiceCapabilitiesInterface.h>
#import <libobjc.A.dylib/CTXPCServiceCellMonitorInterface.h>
#import <libobjc.A.dylib/CTXPCServiceCarrierServicesInterface.h>
#import <libobjc.A.dylib/CTXPCServiceRegistrationInterface.h>
#import <libobjc.A.dylib/CTXPCServiceBaseInterface.h>

@protocol CTXPCDataProviderInterface, CTXPCClientHandlerDelegate;
@class NSXPCConnection;

@interface CTXPCClientHandler : OCSharedLoggable <CTXPCServiceSMSInterface, CTXPCServiceDeviceManagementInterface, CTXPCServiceCarrierBundleInterface, CTXPCServiceVoicemailInterface, CTXPCServicePNRInterface, CTXPCServiceDataInterface, CTXPCServiceCellularPlanManagerInterface, CTXPCServiceEmergencyInterface, CTXPCServiceCallInterface, CTXPCServicePostponementInterface, CTXPCServiceFTInterface, CTXPCServiceSIMToolkitInterface, CTXPCServiceCellularUsagePolicyInterface, CTXPCServiceRadioInterface, CTXPCServicePhonebookInterface, CTXPCServiceSubscriberInterface, CTXPCServiceCapabilitiesInterface, CTXPCServiceCellMonitorInterface, CTXPCServiceCarrierServicesInterface, CTXPCServiceRegistrationInterface, CTXPCServiceBaseInterface> {

	id<CTXPCDataProviderInterface> _dataProviderDelegate;
	id<CTXPCClientHandlerDelegate> _delegate;
	NSXPCConnection* _connection;
	shared_ptr<const Registry>* _registry;

}

@property (assign,nonatomic) shared_ptr<const Registry>* registry;                                    //@synthesize registry=_registry - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<CTXPCDataProviderInterface> dataProviderDelegate;              //@synthesize dataProviderDelegate=_dataProviderDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CTXPCClientHandlerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(void)copyRegistrationStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRegistrationDisplayStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyServingPlmn:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyMobileCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLastKnownMobileCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyMobileNetworkCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyIsInHomeCountry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyIsDataAttached:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyOperatorName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLocalizedOperatorName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRadioAccessTechnology:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyWirelessTechnology:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyAbbreviatedOperatorName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRatSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRatSelectionMask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRatSelection:(id)arg1 selection:(id)arg2 preferred:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)copyBandInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBandInfo:(id)arg1 bands:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getBandInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveBandInfo:(id)arg1 bands:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSignalStrengthInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceLinkQualityMetric:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getEnhancedVoiceLinkQualityMetric:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRejectCauseCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRegistrationAgentStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getIMSRegistrationStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRegistrationIMSTransportInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMaxDataRate:(id)arg1 rate:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)getMaxDataRate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSupportedDataRates:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNetworkList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyNetworkList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)automaticallySelectNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)selectNetwork:(id)arg1 network:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyNetworkSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isNetworkSelectionMenuAvailable:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyNetworkSelectionMode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyNetworkSelectionState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyNetworkSelectionInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isNetworkReselectionNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getEncryptionStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getDataMode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPublicSignalStrength:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSignalStrengthMeasurements:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSignalStrengthMeasurementsAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getNRDisableStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSupports5GStandalone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSupports5GStandalone:(id)arg1 enabled:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getCurrentRat:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSweetgumCapabilities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSweetgumUserConsentInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSweetgumUserConsent:(id)arg1 userConsent:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSweetgumUsage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshSweetgumUsage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSweetgumPlans:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshSweetgumPlans:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSweetgumApps:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshSweetgumApps:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshSweetgumAll:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSweetgumDataPlanMetrics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purchaseSweetgumPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshCellMonitor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyCellInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyCellId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyPublicCellId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLocationAreaCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)context:(id)arg1 canSetCapability:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 getCapability:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 setCapability:(id)arg2 enabled:(BOOL)arg3 info:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)context:(id)arg1 getSystemCapabilities:(/*^block*/id)arg2 ;
-(void)getSupports5G:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)context:(id)arg1 recheckPhoneServicesAccountStatus:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getPhoneServicesDeviceList:(/*^block*/id)arg1 ;
-(void)getPhoneServicesDeviceInfo:(/*^block*/id)arg1 ;
-(void)context:(id)arg1 addPhoneServicesDevice:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 removePhoneServicesDevice:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)wifiCallingCTFollowUpComplete:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)context:(id)arg1 mandatoryDisableVoLTE:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 isMandatoryDisabledVoLTE:(/*^block*/id)arg2 ;
-(void)dataUsageForLastPeriods:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataUsageForLastPeriodsOnActivePairedDevice:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)billingCycleEndDatesForLastPeriods:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)userEnteredMonthlyBudget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserEntered:(id)arg1 monthlyBudget:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearUserEnteredMonthlyBudget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userEnteredMonthlyRoamingBudget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserEntered:(id)arg1 monthlyRoamingBudget:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearUserEnteredMonthlyRoamingBudget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userEnteredBillingEndDayOfMont:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserEnteredBillingEnd:(id)arg1 dayOfMonth:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearUserEnteredBillingEndDayOfMonth:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSIMStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSIMTrayStatus:(/*^block*/id)arg1 ;
-(void)copyMobileEquipmentInfo:(/*^block*/id)arg1 ;
-(void)getTypeAllocationCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyFirmwareUpdateInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copySIMIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyMobileSubscriberIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)context:(id)arg1 isProtectedIdentitySupported:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 supportedIdentityProtectionFor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)createEncryptedIdentity:(id)arg1 identity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 getPseudoIdentityFor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)evaluateMobileSubscriberIdentity:(id)arg1 identity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyMobileSubscriberCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyMobileSubscriberIsoCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyMobileSubscriberIsoSubregionCode:(id)arg1 MNC:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isEsimFor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMobileSubscriberHomeCountryList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLastKnownMobileSubscriberCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyMobileSubscriberNetworkCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyGid1:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyGid2:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSimLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getShortLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateAuthenticationInfoUsingSim:(id)arg1 authParams:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLabel:(id)arg1 label:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDefaultVoice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveUserDataSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldAllowSimLockFor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSIMLockValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveSIMLockValue:(id)arg1 enabled:(BOOL)arg2 pin:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)unlockPIN:(id)arg1 pin:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unlockPUK:(id)arg1 puk:(id)arg2 newPin:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)changePIN:(id)arg1 oldPin:(id)arg2 newPin:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getRemainingPINAttemptCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRemainingPUKAttemptCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)promptForSIMUnlock:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)SIMUnlockProcedureDidComplete;
-(void)authenticate:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getUserAuthToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshUserAuthToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getUserDefaultVoiceSubscriptionContext:(/*^block*/id)arg1 ;
-(void)selectPhonebook:(id)arg1 forPhonebookName:(int)arg2 withPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)savePhonebookEntry:(id)arg1 atIndex:(int)arg2 withContactName:(id)arg3 contactNumber:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchPhonebook:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPhonebookEntryCountWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPhonebookEntryWithCompletion:(id)arg1 atIndex:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)getPhoneNumberWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkRadioBootHealth:(/*^block*/id)arg1 ;
-(void)getBasebandRadioFrequencyFrontEndScanData:(/*^block*/id)arg1 ;
-(void)reliableNetworkFallback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setReliableNetworkFallback:(id)arg1 enable:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)lowDataMode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLowDataMode:(id)arg1 enable:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)isSmartDataModeSupportedWithCompletion:(/*^block*/id)arg1 ;
-(void)smartDataMode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSmartDataMode:(id)arg1 enable:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)isHighDataModeSupported:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)interfaceCostExpensive:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInterfaceCost:(id)arg1 expensive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSIMToolkitMenuForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)selectSIMToolkitMenuItemForContext:(id)arg1 index:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSIMToolkitListItemsForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)selectSIMToolkitListItemForContext:(id)arg1 session:(id)arg2 response:(id)arg3 index:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendSIMToolkitResponseForContext:(id)arg1 session:(id)arg2 response:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendSIMToolkitStringResponseForContext:(id)arg1 session:(id)arg2 response:(id)arg3 string:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendSIMToolkitBooleanResponseForContext:(id)arg1 session:(id)arg2 response:(id)arg3 yesNo:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendSIMToolkitUserActivityForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendSIMToolkitDisplayReadyForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSIMToolkitUSSDStringForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendSIMToolkitUSSDResponseForContext:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelSIMToolkitUSSDSessionForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVoLTEAudioCodec:(id)arg1 codecInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyPriVersion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getActivationPolicyState:(/*^block*/id)arg1 ;
-(void)isEmergencyNumber:(id)arg1 number:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isEmergencyNumberWithWhitelistIncluded:(id)arg1 number:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldShowUserWarningWhenDialingCallOnContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCallCapabilities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getOperatorMultiPartyCallCountMaximum:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyEmergencyMode:(/*^block*/id)arg1 ;
-(void)copyNormalEmergencyMode:(/*^block*/id)arg1 ;
-(void)fetchCallWaitingValue:(id)arg1 callClass:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCallForwardingValue:(id)arg1 reason:(int)arg2 callClass:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 password:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchConnectedLinePresentationValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCallingLinePresentationValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchConnectedLineIdRestrictionValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCallingLineIdRestrictionValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveCallWaitingValue:(id)arg1 callClass:(int)arg2 enabled:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)saveCallForwardingValue:(id)arg1 value:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 enabled:(BOOL)arg4 password:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)saveCallingLineIdRestrictionValue:(id)arg1 restrictionValue:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)isUnconditionalCallForwardingActive:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)supportsPlanProvisioning:(id)arg1 carrierDescriptors:(id)arg2 smdpUrl:(id)arg3 iccidPrefix:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)addPlanWith:(id)arg1 appName:(id)arg2 appType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addPlanWith:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getCameraScanInfoForCardData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getTransferPlanListWithCompletion:(/*^block*/id)arg1 ;
-(void)getTransferPlansWithCompletion:(/*^block*/id)arg1 ;
-(void)hiddenTransferPlans:(/*^block*/id)arg1 ;
-(void)hideTransferPlan:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideTransferCellularPlan:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unhideTransferPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteTransferPlansForImei:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transferPlan:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transferCellularPlan:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transferPlans:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transferCellularPlans:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)cancelPlanTransfer:(id)arg1 fromDevice:(id)arg2 ;
-(id)cancelCellularPlanTransfer:(id)arg1 fromDevice:(id)arg2 ;
-(void)getCurrentIMessageIccidsWithCompletion:(/*^block*/id)arg1 ;
-(void)plansPendingInstallWithCompletion:(/*^block*/id)arg1 ;
-(void)installPendingPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installPendingPlanList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)bootstrapPlanTransferForEndpoint:(unsigned long long)arg1 usingMessageSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 availableForThisDeviceWithCompletion:(/*^block*/id)arg2 ;
-(void)isAnyPlanTransferableFromThisDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)endPlanTransferForEndPoint:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRemoteDevicesForTransferWithCompletion:(/*^block*/id)arg1 ;
-(void)getRemoteDeviceForTransferWithEID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transferRemotePlan:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remotePlanSignupInfoFor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRemoteDevices:(/*^block*/id)arg1 ;
-(void)purchaseAddOnPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)resetAPNSettings:(/*^block*/id)arg1 ;
-(void)sendDeadPeerDetection:(/*^block*/id)arg1 ;
-(void)setInternationalDataAccess:(id)arg1 status:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getInternationalDataAccess:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSupportDynamicDataSimSwitch:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSupportDynamicDataSimSwitch:(BOOL)arg1 forIccid:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSupportDynamicDataSimSwitch:(/*^block*/id)arg1 ;
-(void)getPacketContextCount:(/*^block*/id)arg1 ;
-(void)getConnectionAvailability:(id)arg1 connectionType:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)getTetheringStatus:(/*^block*/id)arg1 ;
-(void)getActiveConnections:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConnectionState:(id)arg1 connectionType:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)getDataStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getNATTKeepAliveOverCell:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isTetheringEditingSupported:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCurrentDataSubscriptionContext:(/*^block*/id)arg1 ;
-(void)getCurrentDataServiceDescriptor:(/*^block*/id)arg1 ;
-(void)getPreferredDataSubscriptionContext:(/*^block*/id)arg1 ;
-(void)getPreferredDataServiceDescriptor:(/*^block*/id)arg1 ;
-(void)enterLoopBackMode:(/*^block*/id)arg1 ;
-(void)isPNRSupported:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)issuePNRRequest:(id)arg1 pnrReqType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getPNRContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isPhoneNumberCredentialValid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)context:(id)arg1 getPhoneNumberSignatureWithCompletion:(/*^block*/id)arg2 ;
-(void)getVoicemailInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVisualVoicemailState:(id)arg1 subscribed:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyCarrierBundleValue:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)copyCarrierBundleValue:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)copyCarrierBundleValueWithDefault:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)copyCarrierBundleValueWithDefault:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)universalGetCarrierBundleValue:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 withDefault:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)copyCarrierBundleLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyCarrierBookmarks:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyCarrierBundleVersion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isAttachApnSettingAllowed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)context:(id)arg1 modifyAttachApnSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 getAttachApnSettingsWithCompletion:(/*^block*/id)arg2 ;
-(void)setWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyBundleVersion:(id)arg1 bundleType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyBundleIdentifier:(id)arg1 bundleType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)restoreToSystemBundles:(/*^block*/id)arg1 ;
-(void)setUIConfiguredApns:(id)arg1 apns:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getUIConfiguredApns:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetUIConfiguredApns:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConfiguredApns:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deletePersonalWallet:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renamePersonalWallet:(id)arg1 to:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)listPersonalWallets:(/*^block*/id)arg1 ;
-(void)getSmsReadyState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSmscAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getEmergencyTextNumbers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRegistry:(const shared_ptr<const Registry>*)arg1 queue:(queue*)arg2 connection:(id)arg3 ;
-(void)getSubscriptionInfo:(/*^block*/id)arg1 ;
-(void)getActiveContexts:(/*^block*/id)arg1 ;
-(void)getSimLessContexts:(/*^block*/id)arg1 ;
-(void)getDualSimCapability:(/*^block*/id)arg1 ;
-(void)getDescriptorsForDomain:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)ping:(/*^block*/id)arg1 ;
-(void)registerForNotifications:(id)arg1 completion:(/*^block*/id)arg2 ;
-(shared_ptr<const Registry>*)registry;
-(void)setRegistry:(shared_ptr<const Registry>*)arg1 ;
-(id<CTXPCDataProviderInterface>)dataProviderDelegate;
-(void)setDataProviderDelegate:(id<CTXPCDataProviderInterface>)arg1 ;
-(id<CTXPCClientHandlerDelegate>)delegate;
-(void)setDelegate:(id<CTXPCClientHandlerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

