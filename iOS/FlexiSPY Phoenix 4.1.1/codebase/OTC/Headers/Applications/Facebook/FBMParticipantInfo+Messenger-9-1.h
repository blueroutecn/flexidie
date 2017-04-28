/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class FBMImageUrls, NSString;
/*
@interface FBMParticipantInfo : NSObject
{
    NSString *_userId;
    NSString *_email;
    NSString *_name;
    long long _readReceiptTimestamp;
    NSString *_readReceiptMessageId;
    NSString *_deliveryReceiptMessageId;
    FBMImageUrls *_imageUrls;
    long long _deliveryReceiptTimestamp;
}*/
@interface FBMParticipantInfo (Messenger_9_1)
@property(nonatomic) long long deliveryReceiptTimestamp; // @synthesize deliveryReceiptTimestamp=_deliveryReceiptTimestamp;
@property(nonatomic) long long readReceiptTimestamp; // @synthesize readReceiptTimestamp=_readReceiptTimestamp;
@property(copy, nonatomic) FBMImageUrls *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(copy, nonatomic) NSString *deliveryReceiptMessageId; // @synthesize deliveryReceiptMessageId=_deliveryReceiptMessageId;
@property(copy, nonatomic) NSString *readReceiptMessageId; // @synthesize readReceiptMessageId=_readReceiptMessageId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
//- (void).cxx_destruct;
- (BOOL)isEmailUser;
- (BOOL)isUser;
- (id)getKey;
- (id)JSONString;
- (void)mergeFromParticipantInfo:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end
