/*
    Copyright 2013-2016 Paul Colby

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

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Kinesis {

class KinesisClientPrivate;

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
    DescribeStreamResponse * describeStream(const DescribeStreamRequest &request);
    DisableEnhancedMonitoringResponse * disableEnhancedMonitoring(const DisableEnhancedMonitoringRequest &request);
    EnableEnhancedMonitoringResponse * enableEnhancedMonitoring(const EnableEnhancedMonitoringRequest &request);
    GetRecordsResponse * getRecords(const GetRecordsRequest &request);
    GetShardIteratorResponse * getShardIterator(const GetShardIteratorRequest &request);
    IncreaseStreamRetentionPeriodResponse * increaseStreamRetentionPeriod(const IncreaseStreamRetentionPeriodRequest &request);
    ListStreamsResponse * listStreams(const ListStreamsRequest &request);
    ListTagsForStreamResponse * listTagsForStream(const ListTagsForStreamRequest &request);
    MergeShardsResponse * mergeShards(const MergeShardsRequest &request);
    PutRecordResponse * putRecord(const PutRecordRequest &request);
    PutRecordsResponse * putRecords(const PutRecordsRequest &request);
    RemoveTagsFromStreamResponse * removeTagsFromStream(const RemoveTagsFromStreamRequest &request);
    SplitShardResponse * splitShard(const SplitShardRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisClient)
    Q_DISABLE_COPY(KinesisClient)

};

} // namespace Kinesis
} // namespace AWS

#endif
