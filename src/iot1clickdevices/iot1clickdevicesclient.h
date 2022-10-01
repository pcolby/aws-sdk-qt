// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKDEVICESCLIENT_H
#define QTAWS_IOT1CLICKDEVICESCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiot1clickdevicesglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoT1ClickDevices {

class IoT1ClickDevicesClientPrivate;
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
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UnclaimDeviceRequest;
class UnclaimDeviceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDeviceStateRequest;
class UpdateDeviceStateResponse;

class QTAWSIOT1CLICKDEVICES_EXPORT IoT1ClickDevicesClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoT1ClickDevicesClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoT1ClickDevicesClient(
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
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UnclaimDeviceResponse * unclaimDevice(const UnclaimDeviceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDeviceStateResponse * updateDeviceState(const UpdateDeviceStateRequest &request);

private:
    Q_DECLARE_PRIVATE(IoT1ClickDevicesClient)
    Q_DISABLE_COPY(IoT1ClickDevicesClient)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
