/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ScreenReaderCore/SCRCMathRowExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathTableCellExpression : SCRCMathRowExpression
{
    BOOL _didGetTablePosition;
    unsigned int _rowIndex;
    unsigned int _columnIndex;
    unsigned int _tableRowCount;
    unsigned int _tableColumnCount;
}

- (id)mathMLTag;
- (id)suffixForChildAtIndex:(unsigned int)arg1;
- (id)prefixForChildAtIndex:(unsigned int)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (void)_getTableDataIfNecessary;

@end
