//
//  PullUpRefreshView.h
//  44-上拉加载数据
//
//  Created by shadandan on 16/8/26.
//  Copyright © 2016年 SDD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PullUpRefreshView : UITableViewCell
@property(nonatomic,copy)dispatch_block_t block;
-(void)endRefresh;
@end
