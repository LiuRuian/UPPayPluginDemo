//
//  UPPayPluginEx.h
//  UPPayPluginEx
//
//  Created by wxzhao on 12-10-10.
//  Copyright (c) 2012年 China UnionPay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UPPayPluginDelegate.h"

@interface UPPayPlugin : NSObject

+ (BOOL)startPay:(NSString*)tn mode:(NSString*)mode viewController:(UIViewController*)viewController delegate:(id<UPPayPluginDelegate>)delegate;

/** 参数说明 **/

//1.  tn   必填项;   交易流水号信息,银联后台生成,通过商户后台返回到客户端并传入支付控件;
//2.  mode 必填项;   接入模式设定,两个值:   @"00":代表接入生产环境(正式版本需要);   @"01":代表接入开发测试环境 (测试版本需要);
//3. viewController 必填项;   商户应用程序调用银联手机支 付的当前 UIViewController;
//4. ￼delegate   必填项;  实现 UPPayPluginDelegate 方 法的 UIViewController;

@end
