//
//  RWTFlickrSearchResults.m
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 28/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import "RWTFlickrSearchResults.h"

@implementation RWTFlickrSearchResults

- (NSString *)description {

    return [NSString stringWithFormat:@"searchString=%@ totalResults=%lu, photos=%@",
            self.searchString, (unsigned long)self.totalResults, self.photos];
}

@end
