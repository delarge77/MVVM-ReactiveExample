//
//  RWTFlickrSearchResults.h
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 28/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>

/*This represents a collection of 
 photos as returned by a Flickr search.*/

@interface RWTFlickrSearchResults : NSObject

@property (strong, nonatomic) NSString *searchString;
@property (strong, nonatomic) NSArray *photos;
@property (nonatomic) NSUInteger totalResults;

@end
