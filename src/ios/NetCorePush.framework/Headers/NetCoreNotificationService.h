/*
 @header NetCoreNotificationService.h
 
 @brief This is the header file where my super-code is contained.
 
 NetCoreNotificationService : - use to provides the entry point for a Notification Service
 
 @author NetCore
 @copyright  2018 NetCore
 @version    1.0.0
 */

#import <UserNotifications/UserNotifications.h>
#import <UserNotifications/UNNotificationContent.h>
#import <UserNotificationsUI/UserNotificationsUI.h>
#import <UIKit/UIKit.h>

@interface NetCoreNotificationService : UNNotificationServiceExtension

+ (instancetype)sharedInstance;

-(void)contentViewDidLoad:(UIView *)customView;

-(void)didReceiveNotification:(UNNotification *)notification;

-(void)didReceiveNotificationResponse:(UNNotificationResponse *)response completionHandler:(void (^)(UNNotificationContentExtensionResponseOption))completion;

@end

