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

#ifndef QTAWS_BACKUPGATEWAYCLIENT_H
#define QTAWS_BACKUPGATEWAYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsbackupgatewayglobal.h"

class QNetworkReply;

namespace QtAws {
namespace BackupGateway {

class BackupGatewayClientPrivate;
class AssociateGatewayToServerRequest;
class AssociateGatewayToServerResponse;
class CreateGatewayRequest;
class CreateGatewayResponse;
class DeleteGatewayRequest;
class DeleteGatewayResponse;
class DeleteHypervisorRequest;
class DeleteHypervisorResponse;
class DisassociateGatewayFromServerRequest;
class DisassociateGatewayFromServerResponse;
class GetGatewayRequest;
class GetGatewayResponse;
class GetVirtualMachineRequest;
class GetVirtualMachineResponse;
class ImportHypervisorConfigurationRequest;
class ImportHypervisorConfigurationResponse;
class ListGatewaysRequest;
class ListGatewaysResponse;
class ListHypervisorsRequest;
class ListHypervisorsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListVirtualMachinesRequest;
class ListVirtualMachinesResponse;
class PutMaintenanceStartTimeRequest;
class PutMaintenanceStartTimeResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestHypervisorConfigurationRequest;
class TestHypervisorConfigurationResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateGatewayInformationRequest;
class UpdateGatewayInformationResponse;
class UpdateGatewaySoftwareNowRequest;
class UpdateGatewaySoftwareNowResponse;
class UpdateHypervisorRequest;
class UpdateHypervisorResponse;

class QTAWSBACKUPGATEWAY_EXPORT BackupGatewayClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    BackupGatewayClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit BackupGatewayClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateGatewayToServerResponse * associateGatewayToServer(const AssociateGatewayToServerRequest &request);
    CreateGatewayResponse * createGateway(const CreateGatewayRequest &request);
    DeleteGatewayResponse * deleteGateway(const DeleteGatewayRequest &request);
    DeleteHypervisorResponse * deleteHypervisor(const DeleteHypervisorRequest &request);
    DisassociateGatewayFromServerResponse * disassociateGatewayFromServer(const DisassociateGatewayFromServerRequest &request);
    GetGatewayResponse * getGateway(const GetGatewayRequest &request);
    GetVirtualMachineResponse * getVirtualMachine(const GetVirtualMachineRequest &request);
    ImportHypervisorConfigurationResponse * importHypervisorConfiguration(const ImportHypervisorConfigurationRequest &request);
    ListGatewaysResponse * listGateways(const ListGatewaysRequest &request);
    ListHypervisorsResponse * listHypervisors(const ListHypervisorsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListVirtualMachinesResponse * listVirtualMachines(const ListVirtualMachinesRequest &request);
    PutMaintenanceStartTimeResponse * putMaintenanceStartTime(const PutMaintenanceStartTimeRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestHypervisorConfigurationResponse * testHypervisorConfiguration(const TestHypervisorConfigurationRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateGatewayInformationResponse * updateGatewayInformation(const UpdateGatewayInformationRequest &request);
    UpdateGatewaySoftwareNowResponse * updateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest &request);
    UpdateHypervisorResponse * updateHypervisor(const UpdateHypervisorRequest &request);

private:
    Q_DECLARE_PRIVATE(BackupGatewayClient)
    Q_DISABLE_COPY(BackupGatewayClient)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
