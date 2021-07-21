//
//  FTValidator.h
//  FTValidatorKit
//
//  Created by Tales Conrado on 21/07/21.
//

#ifndef FTValidator_h
#define FTValidator_h

@interface FTValidator : NSObject
@property int maxLength;
@property int minLength;
@property BOOL allowSpecialCharacters;
- (BOOL) validate:(NSString *) text;

@end

#endif /* FTValidator_h */
