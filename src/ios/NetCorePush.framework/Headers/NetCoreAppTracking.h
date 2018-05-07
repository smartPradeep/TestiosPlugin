 /*
 @header NetCoreAppTracking.h
 
 @brief This is the header file where my super-code is contained.
 
 NetCoreAppTracking : - use to setup all event communication methods
 
 @author NetCore
 @copyright  2016 NetCore
 @version    1.0.0
 */
#import <Foundation/Foundation.h>
#import <NetCorePush/NetCoreConstant.h>

@interface NetCoreAppTracking : NSObject
/*
 @Method sharedInstance:- use to return NetCoreAppTracking manage class Object
 @return NetCoreAppTracking instance
 */
+ (instancetype)sharedInstance;
-(void)sendAppTrackingEvent:(NSInteger)event Block:(NetCoreStatusBlock)block;
-(void)sendAppTrackingEventWithCustomPayload:(NSInteger)event Payload:(NSMutableArray *)payload Block:(NetCoreStatusBlock)block;
@end
