//
//  RWTViewModelServices.h
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 27/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RWTFlickrSearchProtocol.h"

@protocol RWTViewModelServicesProtocol <NSObject>

/*This protocol defines a single method that allows the ViewModel to 
 obtain a reference to an implementation of the RWTFlickrSearch protocol.*/

- (id<RWTFlickrSearchProtocol>) getFlickrSearchService;
- (void)pushViewModel:(id)viewModel;

@end
