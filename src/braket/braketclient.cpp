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

#include "braketclient.h"
#include "braketclient_p.h"

#include "core/awssignaturev4.h"
#include "canceljobrequest.h"
#include "canceljobresponse.h"
#include "cancelquantumtaskrequest.h"
#include "cancelquantumtaskresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "createquantumtaskrequest.h"
#include "createquantumtaskresponse.h"
#include "getdevicerequest.h"
#include "getdeviceresponse.h"
#include "getjobrequest.h"
#include "getjobresponse.h"
#include "getquantumtaskrequest.h"
#include "getquantumtaskresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "searchdevicesrequest.h"
#include "searchdevicesresponse.h"
#include "searchjobsrequest.h"
#include "searchjobsresponse.h"
#include "searchquantumtasksrequest.h"
#include "searchquantumtasksresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Braket
 * \brief Contains classess for accessing Braket.
 *
 * \inmodule QtAwsBraket
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::BraketClient
 * \brief The BraketClient class provides access to the Braket service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 * 
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
 */

/*!
 * \brief Constructs a BraketClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
BraketClient::BraketClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BraketClientPrivate(this), parent)
{
    Q_D(BraketClient);
    d->apiVersion = QStringLiteral("2019-09-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Braket");
    d->serviceName = QStringLiteral("braket");
}

/*!
 * \overload BraketClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
BraketClient::BraketClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BraketClientPrivate(this), parent)
{
    Q_D(BraketClient);
    d->apiVersion = QStringLiteral("2019-09-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Braket");
    d->serviceName = QStringLiteral("braket");
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * CancelJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an Amazon Braket
 */
CancelJobResponse * BraketClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * CancelQuantumTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified
 */
CancelQuantumTaskResponse * BraketClient::cancelQuantumTask(const CancelQuantumTaskRequest &request)
{
    return qobject_cast<CancelQuantumTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Braket
 */
CreateJobResponse * BraketClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * CreateQuantumTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a quantum
 */
CreateQuantumTaskResponse * BraketClient::createQuantumTask(const CreateQuantumTaskRequest &request)
{
    return qobject_cast<CreateQuantumTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * GetDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the devices available in Amazon
 *
 * Braket> <note>
 *
 * For backwards compatibility with older versions of BraketSchemas, OpenQASM information is omitted from GetDevice API
 * calls. To get this information the user-agent needs to present a recent version of the BraketSchemas (1.8.0 or later).
 * The Braket SDK automatically reports this for you. If you do not see OpenQASM results in the GetDevice response when
 * using a Braket SDK, you may need to set AWS_EXECUTION_ENV environment variable to configure user-agent. See the code
 * examples provided below for how to do this for the AWS CLI, Boto3, and the Go, Java, and JavaScript/TypeScript
 */
GetDeviceResponse * BraketClient::getDevice(const GetDeviceRequest &request)
{
    return qobject_cast<GetDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * GetJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified Amazon Braket
 */
GetJobResponse * BraketClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * GetQuantumTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified quantum
 */
GetQuantumTaskResponse * BraketClient::getQuantumTask(const GetQuantumTaskRequest &request)
{
    return qobject_cast<GetQuantumTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Shows the tags associated with this
 */
ListTagsForResourceResponse * BraketClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * SearchDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for devices using the specified
 */
SearchDevicesResponse * BraketClient::searchDevices(const SearchDevicesRequest &request)
{
    return qobject_cast<SearchDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * SearchJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for Amazon Braket jobs that match the specified filter
 */
SearchJobsResponse * BraketClient::searchJobs(const SearchJobsRequest &request)
{
    return qobject_cast<SearchJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * SearchQuantumTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for tasks that match the specified filter
 */
SearchQuantumTasksResponse * BraketClient::searchQuantumTasks(const SearchQuantumTasksRequest &request)
{
    return qobject_cast<SearchQuantumTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add a tag to the specified
 */
TagResourceResponse * BraketClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BraketClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove tags from a
 */
UntagResourceResponse * BraketClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::Braket::BraketClientPrivate
 * \brief The BraketClientPrivate class provides private implementation for BraketClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a BraketClientPrivate object with public implementation \a q.
 */
BraketClientPrivate::BraketClientPrivate(BraketClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Braket
} // namespace QtAws
