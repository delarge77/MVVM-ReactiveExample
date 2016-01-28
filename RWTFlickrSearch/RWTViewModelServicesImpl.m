//
//  RWTViewModelServicesImpl.m
//  RWTFlickrSearch
//
//  Created by Alessandro dos Santos Pinto on 27/01/16.
//  Copyright © 2016 Colin Eberhardt. All rights reserved.
//

#import "RWTViewModelServicesImpl.h"
#import "RWTFlickrSearchImpl.h"
#import "RWTSearchResultsViewController.h"

@interface RWTViewModelServicesImpl()

@property (strong, nonatomic) RWTFlickrSearchImpl *searchService;
@property (weak, nonatomic) UINavigationController *navigationController;

@end

@implementation RWTViewModelServicesImpl

- (instancetype) init {

    self = [super init];
    
    if (self) {
        _searchService = [RWTFlickrSearchImpl new];
    }
    
    return self;
}

- (id<RWTFlickrSearchProtocol>)getFlickrSearchService {
    return self.searchService;
}

- (instancetype)initWithNavigationController:(UINavigationController *)navigationController {

    self = [super init];
    
    if (self) {
        _searchService = [RWTFlickrSearchImpl new];
        _navigationController = navigationController;
    }
    
    return self;
}

- (void)pushViewModel:(id)viewModel {

    id viewController;
    
    if ([viewModel isKindOfClass:[RWTSearchResultsViewModel class]]) {
        viewController = [[RWTSearchResultsViewController alloc] initWithViewModel:viewModel];
    } else {
        NSLog(@"An unknown viewmodel was pushed");
    }
    
    [self.navigationController pushViewController:viewController animated:YES];
}

@end
