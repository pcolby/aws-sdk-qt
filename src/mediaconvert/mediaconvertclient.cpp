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
#include "canceljobrequest.h"
#include "canceljobresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "createjobtemplaterequest.h"
#include "createjobtemplateresponse.h"
#include "createpresetrequest.h"
#include "createpresetresponse.h"
#include "createqueuerequest.h"
#include "createqueueresponse.h"
#include "deletejobtemplaterequest.h"
#include "deletejobtemplateresponse.h"
#include "deletepresetrequest.h"
#include "deletepresetresponse.h"
#include "deletequeuerequest.h"
#include "deletequeueresponse.h"
#include "describeendpointsrequest.h"
#include "describeendpointsresponse.h"
#include "getjobrequest.h"
#include "getjobresponse.h"
#include "getjobtemplaterequest.h"
#include "getjobtemplateresponse.h"
#include "getpresetrequest.h"
#include "getpresetresponse.h"
#include "getqueuerequest.h"
#include "getqueueresponse.h"
#include "listjobtemplatesrequest.h"
#include "listjobtemplatesresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listpresetsrequest.h"
#include "listpresetsresponse.h"
#include "listqueuesrequest.h"
#include "listqueuesresponse.h"
#include "updatejobtemplaterequest.h"
#include "updatejobtemplateresponse.h"
#include "updatepresetrequest.h"
#include "updatepresetresponse.h"
#include "updatequeuerequest.h"
#include "updatequeueresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaConvert
 * \brief The QtAws::MediaConvert contains stuff...
 *
 * \inmodule QtAwsMediaConvert
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::MediaConvertClient
 * \brief The MediaConvertClient class provides access to the AWS Elemental MediaConvert service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaConvert
 *
 */

/*!
 * \brief Constructs a MediaConvertClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MediaConvertClient::MediaConvertClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaConvertClientPrivate(this), parent)
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

/*!
 * \overload MediaConvertClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MediaConvertClient::MediaConvertClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaConvertClientPrivate(this), parent)
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

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * CancelJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently remove a job from a queue. Once you have canceled a job, you can't start it again. You can't delete a
 */
CancelJobResponse * MediaConvertClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new transcoding job. For information about jobs and job settings, see the User Guide at
 */
CreateJobResponse * MediaConvertClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * CreateJobTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new job template. For information about job templates see the User Guide at
 */
CreateJobTemplateResponse * MediaConvertClient::createJobTemplate(const CreateJobTemplateRequest &request)
{
    return qobject_cast<CreateJobTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * CreatePresetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new preset. For information about job templates see the User Guide at
 */
CreatePresetResponse * MediaConvertClient::createPreset(const CreatePresetRequest &request)
{
    return qobject_cast<CreatePresetResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * CreateQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new transcoding queue. For information about job templates see the User Guide at
 */
CreateQueueResponse * MediaConvertClient::createQueue(const CreateQueueRequest &request)
{
    return qobject_cast<CreateQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * DeleteJobTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteJobTemplateResponse * MediaConvertClient::deleteJobTemplate(const DeleteJobTemplateRequest &request)
{
    return qobject_cast<DeleteJobTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * DeletePresetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeletePresetResponse * MediaConvertClient::deletePreset(const DeletePresetRequest &request)
{
    return qobject_cast<DeletePresetResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * DeleteQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteQueueResponse * MediaConvertClient::deleteQueue(const DeleteQueueRequest &request)
{
    return qobject_cast<DeleteQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * DescribeEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeEndpointsResponse * MediaConvertClient::describeEndpoints(const DescribeEndpointsRequest &request)
{
    return qobject_cast<DescribeEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * GetJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetJobResponse * MediaConvertClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * GetJobTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetJobTemplateResponse * MediaConvertClient::getJobTemplate(const GetJobTemplateRequest &request)
{
    return qobject_cast<GetJobTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * GetPresetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetPresetResponse * MediaConvertClient::getPreset(const GetPresetRequest &request)
{
    return qobject_cast<GetPresetResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * GetQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetQueueResponse * MediaConvertClient::getQueue(const GetQueueRequest &request)
{
    return qobject_cast<GetQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * ListJobTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a JSON array of up to twenty of your job templates. This will return the templates themselves, not just a list
 */
ListJobTemplatesResponse * MediaConvertClient::listJobTemplates(const ListJobTemplatesRequest &request)
{
    return qobject_cast<ListJobTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a JSON array of up to twenty of your most recently created jobs. This array includes in-process, completed, and
 * errored jobs. This will return the jobs themselves, not just a list of the jobs. To retrieve the twenty next most recent
 */
ListJobsResponse * MediaConvertClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * ListPresetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a JSON array of up to twenty of your presets. This will return the presets themselves, not just a list of them.
 */
ListPresetsResponse * MediaConvertClient::listPresets(const ListPresetsRequest &request)
{
    return qobject_cast<ListPresetsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * ListQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a JSON array of up to twenty of your queues. This will return the queues themselves, not just a list of them.
 */
ListQueuesResponse * MediaConvertClient::listQueues(const ListQueuesRequest &request)
{
    return qobject_cast<ListQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * UpdateJobTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateJobTemplateResponse * MediaConvertClient::updateJobTemplate(const UpdateJobTemplateRequest &request)
{
    return qobject_cast<UpdateJobTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * UpdatePresetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdatePresetResponse * MediaConvertClient::updatePreset(const UpdatePresetRequest &request)
{
    return qobject_cast<UpdatePresetResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaConvertClient service, and returns a pointer to an
 * UpdateQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateQueueResponse * MediaConvertClient::updateQueue(const UpdateQueueRequest &request)
{
    return qobject_cast<UpdateQueueResponse *>(send(request));
}

/*!
 * \class QtAws::MediaConvert::MediaConvertClientPrivate
 * \brief The MediaConvertClientPrivate class provides private implementation for MediaConvertClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a MediaConvertClientPrivate object with public implementation \a q.
 */
MediaConvertClientPrivate::MediaConvertClientPrivate(MediaConvertClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaConvert
} // namespace QtAws
