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

#ifndef QTAWS_FIREHOSECLIENT_H
#define QTAWS_FIREHOSECLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class FirehoseClientPrivate;

class QTAWS_EXPORT FirehoseClient : public AwsAbstractClient {
    Q_OBJECT

public:
    FirehoseClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    FirehoseClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    FirehoseCreateDeliveryStreamResponse * createDeliveryStream(const FirehoseCreateDeliveryStreamRequest &request);
    FirehoseDeleteDeliveryStreamResponse * deleteDeliveryStream(const FirehoseDeleteDeliveryStreamRequest &request);
    FirehoseDescribeDeliveryStreamResponse * describeDeliveryStream(const FirehoseDescribeDeliveryStreamRequest &request);
    FirehoseListDeliveryStreamsResponse * listDeliveryStreams(const FirehoseListDeliveryStreamsRequest &request);
    FirehosePutRecordResponse * putRecord(const FirehosePutRecordRequest &request);
    FirehosePutRecordBatchResponse * putRecordBatch(const FirehosePutRecordBatchRequest &request);
    FirehoseUpdateDestinationResponse * updateDestination(const FirehoseUpdateDestinationRequest &request);

private:
    Q_DECLARE_PRIVATE(FirehoseClient)
    Q_DISABLE_COPY(FirehoseClient)

};

QTAWS_END_NAMESPACE

#endif
