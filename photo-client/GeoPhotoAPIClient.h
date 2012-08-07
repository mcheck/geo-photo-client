//
//  GeoPhotoAPIClient.h
//  photo-client
//
//  Created by Michael Check on 8/6/12.
//  Copyright (c) 2012 Solo Group, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFHTTPClient.h"

@interface GeoPhotoAPIClient : AFHTTPClient

+ (GeoPhotoAPIClient *)sharedClient;

@end