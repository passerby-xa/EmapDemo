//
//  SouthgisTianDiTuWMTSLayerInfoDelegate.h
//

#import <Foundation/Foundation.h>
#import "SouthgisTdt_LayerInfo.h"
#import "SouthgisTdtType.h"

@interface SouthgisTianDiTuWMTSLayerInfoDelegate : NSObject

-(SouthgisTdt_LayerInfo*)getLayerInfo:(WMTSLayerTypes) tiandituType;

@end
