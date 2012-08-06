//
//  Photo.m
//  photo-client
//
//  Created by Michael Check on 8/6/12.
//  Copyright (c) 2012 Solo Group, Inc. All rights reserved.
//

#import "Photo.h"

@implementation Photo

- (id)initWithAttributes:(NSDictionary *)attributes {
    self = [super init];
    if (!self) {
        return nil;
    }
    
    _latitude = [[attributes valueForKeyPath:@"lat"] doubleValue];
    _longitude = [[attributes valueForKeyPath:@"lng"] doubleValue];
    
    return self;
}

- (NSString *)title {
    return [NSString stringWithFormat:@"Photo at (%f, %f)", _latitude, _longitude];
}

- (CLLocationCoordinate2D)coordinate {
    return CLLocationCoordinate2DMake(_latitude, _longitude);
}

@end
