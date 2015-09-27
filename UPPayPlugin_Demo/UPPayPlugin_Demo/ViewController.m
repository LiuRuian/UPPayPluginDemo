//
//  ViewController.m
//  UPPayPlugin_Demo
//
//  Created by Ryan on 15/9/27.
//  Copyright (c) 2015年 Ryan. All rights reserved.
// -----------------------------

#import "ViewController.h"

#import "UPPayPlugin.h"


@interface ViewController ()
<UPPayPluginDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    // 银联支付方法, 订单的流水号,有商家的后台生产
    [UPPayPlugin startPay:@"201509271831515104498" mode:@"00" viewController:self delegate:self];
}


#pragma mark - UPPayPluginDelegate 方法
- (void)UPPayPluginResult:(NSString *)result {
    if ([result isEqualToString:@"success"]) {
        NSLog(@"success");
    }  else if ([result isEqualToString:@"fail"]) {
        NSLog(@"fail");
    } else if ([result isEqualToString:@"cancel"]) {
        NSLog(@"cancel");
    }
}

@end
