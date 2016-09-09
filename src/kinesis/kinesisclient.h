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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    KinesisAddTagsToStreamResponse * addTagsToStream(const KinesisAddTagsToStreamRequest &request);
    KinesisCreateStreamResponse * createStream(const KinesisCreateStreamRequest &request);
    KinesisDecreaseStreamRetentionPeriodResponse * decreaseStreamRetentionPeriod(const KinesisDecreaseStreamRetentionPeriodRequest &request);
    KinesisDeleteStreamResponse * deleteStream(const KinesisDeleteStreamRequest &request);
    KinesisDescribeStreamResponse * describeStream(const KinesisDescribeStreamRequest &request);
    KinesisDisableEnhancedMonitoringResponse * disableEnhancedMonitoring(const KinesisDisableEnhancedMonitoringRequest &request);
    KinesisEnableEnhancedMonitoringResponse * enableEnhancedMonitoring(const KinesisEnableEnhancedMonitoringRequest &request);
    KinesisGetRecordsResponse * getRecords(const KinesisGetRecordsRequest &request);
    KinesisGetShardIteratorResponse * getShardIterator(const KinesisGetShardIteratorRequest &request);
    KinesisIncreaseStreamRetentionPeriodResponse * increaseStreamRetentionPeriod(const KinesisIncreaseStreamRetentionPeriodRequest &request);
    KinesisListStreamsResponse * listStreams(const KinesisListStreamsRequest &request);
    KinesisListTagsForStreamResponse * listTagsForStream(const KinesisListTagsForStreamRequest &request);
    KinesisMergeShardsResponse * mergeShards(const KinesisMergeShardsRequest &request);
    KinesisPutRecordResponse * putRecord(const KinesisPutRecordRequest &request);
    KinesisPutRecordsResponse * putRecords(const KinesisPutRecordsRequest &request);
    KinesisRemoveTagsFromStreamResponse * removeTagsFromStream(const KinesisRemoveTagsFromStreamRequest &request);
    KinesisSplitShardResponse * splitShard(const KinesisSplitShardRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisClient)
    Q_DISABLE_COPY(KinesisClient)

};

QTAWS_END_NAMESPACE

#endif
