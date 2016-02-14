//
//  User.h
//  YHHouseDesign
//
//  Created by 孙滢贺 on 16/1/28.
//  Copyright (c) 2016年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface User : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * password;

@end
