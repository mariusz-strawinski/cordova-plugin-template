//
//  TEAppointmentRequest.h
//  App2App
//
//  Created by Xavier on 03/10/2018.
//  Copyright © 2018 selic. All rights reserved.
//

#import "TERequest.h"
#import "TEPatient.h"

NS_ASSUME_NONNULL_BEGIN

@interface TEAppointmentRequest : TERequest

@property (nonatomic, strong, readonly) TEPatient *patient;

+ (instancetype)requestWithSourceApp:(NSString *)sourceApp patient:(TEPatient *)patient;
- (instancetype)initWithSourceApp:(NSString *)sourceApp patient:(TEPatient *)patient;

@end

NS_ASSUME_NONNULL_END
