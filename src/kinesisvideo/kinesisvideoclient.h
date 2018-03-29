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

#ifndef QTAWS_KINESISVIDEOCLIENT_H
#define QTAWS_KINESISVIDEOCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace KinesisVideo {

class KinesisVideoClientPrivate;
class CreateStreamRequest;
class CreateStreamResponse;
class DeleteStreamRequest;
class DeleteStreamResponse;
class DescribeStreamRequest;
class DescribeStreamResponse;
class GetDataEndpointRequest;
class GetDataEndpointResponse;
class ListStreamsRequest;
class ListStreamsResponse;
class ListTagsForStreamRequest;
class ListTagsForStreamResponse;
class TagStreamRequest;
class TagStreamResponse;
class UntagStreamRequest;
class UntagStreamResponse;
class UpdateDataRetentionRequest;
class UpdateDataRetentionResponse;
class UpdateStreamRequest;
class UpdateStreamResponse;

class QTAWS_EXPORT KinesisVideoClient : public AwsAbstractClient {
    Q_OBJECT

public:
    KinesisVideoClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KinesisVideoClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateStreamResponse * createStream(const CreateStreamRequest &request);
    DeleteStreamResponse * deleteStream(const DeleteStreamRequest &request);
    DescribeStreamResponse * describeStream(const DescribeStreamRequest &request);
    GetDataEndpointResponse * getDataEndpoint(const GetDataEndpointRequest &request);
    ListStreamsResponse * listStreams(const ListStreamsRequest &request);
    ListTagsForStreamResponse * listTagsForStream(const ListTagsForStreamRequest &request);
    TagStreamResponse * tagStream(const TagStreamRequest &request);
    UntagStreamResponse * untagStream(const UntagStreamRequest &request);
    UpdateDataRetentionResponse * updateDataRetention(const UpdateDataRetentionRequest &request);
    UpdateStreamResponse * updateStream(const UpdateStreamRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisVideoClient)
    Q_DISABLE_COPY(KinesisVideoClient)

};

} // namespace KinesisVideo
} // namespace AWS

#endif
