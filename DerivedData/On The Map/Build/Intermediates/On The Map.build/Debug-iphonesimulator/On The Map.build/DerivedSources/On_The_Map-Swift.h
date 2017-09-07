// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import Foundation;
@import CoreGraphics;
@import MapKit;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC10On_The_Map11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions SWIFT_WARN_UNUSED_RESULT;
- (BOOL)application:(UIApplication * _Nonnull)app openURL:(NSURL * _Nonnull)url options:(NSDictionary<UIApplicationOpenURLOptionsKey, id> * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC10On_The_Map6ListVC")
@interface ListVC : UIViewController
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified userTableView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)postSimpleAlert:(NSString * _Nonnull)title;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableViewCell;

@interface ListVC (SWIFT_EXTENSION(On_The_Map)) <UITableViewDelegate, UIScrollViewDelegate, UITableViewDataSource>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end

@class UITextField;
@class UIButton;
@class UIActivityIndicatorView;

SWIFT_CLASS("_TtC10On_The_Map7LoginVC")
@interface LoginVC : UIViewController
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified username;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified password;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified loginButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified signUpButton;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activityIndicator;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)signUp:(id _Nonnull)sender;
- (IBAction)logInPressed:(id _Nonnull)sender;
- (IBAction)facebookLoginPressed:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface LoginVC (SWIFT_EXTENSION(On_The_Map))
@end


@interface LoginVC (SWIFT_EXTENSION(On_The_Map)) <UITextFieldDelegate>
- (void)configure:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (IBAction)userDidTaView:(id _Nonnull)sender;
@end

@class MKMapView;
@protocol MKAnnotation;
@class MKAnnotationView;
@class UIControl;

SWIFT_CLASS("_TtC10On_The_Map5MapVC")
@interface MapVC : UIViewController <MKMapViewDelegate>
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified mapView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)goToPostController;
- (void)postSimpleAlert:(NSString * _Nonnull)title;
- (void)addLocation;
- (void)logout;
- (MKAnnotationView * _Nullable)mapView:(MKMapView * _Nonnull)mapView viewForAnnotation:(id <MKAnnotation> _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
- (void)mapView:(MKMapView * _Nonnull)mapView annotationView:(MKAnnotationView * _Nonnull)view calloutAccessoryControlTapped:(UIControl * _Nonnull)control;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;

SWIFT_CLASS("_TtC10On_The_Map14PostLocationVC")
@interface PostLocationVC : UIViewController <MKMapViewDelegate>
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull newData;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified locationSubview;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified mapSubview;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified locationText;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified websiteText;
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified mapView;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activityIndicator;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified submitButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)setFindView;
- (void)setMapView;
- (void)postSimpleAlert:(NSString * _Nonnull)title;
- (IBAction)cancelMain:(id _Nonnull)sender;
- (IBAction)cancelMap:(id _Nonnull)sender;
- (IBAction)findLocation:(id _Nonnull)sender;
- (IBAction)submit:(id _Nonnull)sender;
- (void)getLocationFromAddress:(NSString * _Nonnull)location;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface PostLocationVC (SWIFT_EXTENSION(On_The_Map)) <UITextFieldDelegate>
- (void)configure:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC10On_The_Map11StudentData")
@interface StudentData : NSObject
+ (StudentData * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSession;
@class FBSDKAccessToken;
@class NSDictionary;
@class NSError;
@class NSURLSessionTask;

SWIFT_CLASS("_TtC10On_The_Map13UdacityClient")
@interface UdacityClient : NSObject
@property (nonatomic, strong) NSURLSession * _Nonnull session;
@property (nonatomic, copy) NSString * _Nullable userKey;
@property (nonatomic, strong) FBSDKAccessToken * _Nullable accessToken;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)logInWithVC:(NSDictionary<NSString *, id> * _Nonnull)userLogin completionHandlerForLogin:(void (^ _Nonnull)(BOOL, NSString * _Nullable))completionHandlerForLogin;
- (void)logInWithFacebook:(void (^ _Nonnull)(BOOL, NSString * _Nullable))completionHandlerForLogin;
- (void)postSessionID:(NSDictionary<NSString *, id> * _Nonnull)parameters completionHandlerForSession:(void (^ _Nonnull)(BOOL, NSString * _Nullable, NSString * _Nullable))completionHandlerForSession;
- (void)getUserData:(NSString * _Nonnull)userKey :(void (^ _Nonnull)(BOOL, NSDictionary<NSString *, id> * _Nullable, NSString * _Nullable))completionHandlerUserData;
- (void)deleteSession:(void (^ _Nonnull)(BOOL, NSDictionary * _Nullable, NSString * _Nullable))completionHandlerForDelete;
- (void)postSessionWithFacebook:(void (^ _Nonnull)(BOOL, NSString * _Nullable, NSString * _Nullable))completionHandlerForFacebook;
- (NSURLSessionTask * _Nonnull)taskForMethodWithClient:(NSString * _Nonnull)client method:(NSString * _Nullable)method pathExtension:(NSString * _Nullable)pathExtension parameters:(NSDictionary<NSString *, id> * _Nullable)parameters newData:(NSDictionary<NSString *, NSString *> * _Nullable)newData completionHandlerForGET:(void (^ _Nonnull)(id _Nullable, NSError * _Nullable, NSString * _Nullable))completionHandlerForGET SWIFT_WARN_UNUSED_RESULT;
- (NSURL * _Nonnull)urlFromParametersWithClient:(NSString * _Nonnull)client paremeters:(NSDictionary<NSString *, id> * _Nullable)paremeters pathExtension:(NSString * _Nullable)pathExtension SWIFT_WARN_UNUSED_RESULT;
- (void)convertDataWithCompletionHandler:(NSData * _Nonnull)data completionHandlerForConvertData:(SWIFT_NOESCAPE void (^ _Nonnull)(id _Nullable, NSError * _Nullable, NSString * _Nullable))completionHandlerForConvertData;
+ (UdacityClient * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
@end

@class NSArray;

@interface UdacityClient (SWIFT_EXTENSION(On_The_Map))
- (void)getStudentLocations:(void (^ _Nonnull)(BOOL, NSArray * _Nullable, NSString * _Nullable))completionHandlerForLocations;
- (void)getSingleStudentLocationWithStudentKey:(NSString * _Nonnull)studentKey :(void (^ _Nonnull)(BOOL, NSArray * _Nullable, NSString * _Nullable))completionHandlerForSingleLocation;
- (void)postStudentLocation:(NSDictionary<NSString *, NSString *> * _Nullable)newData :(void (^ _Nonnull)(BOOL, NSString * _Nullable))completionHandlerForPost;
- (void)putStudentLocation:(NSDictionary<NSString *, NSString *> * _Nullable)newData :(void (^ _Nonnull)(BOOL, NSString * _Nullable))completionHandlerForPut;
@end

#pragma clang diagnostic pop
