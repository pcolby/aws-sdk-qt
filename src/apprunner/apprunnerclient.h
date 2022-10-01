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

#ifndef QTAWS_APPRUNNERCLIENT_H
#define QTAWS_APPRUNNERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsapprunnerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AppRunner {

class AppRunnerClientPrivate;
class AssociateCustomDomainRequest;
class AssociateCustomDomainResponse;
class CreateAutoScalingConfigurationRequest;
class CreateAutoScalingConfigurationResponse;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateObservabilityConfigurationRequest;
class CreateObservabilityConfigurationResponse;
class CreateServiceRequest;
class CreateServiceResponse;
class CreateVpcConnectorRequest;
class CreateVpcConnectorResponse;
class DeleteAutoScalingConfigurationRequest;
class DeleteAutoScalingConfigurationResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteObservabilityConfigurationRequest;
class DeleteObservabilityConfigurationResponse;
class DeleteServiceRequest;
class DeleteServiceResponse;
class DeleteVpcConnectorRequest;
class DeleteVpcConnectorResponse;
class DescribeAutoScalingConfigurationRequest;
class DescribeAutoScalingConfigurationResponse;
class DescribeCustomDomainsRequest;
class DescribeCustomDomainsResponse;
class DescribeObservabilityConfigurationRequest;
class DescribeObservabilityConfigurationResponse;
class DescribeServiceRequest;
class DescribeServiceResponse;
class DescribeVpcConnectorRequest;
class DescribeVpcConnectorResponse;
class DisassociateCustomDomainRequest;
class DisassociateCustomDomainResponse;
class ListAutoScalingConfigurationsRequest;
class ListAutoScalingConfigurationsResponse;
class ListConnectionsRequest;
class ListConnectionsResponse;
class ListObservabilityConfigurationsRequest;
class ListObservabilityConfigurationsResponse;
class ListOperationsRequest;
class ListOperationsResponse;
class ListServicesRequest;
class ListServicesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListVpcConnectorsRequest;
class ListVpcConnectorsResponse;
class PauseServiceRequest;
class PauseServiceResponse;
class ResumeServiceRequest;
class ResumeServiceResponse;
class StartDeploymentRequest;
class StartDeploymentResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateServiceRequest;
class UpdateServiceResponse;

class QTAWSAPPRUNNER_EXPORT AppRunnerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppRunnerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AppRunnerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateCustomDomainResponse * associateCustomDomain(const AssociateCustomDomainRequest &request);
    CreateAutoScalingConfigurationResponse * createAutoScalingConfiguration(const CreateAutoScalingConfigurationRequest &request);
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateObservabilityConfigurationResponse * createObservabilityConfiguration(const CreateObservabilityConfigurationRequest &request);
    CreateServiceResponse * createService(const CreateServiceRequest &request);
    CreateVpcConnectorResponse * createVpcConnector(const CreateVpcConnectorRequest &request);
    DeleteAutoScalingConfigurationResponse * deleteAutoScalingConfiguration(const DeleteAutoScalingConfigurationRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteObservabilityConfigurationResponse * deleteObservabilityConfiguration(const DeleteObservabilityConfigurationRequest &request);
    DeleteServiceResponse * deleteService(const DeleteServiceRequest &request);
    DeleteVpcConnectorResponse * deleteVpcConnector(const DeleteVpcConnectorRequest &request);
    DescribeAutoScalingConfigurationResponse * describeAutoScalingConfiguration(const DescribeAutoScalingConfigurationRequest &request);
    DescribeCustomDomainsResponse * describeCustomDomains(const DescribeCustomDomainsRequest &request);
    DescribeObservabilityConfigurationResponse * describeObservabilityConfiguration(const DescribeObservabilityConfigurationRequest &request);
    DescribeServiceResponse * describeService(const DescribeServiceRequest &request);
    DescribeVpcConnectorResponse * describeVpcConnector(const DescribeVpcConnectorRequest &request);
    DisassociateCustomDomainResponse * disassociateCustomDomain(const DisassociateCustomDomainRequest &request);
    ListAutoScalingConfigurationsResponse * listAutoScalingConfigurations(const ListAutoScalingConfigurationsRequest &request);
    ListConnectionsResponse * listConnections(const ListConnectionsRequest &request);
    ListObservabilityConfigurationsResponse * listObservabilityConfigurations(const ListObservabilityConfigurationsRequest &request);
    ListOperationsResponse * listOperations(const ListOperationsRequest &request);
    ListServicesResponse * listServices(const ListServicesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListVpcConnectorsResponse * listVpcConnectors(const ListVpcConnectorsRequest &request);
    PauseServiceResponse * pauseService(const PauseServiceRequest &request);
    ResumeServiceResponse * resumeService(const ResumeServiceRequest &request);
    StartDeploymentResponse * startDeployment(const StartDeploymentRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateServiceResponse * updateService(const UpdateServiceRequest &request);

private:
    Q_DECLARE_PRIVATE(AppRunnerClient)
    Q_DISABLE_COPY(AppRunnerClient)

};

} // namespace AppRunner
} // namespace QtAws

#endif
