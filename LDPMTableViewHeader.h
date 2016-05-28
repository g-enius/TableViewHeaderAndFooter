//
//  LDPMTableViewHeader.h
//  MJRefreshExample
//
//  Created by wangchao on 11/26/15.
//  Copyright © 2015 NetEase. All rights reserved.
//

#import "MJRefreshStateHeader.h"

@interface LDPMTableViewHeader : MJRefreshStateHeader
@property (weak, nonatomic, readonly) UIImageView *arrowView;
/** 菊花的样式 */
@property (assign, nonatomic) UIActivityIndicatorViewStyle activityIndicatorViewStyle;
@end
