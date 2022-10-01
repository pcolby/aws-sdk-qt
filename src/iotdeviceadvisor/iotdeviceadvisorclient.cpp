// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotdeviceadvisorclient.h"
#include "iotdeviceadvisorclient_p.h"

#include "core/awssignaturev4.h"
#include "createsuitedefinitionrequest.h"
#include "createsuitedefinitionresponse.h"
#include "deletesuitedefinitionrequest.h"
#include "deletesuitedefinitionresponse.h"
#include "getendpointrequest.h"
#include "getendpointresponse.h"
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
 * \namespace QtAws::IotDeviceAdvisor
 * \brief Contains classess for accessing AWS IoT Core Device Advisor.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::IotDeviceAdvisorClient
 * \brief The IotDeviceAdvisorClient class provides access to the AWS IoT Core Device Advisor service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIotDeviceAdvisor
 *
 *  Amazon Web Services IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices
 *  during device software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for
 *  reliable and secure connectivity with Amazon Web Services IoT Core before deploying devices to production. By using
 *  Device Advisor, you can confirm that your devices can connect to Amazon Web Services IoT Core, follow security best
 *  practices and, if applicable, receive software updates from IoT Device Management. You can also download signed
 *  qualification reports to submit to the Amazon Web Services Partner Network to get your device qualified for the Amazon
 *  Web Services Partner Device Catalog without the need to send your device in and wait for it to be
 */

/*!
 * \brief Constructs a IotDeviceAdvisorClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IotDeviceAdvisorClient::IotDeviceAdvisorClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IotDeviceAdvisorClientPrivate(this), parent)
{
    Q_D(IotDeviceAdvisorClient);
    d->apiVersion = QStringLiteral("2020-09-18");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("api.iotdeviceadvisor");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT Core Device Advisor");
    d->serviceName = QStringLiteral("iotdeviceadvisor");
}

/*!
 * \overload IotDeviceAdvisorClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IotDeviceAdvisorClient::IotDeviceAdvisorClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IotDeviceAdvisorClientPrivate(this), parent)
{
    Q_D(IotDeviceAdvisorClient);
    d->apiVersion = QStringLiteral("2020-09-18");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("api.iotdeviceadvisor");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT Core Device Advisor");
    d->serviceName = QStringLiteral("iotdeviceadvisor");
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * CreateSuiteDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Device Advisor test
 *
 * suite>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateSuiteDefinition</a>
 */
CreateSuiteDefinitionResponse * IotDeviceAdvisorClient::createSuiteDefinition(const CreateSuiteDefinitionRequest &request)
{
    return qobject_cast<CreateSuiteDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * DeleteSuiteDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Device Advisor test
 *
 * suite>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteSuiteDefinition</a>
 */
DeleteSuiteDefinitionResponse * IotDeviceAdvisorClient::deleteSuiteDefinition(const DeleteSuiteDefinitionRequest &request)
{
    return qobject_cast<DeleteSuiteDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * GetEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an Device Advisor
 */
GetEndpointResponse * IotDeviceAdvisorClient::getEndpoint(const GetEndpointRequest &request)
{
    return qobject_cast<GetEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * GetSuiteDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Advisor test
 *
 * suite>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetSuiteDefinition</a>
 */
GetSuiteDefinitionResponse * IotDeviceAdvisorClient::getSuiteDefinition(const GetSuiteDefinitionRequest &request)
{
    return qobject_cast<GetSuiteDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * GetSuiteRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Advisor test suite
 *
 * run>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetSuiteRun</a>
 */
GetSuiteRunResponse * IotDeviceAdvisorClient::getSuiteRun(const GetSuiteRunRequest &request)
{
    return qobject_cast<GetSuiteRunResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * GetSuiteRunReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a report download link for a successful Device Advisor qualifying test suite
 *
 * run>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetSuiteRunReport</a>
 */
GetSuiteRunReportResponse * IotDeviceAdvisorClient::getSuiteRunReport(const GetSuiteRunReportRequest &request)
{
    return qobject_cast<GetSuiteRunReportResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * ListSuiteDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Advisor test suites you have
 *
 * created>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListSuiteDefinitions</a>
 */
ListSuiteDefinitionsResponse * IotDeviceAdvisorClient::listSuiteDefinitions(const ListSuiteDefinitionsRequest &request)
{
    return qobject_cast<ListSuiteDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * ListSuiteRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists runs of the specified Device Advisor test suite. You can list all runs of the test suite, or the runs of a
 * specific version of the test
 *
 * suite>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListSuiteRuns</a>
 */
ListSuiteRunsResponse * IotDeviceAdvisorClient::listSuiteRuns(const ListSuiteRunsRequest &request)
{
    return qobject_cast<ListSuiteRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags attached to an IoT Device Advisor
 *
 * resource>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTagsForResource</a>
 */
ListTagsForResourceResponse * IotDeviceAdvisorClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * StartSuiteRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a Device Advisor test suite
 *
 * run>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartSuiteRun</a>
 */
StartSuiteRunResponse * IotDeviceAdvisorClient::startSuiteRun(const StartSuiteRunRequest &request)
{
    return qobject_cast<StartSuiteRunResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * StopSuiteRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a Device Advisor test suite run that is currently
 *
 * running>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StopSuiteRun</a>
 */
StopSuiteRunResponse * IotDeviceAdvisorClient::stopSuiteRun(const StopSuiteRunRequest &request)
{
    return qobject_cast<StopSuiteRunResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds to and modifies existing tags of an IoT Device Advisor
 *
 * resource>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TagResource</a>
 */
TagResourceResponse * IotDeviceAdvisorClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from an IoT Device Advisor
 *
 * resource>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UntagResource</a>
 */
UntagResourceResponse * IotDeviceAdvisorClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IotDeviceAdvisorClient service, and returns a pointer to an
 * UpdateSuiteDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a Device Advisor test
 *
 * suite>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateSuiteDefinition</a>
 */
UpdateSuiteDefinitionResponse * IotDeviceAdvisorClient::updateSuiteDefinition(const UpdateSuiteDefinitionRequest &request)
{
    return qobject_cast<UpdateSuiteDefinitionResponse *>(send(request));
}

/*!
 * \class QtAws::IotDeviceAdvisor::IotDeviceAdvisorClientPrivate
 * \brief The IotDeviceAdvisorClientPrivate class provides private implementation for IotDeviceAdvisorClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a IotDeviceAdvisorClientPrivate object with public implementation \a q.
 */
IotDeviceAdvisorClientPrivate::IotDeviceAdvisorClientPrivate(IotDeviceAdvisorClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IotDeviceAdvisor
} // namespace QtAws
