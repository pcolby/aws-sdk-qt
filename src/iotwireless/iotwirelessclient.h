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
class AssociateMulticastGroupWithFuotaTaskRequest;
class AssociateMulticastGroupWithFuotaTaskResponse;
class AssociateWirelessDeviceWithFuotaTaskRequest;
class AssociateWirelessDeviceWithFuotaTaskResponse;
class AssociateWirelessDeviceWithMulticastGroupRequest;
class AssociateWirelessDeviceWithMulticastGroupResponse;
class AssociateWirelessDeviceWithThingRequest;
class AssociateWirelessDeviceWithThingResponse;
class AssociateWirelessGatewayWithCertificateRequest;
class AssociateWirelessGatewayWithCertificateResponse;
class AssociateWirelessGatewayWithThingRequest;
class AssociateWirelessGatewayWithThingResponse;
class CancelMulticastGroupSessionRequest;
class CancelMulticastGroupSessionResponse;
class CreateDestinationRequest;
class CreateDestinationResponse;
class CreateDeviceProfileRequest;
class CreateDeviceProfileResponse;
class CreateFuotaTaskRequest;
class CreateFuotaTaskResponse;
class CreateMulticastGroupRequest;
class CreateMulticastGroupResponse;
class CreateNetworkAnalyzerConfigurationRequest;
class CreateNetworkAnalyzerConfigurationResponse;
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
class DeleteFuotaTaskRequest;
class DeleteFuotaTaskResponse;
class DeleteMulticastGroupRequest;
class DeleteMulticastGroupResponse;
class DeleteNetworkAnalyzerConfigurationRequest;
class DeleteNetworkAnalyzerConfigurationResponse;
class DeleteQueuedMessagesRequest;
class DeleteQueuedMessagesResponse;
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
class DisassociateMulticastGroupFromFuotaTaskRequest;
class DisassociateMulticastGroupFromFuotaTaskResponse;
class DisassociateWirelessDeviceFromFuotaTaskRequest;
class DisassociateWirelessDeviceFromFuotaTaskResponse;
class DisassociateWirelessDeviceFromMulticastGroupRequest;
class DisassociateWirelessDeviceFromMulticastGroupResponse;
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
class GetEventConfigurationByResourceTypesRequest;
class GetEventConfigurationByResourceTypesResponse;
class GetFuotaTaskRequest;
class GetFuotaTaskResponse;
class GetLogLevelsByResourceTypesRequest;
class GetLogLevelsByResourceTypesResponse;
class GetMulticastGroupRequest;
class GetMulticastGroupResponse;
class GetMulticastGroupSessionRequest;
class GetMulticastGroupSessionResponse;
class GetNetworkAnalyzerConfigurationRequest;
class GetNetworkAnalyzerConfigurationResponse;
class GetPartnerAccountRequest;
class GetPartnerAccountResponse;
class GetPositionRequest;
class GetPositionResponse;
class GetPositionConfigurationRequest;
class GetPositionConfigurationResponse;
class GetResourceEventConfigurationRequest;
class GetResourceEventConfigurationResponse;
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
class ListEventConfigurationsRequest;
class ListEventConfigurationsResponse;
class ListFuotaTasksRequest;
class ListFuotaTasksResponse;
class ListMulticastGroupsRequest;
class ListMulticastGroupsResponse;
class ListMulticastGroupsByFuotaTaskRequest;
class ListMulticastGroupsByFuotaTaskResponse;
class ListNetworkAnalyzerConfigurationsRequest;
class ListNetworkAnalyzerConfigurationsResponse;
class ListPartnerAccountsRequest;
class ListPartnerAccountsResponse;
class ListPositionConfigurationsRequest;
class ListPositionConfigurationsResponse;
class ListQueuedMessagesRequest;
class ListQueuedMessagesResponse;
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
class PutPositionConfigurationRequest;
class PutPositionConfigurationResponse;
class PutResourceLogLevelRequest;
class PutResourceLogLevelResponse;
class ResetAllResourceLogLevelsRequest;
class ResetAllResourceLogLevelsResponse;
class ResetResourceLogLevelRequest;
class ResetResourceLogLevelResponse;
class SendDataToMulticastGroupRequest;
class SendDataToMulticastGroupResponse;
class SendDataToWirelessDeviceRequest;
class SendDataToWirelessDeviceResponse;
class StartBulkAssociateWirelessDeviceWithMulticastGroupRequest;
class StartBulkAssociateWirelessDeviceWithMulticastGroupResponse;
class StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest;
class StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse;
class StartFuotaTaskRequest;
class StartFuotaTaskResponse;
class StartMulticastGroupSessionRequest;
class StartMulticastGroupSessionResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestWirelessDeviceRequest;
class TestWirelessDeviceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDestinationRequest;
class UpdateDestinationResponse;
class UpdateEventConfigurationByResourceTypesRequest;
class UpdateEventConfigurationByResourceTypesResponse;
class UpdateFuotaTaskRequest;
class UpdateFuotaTaskResponse;
class UpdateLogLevelsByResourceTypesRequest;
class UpdateLogLevelsByResourceTypesResponse;
class UpdateMulticastGroupRequest;
class UpdateMulticastGroupResponse;
class UpdateNetworkAnalyzerConfigurationRequest;
class UpdateNetworkAnalyzerConfigurationResponse;
class UpdatePartnerAccountRequest;
class UpdatePartnerAccountResponse;
class UpdatePositionRequest;
class UpdatePositionResponse;
class UpdateResourceEventConfigurationRequest;
class UpdateResourceEventConfigurationResponse;
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
    AssociateMulticastGroupWithFuotaTaskResponse * associateMulticastGroupWithFuotaTask(const AssociateMulticastGroupWithFuotaTaskRequest &request);
    AssociateWirelessDeviceWithFuotaTaskResponse * associateWirelessDeviceWithFuotaTask(const AssociateWirelessDeviceWithFuotaTaskRequest &request);
    AssociateWirelessDeviceWithMulticastGroupResponse * associateWirelessDeviceWithMulticastGroup(const AssociateWirelessDeviceWithMulticastGroupRequest &request);
    AssociateWirelessDeviceWithThingResponse * associateWirelessDeviceWithThing(const AssociateWirelessDeviceWithThingRequest &request);
    AssociateWirelessGatewayWithCertificateResponse * associateWirelessGatewayWithCertificate(const AssociateWirelessGatewayWithCertificateRequest &request);
    AssociateWirelessGatewayWithThingResponse * associateWirelessGatewayWithThing(const AssociateWirelessGatewayWithThingRequest &request);
    CancelMulticastGroupSessionResponse * cancelMulticastGroupSession(const CancelMulticastGroupSessionRequest &request);
    CreateDestinationResponse * createDestination(const CreateDestinationRequest &request);
    CreateDeviceProfileResponse * createDeviceProfile(const CreateDeviceProfileRequest &request);
    CreateFuotaTaskResponse * createFuotaTask(const CreateFuotaTaskRequest &request);
    CreateMulticastGroupResponse * createMulticastGroup(const CreateMulticastGroupRequest &request);
    CreateNetworkAnalyzerConfigurationResponse * createNetworkAnalyzerConfiguration(const CreateNetworkAnalyzerConfigurationRequest &request);
    CreateServiceProfileResponse * createServiceProfile(const CreateServiceProfileRequest &request);
    CreateWirelessDeviceResponse * createWirelessDevice(const CreateWirelessDeviceRequest &request);
    CreateWirelessGatewayResponse * createWirelessGateway(const CreateWirelessGatewayRequest &request);
    CreateWirelessGatewayTaskResponse * createWirelessGatewayTask(const CreateWirelessGatewayTaskRequest &request);
    CreateWirelessGatewayTaskDefinitionResponse * createWirelessGatewayTaskDefinition(const CreateWirelessGatewayTaskDefinitionRequest &request);
    DeleteDestinationResponse * deleteDestination(const DeleteDestinationRequest &request);
    DeleteDeviceProfileResponse * deleteDeviceProfile(const DeleteDeviceProfileRequest &request);
    DeleteFuotaTaskResponse * deleteFuotaTask(const DeleteFuotaTaskRequest &request);
    DeleteMulticastGroupResponse * deleteMulticastGroup(const DeleteMulticastGroupRequest &request);
    DeleteNetworkAnalyzerConfigurationResponse * deleteNetworkAnalyzerConfiguration(const DeleteNetworkAnalyzerConfigurationRequest &request);
    DeleteQueuedMessagesResponse * deleteQueuedMessages(const DeleteQueuedMessagesRequest &request);
    DeleteServiceProfileResponse * deleteServiceProfile(const DeleteServiceProfileRequest &request);
    DeleteWirelessDeviceResponse * deleteWirelessDevice(const DeleteWirelessDeviceRequest &request);
    DeleteWirelessGatewayResponse * deleteWirelessGateway(const DeleteWirelessGatewayRequest &request);
    DeleteWirelessGatewayTaskResponse * deleteWirelessGatewayTask(const DeleteWirelessGatewayTaskRequest &request);
    DeleteWirelessGatewayTaskDefinitionResponse * deleteWirelessGatewayTaskDefinition(const DeleteWirelessGatewayTaskDefinitionRequest &request);
    DisassociateAwsAccountFromPartnerAccountResponse * disassociateAwsAccountFromPartnerAccount(const DisassociateAwsAccountFromPartnerAccountRequest &request);
    DisassociateMulticastGroupFromFuotaTaskResponse * disassociateMulticastGroupFromFuotaTask(const DisassociateMulticastGroupFromFuotaTaskRequest &request);
    DisassociateWirelessDeviceFromFuotaTaskResponse * disassociateWirelessDeviceFromFuotaTask(const DisassociateWirelessDeviceFromFuotaTaskRequest &request);
    DisassociateWirelessDeviceFromMulticastGroupResponse * disassociateWirelessDeviceFromMulticastGroup(const DisassociateWirelessDeviceFromMulticastGroupRequest &request);
    DisassociateWirelessDeviceFromThingResponse * disassociateWirelessDeviceFromThing(const DisassociateWirelessDeviceFromThingRequest &request);
    DisassociateWirelessGatewayFromCertificateResponse * disassociateWirelessGatewayFromCertificate(const DisassociateWirelessGatewayFromCertificateRequest &request);
    DisassociateWirelessGatewayFromThingResponse * disassociateWirelessGatewayFromThing(const DisassociateWirelessGatewayFromThingRequest &request);
    GetDestinationResponse * getDestination(const GetDestinationRequest &request);
    GetDeviceProfileResponse * getDeviceProfile(const GetDeviceProfileRequest &request);
    GetEventConfigurationByResourceTypesResponse * getEventConfigurationByResourceTypes(const GetEventConfigurationByResourceTypesRequest &request);
    GetFuotaTaskResponse * getFuotaTask(const GetFuotaTaskRequest &request);
    GetLogLevelsByResourceTypesResponse * getLogLevelsByResourceTypes(const GetLogLevelsByResourceTypesRequest &request);
    GetMulticastGroupResponse * getMulticastGroup(const GetMulticastGroupRequest &request);
    GetMulticastGroupSessionResponse * getMulticastGroupSession(const GetMulticastGroupSessionRequest &request);
    GetNetworkAnalyzerConfigurationResponse * getNetworkAnalyzerConfiguration(const GetNetworkAnalyzerConfigurationRequest &request);
    GetPartnerAccountResponse * getPartnerAccount(const GetPartnerAccountRequest &request);
    GetPositionResponse * getPosition(const GetPositionRequest &request);
    GetPositionConfigurationResponse * getPositionConfiguration(const GetPositionConfigurationRequest &request);
    GetResourceEventConfigurationResponse * getResourceEventConfiguration(const GetResourceEventConfigurationRequest &request);
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
    ListEventConfigurationsResponse * listEventConfigurations(const ListEventConfigurationsRequest &request);
    ListFuotaTasksResponse * listFuotaTasks(const ListFuotaTasksRequest &request);
    ListMulticastGroupsResponse * listMulticastGroups(const ListMulticastGroupsRequest &request);
    ListMulticastGroupsByFuotaTaskResponse * listMulticastGroupsByFuotaTask(const ListMulticastGroupsByFuotaTaskRequest &request);
    ListNetworkAnalyzerConfigurationsResponse * listNetworkAnalyzerConfigurations(const ListNetworkAnalyzerConfigurationsRequest &request);
    ListPartnerAccountsResponse * listPartnerAccounts(const ListPartnerAccountsRequest &request);
    ListPositionConfigurationsResponse * listPositionConfigurations(const ListPositionConfigurationsRequest &request);
    ListQueuedMessagesResponse * listQueuedMessages(const ListQueuedMessagesRequest &request);
    ListServiceProfilesResponse * listServiceProfiles(const ListServiceProfilesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWirelessDevicesResponse * listWirelessDevices(const ListWirelessDevicesRequest &request);
    ListWirelessGatewayTaskDefinitionsResponse * listWirelessGatewayTaskDefinitions(const ListWirelessGatewayTaskDefinitionsRequest &request);
    ListWirelessGatewaysResponse * listWirelessGateways(const ListWirelessGatewaysRequest &request);
    PutPositionConfigurationResponse * putPositionConfiguration(const PutPositionConfigurationRequest &request);
    PutResourceLogLevelResponse * putResourceLogLevel(const PutResourceLogLevelRequest &request);
    ResetAllResourceLogLevelsResponse * resetAllResourceLogLevels(const ResetAllResourceLogLevelsRequest &request);
    ResetResourceLogLevelResponse * resetResourceLogLevel(const ResetResourceLogLevelRequest &request);
    SendDataToMulticastGroupResponse * sendDataToMulticastGroup(const SendDataToMulticastGroupRequest &request);
    SendDataToWirelessDeviceResponse * sendDataToWirelessDevice(const SendDataToWirelessDeviceRequest &request);
    StartBulkAssociateWirelessDeviceWithMulticastGroupResponse * startBulkAssociateWirelessDeviceWithMulticastGroup(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest &request);
    StartBulkDisassociateWirelessDeviceFromMulticastGroupResponse * startBulkDisassociateWirelessDeviceFromMulticastGroup(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest &request);
    StartFuotaTaskResponse * startFuotaTask(const StartFuotaTaskRequest &request);
    StartMulticastGroupSessionResponse * startMulticastGroupSession(const StartMulticastGroupSessionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestWirelessDeviceResponse * testWirelessDevice(const TestWirelessDeviceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDestinationResponse * updateDestination(const UpdateDestinationRequest &request);
    UpdateEventConfigurationByResourceTypesResponse * updateEventConfigurationByResourceTypes(const UpdateEventConfigurationByResourceTypesRequest &request);
    UpdateFuotaTaskResponse * updateFuotaTask(const UpdateFuotaTaskRequest &request);
    UpdateLogLevelsByResourceTypesResponse * updateLogLevelsByResourceTypes(const UpdateLogLevelsByResourceTypesRequest &request);
    UpdateMulticastGroupResponse * updateMulticastGroup(const UpdateMulticastGroupRequest &request);
    UpdateNetworkAnalyzerConfigurationResponse * updateNetworkAnalyzerConfiguration(const UpdateNetworkAnalyzerConfigurationRequest &request);
    UpdatePartnerAccountResponse * updatePartnerAccount(const UpdatePartnerAccountRequest &request);
    UpdatePositionResponse * updatePosition(const UpdatePositionRequest &request);
    UpdateResourceEventConfigurationResponse * updateResourceEventConfiguration(const UpdateResourceEventConfigurationRequest &request);
    UpdateWirelessDeviceResponse * updateWirelessDevice(const UpdateWirelessDeviceRequest &request);
    UpdateWirelessGatewayResponse * updateWirelessGateway(const UpdateWirelessGatewayRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTWirelessClient)
    Q_DISABLE_COPY(IoTWirelessClient)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
