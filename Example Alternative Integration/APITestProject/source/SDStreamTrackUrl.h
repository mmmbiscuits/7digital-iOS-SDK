//
//  SDStreamTrackUrl.h
//  SevenDigital
//
//  Created by Ryan Smale on 22/12/15.
//  Copyright © 2015 7digital. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SDStreamTrackUrl : NSObject

/**
 Get a locker streaming url.
 
 @param trackID         The 7digital id for the track.
 @param formatId        Format id of the track usually a 2 digit int. if none is provided defaults to 56.
 @param countryCode     The date with time the stream begun.
 
 @return an authourised NSURl
 */

+(NSURL*)lockerStreamUrlForTrackId:(NSInteger*)trackId desiredFormatId:(NSInteger*)formatID countryCode:(NSString*)countryCode;

/**
 Get a locker subscription url.
 
 @param trackID         The 7digital id for the track.
 @param formatId        Format id of the track usually a 2 digit int. if none is provided defaults to 56.
 @param countryCode     The date with time the stream begun.
 
 @return an authourised NSURl
 */

+(NSURL*)subscriptionStreamForTrackId:(NSInteger*)trackId desiredFormatId:(NSInteger*)formatID countryCode:(NSString*)countryCode;

/**
 Get a radio Stream track url.
 
 @param trackID         The 7digital id for the track.
 @param formatId        Format id of the track usually a 2 digit int. if none is provided defaults to 56.
 @param countryCode     The date with time the stream begun.
 
 @return an authourised NSURl
 */

+(NSURL*)radioStreamForTrackId:(NSInteger*)trackId desiredFormatId:(NSInteger*)formatID countryCode:(NSString*)countryCode;

@end