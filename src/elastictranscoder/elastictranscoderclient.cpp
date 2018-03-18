/*
    Copyright 2013-2018 Paul Colby

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

#include "elastictranscoderclient.h"
#include "elastictranscoderclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  ElasticTranscoderClient
 *
 * @brief  Client for Amazon Elastic Transcoder
 *
 * <fullname>AWS Elastic Transcoder Service</fullname>
 *
 * The AWS Elastic Transcoder
 */

/**
 * @brief  Constructs a new ElasticTranscoderClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ElasticTranscoderClient::ElasticTranscoderClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticTranscoderClientPrivate(this), parent)
{
    Q_D(ElasticTranscoderClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ElasticTranscoderClient object.
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
ElasticTranscoderClient::ElasticTranscoderClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticTranscoderClientPrivate(this), parent)
{
    Q_D(ElasticTranscoderClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * The CancelJob operation cancels an unfinished
 *
 * job> <note>
 *
 * You can only cancel a job that has a status of <code>Submitted</code>. To prevent a pipeline from starting to process a
 * job while you're getting the job identifier, use <a>UpdatePipelineStatus</a> to temporarily pause the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelJobResponse * ElasticTranscoderClient::cancelJob(const CancelJobRequest &request)
{

}

/**
 * When you create a job, Elastic Transcoder returns JSON data that includes the values that you specified plus information
 * about the job that is
 *
 * created>
 *
 * If you have specified more than one output for your jobs (for example, one output for the Kindle Fire and another output
 * for the Apple iPhone 4s), you currently must use the Elastic Transcoder API to list the jobs (as opposed to the AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateJobResponse * ElasticTranscoderClient::createJob(const CreateJobRequest &request)
{

}

/**
 * The CreatePipeline operation creates a pipeline with settings that you
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePipelineResponse * ElasticTranscoderClient::createPipeline(const CreatePipelineRequest &request)
{

}

/**
 * The CreatePreset operation creates a preset with settings that you
 *
 * specify> <important>
 *
 * Elastic Transcoder checks the CreatePreset settings to ensure that they meet Elastic Transcoder requirements and to
 * determine whether they comply with H.264 standards. If your settings are not valid for Elastic Transcoder, Elastic
 * Transcoder returns an HTTP 400 response (<code>ValidationException</code>) and does not create the preset. If the
 * settings are valid for Elastic Transcoder but aren't strictly compliant with the H.264 standard, Elastic Transcoder
 * creates the preset and returns a warning message in the response. This helps you determine whether your settings comply
 * with the H.264 standard while giving you greater flexibility with respect to the video that Elastic Transcoder
 *
 * produces> </important>
 *
 * Elastic Transcoder uses the H.264 video-compression format. For more information, see the International
 * Telecommunication Union publication <i>Recommendation ITU-T H.264: Advanced video coding for generic audiovisual
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePresetResponse * ElasticTranscoderClient::createPreset(const CreatePresetRequest &request)
{

}

/**
 * The DeletePipeline operation removes a
 *
 * pipeline>
 *
 * You can only delete a pipeline that has never been used or that is not currently in use (doesn't contain any active
 * jobs). If the pipeline is currently in use, <code>DeletePipeline</code> returns an error.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePipelineResponse * ElasticTranscoderClient::deletePipeline(const DeletePipelineRequest &request)
{

}

/**
 * The DeletePreset operation removes a preset that you've added in an AWS
 *
 * region> <note>
 *
 * You can't delete the default presets that are included with Elastic
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePresetResponse * ElasticTranscoderClient::deletePreset(const DeletePresetRequest &request)
{

}

/**
 * The ListJobsByPipeline operation gets a list of the jobs currently in a
 *
 * pipeline>
 *
 * Elastic Transcoder returns all of the jobs currently in the specified pipeline. The response body contains one element
 * for each job that satisfies the search
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobsByPipelineResponse * ElasticTranscoderClient::listJobsByPipeline(const ListJobsByPipelineRequest &request)
{

}

/**
 * The ListJobsByStatus operation gets a list of jobs that have a specified status. The response body contains one element
 * for each job that satisfies the search
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobsByStatusResponse * ElasticTranscoderClient::listJobsByStatus(const ListJobsByStatusRequest &request)
{

}

/**
 * The ListPipelines operation gets a list of the pipelines associated with the current AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPipelinesResponse * ElasticTranscoderClient::listPipelines(const ListPipelinesRequest &request)
{

}

/**
 * The ListPresets operation gets a list of the default presets included with Elastic Transcoder and the presets that
 * you've added in an AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPresetsResponse * ElasticTranscoderClient::listPresets(const ListPresetsRequest &request)
{

}

/**
 * The ReadJob operation returns detailed information about a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReadJobResponse * ElasticTranscoderClient::readJob(const ReadJobRequest &request)
{

}

/**
 * The ReadPipeline operation gets detailed information about a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReadPipelineResponse * ElasticTranscoderClient::readPipeline(const ReadPipelineRequest &request)
{

}

/**
 * The ReadPreset operation gets detailed information about a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReadPresetResponse * ElasticTranscoderClient::readPreset(const ReadPresetRequest &request)
{

}

/**
 * The TestRole operation tests the IAM role used to create the
 *
 * pipeline>
 *
 * The <code>TestRole</code> action lets you determine whether the IAM role you are using has sufficient permissions to let
 * Elastic Transcoder perform tasks associated with the transcoding process. The action attempts to assume the specified
 * IAM role, checks read access to the input and output buckets, and tries to send a test notification to Amazon SNS topics
 * that you
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestRoleResponse * ElasticTranscoderClient::testRole(const TestRoleRequest &request)
{

}

/**
 * Use the <code>UpdatePipeline</code> operation to update settings for a
 *
 * pipeline> <important>
 *
 * When you change pipeline settings, your changes take effect immediately. Jobs that you have already submitted and that
 * Elastic Transcoder has not started to process are affected in addition to jobs that you submit after you change
 * settings.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePipelineResponse * ElasticTranscoderClient::updatePipeline(const UpdatePipelineRequest &request)
{

}

/**
 * With the UpdatePipelineNotifications operation, you can update Amazon Simple Notification Service (Amazon SNS)
 * notifications for a
 *
 * pipeline>
 *
 * When you update notifications for a pipeline, Elastic Transcoder returns the values that you specified in the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePipelineNotificationsResponse * ElasticTranscoderClient::updatePipelineNotifications(const UpdatePipelineNotificationsRequest &request)
{

}

/**
 * The UpdatePipelineStatus operation pauses or reactivates a pipeline, so that the pipeline stops or restarts the
 * processing of
 *
 * jobs>
 *
 * Changing the pipeline status is useful if you want to cancel one or more jobs. You can't cancel jobs after Elastic
 * Transcoder has started processing them; if you pause the pipeline to which you submitted the jobs, you have more time to
 * get the job IDs for the jobs that you want to cancel, and to send a <a>CancelJob</a> request.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePipelineStatusResponse * ElasticTranscoderClient::updatePipelineStatus(const UpdatePipelineStatusRequest &request)
{

}

/**
 * @internal
 *
 * @class  ElasticTranscoderClientPrivate
 *
 * @brief  Private implementation for ElasticTranscoderClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticTranscoderClientPrivate object.
 *
 * @param  q  Pointer to this object's public ElasticTranscoderClient instance.
 */
ElasticTranscoderClientPrivate::ElasticTranscoderClientPrivate(ElasticTranscoderClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ElasticTranscoder
} // namespace AWS
