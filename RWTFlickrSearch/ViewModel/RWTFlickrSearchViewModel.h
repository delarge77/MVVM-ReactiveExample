//
//  RWTFlickrSearchViewModel.h
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 27/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "RWTViewModelServicesProtocol.h"

@interface RWTFlickrSearchViewModel : NSObject

@property (strong, nonatomic) RACCommand *executeSearch;
@property (strong, nonatomic) NSString *searchText;
@property (strong, nonatomic) NSString *title;

- (instancetype) initWithServices:(id<RWTViewModelServicesProtocol>) services;

@end
