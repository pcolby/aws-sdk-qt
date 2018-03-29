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

#include "mediaconvertclient.h"
#include "mediaconvertclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace MediaConvert {

/**
 * @class  MediaConvertClient
 *
 * @brief  Client for AWS Elemental MediaConvert
 *
 */

/**
 * @brief  Constructs a new MediaConvertClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MediaConvertClient::MediaConvertClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaConvertClientPrivate(this), parent)
{
    Q_D(MediaConvertClient);
    d->apiVersion = QStringLiteral("2017-08-29");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mediaconvert");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaConvert");
    d->serviceName = QStringLiteral("mediaconvert");
}

/**
 * @brief  Constructs a new MediaConvertClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
MediaConvertClient::MediaConvertClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaConvertClientPrivate(this), parent)
{
    Q_D(MediaConvertClient);
    d->apiVersion = QStringLiteral("2017-08-29");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mediaconvert");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaConvert");
    d->serviceName = QStringLiteral("mediaconvert");
}

/**
 * Permanently remove a job from a queue. Once you have canceled a job, you can't start it again. You can't delete a
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelJobResponse * MediaConvertClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/**
 * Create a new transcoding job. For information about jobs and job settings, see the User Guide at
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateJobResponse * MediaConvertClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/**
 * Create a new job template. For information about job templates see the User Guide at
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateJobTemplateResponse * MediaConvertClient::createJobTemplate(const CreateJobTemplateRequest &request)
{
    return qobject_cast<CreateJobTemplateResponse *>(send(request));
}

/**
 * Create a new preset. For information about job templates see the User Guide at
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePresetResponse * MediaConvertClient::createPreset(const CreatePresetRequest &request)
{
    return qobject_cast<CreatePresetResponse *>(send(request));
}

/**
 * Create a new transcoding queue. For information about job templates see the User Guide at
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateQueueResponse * MediaConvertClient::createQueue(const CreateQueueRequest &request)
{
    return qobject_cast<CreateQueueResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteJobTemplateResponse * MediaConvertClient::deleteJobTemplate(const DeleteJobTemplateRequest &request)
{
    return qobject_cast<DeleteJobTemplateResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePresetResponse * MediaConvertClient::deletePreset(const DeletePresetRequest &request)
{
    return qobject_cast<DeletePresetResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteQueueResponse * MediaConvertClient::deleteQueue(const DeleteQueueRequest &request)
{
    return qobject_cast<DeleteQueueResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEndpointsResponse * MediaConvertClient::describeEndpoints(const DescribeEndpointsRequest &request)
{
    return qobject_cast<DescribeEndpointsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobResponse * MediaConvertClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobTemplateResponse * MediaConvertClient::getJobTemplate(const GetJobTemplateRequest &request)
{
    return qobject_cast<GetJobTemplateResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPresetResponse * MediaConvertClient::getPreset(const GetPresetRequest &request)
{
    return qobject_cast<GetPresetResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetQueueResponse * MediaConvertClient::getQueue(const GetQueueRequest &request)
{
    return qobject_cast<GetQueueResponse *>(send(request));
}

/**
 * Retrieve a JSON array of up to twenty of your job templates. This will return the templates themselves, not just a list
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobTemplatesResponse * MediaConvertClient::listJobTemplates(const ListJobTemplatesRequest &request)
{
    return qobject_cast<ListJobTemplatesResponse *>(send(request));
}

/**
 * Retrieve a JSON array of up to twenty of your most recently created jobs. This array includes in-process, completed, and
 * errored jobs. This will return the jobs themselves, not just a list of the jobs. To retrieve the twenty next most recent
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobsResponse * MediaConvertClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/**
 * Retrieve a JSON array of up to twenty of your presets. This will return the presets themselves, not just a list of them.
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPresetsResponse * MediaConvertClient::listPresets(const ListPresetsRequest &request)
{
    return qobject_cast<ListPresetsResponse *>(send(request));
}

/**
 * Retrieve a JSON array of up to twenty of your queues. This will return the queues themselves, not just a list of them.
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListQueuesResponse * MediaConvertClient::listQueues(const ListQueuesRequest &request)
{
    return qobject_cast<ListQueuesResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateJobTemplateResponse * MediaConvertClient::updateJobTemplate(const UpdateJobTemplateRequest &request)
{
    return qobject_cast<UpdateJobTemplateResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePresetResponse * MediaConvertClient::updatePreset(const UpdatePresetRequest &request)
{
    return qobject_cast<UpdatePresetResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaConvert.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateQueueResponse * MediaConvertClient::updateQueue(const UpdateQueueRequest &request)
{
    return qobject_cast<UpdateQueueResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  MediaConvertClientPrivate
 *
 * @brief  Private implementation for MediaConvertClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaConvertClientPrivate object.
 *
 * @param  q  Pointer to this object's public MediaConvertClient instance.
 */
MediaConvertClientPrivate::MediaConvertClientPrivate(MediaConvertClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace MediaConvert
} // namespace AWS
