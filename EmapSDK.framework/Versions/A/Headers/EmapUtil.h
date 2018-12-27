//
//  EmapUtil.h
//  Pods
//
//  Created by xmac on 18/12/20.
//
//

#import <Foundation/Foundation.h>
#import <ArcGIS/ArcGIS.h>
#import "SouthgisTdtType.h"
#import "SouthgisTdt_TileLayer.h"
//#import "SouthgisBdWMTSLayer.h"
#import "EmapInfo.h"
//#import "SGGDLayer.h"


@interface EmapUtil : NSObject<EmapInfoDelegate>

/**
 *
 *  @brief  天地图适量图层
 */
@property (strong,nonatomic,nullable) EmapInfo *cev;

/**
 *
 *  @brief  天地图标志图层
 */
@property(strong,nonatomic,nullable) EmapInfo *cav;

/**
 *
 *  @brief  地图
 */
@property(nonatomic,strong,nullable) AGSMapView *mapView;

/**
 *
 *  @brief  单列
 *
 *  @return 类的对象
 */
+(nonnull instancetype)sharedInstance;


/**
 *
 *  @brief  获取地图对象
 *
 *  @param mapView 地图容器
 */
-(AGSMapView *) getMapView:(CGRect ) frame;



/**
 *
 *  @brief  加载天地图底图(CGCS2000 坐标系)
 *
 *  @param mapView 地图
 */
-(void)showWorldVectorLayer:(nonnull AGSMapView *)mapView;


/**
 *
 *  @brief  加载天地图影像底图
 *
 *  @param mapView 当前地图
 */
-(void) showWorldSatelliteLayer:(nonnull AGSMapView *) mapView;


/**
 *
 *  @brief  清除天地图CGCS2000图层
 *
 *  @param mapView 当前地图
 */
-(void)clearWorldLayer:(nonnull AGSMapView *)mapView;



/**
 *
 *  @brief  获取天地图当前图层级别
 *
 *  @param tdtLayer 天地图图层
 *
 *  @return 天地图当前图层级别
 */
-(NSInteger)currentLevel:(nonnull SouthgisTdt_TileLayer *)tdtLayer;





/**
 *
 *  @brief 将地图移到中国视图范围(天地图国家坐标系)
 *
 *  @param mapView 地图
 */
-(void) zoomToChineseEnvelope:(nonnull AGSMapView *)mapView;






@end

