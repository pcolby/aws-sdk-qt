// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOCLIENT_H
#define QTAWS_KINESISVIDEOCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskinesisvideoglobal.h"

class QNetworkReply;

namespace QtAws {
namespace KinesisVideo {

class KinesisVideoClientPrivate;
class CreateSignalingChannelRequest;
class CreateSignalingChannelResponse;
class CreateStreamRequest;
class CreateStreamResponse;
class DeleteSignalingChannelRequest;
class DeleteSignalingChannelResponse;
class DeleteStreamRequest;
class DeleteStreamResponse;
class DescribeImageGenerationConfigurationRequest;
class DescribeImageGenerationConfigurationResponse;
class DescribeNotificationConfigurationRequest;
class DescribeNotificationConfigurationResponse;
class DescribeSignalingChannelRequest;
class DescribeSignalingChannelResponse;
class DescribeStreamRequest;
class DescribeStreamResponse;
class GetDataEndpointRequest;
class GetDataEndpointResponse;
class GetSignalingChannelEndpointRequest;
class GetSignalingChannelEndpointResponse;
class ListSignalingChannelsRequest;
class ListSignalingChannelsResponse;
class ListStreamsRequest;
class ListStreamsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTagsForStreamRequest;
class ListTagsForStreamResponse;
class TagResourceRequest;
class TagResourceResponse;
class TagStreamRequest;
class TagStreamResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UntagStreamRequest;
class UntagStreamResponse;
class UpdateDataRetentionRequest;
class UpdateDataRetentionResponse;
class UpdateImageGenerationConfigurationRequest;
class UpdateImageGenerationConfigurationResponse;
class UpdateNotificationConfigurationRequest;
class UpdateNotificationConfigurationResponse;
class UpdateSignalingChannelRequest;
class UpdateSignalingChannelResponse;
class UpdateStreamRequest;
class UpdateStreamResponse;

class QTAWSKINESISVIDEO_EXPORT KinesisVideoClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisVideoClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KinesisVideoClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateSignalingChannelResponse * createSignalingChannel(const CreateSignalingChannelRequest &request);
    CreateStreamResponse * createStream(const CreateStreamRequest &request);
    DeleteSignalingChannelResponse * deleteSignalingChannel(const DeleteSignalingChannelRequest &request);
    DeleteStreamResponse * deleteStream(const DeleteStreamRequest &request);
    DescribeImageGenerationConfigurationResponse * describeImageGenerationConfiguration(const DescribeImageGenerationConfigurationRequest &request);
    DescribeNotificationConfigurationResponse * describeNotificationConfiguration(const DescribeNotificationConfigurationRequest &request);
    DescribeSignalingChannelResponse * describeSignalingChannel(const DescribeSignalingChannelRequest &request);
    DescribeStreamResponse * describeStream(const DescribeStreamRequest &request);
    GetDataEndpointResponse * getDataEndpoint(const GetDataEndpointRequest &request);
    GetSignalingChannelEndpointResponse * getSignalingChannelEndpoint(const GetSignalingChannelEndpointRequest &request);
    ListSignalingChannelsResponse * listSignalingChannels(const ListSignalingChannelsRequest &request);
    ListStreamsResponse * listStreams(const ListStreamsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTagsForStreamResponse * listTagsForStream(const ListTagsForStreamRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TagStreamResponse * tagStream(const TagStreamRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UntagStreamResponse * untagStream(const UntagStreamRequest &request);
    UpdateDataRetentionResponse * updateDataRetention(const UpdateDataRetentionRequest &request);
    UpdateImageGenerationConfigurationResponse * updateImageGenerationConfiguration(const UpdateImageGenerationConfigurationRequest &request);
    UpdateNotificationConfigurationResponse * updateNotificationConfiguration(const UpdateNotificationConfigurationRequest &request);
    UpdateSignalingChannelResponse * updateSignalingChannel(const UpdateSignalingChannelRequest &request);
    UpdateStreamResponse * updateStream(const UpdateStreamRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisVideoClient)
    Q_DISABLE_COPY(KinesisVideoClient)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
