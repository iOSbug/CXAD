//
//  CXADManager.h
//  CXADLibrary
//
//  Created by WCQ on 2021/5/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CXADModel.h"

typedef void (^CXCompletionHandler)(BOOL success,NSError * _Nullable error);


NS_ASSUME_NONNULL_BEGIN

@interface CXADManager : NSObject

/**
*    单例
*/
+ (instancetype)shared;


/**
 *    sdk业务接口，执行所有后台配置的广告
 *    @param     objectId       项目id
 *    @param     appid          穿山甲appid
 *    @param     splashId       开屏广告id
 *    @param     jiliId         激励视频id
 *    @param     quanpingId     全屏广告id
 */
- (void)startCXAD:(NSString *)objectId
            appid:(NSString *)appid
         splashId:(NSString *)splashId
           jiliId:(NSString *)jiliId
       quanpingId:(NSString *)quanpingId;


/**
 *    获取后台数据配置信息
 *
 *    @param     objectId        项目id
 *    @param     complete        回调
 */
+ (void)getCXADSDKConfig:(NSString *)objectId complete:(nullable void (^)(NSArray<CXADModel *>*results, NSError * _Nullable error))complete;

/**
 *    核心库必须调用的方法,sdk初始化
 *
 *    @param     appid          穿山甲appid
 *    @param     splashId       开屏广告id
 *    @param     jiliId         激励视频id
 *    @param     quanpingId     全屏广告id

 *    @param     complete        回调
 */

- (void)setupCXADSDK:(NSString *)appid
            splashId:(NSString *)splashId
              jiliId:(NSString *)jiliId
          quanpingId:(NSString *)quanpingId
          configData:(CXADModel *)config
            complete:(CXCompletionHandler)complete;

/**
 *    弹出开屏广告
 *
 *    @param     splashID       splash ad
 */
- (void)addSplashAD:(NSString *)splashID;

/**
 *    弹出激励视频
 *
 *    @param     slotID       slotID
 */
- (void)addRewardVideoAdWithSlotID:(NSString *)slotID
                rootViewController:(UIViewController *)rootViewController;

/**
 *    弹出全屏视频
 *
 *    @param     slotID       slotID
 */
- (void)addFullscreenVideoAdWithSlotID:(NSString *)slotID
                    rootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
