//
//  YFViewController.h
//  CorePlot14
//
//  Created by y on 2013/11/28.
//  Copyright (c) 2013年 YUKO FUJII. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CorePlot-CocoaTouch.h"

@interface YFViewController : UIViewController<CPTPlotDataSource>
@property(weak,nonatomic) IBOutlet CPTGraphHostingView * graphView;
@end
