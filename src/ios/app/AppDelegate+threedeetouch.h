#import "AppDelegate.h"

@interface AppDelegate (threedeetouch)
- (void)application:(UIApplication *)application performActionForShortcutItem:(UIApplicationShortcutItem *)shortcutItem completionHandler:(void(^)(BOOL succeeded))completionHandler;
- (BOOL)application:(UIApplication *)application shouldSaveApplicationState:(NSCoder*)coder;
- (BOOL)application:(UIApplication *)application shouldRestoreApplicationState:(NSCoder*)coder;
@end