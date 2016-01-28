//
//  RWTViewModelServicesImpl.h
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 27/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RWTViewModelServicesProtocol.h"

/*
 This class creates an instance of RWTFlickrSearchImpl, the Model layer 
 service for searching Flickr, and provides it to the ViewModel upon request.*/

@interface RWTViewModelServicesImpl : NSObject <RWTViewModelServicesProtocol>

- (instancetype)initWithNavigationController:(UINavigationController *)navigationController;


@end
