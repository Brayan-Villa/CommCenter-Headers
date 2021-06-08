/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/


@protocol CTXPCFactoryInterface <NSObject>
@required
-(id)createListener:(const queue*)arg1 name:(const char*)arg2 logContext:(OsLogContext*)arg3;
-(id)createCTXPCClientBehaviorTracker:(const queue*)arg1;
-(id)createEntitlementProvider;
-(shared_ptr<CCXpcServerEntitlementChecker>*)createEntitlementChecker:(const connection*)arg1;

@end
