/*
*This header is generated by classdump-dyld 1.5
*on Tuesday, June 8, 2021 at 2:19:29 PM Central Daylight Time
*Operating System: Version 14.7 (Build 18G5023c)
*Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
*classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
*/


#import <CommCenter/CommCenter-Structs.h>
@interface CryptoHelper : NSObject {

	_SecKey* myPrivateKeyRef;

}
+(id)sharedCryptoHelper;
-(id)init;
-(_SecKey*)getPubKeyFromCert:(id)arg1 ;
-(id)getHashBytes:(id)arg1 ;
-(id)getHashBytes_SHA256:(id)arg1 ;
-(int)verifySignature:(_SecKey*)arg1 rawData:(const char*)arg2 rawDataLen:(unsigned long long)arg3 sigData:(const char*)arg4 sigDataLen:(unsigned long long)arg5 ;
-(_SecKey*)getPrivateKeyRef;
-(id)createSignature:(id)arg1 ;
-(id)wrapSymmetricKey:(id)arg1 keyRef:(_SecKey*)arg2 ;
-(id)unwrapSymmetricKey:(id)arg1 ;
-(id)doCipher:(id)arg1 key:(id)arg2 context:(unsigned)arg3 padding:(unsigned*)arg4 ;
@end

