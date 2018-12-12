//
//  Request.h
//  App2App
//
//  Created by Xavier on 03/10/2018.
//  Copyright © 2018 selic. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TERequest : NSObject

@property (nonatomic, strong, readonly) NSString *sourceApp;

+ (instancetype)requestWithSourceApp:(NSString *)sourceApp;
- (instancetype)initWithSourceApp:(NSString *)sourceApp;

@end

NS_ASSUME_NONNULL_END
