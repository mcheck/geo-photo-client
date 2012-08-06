//
//  Photo.h
//  photo-client
//
//  Created by Michael Check on 8/6/12.
//  Copyright (c) 2012 Solo Group, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>


@interface Photo : NSObject <MKAnnotation> {
@private
    CLLocationDegrees _latitude;
    CLLocationDegrees _longitude;
}

@property (strong, nonatomic, readonly) CLLocation *location;

- (id)initWithAttributes:(NSDictionary *)attributes;

@end
