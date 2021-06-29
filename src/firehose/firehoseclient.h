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

#ifndef QTAWS_FIREHOSECLIENT_H
#define QTAWS_FIREHOSECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsfirehoseglobal.h"

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
class StartDeliveryStreamEncryptionRequest;
class StartDeliveryStreamEncryptionResponse;
class StopDeliveryStreamEncryptionRequest;
class StopDeliveryStreamEncryptionResponse;
class TagDeliveryStreamRequest;
class TagDeliveryStreamResponse;
class UntagDeliveryStreamRequest;
class UntagDeliveryStreamResponse;
class UpdateDestinationRequest;
class UpdateDestinationResponse;

class QTAWSFIREHOSE_EXPORT FirehoseClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FirehoseClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit FirehoseClient(
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
    StartDeliveryStreamEncryptionResponse * startDeliveryStreamEncryption(const StartDeliveryStreamEncryptionRequest &request);
    StopDeliveryStreamEncryptionResponse * stopDeliveryStreamEncryption(const StopDeliveryStreamEncryptionRequest &request);
    TagDeliveryStreamResponse * tagDeliveryStream(const TagDeliveryStreamRequest &request);
    UntagDeliveryStreamResponse * untagDeliveryStream(const UntagDeliveryStreamRequest &request);
    UpdateDestinationResponse * updateDestination(const UpdateDestinationRequest &request);

protected:
    /// @cond internal
    FirehoseClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit FirehoseClient(FirehoseClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(FirehoseClient)
    Q_DISABLE_COPY(FirehoseClient)

};

} // namespace Firehose
} // namespace QtAws

#endif
