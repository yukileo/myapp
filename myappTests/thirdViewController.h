//
//  thirdViewController.h
//  myapp
//
//  Created by Yuki Watanabe on 2014/06/27.
//  Copyright (c) 2014年 Yuki Watanabe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface thirdViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITableView *tv;
@property NSMutableArray *cells;

- (IBAction)insertCell:(id)sender;
- (IBAction)deleteAll:(id)sender;

@end
