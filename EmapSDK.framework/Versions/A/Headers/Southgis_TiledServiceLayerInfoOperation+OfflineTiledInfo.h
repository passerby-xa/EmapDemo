//
//

#import "Southgis_TiledServiceLayerInfoOperation.h"

/**
 *
 * 切片信息缓存
 */
@interface Southgis_TiledServiceLayerInfoOperation (OfflineTiledInfo)

/**
  *
 * 保存切片信息
 *
 * @param data     切片信息
 * @param fileName 文件名
 */
- (void)cacheTiledInfoInLocalFile:(NSData *)data fileName:(NSString *)fileName;

/**
 
 *
 * 获取切片信息
 *
 * @param fileName 文件名
 *
 * @return 切片信息
 */
- (NSData *)getTiledDataFromeLocalFile:(NSString *)fileName;

@end
