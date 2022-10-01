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

#include "iot1clickdevicesclient.h"
#include "iot1clickdevicesclient_p.h"

#include "core/awssignaturev4.h"
#include "claimdevicesbyclaimcoderequest.h"
#include "claimdevicesbyclaimcoderesponse.h"
#include "describedevicerequest.h"
#include "describedeviceresponse.h"
#include "finalizedeviceclaimrequest.h"
#include "finalizedeviceclaimresponse.h"
#include "getdevicemethodsrequest.h"
#include "getdevicemethodsresponse.h"
#include "initiatedeviceclaimrequest.h"
#include "initiatedeviceclaimresponse.h"
#include "invokedevicemethodrequest.h"
#include "invokedevicemethodresponse.h"
#include "listdeviceeventsrequest.h"
#include "listdeviceeventsresponse.h"
#include "listdevicesrequest.h"
#include "listdevicesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "unclaimdevicerequest.h"
#include "unclaimdeviceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedevicestaterequest.h"
#include "updatedevicestateresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoT1ClickDevices
 * \brief Contains classess for accessing AWS IoT 1-Click Devices Service.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::IoT1ClickDevicesClient
 * \brief The IoT1ClickDevicesClient class provides access to the AWS IoT 1-Click Devices Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 */

/*!
 * \brief Constructs a IoT1ClickDevicesClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoT1ClickDevicesClient::IoT1ClickDevicesClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoT1ClickDevicesClientPrivate(this), parent)
{
    Q_D(IoT1ClickDevicesClient);
    d->apiVersion = QStringLiteral("2018-05-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("devices.iot1click");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT 1-Click Devices Service");
    d->serviceName = QStringLiteral("iot1click");
}

/*!
 * \overload IoT1ClickDevicesClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoT1ClickDevicesClient::IoT1ClickDevicesClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoT1ClickDevicesClientPrivate(this), parent)
{
    Q_D(IoT1ClickDevicesClient);
    d->apiVersion = QStringLiteral("2018-05-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("devices.iot1click");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT 1-Click Devices Service");
    d->serviceName = QStringLiteral("iot1click");
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * ClaimDevicesByClaimCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds device(s) to your account (i.e., claim one or more devices) if and only if you received a claim code with the
 */
ClaimDevicesByClaimCodeResponse * IoT1ClickDevicesClient::claimDevicesByClaimCode(const ClaimDevicesByClaimCodeRequest &request)
{
    return qobject_cast<ClaimDevicesByClaimCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * DescribeDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Given a device ID, returns a DescribeDeviceResponse object describing the details of the
 */
DescribeDeviceResponse * IoT1ClickDevicesClient::describeDevice(const DescribeDeviceRequest &request)
{
    return qobject_cast<DescribeDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * FinalizeDeviceClaimResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Given a device ID, finalizes the claim request for the associated device.</p><note>
 *
 * Claiming a device consists of initiating a claim, then publishing a device event, and finalizing the claim. For a device
 * of type button, a device event can be published by simply clicking the
 */
FinalizeDeviceClaimResponse * IoT1ClickDevicesClient::finalizeDeviceClaim(const FinalizeDeviceClaimRequest &request)
{
    return qobject_cast<FinalizeDeviceClaimResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * GetDeviceMethodsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Given a device ID, returns the invokable methods associated with the
 */
GetDeviceMethodsResponse * IoT1ClickDevicesClient::getDeviceMethods(const GetDeviceMethodsRequest &request)
{
    return qobject_cast<GetDeviceMethodsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * InitiateDeviceClaimResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Given a device ID, initiates a claim request for the associated device.</p><note>
 *
 * Claiming a device consists of initiating a claim, then publishing a device event, and finalizing the claim. For a device
 * of type button, a device event can be published by simply clicking the
 */
InitiateDeviceClaimResponse * IoT1ClickDevicesClient::initiateDeviceClaim(const InitiateDeviceClaimRequest &request)
{
    return qobject_cast<InitiateDeviceClaimResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * InvokeDeviceMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Given a device ID, issues a request to invoke a named device method (with possible parameters). See the "Example POST"
 * code snippet
 */
InvokeDeviceMethodResponse * IoT1ClickDevicesClient::invokeDeviceMethod(const InvokeDeviceMethodRequest &request)
{
    return qobject_cast<InvokeDeviceMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * ListDeviceEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Using a device ID, returns a DeviceEventsResponse object containing an array of events for the
 */
ListDeviceEventsResponse * IoT1ClickDevicesClient::listDeviceEvents(const ListDeviceEventsRequest &request)
{
    return qobject_cast<ListDeviceEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * ListDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the 1-Click compatible devices associated with your AWS
 */
ListDevicesResponse * IoT1ClickDevicesClient::listDevices(const ListDevicesRequest &request)
{
    return qobject_cast<ListDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags associated with the specified resource
 */
ListTagsForResourceResponse * IoT1ClickDevicesClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates the tags associated with the resource ARN. See <a
 * href="https://docs.aws.amazon.com/iot-1-click/latest/developerguide/1click-appendix.html#1click-limits">AWS IoT 1-Click
 * Service Limits</a> for the maximum number of tags allowed per
 */
TagResourceResponse * IoT1ClickDevicesClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * UnclaimDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a device from your AWS account using its device
 */
UnclaimDeviceResponse * IoT1ClickDevicesClient::unclaimDevice(const UnclaimDeviceRequest &request)
{
    return qobject_cast<UnclaimDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Using tag keys, deletes the tags (key/value pairs) associated with the specified resource
 */
UntagResourceResponse * IoT1ClickDevicesClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickDevicesClient service, and returns a pointer to an
 * UpdateDeviceStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Using a Boolean value (true or false), this operation enables or disables the device given a device
 */
UpdateDeviceStateResponse * IoT1ClickDevicesClient::updateDeviceState(const UpdateDeviceStateRequest &request)
{
    return qobject_cast<UpdateDeviceStateResponse *>(send(request));
}

/*!
 * \class QtAws::IoT1ClickDevices::IoT1ClickDevicesClientPrivate
 * \brief The IoT1ClickDevicesClientPrivate class provides private implementation for IoT1ClickDevicesClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a IoT1ClickDevicesClientPrivate object with public implementation \a q.
 */
IoT1ClickDevicesClientPrivate::IoT1ClickDevicesClientPrivate(IoT1ClickDevicesClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoT1ClickDevices
} // namespace QtAws
