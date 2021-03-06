// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
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
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
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
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreMedia;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RescueBroadcast",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// The connection between your extension and the Rescue Technician Console is represented by a <em>RescueBroadcastSession</em> object.
SWIFT_CLASS("_TtC15RescueBroadcast22RescueBroadcastSession")
@interface RescueBroadcastSession : NSObject
/// Returns a newly initialized broadcast session.
/// Note: To use the broadcast feature the app and the extension have to communicate with eachother. The communication is working over group user defaults container. Set the app group identifier in your entitlements (both for app and extension) and here.
/// \param appGroup the app group identifier your app and extension use to communicate
///
- (nonnull instancetype)initWithAppGroup:(NSString * _Nonnull)appGroup OBJC_DESIGNATED_INITIALIZER;
/// Connect a Rescue session started from the app.
/// Note: A <em>RescueSession</em> in the app should be initiated with <em>connectToSessionAutomatically</em> set to <em>false</em> and <em>broadcastSession()</em> should be called before trying to join the session from the extension.
- (void)connectSession;
/// Disconnect the Rescue session
- (void)disconnectSession;
/// Process the video sample buffer.
/// Pass the sample buffer to the Rescue SDK to stream the device screen to the Technician Console.
/// \param sampleBuffer A CMSampleBuffer object containing video data - a single video frame.
///
- (void)processVideoSampleBuffer:(CMSampleBufferRef _Nonnull)sampleBuffer;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end











/// Error codes
typedef SWIFT_ENUM(NSUInteger, RescueError, open) {
/// missing pin code
  RescueErrorNoPincode = 1,
/// the pin code has been expired
  RescueErrorPincodeExpired = 2,
/// there are no technicians on the channel
  RescueErrorNoTechnicianAvailable = 3,
/// the technicians on the channel are not configured for mobile support
  RescueErrorNoTechnicianLicense = 4,
/// there were no answer from the Rescue Service
  RescueErrorNoReply = 5,
/// unknown reply from the Rescue Service
  RescueErrorUnknownReply = 6,
/// there were no answer from the Rescue Service in the given time
  RescueErrorTimeout = 7,
/// no API key was set for the session
  RescueErrorApiKeyMissing = 8,
/// the Rescue SDK could not access or send the bundle identifier
  RescueErrorAppIdMissing = 9,
/// the given API key does not exist in the Rescue Service
  RescueErrorApiKeyDoesNotExist = 10,
/// the given API key is disabled in the Rescue Service
  RescueErrorApiKeyDisabled = 11,
/// the given API key is not valid with the app’s bundle identifier
  RescueErrorApiKeyAndAppIdNotFromTheSameCompany = 12,
/// the given pin code was not belong to the company with the given API key
  RescueErrorPrivateCodeApiKeyNotFromTheSameCompany = 13,
/// the given channel does not beong to the company with the given API key
  RescueErrorChannelApiKeyNotFromTheSameCompany = 14,
/// the given channel does not exists
  RescueErrorChannelDoesNotExist = 15,
/// the given company does not exists
  RescueErrorCompanyDoesNotExist = 16,
/// the Rescue service could not parse the request
  RescueErrorRequest = 17,
/// a required parameter is missing (e.g. channel id in a channel session)
  RescueErrorRequiredParameterMissing = 18,
/// the pin code is invalid
  RescueErrorInvalidPincode = 19,
/// the pin code was not generated for this type of session
  RescueErrorInvalidPincodeForSessionType = 20,
/// session can’t be initiated with current version of app
  RescueErrorAppVersionNotSupported = 21,
};

enum RescueLocalizationStringIdentifier : NSUInteger;

/// Rescue SDK provides localization for commonly used strings in many languages. You can access localized string through RescueLocalization class.
SWIFT_CLASS("_TtC15RescueBroadcast18RescueLocalization")
@interface RescueLocalization : NSObject
/// Localized string for the identifier.
/// \param identifier String identifier of the string need to be localized.
///
///
/// returns:
/// The localized string.
+ (NSString * _Nonnull)localizedStringFor:(enum RescueLocalizationStringIdentifier)identifier SWIFT_WARN_UNUSED_RESULT;
/// Get a localized error title.
///
/// returns:
/// The localized error title.
+ (NSString * _Nonnull)errorTitle SWIFT_WARN_UNUSED_RESULT;
/// Get the localized error messa”ge for the error code.
/// \param error The error code.
///
///
/// returns:
/// The localized error message.
+ (NSString * _Nonnull)errorMessageForError:(enum RescueError)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// Localizable string identifiers
typedef SWIFT_ENUM(NSUInteger, RescueLocalizationStringIdentifier, open) {
/// string for ‘connecting’ session state
  RescueLocalizationStringIdentifierStatusConnecting = 0,
/// string for ‘waiting for technician’ session state
  RescueLocalizationStringIdentifierStatusWaitingForTechnician = 1,
/// string for ‘disconnecting’ state
  RescueLocalizationStringIdentifierStatusDisconnecting = 2,
/// string for ‘disconnected’ state
  RescueLocalizationStringIdentifierStatusDisconnected = 3,
/// string for ‘stream starting’ state
  RescueLocalizationStringIdentifierStatusStreamStarting = 4,
/// string for ‘on hold’ state
  RescueLocalizationStringIdentifierStatusOnHold = 5,
/// string for ‘transfering’ state
  RescueLocalizationStringIdentifierStatusTransferring = 6,
/// string for ‘connection lost’ state
  RescueLocalizationStringIdentifierStatusConnectionLost = 7,
};

/// Session status during the support session
typedef SWIFT_ENUM(NSUInteger, RescueSessionStatus, open) {
/// base state
  RescueSessionStatusIdle = 0,
/// connecting to the Rescue Service
  RescueSessionStatusConnecting = 1,
/// connection established with the Rescue Service
  RescueSessionStatusConnected = 2,
/// the technician put the session on hold
  RescueSessionStatusOnHold = 3,
/// the technician transered the session to another technician or channel, waiting for a new technician to pick it up
  RescueSessionStatusTransferred = 4,
/// disconnecting from the Rescue Service
  RescueSessionStatusDisconnecting = 5,
/// disconnected from the Rescue Service
  RescueSessionStatusDisconnected = 6,
/// connected to the Rescue Service, waiting for a technician to pick up the session
  RescueSessionStatusWaitingForTechnician = 7,
/// connection lost between the user and the technician, trying to reconnect
  RescueSessionStatusConnectionLost = 8,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
