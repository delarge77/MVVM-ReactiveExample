//
//  RWTFlickrSearch.h
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 27/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa.h>

/*This protocol defines the initial interface for the Model layer, 
 and moves the responsibility of searching Flickr out of the ViewModel.*/

@protocol RWTFlickrSearchProtocol <NSObject>

- (RACSignal *) flickrSearchSignal:(NSString *) searchString;

@end
