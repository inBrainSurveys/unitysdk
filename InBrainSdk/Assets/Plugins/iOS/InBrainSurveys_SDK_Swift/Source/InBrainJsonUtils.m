//
//  InBrainJsonUtils.m
//  Unity-iPhone
//
//  Created by Ivan Tustanivsky on 14/01/20.
//

#import "InBrainJsonUtils.h"

@implementation InBrainJsonUtils

+ (NSString *)serializeArray:(NSArray *)array {
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:array options:nil error:&error];
    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}

+ (NSString *)serializeDictionary:(NSDictionary *)dictionary {
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dictionary options:nil error:&error];
    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}

+ (NSString *)serializeRewards:(NSArray<InBrainReward *> *)rewards {
    NSMutableDictionary *dictionary = [NSMutableDictionary dictionary];

    NSMutableArray *rewardsArray = [NSMutableArray arrayWithCapacity:rewards.count];

    for (NSUInteger i = 0; i < rewards.count; ++i) {
        NSMutableDictionary *reward = [NSMutableDictionary dictionary];
        reward[@"transactionId"] = @(rewards[i].transactionId);
        reward[@"amount"] = @(rewards[i].amount);
        reward[@"currency"] = rewards[i].currency;
        reward[@"transactionType"] = @(rewards[i].transactionType);
        [rewardsArray addObject:reward];
    }

    dictionary[@"rewards"] = rewardsArray;

    return [self serializeDictionary:dictionary];
}

+ (NSString *)serializeSurveys:(NSArray<InBrainNativeSurvey *> *)surveys {
    NSMutableDictionary *dictionary = [NSMutableDictionary dictionary];

    NSMutableArray *surveysArray = [NSMutableArray arrayWithCapacity:surveys.count];

    for (NSUInteger i = 0; i < surveys.count; ++i) {
        NSMutableDictionary *survey = [NSMutableDictionary dictionary];
        survey[@"id"] = surveys[i].id;
        survey[@"rank"] = @(surveys[i].rank);
        survey[@"time"] = @(surveys[i].time);
        survey[@"value"] = @(surveys[i].value);
        [surveysArray addObject:survey];
    }
    
    dictionary[@"surveys"] = surveysArray;

    return [self serializeDictionary:dictionary];
}

+ (NSArray *)deserializeArray:(NSString *)jsonArray {
    NSError *e = nil;
    NSArray *array = [NSJSONSerialization JSONObjectWithData:[jsonArray dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingMutableContainers error:&e];
    if (array != nil) {
        NSMutableArray *prunedArr = [NSMutableArray array];
        [array enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
            if (![obj isKindOfClass:[NSNull class]]) {
                prunedArr[idx] = obj;
            }
        }];
        return prunedArr;
    }
    return array;
}

+ (NSDictionary *)deserializeDictionary:(NSString *)jsonDic {
    NSError *e = nil;
    NSDictionary *dictionary = [NSJSONSerialization JSONObjectWithData:[jsonDic dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingMutableContainers error:&e];
    if (dictionary != nil) {
        NSMutableDictionary *prunedDict = [NSMutableDictionary dictionary];
        [dictionary enumerateKeysAndObjectsUsingBlock:^(NSString *key, id obj, BOOL *stop) {
            if (![obj isKindOfClass:[NSNull class]]) {
                prunedDict[key] = obj;
            }
        }];
        return prunedDict;
    }
    return dictionary;
}

+ (NSArray<NSNumber *> *)deserializeNumbersArray:(NSArray *)numbers {
    NSMutableArray<NSNumber *> *result = [NSMutableArray new];

    for (NSNumber *n in numbers) {
        [result addObject:n];
    }

    return result;
}

@end
