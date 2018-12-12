//
//  TEIDELab.h
//  App2App
//
//  Created by Xavier on 03/10/2018.
//  Copyright © 2018 selic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TEAppointmentRequest.h"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSErrorDomain const IDELabErrorDomain;

FOUNDATION_EXPORT NSInteger const kIDELabErrorNoApp;
FOUNDATION_EXPORT NSInteger const kIDELabErrorMandatoryField;
FOUNDATION_EXPORT NSInteger const kIDELabErrorOperationCancal;

@interface TEIDELab : NSObject

+ (void)openAppointment:(TEAppointmentRequest *)request success:(void(^)(void))success failure:(void (^)(NSError *))failure;
+ (void) handleOpenUrl:(NSURL *)url;

@end

NS_ASSUME_NONNULL_END
