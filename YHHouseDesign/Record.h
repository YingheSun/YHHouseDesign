//
//  Record.h
//  YHHouseDesign
//
//  Created by 孙滢贺 on 16/1/28.
//  Copyright (c) 2016年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class House;

@interface Record : NSManagedObject

@property (nonatomic, retain) NSString * arceage;
@property (nonatomic, retain) NSString * characteristic;
@property (nonatomic, retain) NSString * isEditable;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * phone;
@property (nonatomic, retain) NSString * place;
@property (nonatomic, retain) NSString * style;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) House *afterRecordofHouse;
@property (nonatomic, retain) House *beforeRecordofHouse;

@end
