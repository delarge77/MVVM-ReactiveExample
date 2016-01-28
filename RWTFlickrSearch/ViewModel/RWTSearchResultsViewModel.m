//
//  RWTSearchResultsViewModel.m
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 28/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import "RWTSearchResultsViewModel.h"

@implementation RWTSearchResultsViewModel

- (instancetype)initWithSearchResults:(RWTFlickrSearchResults *)results
                             services:(id<RWTViewModelServicesProtocol>)services {
    
    self = [super init];
    
    if (self) {
        _title = results.searchString;
        _searchResults = results.photos;
    }
    
    return self;
}

@end
