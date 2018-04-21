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

#ifndef QTAWS_FIREHOSECLIENT_H
#define QTAWS_FIREHOSECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Firehose {

class FirehoseClientPrivate;
class CreateDeliveryStreamRequest;
class CreateDeliveryStreamResponse;
class DeleteDeliveryStreamRequest;
class DeleteDeliveryStreamResponse;
class DescribeDeliveryStreamRequest;
class DescribeDeliveryStreamResponse;
class ListDeliveryStreamsRequest;
class ListDeliveryStreamsResponse;
class ListTagsForDeliveryStreamRequest;
class ListTagsForDeliveryStreamResponse;
class PutRecordRequest;
class PutRecordResponse;
class PutRecordBatchRequest;
class PutRecordBatchResponse;
class TagDeliveryStreamRequest;
class TagDeliveryStreamResponse;
class UntagDeliveryStreamRequest;
class UntagDeliveryStreamResponse;
class UpdateDestinationRequest;
class UpdateDestinationResponse;

class QTAWS_EXPORT FirehoseClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FirehoseClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    FirehoseClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDeliveryStreamResponse * createDeliveryStream(const CreateDeliveryStreamRequest &request);
    DeleteDeliveryStreamResponse * deleteDeliveryStream(const DeleteDeliveryStreamRequest &request);
    DescribeDeliveryStreamResponse * describeDeliveryStream(const DescribeDeliveryStreamRequest &request);
    ListDeliveryStreamsResponse * listDeliveryStreams(const ListDeliveryStreamsRequest &request);
    ListTagsForDeliveryStreamResponse * listTagsForDeliveryStream(const ListTagsForDeliveryStreamRequest &request);
    PutRecordResponse * putRecord(const PutRecordRequest &request);
    PutRecordBatchResponse * putRecordBatch(const PutRecordBatchRequest &request);
    TagDeliveryStreamResponse * tagDeliveryStream(const TagDeliveryStreamRequest &request);
    UntagDeliveryStreamResponse * untagDeliveryStream(const UntagDeliveryStreamRequest &request);
    UpdateDestinationResponse * updateDestination(const UpdateDestinationRequest &request);

private:
    Q_DECLARE_PRIVATE(FirehoseClient)
    Q_DISABLE_COPY(FirehoseClient)

};

} // namespace Firehose
} // namespace QtAws

#endif
