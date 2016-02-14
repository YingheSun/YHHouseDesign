//
//  House.h
//  YHHouseDesign
//
//  Created by 孙滢贺 on 16/1/28.
//  Copyright (c) 2016年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Images, Record;

@interface House : NSManagedObject

@property (nonatomic, retain) NSString * acreage;
@property (nonatomic, retain) NSString * characteristic;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * phone;
@property (nonatomic, retain) NSString * place;
@property (nonatomic, retain) NSString * style;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) Record *afterRecord;
@property (nonatomic, retain) Record *beforeRecord;
@property (nonatomic, retain) NSSet *hasChildRoom;
@property (nonatomic, retain) NSSet *hasDoor;
@property (nonatomic, retain) NSSet *hasHall;
@property (nonatomic, retain) NSSet *hasKitchen;
@property (nonatomic, retain) NSSet *hasReadingRoom;
@property (nonatomic, retain) NSSet *hasResturant;
@property (nonatomic, retain) NSSet *hasRoom;
@property (nonatomic, retain) NSSet *hasWashRoom;
@property (nonatomic, retain) NSSet *others;
@end

@interface House (CoreDataGeneratedAccessors)

- (void)addHasChildRoomObject:(Images *)value;
- (void)removeHasChildRoomObject:(Images *)value;
- (void)addHasChildRoom:(NSSet *)values;
- (void)removeHasChildRoom:(NSSet *)values;

- (void)addHasDoorObject:(Images *)value;
- (void)removeHasDoorObject:(Images *)value;
- (void)addHasDoor:(NSSet *)values;
- (void)removeHasDoor:(NSSet *)values;

- (void)addHasHallObject:(Images *)value;
- (void)removeHasHallObject:(Images *)value;
- (void)addHasHall:(NSSet *)values;
- (void)removeHasHall:(NSSet *)values;

- (void)addHasKitchenObject:(Images *)value;
- (void)removeHasKitchenObject:(Images *)value;
- (void)addHasKitchen:(NSSet *)values;
- (void)removeHasKitchen:(NSSet *)values;

- (void)addHasReadingRoomObject:(Images *)value;
- (void)removeHasReadingRoomObject:(Images *)value;
- (void)addHasReadingRoom:(NSSet *)values;
- (void)removeHasReadingRoom:(NSSet *)values;

- (void)addHasResturantObject:(Images *)value;
- (void)removeHasResturantObject:(Images *)value;
- (void)addHasResturant:(NSSet *)values;
- (void)removeHasResturant:(NSSet *)values;

- (void)addHasRoomObject:(Images *)value;
- (void)removeHasRoomObject:(Images *)value;
- (void)addHasRoom:(NSSet *)values;
- (void)removeHasRoom:(NSSet *)values;

- (void)addHasWashRoomObject:(Images *)value;
- (void)removeHasWashRoomObject:(Images *)value;
- (void)addHasWashRoom:(NSSet *)values;
- (void)removeHasWashRoom:(NSSet *)values;

- (void)addOthersObject:(Images *)value;
- (void)removeOthersObject:(Images *)value;
- (void)addOthers:(NSSet *)values;
- (void)removeOthers:(NSSet *)values;

@end
