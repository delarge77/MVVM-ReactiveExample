//
//  RWTFlickrSearchViewModel.m
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 27/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import "RWTFlickrSearchViewModel.h"
#import "RWTSearchResultsViewModel.h"

@interface RWTFlickrSearchViewModel()

@property (nonatomic, weak) id<RWTViewModelServicesProtocol> services;

@end

@implementation RWTFlickrSearchViewModel

- (instancetype) initWithServices:(id<RWTViewModelServicesProtocol>)services {

    self = [super init];
    
    if (self) {
        _services = services;
        [self initialize];
    }
    
    return self;
}

- (void) initialize {
    
    self.title = @"Flickr Search";
    
    RACSignal *validSearchSignal =
    [[RACObserve(self, searchText)
     map:^id(NSString *text) {
         return @(text.length > 3);
     }]
     distinctUntilChanged];
    
    [validSearchSignal subscribeNext:^(id x) {
        NSLog(@"%@", x);
    }];
    
    self.executeSearch = [[RACCommand alloc] initWithEnabled:validSearchSignal signalBlock:^RACSignal *(id input) {
        return [self executeSearchSignal];
    }];
}

- (RACSignal *) executeSearchSignal {
    return [[[self.services getFlickrSearchService]
            flickrSearchSignal:self.searchText]
    doNext:^(id result) {
        RWTSearchResultsViewModel *viewModel =
        [[RWTSearchResultsViewModel alloc] initWithSearchResults:result services:self.services];
        [self.services pushViewModel:viewModel];
    }];
}

@end