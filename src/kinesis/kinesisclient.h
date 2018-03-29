/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_KINESISCLIENT_H
#define QTAWS_KINESISCLIENT_H

#include "core/awsabstractclient.h"

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
class DescribeLimitsRequest;
class DescribeLimitsResponse;
class DescribeStreamRequest;
class DescribeStreamResponse;
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
class RemoveTagsFromStreamRequest;
class RemoveTagsFromStreamResponse;
class SplitShardRequest;
class SplitShardResponse;
class StartStreamEncryptionRequest;
class StartStreamEncryptionResponse;
class StopStreamEncryptionRequest;
class StopStreamEncryptionResponse;
class UpdateShardCountRequest;
class UpdateShardCountResponse;

class QTAWS_EXPORT KinesisClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KinesisClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToStreamResponse * addTagsToStream(const AddTagsToStreamRequest &request);
    CreateStreamResponse * createStream(const CreateStreamRequest &request);
    DecreaseStreamRetentionPeriodResponse * decreaseStreamRetentionPeriod(const DecreaseStreamRetentionPeriodRequest &request);
    DeleteStreamResponse * deleteStream(const DeleteStreamRequest &request);
    DescribeLimitsResponse * describeLimits(const DescribeLimitsRequest &request);
    DescribeStreamResponse * describeStream(const DescribeStreamRequest &request);
    DescribeStreamSummaryResponse * describeStreamSummary(const DescribeStreamSummaryRequest &request);
    DisableEnhancedMonitoringResponse * disableEnhancedMonitoring(const DisableEnhancedMonitoringRequest &request);
    EnableEnhancedMonitoringResponse * enableEnhancedMonitoring(const EnableEnhancedMonitoringRequest &request);
    GetRecordsResponse * getRecords(const GetRecordsRequest &request);
    GetShardIteratorResponse * getShardIterator(const GetShardIteratorRequest &request);
    IncreaseStreamRetentionPeriodResponse * increaseStreamRetentionPeriod(const IncreaseStreamRetentionPeriodRequest &request);
    ListShardsResponse * listShards(const ListShardsRequest &request);
    ListStreamsResponse * listStreams(const ListStreamsRequest &request);
    ListTagsForStreamResponse * listTagsForStream(const ListTagsForStreamRequest &request);
    MergeShardsResponse * mergeShards(const MergeShardsRequest &request);
    PutRecordResponse * putRecord(const PutRecordRequest &request);
    PutRecordsResponse * putRecords(const PutRecordsRequest &request);
    RemoveTagsFromStreamResponse * removeTagsFromStream(const RemoveTagsFromStreamRequest &request);
    SplitShardResponse * splitShard(const SplitShardRequest &request);
    StartStreamEncryptionResponse * startStreamEncryption(const StartStreamEncryptionRequest &request);
    StopStreamEncryptionResponse * stopStreamEncryption(const StopStreamEncryptionRequest &request);
    UpdateShardCountResponse * updateShardCount(const UpdateShardCountRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisClient)
    Q_DISABLE_COPY(KinesisClient)

};

} // namespace Kinesis
} // namespace QtAws

#endif
