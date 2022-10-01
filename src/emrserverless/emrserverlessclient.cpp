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

#include "emrserverlessclient.h"
#include "emrserverlessclient_p.h"

#include "core/awssignaturev4.h"
#include "canceljobrunrequest.h"
#include "canceljobrunresponse.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "getapplicationrequest.h"
#include "getapplicationresponse.h"
#include "getjobrunrequest.h"
#include "getjobrunresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "listjobrunsrequest.h"
#include "listjobrunsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startapplicationrequest.h"
#include "startapplicationresponse.h"
#include "startjobrunrequest.h"
#include "startjobrunresponse.h"
#include "stopapplicationrequest.h"
#include "stopapplicationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::EmrServerless
 * \brief Contains classess for accessing EMR Serverless.
 *
 * \inmodule QtAwsEmrServerless
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::EmrServerlessClient
 * \brief The EmrServerlessClient class provides access to the EMR Serverless service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEmrServerless
 *
 *  Amazon EMR Serverless is a new deployment option for Amazon EMR. EMR Serverless provides a serverless runtime
 *  environment that simplifies running analytics applications using the latest open source frameworks such as Apache Spark
 *  and Apache Hive. With EMR Serverless, you don’t have to configure, optimize, secure, or operate clusters to run
 *  applications with these
 * 
 *  frameworks>
 * 
 *  The API reference to Amazon EMR Serverless is <code>emr-serverless</code>. The <code>emr-serverless</code> prefix is
 *  used in the following scenarios:
 * 
 *  </p <ul> <li>
 * 
 *  It is the prefix in the CLI commands for Amazon EMR Serverless. For example, <code>aws emr-serverless
 * 
 *  start-job-run</code>> </li> <li>
 * 
 *  It is the prefix before IAM policy actions for Amazon EMR Serverless. For example, <code>"Action":
 *  ["emr-serverless:StartJobRun"]</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-Serverless-UserGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
 *  actions for Amazon EMR
 * 
 *  Serverless</a>> </li> <li>
 * 
 *  It is the prefix used in Amazon EMR Serverless service endpoints. For example,
 */

/*!
 * \brief Constructs a EmrServerlessClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EmrServerlessClient::EmrServerlessClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EmrServerlessClientPrivate(this), parent)
{
    Q_D(EmrServerlessClient);
    d->apiVersion = QStringLiteral("2021-07-13");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("EMR Serverless");
    d->serviceName = QStringLiteral("emr-serverless");
}

/*!
 * \overload EmrServerlessClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EmrServerlessClient::EmrServerlessClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EmrServerlessClientPrivate(this), parent)
{
    Q_D(EmrServerlessClient);
    d->apiVersion = QStringLiteral("2021-07-13");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("EMR Serverless");
    d->serviceName = QStringLiteral("emr-serverless");
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * CancelJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a job
 */
CancelJobRunResponse * EmrServerlessClient::cancelJobRun(const CancelJobRunRequest &request)
{
    return qobject_cast<CancelJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 */
CreateApplicationResponse * EmrServerlessClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an application. An application has to be in a stopped or created state in order to be
 */
DeleteApplicationResponse * EmrServerlessClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * GetApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays detailed information about a specified
 */
GetApplicationResponse * EmrServerlessClient::getApplication(const GetApplicationRequest &request)
{
    return qobject_cast<GetApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * GetJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays detailed information about a job
 */
GetJobRunResponse * EmrServerlessClient::getJobRun(const GetJobRunRequest &request)
{
    return qobject_cast<GetJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists applications based on a set of
 */
ListApplicationsResponse * EmrServerlessClient::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * ListJobRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists job runs based on a set of
 */
ListJobRunsResponse * EmrServerlessClient::listJobRuns(const ListJobRunsRequest &request)
{
    return qobject_cast<ListJobRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags assigned to the
 */
ListTagsForResourceResponse * EmrServerlessClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * StartApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a specified application and initializes initial capacity if
 */
StartApplicationResponse * EmrServerlessClient::startApplication(const StartApplicationRequest &request)
{
    return qobject_cast<StartApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * StartJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a job
 */
StartJobRunResponse * EmrServerlessClient::startJobRun(const StartJobRunRequest &request)
{
    return qobject_cast<StartJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * StopApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a specified application and releases initial capacity if configured. All scheduled and running jobs must be
 * completed or cancelled before stopping an
 */
StopApplicationResponse * EmrServerlessClient::stopApplication(const StopApplicationRequest &request)
{
    return qobject_cast<StopApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns tags to resources. A tag is a label that you assign to an AWS resource. Each tag consists of a key and an
 * optional value, both of which you define. Tags enable you to categorize your AWS resources by attributes such as
 * purpose, owner, or environment. When you have many resources of the same type, you can quickly identify a specific
 * resource based on the tags you've assigned to it.
 */
TagResourceResponse * EmrServerlessClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from
 */
UntagResourceResponse * EmrServerlessClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrServerlessClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a specified application. An application has to be in a stopped or created state in order to be
 */
UpdateApplicationResponse * EmrServerlessClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * \class QtAws::EmrServerless::EmrServerlessClientPrivate
 * \brief The EmrServerlessClientPrivate class provides private implementation for EmrServerlessClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a EmrServerlessClientPrivate object with public implementation \a q.
 */
EmrServerlessClientPrivate::EmrServerlessClientPrivate(EmrServerlessClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace EmrServerless
} // namespace QtAws
