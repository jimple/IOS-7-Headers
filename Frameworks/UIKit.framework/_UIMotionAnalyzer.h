/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "_UISettingsKeyObserver.h"

@class UILabel, UIView, UIWindow, _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

__attribute__((visibility("hidden")))
@interface _UIMotionAnalyzer : NSObject <_UISettingsKeyObserver>
{
    _UIMotionAnalyzerSettings *_settings;
    float _smoothingDegree;
    float _referenceShiftSpeed;
    float _distanceMultiplier;
    BOOL _hasReferenceQuaternion;
    union _GLKQuaternion _referenceQuaternion;
    union _GLKQuaternion _absoluteQuaternion;
    double _lastUpdate;
    double _idleStartTime;
    struct UIOffset _idleStartOffset;
    float _jumpThreshold;
    float _idleLeeway;
    float _secondsBeforeIdle;
    float _lockValue;
    float _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
    _UIViewerRelativeDevicePose *_viewerRelativeDevicePose;
}

@property(readonly, nonatomic) _UIViewerRelativeDevicePose *viewerRelativeDevicePose; // @synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose;
- (void)_tearDownDiagnosticsWindow;
- (void)_createDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_createDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (void)_createIdleIndicator;
- (void)_updateDirectionalLockIndicators;
- (void)_showIdleUI:(BOOL)arg1;
- (void)_updateSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)isIdleGivenTimestamp:(double)arg1;
- (void)_updateIdleStateForRawOffset:(struct UIOffset)arg1 timestamp:(double)arg2;
- (float)_directionLockStrength;
- (int)_directionLockStatus;
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion)arg1;
- (union _GLKQuaternion)_relativeQuaternion;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (void)_updateReferenceAttitude:(union _GLKQuaternion)arg1 timestamp:(double)arg2;
- (struct UIOffset)_currentRawOffset:(union _GLKQuaternion)arg1;
- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset)arg1;
- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset)arg1;
- (void)reset;
- (void)updateWithDeviceMotionStruct:(const CDStruct_04e8b4cd *)arg1 timestamp:(double)arg2;
- (void)updateWithDeviceMotion:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;

@end
