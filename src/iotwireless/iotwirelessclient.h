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

#ifndef QTAWS_IOTWIRELESSCLIENT_H
#define QTAWS_IOTWIRELESSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiotwirelessglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTWireless {

class IoTWirelessClientPrivate;
class AssociateAwsAccountWithPartnerAccountRequest;
class AssociateAwsAccountWithPartnerAccountResponse;
class AssociateWirelessDeviceWithThingRequest;
class AssociateWirelessDeviceWithThingResponse;
class AssociateWirelessGatewayWithCertificateRequest;
class AssociateWirelessGatewayWithCertificateResponse;
class AssociateWirelessGatewayWithThingRequest;
class AssociateWirelessGatewayWithThingResponse;
class CreateDestinationRequest;
class CreateDestinationResponse;
class CreateDeviceProfileRequest;
class CreateDeviceProfileResponse;
class CreateServiceProfileRequest;
class CreateServiceProfileResponse;
class CreateWirelessDeviceRequest;
class CreateWirelessDeviceResponse;
class CreateWirelessGatewayRequest;
class CreateWirelessGatewayResponse;
class CreateWirelessGatewayTaskRequest;
class CreateWirelessGatewayTaskResponse;
class CreateWirelessGatewayTaskDefinitionRequest;
class CreateWirelessGatewayTaskDefinitionResponse;
class DeleteDestinationRequest;
class DeleteDestinationResponse;
class DeleteDeviceProfileRequest;
class DeleteDeviceProfileResponse;
class DeleteServiceProfileRequest;
class DeleteServiceProfileResponse;
class DeleteWirelessDeviceRequest;
class DeleteWirelessDeviceResponse;
class DeleteWirelessGatewayRequest;
class DeleteWirelessGatewayResponse;
class DeleteWirelessGatewayTaskRequest;
class DeleteWirelessGatewayTaskResponse;
class DeleteWirelessGatewayTaskDefinitionRequest;
class DeleteWirelessGatewayTaskDefinitionResponse;
class DisassociateAwsAccountFromPartnerAccountRequest;
class DisassociateAwsAccountFromPartnerAccountResponse;
class DisassociateWirelessDeviceFromThingRequest;
class DisassociateWirelessDeviceFromThingResponse;
class DisassociateWirelessGatewayFromCertificateRequest;
class DisassociateWirelessGatewayFromCertificateResponse;
class DisassociateWirelessGatewayFromThingRequest;
class DisassociateWirelessGatewayFromThingResponse;
class GetDestinationRequest;
class GetDestinationResponse;
class GetDeviceProfileRequest;
class GetDeviceProfileResponse;
class GetLogLevelsByResourceTypesRequest;
class GetLogLevelsByResourceTypesResponse;
class GetPartnerAccountRequest;
class GetPartnerAccountResponse;
class GetResourceLogLevelRequest;
class GetResourceLogLevelResponse;
class GetServiceEndpointRequest;
class GetServiceEndpointResponse;
class GetServiceProfileRequest;
class GetServiceProfileResponse;
class GetWirelessDeviceRequest;
class GetWirelessDeviceResponse;
class GetWirelessDeviceStatisticsRequest;
class GetWirelessDeviceStatisticsResponse;
class GetWirelessGatewayRequest;
class GetWirelessGatewayResponse;
class GetWirelessGatewayCertificateRequest;
class GetWirelessGatewayCertificateResponse;
class GetWirelessGatewayFirmwareInformationRequest;
class GetWirelessGatewayFirmwareInformationResponse;
class GetWirelessGatewayStatisticsRequest;
class GetWirelessGatewayStatisticsResponse;
class GetWirelessGatewayTaskRequest;
class GetWirelessGatewayTaskResponse;
class GetWirelessGatewayTaskDefinitionRequest;
class GetWirelessGatewayTaskDefinitionResponse;
class ListDestinationsRequest;
class ListDestinationsResponse;
class ListDeviceProfilesRequest;
class ListDeviceProfilesResponse;
class ListPartnerAccountsRequest;
class ListPartnerAccountsResponse;
class ListServiceProfilesRequest;
class ListServiceProfilesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWirelessDevicesRequest;
class ListWirelessDevicesResponse;
class ListWirelessGatewayTaskDefinitionsRequest;
class ListWirelessGatewayTaskDefinitionsResponse;
class ListWirelessGatewaysRequest;
class ListWirelessGatewaysResponse;
class PutResourceLogLevelRequest;
class PutResourceLogLevelResponse;
class ResetAllResourceLogLevelsRequest;
class ResetAllResourceLogLevelsResponse;
class ResetResourceLogLevelRequest;
class ResetResourceLogLevelResponse;
class SendDataToWirelessDeviceRequest;
class SendDataToWirelessDeviceResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestWirelessDeviceRequest;
class TestWirelessDeviceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDestinationRequest;
class UpdateDestinationResponse;
class UpdateLogLevelsByResourceTypesRequest;
class UpdateLogLevelsByResourceTypesResponse;
class UpdatePartnerAccountRequest;
class UpdatePartnerAccountResponse;
class UpdateWirelessDeviceRequest;
class UpdateWirelessDeviceResponse;
class UpdateWirelessGatewayRequest;
class UpdateWirelessGatewayResponse;

class QTAWSIOTWIRELESS_EXPORT IoTWirelessClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTWirelessClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTWirelessClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateAwsAccountWithPartnerAccountResponse * associateAwsAccountWithPartnerAccount(const AssociateAwsAccountWithPartnerAccountRequest &request);
    AssociateWirelessDeviceWithThingResponse * associateWirelessDeviceWithThing(const AssociateWirelessDeviceWithThingRequest &request);
    AssociateWirelessGatewayWithCertificateResponse * associateWirelessGatewayWithCertificate(const AssociateWirelessGatewayWithCertificateRequest &request);
    AssociateWirelessGatewayWithThingResponse * associateWirelessGatewayWithThing(const AssociateWirelessGatewayWithThingRequest &request);
    CreateDestinationResponse * createDestination(const CreateDestinationRequest &request);
    CreateDeviceProfileResponse * createDeviceProfile(const CreateDeviceProfileRequest &request);
    CreateServiceProfileResponse * createServiceProfile(const CreateServiceProfileRequest &request);
    CreateWirelessDeviceResponse * createWirelessDevice(const CreateWirelessDeviceRequest &request);
    CreateWirelessGatewayResponse * createWirelessGateway(const CreateWirelessGatewayRequest &request);
    CreateWirelessGatewayTaskResponse * createWirelessGatewayTask(const CreateWirelessGatewayTaskRequest &request);
    CreateWirelessGatewayTaskDefinitionResponse * createWirelessGatewayTaskDefinition(const CreateWirelessGatewayTaskDefinitionRequest &request);
    DeleteDestinationResponse * deleteDestination(const DeleteDestinationRequest &request);
    DeleteDeviceProfileResponse * deleteDeviceProfile(const DeleteDeviceProfileRequest &request);
    DeleteServiceProfileResponse * deleteServiceProfile(const DeleteServiceProfileRequest &request);
    DeleteWirelessDeviceResponse * deleteWirelessDevice(const DeleteWirelessDeviceRequest &request);
    DeleteWirelessGatewayResponse * deleteWirelessGateway(const DeleteWirelessGatewayRequest &request);
    DeleteWirelessGatewayTaskResponse * deleteWirelessGatewayTask(const DeleteWirelessGatewayTaskRequest &request);
    DeleteWirelessGatewayTaskDefinitionResponse * deleteWirelessGatewayTaskDefinition(const DeleteWirelessGatewayTaskDefinitionRequest &request);
    DisassociateAwsAccountFromPartnerAccountResponse * disassociateAwsAccountFromPartnerAccount(const DisassociateAwsAccountFromPartnerAccountRequest &request);
    DisassociateWirelessDeviceFromThingResponse * disassociateWirelessDeviceFromThing(const DisassociateWirelessDeviceFromThingRequest &request);
    DisassociateWirelessGatewayFromCertificateResponse * disassociateWirelessGatewayFromCertificate(const DisassociateWirelessGatewayFromCertificateRequest &request);
    DisassociateWirelessGatewayFromThingResponse * disassociateWirelessGatewayFromThing(const DisassociateWirelessGatewayFromThingRequest &request);
    GetDestinationResponse * getDestination(const GetDestinationRequest &request);
    GetDeviceProfileResponse * getDeviceProfile(const GetDeviceProfileRequest &request);
    GetLogLevelsByResourceTypesResponse * getLogLevelsByResourceTypes(const GetLogLevelsByResourceTypesRequest &request);
    GetPartnerAccountResponse * getPartnerAccount(const GetPartnerAccountRequest &request);
    GetResourceLogLevelResponse * getResourceLogLevel(const GetResourceLogLevelRequest &request);
    GetServiceEndpointResponse * getServiceEndpoint(const GetServiceEndpointRequest &request);
    GetServiceProfileResponse * getServiceProfile(const GetServiceProfileRequest &request);
    GetWirelessDeviceResponse * getWirelessDevice(const GetWirelessDeviceRequest &request);
    GetWirelessDeviceStatisticsResponse * getWirelessDeviceStatistics(const GetWirelessDeviceStatisticsRequest &request);
    GetWirelessGatewayResponse * getWirelessGateway(const GetWirelessGatewayRequest &request);
    GetWirelessGatewayCertificateResponse * getWirelessGatewayCertificate(const GetWirelessGatewayCertificateRequest &request);
    GetWirelessGatewayFirmwareInformationResponse * getWirelessGatewayFirmwareInformation(const GetWirelessGatewayFirmwareInformationRequest &request);
    GetWirelessGatewayStatisticsResponse * getWirelessGatewayStatistics(const GetWirelessGatewayStatisticsRequest &request);
    GetWirelessGatewayTaskResponse * getWirelessGatewayTask(const GetWirelessGatewayTaskRequest &request);
    GetWirelessGatewayTaskDefinitionResponse * getWirelessGatewayTaskDefinition(const GetWirelessGatewayTaskDefinitionRequest &request);
    ListDestinationsResponse * listDestinations(const ListDestinationsRequest &request);
    ListDeviceProfilesResponse * listDeviceProfiles(const ListDeviceProfilesRequest &request);
    ListPartnerAccountsResponse * listPartnerAccounts(const ListPartnerAccountsRequest &request);
    ListServiceProfilesResponse * listServiceProfiles(const ListServiceProfilesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWirelessDevicesResponse * listWirelessDevices(const ListWirelessDevicesRequest &request);
    ListWirelessGatewayTaskDefinitionsResponse * listWirelessGatewayTaskDefinitions(const ListWirelessGatewayTaskDefinitionsRequest &request);
    ListWirelessGatewaysResponse * listWirelessGateways(const ListWirelessGatewaysRequest &request);
    PutResourceLogLevelResponse * putResourceLogLevel(const PutResourceLogLevelRequest &request);
    ResetAllResourceLogLevelsResponse * resetAllResourceLogLevels(const ResetAllResourceLogLevelsRequest &request);
    ResetResourceLogLevelResponse * resetResourceLogLevel(const ResetResourceLogLevelRequest &request);
    SendDataToWirelessDeviceResponse * sendDataToWirelessDevice(const SendDataToWirelessDeviceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestWirelessDeviceResponse * testWirelessDevice(const TestWirelessDeviceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDestinationResponse * updateDestination(const UpdateDestinationRequest &request);
    UpdateLogLevelsByResourceTypesResponse * updateLogLevelsByResourceTypes(const UpdateLogLevelsByResourceTypesRequest &request);
    UpdatePartnerAccountResponse * updatePartnerAccount(const UpdatePartnerAccountRequest &request);
    UpdateWirelessDeviceResponse * updateWirelessDevice(const UpdateWirelessDeviceRequest &request);
    UpdateWirelessGatewayResponse * updateWirelessGateway(const UpdateWirelessGatewayRequest &request);

protected:
    /// @cond internal
    IoTWirelessClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit IoTWirelessClient(IoTWirelessClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(IoTWirelessClient)
    Q_DISABLE_COPY(IoTWirelessClient)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
