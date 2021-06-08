/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:30 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/


@protocol CTXPCServicePhonebookInterface
@required
-(void)selectPhonebook:(id)arg1 forPhonebookName:(int)arg2 withPassword:(id)arg3 completion:(/*^block*/id)arg4;
-(void)fetchPhonebook:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getPhonebookEntryWithCompletion:(id)arg1 atIndex:(int)arg2 completion:(/*^block*/id)arg3;
-(void)savePhonebookEntry:(id)arg1 atIndex:(int)arg2 withContactName:(id)arg3 contactNumber:(id)arg4 completion:(/*^block*/id)arg5;
-(void)getPhonebookEntryCountWithCompletion:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getPhoneNumberWithCompletion:(id)arg1 completion:(/*^block*/id)arg2;

@end
