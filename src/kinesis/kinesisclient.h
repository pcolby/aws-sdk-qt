/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

private:
    Q_DECLARE_PRIVATE(KinesisClient)
    Q_DISABLE_COPY(KinesisClient)

};

} // namespace Kinesis
} // namespace QtAws

#endif
