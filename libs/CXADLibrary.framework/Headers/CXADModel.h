//
//  CXADModel.h
//  CXADLibrary
//
//  Created by WCQ on 2021/5/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXADModel : NSObject

///项目id
@property (nonatomic, strong) NSString *objectId;

///开屏广告弹出时间
@property (nonatomic, strong) NSString *kaiping;

///全屏视频弹出时间
@property (nonatomic, strong) NSString *quanping;

///插屏弹出时间
@property (nonatomic, strong) NSString *chaping;

///激励视频弹出时间
@property (nonatomic, strong) NSString *jili;

///循环广告第一次弹出时间
@property (nonatomic, strong) NSString *itordvertisement;

///循环广告弹出时间
@property (nonatomic, strong) NSString *Cycleadvertisingtime;

///循环广告类型 1=开屏 2=插屏 3=全屏视频 4=激励视频
@property (nonatomic, strong) NSString *Circularadvertising;

///游戏唯一appid
@property (nonatomic, strong) NSString *adappid;

///游戏广告是否弹出
@property (nonatomic, strong) NSString *adisshow;


@property (nonatomic, strong) NSString *createdAt;
@property (nonatomic, strong) NSString *updatedAt;

@end

NS_ASSUME_NONNULL_END
