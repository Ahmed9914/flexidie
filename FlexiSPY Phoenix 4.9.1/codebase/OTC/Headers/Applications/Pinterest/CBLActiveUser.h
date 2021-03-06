/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CBLUser.h"

@class NSMutableArray, CBLCategory, NSDictionary, CBLBoard, ACAccount, NSArray, CBLSocialFriendCollection, CBLRemoteModelCollection, NSString;

__attribute__((visibility("hidden")))
@interface CBLActiveUser : CBLUser {
	BOOL _facebookPublishStreamEnabled;
	BOOL _facebookTimelineEnabled;
	BOOL _emailVerified;
	BOOL _connectedToRakuten;
	BOOL _connectedToTwitter;
	BOOL _connectedToFacebook;
	CBLRemoteModelCollection* _notifications;
	CBLSocialFriendCollection* _twitterFriends;
	CBLSocialFriendCollection* _facebookFriends;
	CBLRemoteModelCollection* _recommendedBoardsFromFriends;
	CBLRemoteModelCollection* _leastUsedBoards;
	CBLRemoteModelCollection* _suggestedBoards;
	CBLRemoteModelCollection* _suggestedInterests;
	CBLRemoteModelCollection* _followedInterests;
	CBLRemoteModelCollection* _categories;
	CBLRemoteModelCollection* _interestsCategoriesBlended;
	NSString* _countryCode;
	NSString* _accessToken;
	ACAccount* _twitterAccount;
	NSArray* _facebookScopes;
	NSDictionary* _experiments;
	NSDictionary* _triggerableExperiments;
	NSArray* _recentCategories;
	NSArray* _nags;
	CBLCategory* _lastSelectedCategory;
	NSMutableArray* _recentContacts;
}
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* followedInterests;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* interestsCategoriesBlended;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* categories;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* suggestedInterests;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* suggestedBoards;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* leastUsedBoards;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* recommendedBoardsFromFriends;
@property(readonly, assign, nonatomic) CBLSocialFriendCollection* facebookFriends;
@property(readonly, assign, nonatomic) CBLSocialFriendCollection* twitterFriends;
@property(retain, nonatomic) NSMutableArray* recentContacts;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* notifications;
@property(retain, nonatomic) CBLCategory* lastSelectedCategory;
@property(retain, nonatomic) CBLBoard* lastSelectedBoard;
@property(readonly, assign, nonatomic) NSArray* nags;
@property(retain, nonatomic) NSArray* recentCategories;
@property(readonly, assign, nonatomic) NSArray* recentBoards;
@property(readonly, assign, nonatomic) NSDictionary* triggerableExperiments;
@property(retain, nonatomic) NSDictionary* experiments;
@property(readonly, assign, nonatomic) NSArray* facebookScopes;
@property(retain, nonatomic) ACAccount* twitterAccount;
@property(retain, nonatomic) NSString* accessToken;
@property(readonly, assign, nonatomic) BOOL isEmployee;
@property(readonly, assign, nonatomic) BOOL isLabsUser;
@property(assign, nonatomic) BOOL connectedToFacebook;
@property(assign, nonatomic) BOOL connectedToTwitter;
@property(assign, nonatomic) BOOL connectedToRakuten;
@property(assign, nonatomic) BOOL emailVerified;
@property(assign, nonatomic) BOOL facebookTimelineEnabled;
@property(assign, nonatomic) BOOL facebookPublishStreamEnabled;
@property(retain, nonatomic) NSString* countryCode;
+(id)additionalDetailFields;
+(id)propertyAliases;
//-(void).cxx_destruct;
-(void)inMultiInviteExperimentHeroTriggered:(id)multiInviteExperimentHeroTriggered;
-(id)groupForInterestsExperiment;
-(BOOL)inRelatedRichPinExperiment;
-(BOOL)inInterestsExperiment;
-(BOOL)inPostSendPinContactImportExperiment;
-(BOOL)inImageDiskCacheExperiment;
-(BOOL)inLikeRecommendationsExperiment;
-(BOOL)inBoardFollowRecommendationsExperiment;
-(BOOL)inRepinRecommendationsExperiment;
-(void)resendVerificationEmail;
-(void)activateExperimentWithName:(id)name persistent:(BOOL)persistent;
-(void)changePasswordToNewPassword:(id)newPassword retypeNewPassword:(id)password oldPassword:(id)password3 success:(id)success failure:(id)failure;
-(void)connectWithFacebookUserID:(id)facebookUserID token:(id)token link:(id)link success:(id)success andFailure:(id)failure;
-(void)connectWithTwitterAccount:(id)twitterAccount userID:(id)anId token:(id)token tokenSecret:(id)secret success:(id)success andFailure:(id)failure;
-(id)categoryDefaultsKey;
-(void)refreshRecentCategories;
-(id)languageDefaultsKey;
-(void)checkLanguageChange;
-(id)recommendedBoardsForCategory:(id)category;
-(void)checkUnseenNotificationCountWithSuccess:(id)success andFailure:(id)failure;
-(id)groupForExperiment:(id)experiment;
-(BOOL)inExperiment:(id)experiment andGroup:(id)group;
-(BOOL)inExperiment:(id)experiment;
-(void)loadRecentContactsWithBlock:(id)block;
-(void)deactivateUserAccountWithSuccess:(id)success andFailure:(id)failure;
-(void)disconnectFromFacebookWithSuccess:(id)success andFailure:(id)failure;
-(void)disconnectFromTwitterWithSuccess:(id)success andFailure:(id)failure;
-(void)disconnectFromRakutenWithSuccess:(id)success andFailure:(id)failure;
-(void)connectToFacebookWithSuccess:(id)success andFailure:(id)failure;
-(void)connectToTwitterAccount:(id)twitterAccount withSuccess:(id)success andFailure:(id)failure;
-(void)connectToRakuten:(id)rakuten withSuccess:(id)success andFailure:(id)failure;
-(void)updateRemoteSettings:(id)settings picture:(id)picture progress:(id)progress success:(id)success failure:(id)failure;
-(void)updateRemoteSettings:(id)settings success:(id)success failure:(id)failure;
@end

