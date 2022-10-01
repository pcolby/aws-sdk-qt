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
