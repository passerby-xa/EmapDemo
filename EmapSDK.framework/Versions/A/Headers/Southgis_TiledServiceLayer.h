//
//

#import <ArcGIS/ArcGIS.h>
#import "Southgis_TiledServiceLayerInfo.h"
#import "SouthgisBaseTiledServiceLayer.h"
/**
 自定义切片服务图层实体
 */
@interface Southgis_TiledServiceLayer : SouthgisBaseTiledServiceLayer
{
@protected
    Southgis_TiledServiceLayerInfo *_layerInfo;
   
}


/**
 *
 * 初始化
 *
 * @param url   图层地址
 *
 * @return 服务图层
 */
- (instancetype)initTiledServiceLayerURL:(NSString *)url;

@end
