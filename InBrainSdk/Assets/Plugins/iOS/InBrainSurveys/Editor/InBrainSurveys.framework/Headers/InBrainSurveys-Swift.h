#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef INBRAINSURVEYS_SWIFT_H
#define INBRAINSURVEYS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="InBrainSurveys",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@protocol InBrainDelegate;
@protocol NativeSurveyDelegate;
@class NSString;
@class InBrainNavBarConfig;
@class InBrainStatusBarConfig;
@class UIViewController;
@class InBrainReward;
@class InBrainCurrencySale;
@class InBrainSurveyFilter;
@class InBrainNativeSurvey;

/// Main interface to communicate with the InBrain service.
SWIFT_CLASS("_TtC14InBrainSurveys7InBrain")
@interface InBrain : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) InBrain * _Nonnull shared;)
+ (InBrain * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, weak) id <InBrainDelegate> _Nullable inBrainDelegate;
@property (nonatomic, weak) id <NativeSurveyDelegate> _Nullable nativeSurveysDelegate;
@property (nonatomic, readonly) BOOL isOnScreen;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Initial inBrain SDK configuration
/// \param apiClientID The client ID provided in inBrain.ai dashboard
///
/// \param apiSecret The client secret provided in inBrain.ai dashboard
///
/// \param isS2S Set <code>true</code> to get new rewards automatically at <code>didReceiveInBrainRewards(rewardsArray:)</code> method of InBrainDelegate
///
- (void)setInBrainWithApiClientID:(NSString * _Nonnull)apiClientID apiSecret:(NSString * _Nonnull)apiSecret isS2S:(BOOL)isS2S;
/// Initial inBrain SDK configuration
/// \param apiClientID The client ID provided in inBrain.ai dashboard
///
/// \param apiSecret The client secret provided in inBrain.ai dashboard
///
/// \param isS2S Set <code>true</code> to get new rewards automatically at <code>didReceiveInBrainRewards(rewardsArray:)</code> method of InBrainDelegate
///
/// \param userID The string value that uniquely identifies each user within your application. Can be provided later, using <code>set(userID:)</code> method
///
- (void)setInBrainWithApiClientID:(NSString * _Nonnull)apiClientID apiSecret:(NSString * _Nonnull)apiSecret isS2S:(BOOL)isS2S userID:(NSString * _Nullable)userID;
/// Set uniq identifier of user within your application. If value not set (or empty) - <code>identifierForVendor</code> will be used
/// \param userID The string value that uniquely identifies each user within your application
///
- (void)setWithUserID:(NSString * _Nullable)userID;
/// Set title before calling <code>showSurveys()</code>
- (void)setNavigationBarTitle:(NSString * _Nullable)title;
/// Customize Navigation Bar to match your application style
- (void)setNavigationBarConfig:(InBrainNavBarConfig * _Nonnull)config;
/// Customize Status Bar to match your application style
/// In order to customize status bar - needs to set <code>View controller-based status bar appearance</code> to <code>YES</code>
- (void)setStatusBarConfig:(InBrainStatusBarConfig * _Nonnull)config;
/// Set the value to track user session. This value is provided via S2S Callbacks as SessionId.
/// \param sessionID Session identifier
///
- (void)setSessionID:(NSString * _Nullable)sessionID;
/// Set values before calling <code>showSurveys()</code>
- (void)setDataOptions:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)dataOptions;
/// Check are surveys available.
- (void)checkForAvailableSurveysWithCompletion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// Show the Survey Wall. All the configs should be done <code>BEFORE</code> calling <code>showSurveys()</code>.
/// If you are using <em>NativeSurveys</em> (regardless of filters) - please, take care about refreshing them after some survey(s) completed. Additional details may be found at <em>getNativeSurveys</em> function description.
/// \param viewController ViewController to present InBrain from. If no controller specified - InBrain will be presented from inBrainDelegate (if subclass of UIViewController) OR from UIApplication’s keyWindow
///
- (void)showSurveysFrom:(UIViewController * _Nullable)viewController;
/// Request InBrainRewards from the server. Process the rewards within your app
/// and confirm it using <code>confirmRewards(txIdArray:)</code> function.
/// \param success Callback to be triggered just rewards fetched
///
/// \param failed Callback to be triggered in case of error
/// while fetching rewards
///
- (void)getRewardsWithSuccess:(void (^ _Nonnull)(NSArray<InBrainReward *> * _Nonnull))success failed:(void (^ _Nonnull)(NSError * _Nonnull))failed;
/// Request InBrainRewards from the server. Process the rewards within your app
/// and confirm it using <code>confirmRewards(txIdArray:)</code> function.
/// Result will be passed to <code>InBrainDelegate's</code>
- (void)getRewards;
/// Confirm rewards after processed by the app.
/// After rewards confirmed - they weren’t be returned by <code>getRewards()</code> method
/// \param txIdArray Rewards ids to be confirmed
///
- (void)confirmRewardsWithTxIdArray:(NSArray<NSNumber *> * _Nonnull)txIdArray;
/// Get information about active Currency Sale
- (void)getCurrencySaleWithSuccess:(void (^ _Nonnull)(InBrainCurrencySale * _Nullable))success failed:(void (^ _Nonnull)(NSError * _Nonnull))failed;
/// Get native surveys for the user. Result will be delivered to <code>NativeSurveyDelegate</code>.
/// After survey completed - it becames invalid and cannot be opened again. Please, take care about refreshing surveys with appropriate filter(s).
/// We are proposing to fetch <em>NativeSurveys</em> each time after <em>InBbrainWebView</em> closed and some survey(s) completed.
/// important:
/// Please, note:
/// <ul>
///   <li>
///     The same NativeSurvey may fit a few filters at te same time. If you are using a few filters - please, refresh the surveys for each filter where the survey presented;
///   </li>
///   <li>
///     If you are using SurveyWall as well - please take care about refreshing NativeSurveys after some survey(s) completed.
///   </li>
/// </ul>
/// Use <em>surveysClosed(byWebView: Bool, completedSurvey: Bool, rewards: [InBrainSurveyReward]?)</em> method of <em>InBrainDelegate</em> to detect InBbrainWebView dismissal.
- (void)getNativeSurveysWithFilter:(InBrainSurveyFilter * _Nullable)filter;
/// Get native surveys for the user. Result will be delivered to <code>success</code> or <code>failed</code> callback.
/// After survey completed - it becames invalid and cannot be opened again. Please, take care about refreshing surveys with appropriate filter(s).
/// We are proposing to fetch <em>NativeSurveys</em> each time after <em>InBbrainWebView</em> closed and some survey(s) completed.
/// important:
/// Please, note:
/// <ul>
///   <li>
///     The same NativeSurvey may fit a few filters at te same time. If you are using a few filters - please, refresh the surveys for each filter where the survey presented;
///   </li>
///   <li>
///     If you are using SurveyWall as well - please take care about refreshing NativeSurveys after some survey(s) completed.
///   </li>
/// </ul>
/// Use <em>surveysClosed(byWebView: Bool, completedSurvey: Bool, rewards: [InBrainSurveyReward]?)</em> method of <em>InBrainDelegate</em> to detect InBbrainWebView dismissal.
- (void)getNativeSurveysWithFilter:(InBrainSurveyFilter * _Nullable)filter success:(void (^ _Nonnull)(NSArray<InBrainNativeSurvey *> * _Nonnull))success failed:(void (^ _Nonnull)(NSError * _Nonnull))failed;
/// All the configs should be done <code>BEFORE</code> calling <code>showSurveys()</code>.
/// After survey completed - it becames invalid and cannot be opened again. Please, ensure all the NativeSurveys updated after <em>InBrainWebView</em> closed. Additional details may be found at <em>getNativeSurveys</em> function description
/// \param survey Native survey to be opened
///
/// \param viewController ViewController to present InBrain from. If no controller specified - InBrain will be presented from inBrainDelegate (if subclass of UIViewController) OR from UIApplication’s keyWindow
///
- (void)showNativeSurvey:(InBrainNativeSurvey * _Nonnull)survey from:(UIViewController * _Nullable)viewController;
/// All the configs should be done <code>BEFORE</code> calling <code>showSurveys()</code>.
/// After survey completed - it becames invalid and cannot be opened again. Please, ensure all the NativeSurveys updated after <em>InBrainWebView</em> closed. Additional details may be found at <em>getNativeSurveys</em> function description
/// \param searchId Survey’s <code>searchId</code>
///
/// \param viewController ViewController to present InBrain from. If no controller specified - InBrain will be presented from inBrainDelegate (if subclass of UIViewController) OR from UIApplication’s keyWindow
///
- (void)showNativeSurveyWithId:(NSString * _Nonnull)surveyId searchId:(NSString * _Nonnull)searchId from:(UIViewController * _Nullable)viewController;
- (BOOL)setLanguage:(NSString * _Nonnull)language error:(NSError * _Nullable * _Nullable)error SWIFT_DEPRECATED_MSG("The function is deprecate and will be removed soon!");
- (void)setInBrainValuesForSessionID:(NSString * _Nullable)sessionID dataOptions:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)dataOptions SWIFT_DEPRECATED_MSG("Please, use setSessionID(_:) and setDataOptions(_:)");
- (void)getNativeSurveysWithPlacementId:(NSString * _Nullable)placementId SWIFT_DEPRECATED_MSG("", "getNativeSurveysWithFilter:");
- (void)getNativeSurveysWithPlacementID:(NSString * _Nullable)placementID success:(void (^ _Nonnull)(NSArray<InBrainNativeSurvey *> * _Nonnull))success failed:(void (^ _Nonnull)(NSError * _Nonnull))failed SWIFT_DEPRECATED_MSG("", "getNativeSurveysWithFilter:success:failed:");
- (void)setInBrainWithApiClientID:(NSString * _Nonnull)apiClientID apiSecret:(NSString * _Nonnull)apiSecret isS2S:(BOOL)isS2S userID:(NSString * _Nullable)userID language:(NSString * _Nonnull)language SWIFT_UNAVAILABLE_MSG("Please, use separate setLanguage(from:) function");
- (void)setLanguageWithValue:(NSString * _Nonnull)value SWIFT_UNAVAILABLE_MSG("'setLanguage' has been renamed to 'setLanguage:error:'");
- (void)showSurveys SWIFT_UNAVAILABLE_MSG("'showSurveys' has been renamed to 'showSurveysFrom:'");
- (void)getNativeSurveys SWIFT_UNAVAILABLE_MSG("'getNativeSurveys' has been renamed to 'getNativeSurveysWithFilter:'");
- (void)getNativeSurveysWithSuccess:(void (^ _Nonnull)(NSArray<InBrainNativeSurvey *> * _Nonnull))success failed:(void (^ _Nonnull)(NSError * _Nonnull))failed SWIFT_UNAVAILABLE_MSG("'getNativeSurveys' has been renamed to 'getNativeSurveysWithFilter:success:failed:'");
- (void)showNativeSurveyWithId:(NSString * _Nonnull)surveyId placementId:(NSString * _Nullable)placementId from:(UIViewController * _Nullable)viewController SWIFT_UNAVAILABLE_MSG("'showNativeSurveyWith' has been renamed to 'showNativeSurveyWithId:searchId:from:'");
- (void)showNativeSurveyWithId:(NSString * _Nonnull)surveyId SWIFT_UNAVAILABLE_MSG("'showNativeSurveyWith' has been renamed to 'showNativeSurveyWithId:searchId:from:'");
- (void)showNativeSurveyWithId:(NSString * _Nonnull)surveyId from:(UIViewController * _Nonnull)viewController SWIFT_UNAVAILABLE_MSG("'showNativeSurveyWith' has been renamed to 'showNativeSurveyWithId:searchId:from:'");
@end




@class NSDate;

SWIFT_CLASS("_TtC14InBrainSurveys19InBrainCurrencySale")
@interface InBrainCurrencySale : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
@property (nonatomic, readonly) double multiplier;
/// Sale start date in UTC timezone
@property (nonatomic, readonly, copy) NSDate * _Nonnull startOn;
/// Sale end date in UTC timezone
@property (nonatomic, readonly, copy) NSDate * _Nonnull endOn;
@property (nonatomic, readonly, copy) NSDate * _Nonnull start SWIFT_DEPRECATED_MSG("", "startOn");
@property (nonatomic, readonly, copy) NSDate * _Nonnull end SWIFT_DEPRECATED_MSG("", "endOn");
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class InBrainSurveyReward;

/// Allows your app to handle events from InBrain service
/// *
SWIFT_PROTOCOL("_TtP14InBrainSurveys15InBrainDelegate_")
@protocol InBrainDelegate
@optional
/// Called if <code>getRewards()</code>completed successfully
/// \param rewardsArray List of rewards, which weren’t confirmed yet.
///
- (void)didReceiveInBrainRewardsWithRewardsArray:(NSArray<InBrainReward *> * _Nonnull)rewardsArray;
/// Called if <code>getRewards()</code>failed
- (void)didFailToReceiveRewardsWithError:(NSError * _Nonnull)error;
/// Called upon dismissal of inBrainWebView.
/// important:
/// If you are using Native Surveys - please, ensure the surveys reloaded after some survey(s) completed.
/// \param byWebView <em>true</em> means closed by WebView’s command; <em>false</em> - closed by user
///
/// \param completedSurvey <em>true</em> means some survey(s) completed (succeded or disqualified)
///
/// \param rewards <em>NOTE:</em> At the moment only <em>first</em> Native Survey reward is delivered. That means if the user complete a Native Survey, proceed to Survey Wall and complete one more survey - only first reward will be delivered. In case of Survey Wall usage only - no rewards will be delivered.
///
- (void)surveysClosedByWebView:(BOOL)byWebView completedSurvey:(BOOL)completedSurvey rewards:(NSArray<InBrainSurveyReward *> * _Nullable)rewards;
- (void)surveysClosedByWebView:(BOOL)byWebView completedSurvey:(BOOL)completedSurvey SWIFT_DEPRECATED_MSG("", "surveysClosedByWebView:completedSurvey:rewards:");
- (void)surveysClosedFromPage SWIFT_UNAVAILABLE_MSG("'surveysClosedFromPage' has been renamed to 'surveysClosedByWebView:completedSurvey:'");
- (void)surveysClosed SWIFT_UNAVAILABLE_MSG("'surveysClosed' has been renamed to 'surveysClosedByWebView:completedSurvey:'");
@end

enum SurveyConversionLevel : NSInteger;
enum SurveyProfileMatch : NSInteger;

SWIFT_CLASS("_TtC14InBrainSurveys19InBrainNativeSurvey")
@interface InBrainNativeSurvey : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull searchId;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nullable categoryIds;
@property (nonatomic, readonly) NSInteger rank;
@property (nonatomic, readonly) NSInteger time;
@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) enum SurveyConversionLevel conversionLevel;
@property (nonatomic, readonly) BOOL currencySale;
@property (nonatomic, readonly) double multiplier;
@property (nonatomic, readonly) BOOL isProfilerSurvey;
@property (nonatomic, readonly) enum SurveyProfileMatch profileMatch SWIFT_DEPRECATED_MSG("Parameter is deprecated and will be removed soon!.");
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIColor;

SWIFT_CLASS("_TtC14InBrainSurveys19InBrainNavBarConfig")
@interface InBrainNavBarConfig : NSObject
/// Config to customize Navigation Bar.
/// <ul>
///   <li>
///     Color values should be in sRGB (Device RGB) profile;
///   </li>
///   <li>
///     Pass nil to use default color.
///   </li>
/// </ul>
/// \param backgroundColor Background color of navigation bar
///
/// \param buttonsColor Back/Close buttons color
///
/// \param titleColor Navigation bar title color
///
/// \param isTranslucent Translucent navigation bar. Default value is false
///
/// \param hasShadow Show/hide defualt navigation bar shadow. Default value is false
///
- (nonnull instancetype)initWithBackgroundColor:(UIColor * _Nullable)backgroundColor buttonsColor:(UIColor * _Nullable)buttonsColor titleColor:(UIColor * _Nullable)titleColor isTranslucent:(BOOL)isTranslucent hasShadow:(BOOL)hasShadow OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14InBrainSurveys13InBrainReward")
@interface InBrainReward : NSObject
@property (nonatomic, readonly) NSInteger transactionId;
@property (nonatomic, readonly) float amount;
@property (nonatomic, readonly, copy) NSString * _Nonnull currency;
@property (nonatomic, readonly) NSInteger transactionType;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14InBrainSurveys22InBrainStatusBarConfig")
@interface InBrainStatusBarConfig : NSObject
/// Config to customize Status Bar.
/// \param statusBarStyle UIStatusBarStyle to be used
///
/// \param hideStatusBar Hide status bar if true
///
- (nonnull instancetype)initWithStatusBarStyle:(UIStatusBarStyle)statusBarStyle hideStatusBar:(BOOL)hideStatusBar OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, InBrainSurveyCategory, open) {
  InBrainSurveyCategoryAutomotive = 1,
  InBrainSurveyCategoryBeveragesAlcoholic = 2,
  InBrainSurveyCategoryBeveragesNonAlcoholic = 3,
  InBrainSurveyCategoryBusiness = 4,
  InBrainSurveyCategoryChildrenAndParenting = 5,
  InBrainSurveyCategoryCoalitionLoyaltyPrograms = 6,
  InBrainSurveyCategoryDestinationsAndTourism = 7,
  InBrainSurveyCategoryEducation = 8,
  InBrainSurveyCategoryElectronicsComputerSoftware = 9,
  InBrainSurveyCategoryEntertainmentAndLeisure = 10,
  InBrainSurveyCategoryFinanceBankingInvestingAndInsurance = 11,
  InBrainSurveyCategoryFood = 12,
  InBrainSurveyCategoryGamblingLottery = 13,
  InBrainSurveyCategoryGovernmentAndPolitics = 14,
  InBrainSurveyCategoryHealthCare = 15,
  InBrainSurveyCategoryHome = 16,
  InBrainSurveyCategoryMediaAndPublishing = 17,
  InBrainSurveyCategoryPersonalCare = 18,
  InBrainSurveyCategoryRestaurants = 19,
  InBrainSurveyCategorySensitiveExplicitContent = 20,
  InBrainSurveyCategorySmokingTobacco = 21,
  InBrainSurveyCategorySocialResearch = 22,
  InBrainSurveyCategorySportsRecreationFitness = 23,
  InBrainSurveyCategoryTelecommunications = 24,
  InBrainSurveyCategoryTransportation = 25,
  InBrainSurveyCategoryTravelAirlines = 26,
  InBrainSurveyCategoryTravelHotels = 27,
  InBrainSurveyCategoryTravelServicesAgencyBooking = 28,
  InBrainSurveyCategoryCreditCards = 29,
  InBrainSurveyCategoryVideoGames = 30,
  InBrainSurveyCategoryFashionAndClothingOther = 31,
  InBrainSurveyCategoryFashionAndClothingDepartmentStore = 32,
};


SWIFT_CLASS("_TtC14InBrainSurveys19InBrainSurveyFilter")
@interface InBrainSurveyFilter : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable placementId;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nullable categoryIds;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nullable excludedCategoryIds;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// \param placementId Placement ID
///
/// \param categoryIDs Category IDs to include
///
/// \param excludedCategoryIDs Category IDs to exclude
///
- (nullable instancetype)initWithPlacementId:(NSString * _Nullable)placementId categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs excludedCategoryIDs:(NSArray<NSNumber *> * _Nullable)excludedCategoryIDs;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


enum SurveyOutcomeType : NSInteger;

SWIFT_CLASS("_TtC14InBrainSurveys19InBrainSurveyReward")
@interface InBrainSurveyReward : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull surveyId;
@property (nonatomic, readonly, copy) NSString * _Nullable placementId;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nullable categoryIds;
@property (nonatomic, readonly) double userReward;
@property (nonatomic, readonly) enum SurveyOutcomeType outcomeType;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Allows your app to handle NativeSurveys events from InBrain service
/// *
SWIFT_PROTOCOL("_TtP14InBrainSurveys20NativeSurveyDelegate_")
@protocol NativeSurveyDelegate
/// Called just after loading of NativeSurveys started.
/// Can be used to show some loading process at the UI
/// Native surveys loading can be triggered in next cases:
/// <ol>
///   <li>
///     Manually, using <code>getNativeSurveys()</code> method;
///   </li>
///   <li>
///     Automatically, after user completed some of Native Surveys, received before.
///   </li>
/// </ol>
- (void)nativeSurveysLoadingStartedWithFilter:(InBrainSurveyFilter * _Nullable)filter;
/// Provides fresh portion of Native surveys. Update app UI with actual surveys.
/// Native surveys can be loaded in next cases:
/// <ol>
///   <li>
///     Manually, using <code>getNativeSurveys()</code> method;
///   </li>
///   <li>
///     Automatically, after user completed some of Native Surveys, received before.
///   </li>
/// </ol>
/// \param surveys List of available Native Surveys.
///
- (void)nativeSurveysReceived:(NSArray<InBrainNativeSurvey *> * _Nonnull)surveys filter:(InBrainSurveyFilter * _Nullable)filter;
/// Called if loading of Native Surveys failed
/// *
- (void)failedToReceiveNativeSurveysWithError:(NSError * _Nonnull)error filter:(InBrainSurveyFilter * _Nullable)filter;
- (void)nativeSurveysLoadingStarted SWIFT_UNAVAILABLE_MSG("'nativeSurveysLoadingStarted' has been renamed to 'nativeSurveysLoadingStartedWithFilter:'");
- (void)nativeSurveysLoadingStartedWithPlacementId:(NSString * _Nullable)placementId SWIFT_UNAVAILABLE_MSG("'nativeSurveysLoadingStarted' has been renamed to 'nativeSurveysLoadingStartedWithFilter:'");
- (void)nativeSurveysReceived:(NSArray<InBrainNativeSurvey *> * _Nonnull)surveys SWIFT_UNAVAILABLE_MSG("'nativeSurveysReceived' has been renamed to 'nativeSurveysReceived(surveys:filter:)'");
- (void)nativeSurveysReceived:(NSArray<InBrainNativeSurvey *> * _Nonnull)surveys placementId:(NSString * _Nullable)placementId SWIFT_UNAVAILABLE_MSG("'nativeSurveysReceived' has been renamed to 'nativeSurveysReceived(surveys:filter:)'");
- (void)failedToReceiveNativeSurveysWithError:(NSError * _Nonnull)error SWIFT_UNAVAILABLE_MSG("'failedToReceiveNativeSurveys' has been renamed to 'failedToReceiveNativeSurveysWithError:filter:'");
- (void)failedToReceiveNativeSurveysWithError:(NSError * _Nonnull)error placementId:(NSString * _Nullable)placementId SWIFT_UNAVAILABLE_MSG("'failedToReceiveNativeSurveys' has been renamed to 'failedToReceiveNativeSurveysWithError:filter:'");
@end

/// Indicates how the  survey has been performing platform-wide at inBrain
typedef SWIFT_ENUM(NSInteger, SurveyConversionLevel, open) {
  SurveyConversionLevelNewSurvey = 0,
  SurveyConversionLevelVeryPoorConversion = 1,
  SurveyConversionLevelPoorConversion = 2,
  SurveyConversionLevelFairConversion = 3,
  SurveyConversionLevelGoodConversion = 4,
  SurveyConversionLevelVeryGoodConversion = 5,
  SurveyConversionLevelExcellentConversion = 6,
};

typedef SWIFT_ENUM(NSInteger, SurveyOutcomeType, open) {
  SurveyOutcomeTypeCompleted = 0,
  SurveyOutcomeTypeTerminated = 1,
};

typedef SWIFT_ENUM(NSInteger, SurveyProfileMatch, open) {
  SurveyProfileMatchNewSurvey = 0,
  SurveyProfileMatchPoorMatch = 1,
  SurveyProfileMatchFairMatch = 2,
  SurveyProfileMatchGoodMatch = 3,
  SurveyProfileMatchGreatMatch = 4,
  SurveyProfileMatchExcellentMatch = 5,
};






#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
