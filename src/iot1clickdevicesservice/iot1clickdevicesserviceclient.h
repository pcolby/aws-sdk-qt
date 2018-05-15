/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_IOT1CLICKDEVICESSERVICECLIENT_H
#define QTAWS_IOT1CLICKDEVICESSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace IoT1ClickDevicesService {

class IoT1ClickDevicesServiceClientPrivate;
class ClaimDevicesByClaimCodeRequest;
class ClaimDevicesByClaimCodeResponse;
class DescribeDeviceRequest;
class DescribeDeviceResponse;
class FinalizeDeviceClaimRequest;
class FinalizeDeviceClaimResponse;
class GetDeviceMethodsRequest;
class GetDeviceMethodsResponse;
class InitiateDeviceClaimRequest;
class InitiateDeviceClaimResponse;
class InvokeDeviceMethodRequest;
class InvokeDeviceMethodResponse;
class ListDeviceEventsRequest;
class ListDeviceEventsResponse;
class ListDevicesRequest;
class ListDevicesResponse;
class UnclaimDeviceRequest;
class UnclaimDeviceResponse;
class UpdateDeviceStateRequest;
class UpdateDeviceStateResponse;

class QTAWS_EXPORT IoT1ClickDevicesServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoT1ClickDevicesServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IoT1ClickDevicesServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ClaimDevicesByClaimCodeResponse * claimDevicesByClaimCode(const ClaimDevicesByClaimCodeRequest &request);
    DescribeDeviceResponse * describeDevice(const DescribeDeviceRequest &request);
    FinalizeDeviceClaimResponse * finalizeDeviceClaim(const FinalizeDeviceClaimRequest &request);
    GetDeviceMethodsResponse * getDeviceMethods(const GetDeviceMethodsRequest &request);
    InitiateDeviceClaimResponse * initiateDeviceClaim(const InitiateDeviceClaimRequest &request);
    InvokeDeviceMethodResponse * invokeDeviceMethod(const InvokeDeviceMethodRequest &request);
    ListDeviceEventsResponse * listDeviceEvents(const ListDeviceEventsRequest &request);
    ListDevicesResponse * listDevices(const ListDevicesRequest &request);
    UnclaimDeviceResponse * unclaimDevice(const UnclaimDeviceRequest &request);
    UpdateDeviceStateResponse * updateDeviceState(const UpdateDeviceStateRequest &request);

private:
    Q_DECLARE_PRIVATE(IoT1ClickDevicesServiceClient)
    Q_DISABLE_COPY(IoT1ClickDevicesServiceClient)

};

} // namespace IoT1ClickDevicesService
} // namespace QtAws

#endif
