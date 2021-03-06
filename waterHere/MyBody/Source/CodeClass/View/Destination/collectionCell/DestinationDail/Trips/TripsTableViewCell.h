//
//  TripsTableViewCell.h
//  ZouZou
//
//  Created by gx110387 on 15/10/18.
//  Copyright (c) 2015年 gx110387. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FirstCollectionViewController;
@class GHMyPhotoView;
@class TripModel;
@interface TripsTableViewCell : UITableViewCell


@property(nonatomic,strong)UIImageView *myAvatar;// 头像
@property(nonatomic,strong)UILabel *myUser_Name; // 用户名
@property(nonatomic,strong)UILabel *myLevel_info_Value; // 等级
@property(nonatomic,strong)UILabel *myTrip_name; //旅游地址
@property(nonatomic,strong)UILabel *myTrip_datatime; // 时间
@property(nonatomic,strong)UILabel *myTrip_text; // 内容
//@property(nonatomic,strong)FirstCollectionViewController *firstCollectionVC;
//@property(nonatomic,strong)UIView *myFirstCollectionView;
@property(nonatomic,strong)NSArray * imageUrlArray;
@property(nonatomic,strong)NSString *id1;
@property(nonatomic,assign)TripModel *model;

@property(nonatomic,strong)GHMyPhotoView *PhotoView;

-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier WithUrlArray  :(NSArray *)imageUrlArray  id1 :(NSString *)id1;

@end
