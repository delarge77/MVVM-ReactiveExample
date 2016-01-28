//
//  RWTFlickrPhoto.h
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 28/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>

/* This is a model object that represents a 
 single photo returned by Flickr’s search APIs. */

@interface RWTFlickrPhoto : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSURL *url;
@property (strong, nonatomic) NSString *identifier;

@end
