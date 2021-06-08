/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libCommCenterBase.dylib/OCSharedLoggable.h>
#import <CommCenter/CTXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <CommCenter/CTXPCNotificationSinkInterface.h>
#import <CommCenter/CTXPCDataProviderInterface.h>
#import <CommCenter/CTXPCClientHandlerDelegate.h>
#import <CommCenter/CTXPCClientBehaviorTrackerDelegate.h>

@protocol CTXPCServerDelegate, CTXPCFactoryInterface;
@class CTXPCClientBehaviorTracker, CTXPCNotificationProxy, CTXPCListener, CTXPCServerEntitlementProvider, CTXPCServiceSubscriptionInfo, CTXPCContexts, CTXPCSimLessContexts, NSString;

@interface CTXPCServer : OCSharedLoggable <CTXPCListenerDelegate, NSXPCConnectionDelegate, CTXPCNotificationSinkInterface, CTXPCDataProviderInterface, CTXPCClientHandlerDelegate, CTXPCClientBehaviorTrackerDelegate> {

	unique_ptr<ctu::RestModule, std::__1::default_delete<ctu::RestModule>>* _restModule;
	property_sink_t<rest::subscription_info>* _subInfoSink;
	property_sink_t<rest::active_subscriptions>* _activeSubsSink;
	CTXPCClientBehaviorTracker* _clientBehaviorTracker;
	CTXPCNotificationProxy* _notificationProxy;
	id<CTXPCServerDelegate> _delegate;
	id<CTXPCFactoryInterface> _factory;
	CTXPCListener* _listener;
	CTXPCServerEntitlementProvider* _entitlementProvider;
	CTXPCServiceSubscriptionInfo* _subInfo;
	CTXPCServiceSubscriptionInfo* _allSubInfo;
	CTXPCContexts* _activeSubs;
	CTXPCSimLessContexts* _simLessSubs;
	shared_ptr<const Registry>* _registry;
	map<NSXPCConnection *, (anonymous namespace)::ClientInfo, std::__1::less<NSXPCConnection *>, std::__1::allocator<std::__1::pair<NSXPCConnection *const, (anonymous namespace)::ClientInfo>>>* _clients;

}

@property (assign,nonatomic) shared_ptr<const Registry>* registry;                              //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) id<CTXPCFactoryInterface> factory;                                 //@synthesize factory=_factory - In the implementation block
@property (assign,nonatomic) map<NSXPCConnection * clients;                                     //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) CTXPCListener * listener;                                          //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) CTXPCNotificationProxy * notificationProxy;                        //@synthesize notificationProxy=_notificationProxy - In the implementation block
@property (nonatomic,retain) CTXPCServerEntitlementProvider * entitlementProvider;              //@synthesize entitlementProvider=_entitlementProvider - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionInfo * subInfo;                            //@synthesize subInfo=_subInfo - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionInfo * allSubInfo;                         //@synthesize allSubInfo=_allSubInfo - In the implementation block
@property (nonatomic,retain) CTXPCContexts * activeSubs;                                        //@synthesize activeSubs=_activeSubs - In the implementation block
@property (nonatomic,retain) CTXPCSimLessContexts * simLessSubs;                                //@synthesize simLessSubs=_simLessSubs - In the implementation block
@property (assign,nonatomic,__weak) id<CTXPCServerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRegistry:(shared_ptr<const Registry>*)arg1 factory:(id)arg2 queue:(queue*)arg3 ;
-(void)bootstrap:(group_session*)arg1 ;
-(void)start;
-(void)shutdown:(group_session*)arg1 ;
-(void)_registerRestObservers_sync;
-(void)_registerRestProviders_sync;
-(void)_handleGetClientsQuery_sync:(command_responder_t<xpc::dict>*)arg1 ;
-(void)_handleSubscriptionInfoChanged_sync:(const SubscriptionInfo*)arg1 ;
-(void)_handleActiveSubscriptionsChanged_sync:(const ActiveSubscriptions*)arg1 ;
-(shared_ptr<(anonymous namespace)::ProcInfo>*)_getProcInfo_sync:(int)arg1 ;
-(shared_ptr<(anonymous namespace)::ProcInfo>*)_getOrCreateProcInfo_sync:(id)arg1 ;
-(void)_setupAppState_sync:(const shared_ptr<(anonymous namespace)::ProcInfo>*)arg1 ;
-(void)_updateAppNotificationState_sync:(int)arg1 isBackgroundEntitled:(BOOL)arg2 ;
-(void)_processAppState_sync:(int)arg1 state:(int)arg2 isBackgroundEntitled:(BOOL)arg3 ;
-(void)_handleAppSuspended_sync:(int)arg1 ;
-(void)_handleAppRunningTransitioned_sync:(const shared_ptr<(anonymous namespace)::ProcInfo>*)arg1 isForeground:(BOOL)arg2 ;
-(BOOL)_handleAppStateChanged_sync:(int)arg1 state:(int)arg2 ;
-(BOOL)_sendNotification_sync:(id)arg1 connection:(id)arg2 ;
-(id)clientProxyForConnection:(id)arg1 ;
-(void)connectionDidBecomeInvalidated:(id)arg1 ;
-(id)subscriptionInfo;
-(id)allSubscriptions;
-(id)activeSubscriptions;
-(id)simLessContexts;
-(id)contextForUUID:(id)arg1 ;
-(id)contextForSlot:(int)arg1 ;
-(id)resolveContext:(id)arg1 ;
-(void)processNotification:(id)arg1 ;
-(void)receivedSelectors:(id)arg1 forConnection:(id)arg2 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)connectionDidTriggerFault:(id)arg1 logString:(id)arg2 ;
-(CTXPCNotificationProxy *)notificationProxy;
-(void)setNotificationProxy:(CTXPCNotificationProxy *)arg1 ;
-(id<CTXPCServerDelegate>)delegate;
-(void)setDelegate:(id<CTXPCServerDelegate>)arg1 ;
-(shared_ptr<const Registry>*)registry;
-(void)setRegistry:(shared_ptr<const Registry>*)arg1 ;
-(id<CTXPCFactoryInterface>)factory;
-(void)setFactory:(id<CTXPCFactoryInterface>)arg1 ;
-(map<NSXPCConnection *)clients;
-(void)setClients:(map<NSXPCConnection *)arg1 ;
-(CTXPCListener *)listener;
-(void)setListener:(CTXPCListener *)arg1 ;
-(CTXPCServerEntitlementProvider *)entitlementProvider;
-(void)setEntitlementProvider:(CTXPCServerEntitlementProvider *)arg1 ;
-(CTXPCServiceSubscriptionInfo *)subInfo;
-(void)setSubInfo:(CTXPCServiceSubscriptionInfo *)arg1 ;
-(CTXPCServiceSubscriptionInfo *)allSubInfo;
-(void)setAllSubInfo:(CTXPCServiceSubscriptionInfo *)arg1 ;
-(CTXPCContexts *)activeSubs;
-(void)setActiveSubs:(CTXPCContexts *)arg1 ;
-(CTXPCSimLessContexts *)simLessSubs;
-(void)setSimLessSubs:(CTXPCSimLessContexts *)arg1 ;
@end

