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

#include "iotdeviceadvisorclient.h"
#include "iotdeviceadvisorclient_p.h"

#include "core/awssignaturev4.h"
#include "createsuitedefinitionrequest.h"
#include "createsuitedefinitionresponse.h"
#include "deletesuitedefinitionrequest.h"
#include "deletesuitedefinitionresponse.h"
#include "getsuitedefinitionrequest.h"
#include "getsuitedefinitionresponse.h"
#include "getsuiterunrequest.h"
#include "getsuiterunresponse.h"
#include "getsuiterunreportrequest.h"
#include "getsuiterunreportresponse.h"
#include "listsuitedefinitionsrequest.h"
#include "listsuitedefinitionsresponse.h"
#include "listsuiterunsrequest.h"
#include "listsuiterunsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startsuiterunrequest.h"
#include "startsuiterunresponse.h"
#include "stopsuiterunrequest.h"
#include "stopsuiterunresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatesuitedefinitionrequest.h"
#include "updatesuitedefinitionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTDeviceAdvisor
 * \brief Contains classess for accessing AWS IoT Core Device Advisor (IoTDeviceAdvisor).
 *
 * \inmodule QtAwsIoTDeviceAdvisor
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTDeviceAdvisor {

/*!
 * \class QtAws::IoTDeviceAdvisor::IoTDeviceAdvisorClient
 * \brief The IoTDeviceAdvisorClient class provides access to the AWS IoT Core Device Advisor (IoTDeviceAdvisor) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTDeviceAdvisor
 *
 *  AWS IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices during device
 *  software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for reliable and
 *  secure connectivity with AWS IoT Core before deploying devices to production. By using Device Advisor, you can confirm
 *  that your devices can connect to AWS IoT Core, follow security best practices and, if applicable, receive software
 *  updates from IoT Device Management. You can also download signed qualification reports to submit to the AWS Partner
 *  Network to get your device qualified for the AWS Partner Device Catalog without the need to send your device in and wait
 *  for it to be
 */

/*!
 * \brief Constructs a IoTDeviceAdvisorClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTDeviceAdvisorClientPrivate(this), parent)
{
    Q_D(IoTDeviceAdvisorClient);
    d->apiVersion = QStringLiteral("2020-09-18");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("api.iotdeviceadvisor");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT Core Device Advisor");
    d->serviceName = QStringLiteral("iotdeviceadvisor");
}

/*!
 * \overload IoTDeviceAdvisorClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTDeviceAdvisorClient::IoTDeviceAdvisorClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTDeviceAdvisorClientPrivate(this), parent)
{
    Q_D(IoTDeviceAdvisorClient);
    d->apiVersion = QStringLiteral("2020-09-18");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("api.iotdeviceadvisor");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT Core Device Advisor");
    d->serviceName = QStringLiteral("iotdeviceadvisor");
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * CreateSuiteDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Device Advisor test
 */
CreateSuiteDefinitionResponse * IoTDeviceAdvisorClient::createSuiteDefinition(const CreateSuiteDefinitionRequest &request)
{
    return qobject_cast<CreateSuiteDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * DeleteSuiteDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Device Advisor test
 */
DeleteSuiteDefinitionResponse * IoTDeviceAdvisorClient::deleteSuiteDefinition(const DeleteSuiteDefinitionRequest &request)
{
    return qobject_cast<DeleteSuiteDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * GetSuiteDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Advisor test
 */
GetSuiteDefinitionResponse * IoTDeviceAdvisorClient::getSuiteDefinition(const GetSuiteDefinitionRequest &request)
{
    return qobject_cast<GetSuiteDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * GetSuiteRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Advisor test suite
 */
GetSuiteRunResponse * IoTDeviceAdvisorClient::getSuiteRun(const GetSuiteRunRequest &request)
{
    return qobject_cast<GetSuiteRunResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * GetSuiteRunReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a report download link for a successful Device Advisor qualifying test suite
 */
GetSuiteRunReportResponse * IoTDeviceAdvisorClient::getSuiteRunReport(const GetSuiteRunReportRequest &request)
{
    return qobject_cast<GetSuiteRunReportResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * ListSuiteDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Advisor test suites you have
 */
ListSuiteDefinitionsResponse * IoTDeviceAdvisorClient::listSuiteDefinitions(const ListSuiteDefinitionsRequest &request)
{
    return qobject_cast<ListSuiteDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * ListSuiteRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the runs of the specified Device Advisor test suite. You can list all runs of the test suite, or the runs of a
 * specific version of the test
 */
ListSuiteRunsResponse * IoTDeviceAdvisorClient::listSuiteRuns(const ListSuiteRunsRequest &request)
{
    return qobject_cast<ListSuiteRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags attached to an IoT Device Advisor
 */
ListTagsForResourceResponse * IoTDeviceAdvisorClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * StartSuiteRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a Device Advisor test suite
 */
StartSuiteRunResponse * IoTDeviceAdvisorClient::startSuiteRun(const StartSuiteRunRequest &request)
{
    return qobject_cast<StartSuiteRunResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * StopSuiteRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a Device Advisor test suite run that is currently
 */
StopSuiteRunResponse * IoTDeviceAdvisorClient::stopSuiteRun(const StopSuiteRunRequest &request)
{
    return qobject_cast<StopSuiteRunResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds to and modifies existing tags of an IoT Device Advisor
 */
TagResourceResponse * IoTDeviceAdvisorClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from an IoT Device Advisor
 */
UntagResourceResponse * IoTDeviceAdvisorClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDeviceAdvisorClient service, and returns a pointer to an
 * UpdateSuiteDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a Device Advisor test
 */
UpdateSuiteDefinitionResponse * IoTDeviceAdvisorClient::updateSuiteDefinition(const UpdateSuiteDefinitionRequest &request)
{
    return qobject_cast<UpdateSuiteDefinitionResponse *>(send(request));
}

/*!
 * \class QtAws::IoTDeviceAdvisor::IoTDeviceAdvisorClientPrivate
 * \brief The IoTDeviceAdvisorClientPrivate class provides private implementation for IoTDeviceAdvisorClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTDeviceAdvisor
 */

/*!
 * Constructs a IoTDeviceAdvisorClientPrivate object with public implementation \a q.
 */
IoTDeviceAdvisorClientPrivate::IoTDeviceAdvisorClientPrivate(IoTDeviceAdvisorClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoTDeviceAdvisor
} // namespace QtAws
