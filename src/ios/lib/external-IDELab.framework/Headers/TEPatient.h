//
//  Patient.h
//  App2App
//
//  Created by Xavier on 03/10/2018.
//  Copyright © 2018 selic. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
	TEPatientSexM,
	TEPatientSexF,
	TEPatientSexI
} TEPatientSex;

@interface TEPatient : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *firstname;
@property (nonatomic, strong) NSString *birthname;
@property (nonatomic, strong) NSDate *birthDate;
@property (nonatomic, strong) NSString *birthDateString;
@property (nonatomic, assign) TEPatientSex sex;
@property (nonatomic, strong) NSString *ipe;
@property (nonatomic, strong) NSString *laboratory;
@property (nonatomic, strong) NSString *ipa;

- (NSString *) stringFromSex;
- (void) setSexFromString:(NSString *)sex;

@end

NS_ASSUME_NONNULL_END
