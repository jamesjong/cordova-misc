#import <Cordova/CDVLocation.h>

@interface CDVLocation (Services)

- (void)startMonitorSignificantLocationChange;
- (void)stopMonitorSignificantLocationChange;

@end
