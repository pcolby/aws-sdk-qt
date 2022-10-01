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

#include "chimesdkmediapipelinesclient.h"
#include "chimesdkmediapipelinesclient_p.h"

#include "core/awssignaturev4.h"
#include "createmediacapturepipelinerequest.h"
#include "createmediacapturepipelineresponse.h"
#include "createmediaconcatenationpipelinerequest.h"
#include "createmediaconcatenationpipelineresponse.h"
#include "createmedialiveconnectorpipelinerequest.h"
#include "createmedialiveconnectorpipelineresponse.h"
#include "deletemediacapturepipelinerequest.h"
#include "deletemediacapturepipelineresponse.h"
#include "deletemediapipelinerequest.h"
#include "deletemediapipelineresponse.h"
#include "getmediacapturepipelinerequest.h"
#include "getmediacapturepipelineresponse.h"
#include "getmediapipelinerequest.h"
#include "getmediapipelineresponse.h"
#include "listmediacapturepipelinesrequest.h"
#include "listmediacapturepipelinesresponse.h"
#include "listmediapipelinesrequest.h"
#include "listmediapipelinesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ChimeSdkMediaPipelines
 * \brief Contains classess for accessing Amazon Chime SDK Media Pipelines.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ChimeSdkMediaPipelinesClient
 * \brief The ChimeSdkMediaPipelinesClient class provides access to the Amazon Chime SDK Media Pipelines service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 */

/*!
 * \brief Constructs a ChimeSdkMediaPipelinesClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ChimeSdkMediaPipelinesClient::ChimeSdkMediaPipelinesClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeSdkMediaPipelinesClientPrivate(this), parent)
{
    Q_D(ChimeSdkMediaPipelinesClient);
    d->apiVersion = QStringLiteral("2021-07-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("media-pipelines-chime");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Chime SDK Media Pipelines");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * \overload ChimeSdkMediaPipelinesClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ChimeSdkMediaPipelinesClient::ChimeSdkMediaPipelinesClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeSdkMediaPipelinesClientPrivate(this), parent)
{
    Q_D(ChimeSdkMediaPipelinesClient);
    d->apiVersion = QStringLiteral("2021-07-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("media-pipelines-chime");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Chime SDK Media Pipelines");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * CreateMediaCapturePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a media
 */
CreateMediaCapturePipelineResponse * ChimeSdkMediaPipelinesClient::createMediaCapturePipeline(const CreateMediaCapturePipelineRequest &request)
{
    return qobject_cast<CreateMediaCapturePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * CreateMediaConcatenationPipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a media concatenation
 */
CreateMediaConcatenationPipelineResponse * ChimeSdkMediaPipelinesClient::createMediaConcatenationPipeline(const CreateMediaConcatenationPipelineRequest &request)
{
    return qobject_cast<CreateMediaConcatenationPipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * CreateMediaLiveConnectorPipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a streaming media pipeline in an Amazon Chime SDK
 */
CreateMediaLiveConnectorPipelineResponse * ChimeSdkMediaPipelinesClient::createMediaLiveConnectorPipeline(const CreateMediaLiveConnectorPipelineRequest &request)
{
    return qobject_cast<CreateMediaLiveConnectorPipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * DeleteMediaCapturePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the media
 */
DeleteMediaCapturePipelineResponse * ChimeSdkMediaPipelinesClient::deleteMediaCapturePipeline(const DeleteMediaCapturePipelineRequest &request)
{
    return qobject_cast<DeleteMediaCapturePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * DeleteMediaPipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the media
 */
DeleteMediaPipelineResponse * ChimeSdkMediaPipelinesClient::deleteMediaPipeline(const DeleteMediaPipelineRequest &request)
{
    return qobject_cast<DeleteMediaPipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * GetMediaCapturePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an existing media
 */
GetMediaCapturePipelineResponse * ChimeSdkMediaPipelinesClient::getMediaCapturePipeline(const GetMediaCapturePipelineRequest &request)
{
    return qobject_cast<GetMediaCapturePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * GetMediaPipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an existing media
 */
GetMediaPipelineResponse * ChimeSdkMediaPipelinesClient::getMediaPipeline(const GetMediaPipelineRequest &request)
{
    return qobject_cast<GetMediaPipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * ListMediaCapturePipelinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of media
 */
ListMediaCapturePipelinesResponse * ChimeSdkMediaPipelinesClient::listMediaCapturePipelines(const ListMediaCapturePipelinesRequest &request)
{
    return qobject_cast<ListMediaCapturePipelinesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * ListMediaPipelinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of media
 */
ListMediaPipelinesResponse * ChimeSdkMediaPipelinesClient::listMediaPipelines(const ListMediaPipelinesRequest &request)
{
    return qobject_cast<ListMediaPipelinesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags available for a media
 */
ListTagsForResourceResponse * ChimeSdkMediaPipelinesClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The ARN of the media pipeline that you want to tag. Consists of he pipeline's endpoint region, resource ID, and pipeline
 */
TagResourceResponse * ChimeSdkMediaPipelinesClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkMediaPipelinesClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes any tags from a media
 */
UntagResourceResponse * ChimeSdkMediaPipelinesClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ChimeSdkMediaPipelinesClientPrivate
 * \brief The ChimeSdkMediaPipelinesClientPrivate class provides private implementation for ChimeSdkMediaPipelinesClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a ChimeSdkMediaPipelinesClientPrivate object with public implementation \a q.
 */
ChimeSdkMediaPipelinesClientPrivate::ChimeSdkMediaPipelinesClientPrivate(ChimeSdkMediaPipelinesClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
