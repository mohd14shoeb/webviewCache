//
//  ViewController.h
//  h5test
//
//  Created by 芈峮 on 13-11-15.
//  Copyright (c) 2013年 芈峮. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ActionsView.h"
#import "ResponseTime.h"

@interface TestViewController : UIViewController<UIWebViewDelegate>

@property (nonatomic, strong) NSArray * urls;

@property (nonatomic, assign) ActionType type; //测试类型

@property (nonatomic, weak) IBOutlet UIWebView * myWebView;

@property (nonatomic, strong) ResponseTimeObj * currentTimeObj;

@property (nonatomic, strong) NSURLRequest * request;




@end
