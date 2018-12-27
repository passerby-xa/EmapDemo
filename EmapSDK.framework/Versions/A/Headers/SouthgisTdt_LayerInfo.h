//
//

#import <Foundation/Foundation.h>
#import <ArcGIS/ArcGIS.h>

/**
 *
 * WMTS图层信息
 */
@interface SouthgisTdt_LayerInfo : NSObject

@property (nonatomic,strong) NSString *url;
@property (nonatomic,strong) NSString *layerName;
@property (nonatomic,assign) int minZoomLevel;
@property (nonatomic,assign) int maxZoomLevel;
@property (nonatomic,assign) double xMin;
@property (nonatomic,assign) double yMin;
@property (nonatomic,assign) double xMax;
@property (nonatomic,assign) double yMax;
@property (nonatomic,assign) int tileWidth;
@property (nonatomic,assign) int tileHeight;
@property (nonatomic,strong) NSMutableArray *lods;
@property (nonatomic,assign) int dpi;
@property (nonatomic,assign) int srid;
@property (nonatomic,strong) AGSPoint *origin;
@property (nonatomic,strong) NSString *tileMatrixSet;


@end
