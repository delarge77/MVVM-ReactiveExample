//
//  RWTSearchResultsViewModel.h
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 28/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RWTViewModelServicesProtocol.h"
#import "RWTFlickrSearchResults.h"

@interface RWTSearchResultsViewModel : NSObject

/*Initializer constructed from the RWTFlickrSearchResults 
 model object (which is returned by the Model layer service).*/

- (instancetype)initWithSearchResults:(RWTFlickrSearchResults *)result
                             services:(id<RWTViewModelServicesProtocol>) services;

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSArray *searchResults;

@end
