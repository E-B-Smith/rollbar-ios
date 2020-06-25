//  Copyright © 2018 Rollbar. All rights reserved.

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, RollbarLevel) {
    RollbarInfo,
    RollbarDebug,
    RollbarWarning,
    RollbarCritical,
    RollbarError
};

NSString* RollbarStringFromLevel(RollbarLevel level);
RollbarLevel RollbarLevelFromString(NSString *levelString);
