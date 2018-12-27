//
//  ViewController.m
//  EmapSDKDemo
//
//  Created by xmac on 18/12/24.
//  Copyright © 2018年 xmac. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()<AGSMapViewLayerDelegate, EmapInfoDelegate,AGSLayerDelegate>

@property(strong,nonatomic) AGSMapView *mapView;
@property (strong) EmapInfo *info;
@property(strong) EmapInfo *cav;
@property(strong) AGSDynamicMapServiceLayer * dynamic;
@property(strong)EmapInfo *cev;

@property(assign) BOOL vecFlage ;

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
    self.edgesForExtendedLayout = UIRectEdgeNone;
    self.automaticallyAdjustsScrollViewInsets = NO;
    
 
    
    self.mapView =[[EmapUtil sharedInstance] getMapView:self.view.frame];
    
    [self.view addSubview:self.mapView];
    [[EmapUtil sharedInstance]showWorldVectorLayer:self.mapView];
    [[EmapUtil sharedInstance]zoomToChineseEnvelope:self.mapView];
    
    self.layerChangBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    self.layerChangBtn.frame = CGRectMake(240, 0, 60, 30);
    [self.layerChangBtn setTitle:@"切换" forState:UIControlStateNormal];
    [self.layerChangBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    self.layerChangBtn.backgroundColor = [UIColor blueColor];
    [self.layerChangBtn addTarget:self action:@selector(changeLayer:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:self.layerChangBtn];
    
    self.vecFlage = NO;
    self.mapView.layerDelegate = self;
}

-(void)changeLayer:(UIButton *)button{
    
    if(!self.vecFlage ){
        
        [[EmapUtil sharedInstance] showWorldSatelliteLayer:self.mapView];
    }else{
        [[EmapUtil sharedInstance]showWorldVectorLayer:self.mapView];
    }
    
    [[EmapUtil sharedInstance]zoomToChineseEnvelope:self.mapView];
    
    self.vecFlage = !self.vecFlage;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}







@end