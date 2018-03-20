/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_KINESISCLIENT_H
#define QTAWS_KINESISCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace Kinesis {

class KinesisClientPrivate;
class AddTagsToStreamResponse;
class CreateStreamResponse;
class DecreaseStreamRetentionPeriodResponse;
class DeleteStreamResponse;
class DescribeLimitsResponse;
class DescribeStreamResponse;
class DescribeStreamSummaryResponse;
class DisableEnhancedMonitoringResponse;
class EnableEnhancedMonitoringResponse;
class GetRecordsResponse;
class GetShardIteratorResponse;
class IncreaseStreamRetentionPeriodResponse;
class ListShardsResponse;
class ListStreamsResponse;
class ListTagsForStreamResponse;
class MergeShardsResponse;
class PutRecordResponse;
class PutRecordsResponse;
class RemoveTagsFromStreamResponse;
class SplitShardResponse;
class StartStreamEncryptionResponse;
class StopStreamEncryptionResponse;
class UpdateShardCountResponse;

class QTAWS_EXPORT KinesisClient : public AwsAbstractClient {
    Q_OBJECT

public:
    KinesisClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KinesisClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
