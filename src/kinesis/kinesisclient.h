// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISCLIENT_H
#define QTAWS_KINESISCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskinesisglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Kinesis {

class KinesisClientPrivate;
class AddTagsToStreamRequest;
class AddTagsToStreamResponse;
class CreateStreamRequest;
class CreateStreamResponse;
class DecreaseStreamRetentionPeriodRequest;
class DecreaseStreamRetentionPeriodResponse;
class DeleteStreamRequest;
class DeleteStreamResponse;
class DeregisterStreamConsumerRequest;
class DeregisterStreamConsumerResponse;
class DescribeLimitsRequest;
class DescribeLimitsResponse;
class DescribeStreamRequest;
class DescribeStreamResponse;
class DescribeStreamConsumerRequest;
class DescribeStreamConsumerResponse;
class DescribeStreamSummaryRequest;
class DescribeStreamSummaryResponse;
class DisableEnhancedMonitoringRequest;
class DisableEnhancedMonitoringResponse;
class EnableEnhancedMonitoringRequest;
class EnableEnhancedMonitoringResponse;
class GetRecordsRequest;
class GetRecordsResponse;
class GetShardIteratorRequest;
class GetShardIteratorResponse;
class IncreaseStreamRetentionPeriodRequest;
class IncreaseStreamRetentionPeriodResponse;
class ListShardsRequest;
class ListShardsResponse;
class ListStreamConsumersRequest;
class ListStreamConsumersResponse;
class ListStreamsRequest;
class ListStreamsResponse;
class ListTagsForStreamRequest;
class ListTagsForStreamResponse;
class MergeShardsRequest;
class MergeShardsResponse;
class PutRecordRequest;
class PutRecordResponse;
class PutRecordsRequest;
class PutRecordsResponse;
class RegisterStreamConsumerRequest;
class RegisterStreamConsumerResponse;
class RemoveTagsFromStreamRequest;
class RemoveTagsFromStreamResponse;
class SplitShardRequest;
class SplitShardResponse;
class StartStreamEncryptionRequest;
class StartStreamEncryptionResponse;
class StopStreamEncryptionRequest;
class StopStreamEncryptionResponse;
class SubscribeToShardRequest;
class SubscribeToShardResponse;
class UpdateShardCountRequest;
class UpdateShardCountResponse;
class UpdateStreamModeRequest;
class UpdateStreamModeResponse;

class QTAWSKINESIS_EXPORT KinesisClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KinesisClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToStreamResponse * addTagsToStream(const AddTagsToStreamRequest &request);
    CreateStreamResponse * createStream(const CreateStreamRequest &request);
    DecreaseStreamRetentionPeriodResponse * decreaseStreamRetentionPeriod(const DecreaseStreamRetentionPeriodRequest &request);
    DeleteStreamResponse * deleteStream(const DeleteStreamRequest &request);
    DeregisterStreamConsumerResponse * deregisterStreamConsumer(const DeregisterStreamConsumerRequest &request);
    DescribeLimitsResponse * describeLimits(const DescribeLimitsRequest &request);
    DescribeStreamResponse * describeStream(const DescribeStreamRequest &request);
    DescribeStreamConsumerResponse * describeStreamConsumer(const DescribeStreamConsumerRequest &request);
    DescribeStreamSummaryResponse * describeStreamSummary(const DescribeStreamSummaryRequest &request);
    DisableEnhancedMonitoringResponse * disableEnhancedMonitoring(const DisableEnhancedMonitoringRequest &request);
    EnableEnhancedMonitoringResponse * enableEnhancedMonitoring(const EnableEnhancedMonitoringRequest &request);
    GetRecordsResponse * getRecords(const GetRecordsRequest &request);
    GetShardIteratorResponse * getShardIterator(const GetShardIteratorRequest &request);
    IncreaseStreamRetentionPeriodResponse * increaseStreamRetentionPeriod(const IncreaseStreamRetentionPeriodRequest &request);
    ListShardsResponse * listShards(const ListShardsRequest &request);
    ListStreamConsumersResponse * listStreamConsumers(const ListStreamConsumersRequest &request);
    ListStreamsResponse * listStreams(const ListStreamsRequest &request);
    ListTagsForStreamResponse * listTagsForStream(const ListTagsForStreamRequest &request);
    MergeShardsResponse * mergeShards(const MergeShardsRequest &request);
    PutRecordResponse * putRecord(const PutRecordRequest &request);
    PutRecordsResponse * putRecords(const PutRecordsRequest &request);
    RegisterStreamConsumerResponse * registerStreamConsumer(const RegisterStreamConsumerRequest &request);
    RemoveTagsFromStreamResponse * removeTagsFromStream(const RemoveTagsFromStreamRequest &request);
    SplitShardResponse * splitShard(const SplitShardRequest &request);
    StartStreamEncryptionResponse * startStreamEncryption(const StartStreamEncryptionRequest &request);
    StopStreamEncryptionResponse * stopStreamEncryption(const StopStreamEncryptionRequest &request);
    SubscribeToShardResponse * subscribeToShard(const SubscribeToShardRequest &request);
    UpdateShardCountResponse * updateShardCount(const UpdateShardCountRequest &request);
    UpdateStreamModeResponse * updateStreamMode(const UpdateStreamModeRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisClient)
    Q_DISABLE_COPY(KinesisClient)

};

} // namespace Kinesis
} // namespace QtAws

#endif
