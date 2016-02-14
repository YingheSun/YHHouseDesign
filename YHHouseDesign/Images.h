//
//  Images.h
//  YHHouseDesign
//
//  Created by 孙滢贺 on 16/1/28.
//  Copyright (c) 2016年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class House, Parts;

@interface Images : NSManagedObject

@property (nonatomic, retain) NSString * position;
@property (nonatomic, retain) House *imageOfChildRoom;
@property (nonatomic, retain) House *imageOfDoor;
@property (nonatomic, retain) House *imageOfHall;
@property (nonatomic, retain) House *imageOfKitchen;
@property (nonatomic, retain) House *imageOfOthers;
@property (nonatomic, retain) House *imageOfReadingRoom;
@property (nonatomic, retain) House *imageOfResturant;
@property (nonatomic, retain) House *imageOfRooms;
@property (nonatomic, retain) House *imageOfWashRoom;
@property (nonatomic, retain) Parts *imagesOfParts;

@end
