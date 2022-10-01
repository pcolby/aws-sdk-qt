// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEDIAPIPELINESCLIENT_H
#define QTAWS_CHIMESDKMEDIAPIPELINESCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawschimesdkmediapipelinesglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ChimeSdkMediaPipelinesClientPrivate;
class CreateMediaCapturePipelineRequest;
class CreateMediaCapturePipelineResponse;
class CreateMediaConcatenationPipelineRequest;
class CreateMediaConcatenationPipelineResponse;
class CreateMediaLiveConnectorPipelineRequest;
class CreateMediaLiveConnectorPipelineResponse;
class DeleteMediaCapturePipelineRequest;
class DeleteMediaCapturePipelineResponse;
class DeleteMediaPipelineRequest;
class DeleteMediaPipelineResponse;
class GetMediaCapturePipelineRequest;
class GetMediaCapturePipelineResponse;
class GetMediaPipelineRequest;
class GetMediaPipelineResponse;
class ListMediaCapturePipelinesRequest;
class ListMediaCapturePipelinesResponse;
class ListMediaPipelinesRequest;
class ListMediaPipelinesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT ChimeSdkMediaPipelinesClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ChimeSdkMediaPipelinesClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ChimeSdkMediaPipelinesClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateMediaCapturePipelineResponse * createMediaCapturePipeline(const CreateMediaCapturePipelineRequest &request);
    CreateMediaConcatenationPipelineResponse * createMediaConcatenationPipeline(const CreateMediaConcatenationPipelineRequest &request);
    CreateMediaLiveConnectorPipelineResponse * createMediaLiveConnectorPipeline(const CreateMediaLiveConnectorPipelineRequest &request);
    DeleteMediaCapturePipelineResponse * deleteMediaCapturePipeline(const DeleteMediaCapturePipelineRequest &request);
    DeleteMediaPipelineResponse * deleteMediaPipeline(const DeleteMediaPipelineRequest &request);
    GetMediaCapturePipelineResponse * getMediaCapturePipeline(const GetMediaCapturePipelineRequest &request);
    GetMediaPipelineResponse * getMediaPipeline(const GetMediaPipelineRequest &request);
    ListMediaCapturePipelinesResponse * listMediaCapturePipelines(const ListMediaCapturePipelinesRequest &request);
    ListMediaPipelinesResponse * listMediaPipelines(const ListMediaPipelinesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(ChimeSdkMediaPipelinesClient)
    Q_DISABLE_COPY(ChimeSdkMediaPipelinesClient)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
