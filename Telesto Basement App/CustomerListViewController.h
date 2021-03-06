//
//  CustomerListViewController.h
//  Telesto Basement App
//
//  Created by CSM on 12/4/16.
//  Copyright © 2016 csm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Utility.h"
#import "SWRevealViewController.h"
#import "CustomerInfoObject.h"
@interface CustomerListViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UIBarButtonItem *revealButtonItem;
@property (weak, nonatomic) IBOutlet UITableView *customerListTableView;
@property (weak, nonatomic) IBOutlet UISearchBar *customerSearchBar;
@property (strong, nonatomic) NSMutableArray *customerInfoObjArray;
@end
