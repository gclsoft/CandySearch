//
//  CandyTableViewController.h
//  CandySearch
//
//  Created by RoBeRt on 13-1-18.
//  Copyright (c) 2013年 RoBeRt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CandyTableViewController : UITableViewController <UISearchBarDelegate, UISearchDisplayDelegate>

@property (nonatomic, strong) NSArray *candyArray;
@property (nonatomic, weak) IBOutlet UISearchBar *candySearchBar;
@property (nonatomic, strong) NSMutableArray *filteredCandyArray;

@end
