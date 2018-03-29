/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_APPLICATIONDISCOVERYSERVICECLIENT_H
#define QTAWS_APPLICATIONDISCOVERYSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ApplicationDiscoveryService {

class ApplicationDiscoveryServiceClientPrivate;
class AssociateConfigurationItemsToApplicationRequest;
class AssociateConfigurationItemsToApplicationResponse;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateTagsRequest;
class CreateTagsResponse;
class DeleteApplicationsRequest;
class DeleteApplicationsResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DescribeAgentsRequest;
class DescribeAgentsResponse;
class DescribeConfigurationsRequest;
class DescribeConfigurationsResponse;
class DescribeExportConfigurationsRequest;
class DescribeExportConfigurationsResponse;
class DescribeExportTasksRequest;
class DescribeExportTasksResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DisassociateConfigurationItemsFromApplicationRequest;
class DisassociateConfigurationItemsFromApplicationResponse;
class ExportConfigurationsResponse;
class GetDiscoverySummaryRequest;
class GetDiscoverySummaryResponse;
class ListConfigurationsRequest;
class ListConfigurationsResponse;
class ListServerNeighborsRequest;
class ListServerNeighborsResponse;
class StartDataCollectionByAgentIdsRequest;
class StartDataCollectionByAgentIdsResponse;
class StartExportTaskRequest;
class StartExportTaskResponse;
class StopDataCollectionByAgentIdsRequest;
class StopDataCollectionByAgentIdsResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;

class QTAWS_EXPORT ApplicationDiscoveryServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ApplicationDiscoveryServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ApplicationDiscoveryServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateConfigurationItemsToApplicationResponse * associateConfigurationItemsToApplication(const AssociateConfigurationItemsToApplicationRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    DeleteApplicationsResponse * deleteApplications(const DeleteApplicationsRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeAgentsResponse * describeAgents(const DescribeAgentsRequest &request);
    DescribeConfigurationsResponse * describeConfigurations(const DescribeConfigurationsRequest &request);
    DescribeExportConfigurationsResponse * describeExportConfigurations(const DescribeExportConfigurationsRequest &request);
    DescribeExportTasksResponse * describeExportTasks(const DescribeExportTasksRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DisassociateConfigurationItemsFromApplicationResponse * disassociateConfigurationItemsFromApplication(const DisassociateConfigurationItemsFromApplicationRequest &request);
    ExportConfigurationsResponse * exportConfigurations();
    GetDiscoverySummaryResponse * getDiscoverySummary(const GetDiscoverySummaryRequest &request);
    ListConfigurationsResponse * listConfigurations(const ListConfigurationsRequest &request);
    ListServerNeighborsResponse * listServerNeighbors(const ListServerNeighborsRequest &request);
    StartDataCollectionByAgentIdsResponse * startDataCollectionByAgentIds(const StartDataCollectionByAgentIdsRequest &request);
    StartExportTaskResponse * startExportTask(const StartExportTaskRequest &request);
    StopDataCollectionByAgentIdsResponse * stopDataCollectionByAgentIds(const StopDataCollectionByAgentIdsRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(ApplicationDiscoveryServiceClient)
    Q_DISABLE_COPY(ApplicationDiscoveryServiceClient)

};

} // namespace ApplicationDiscoveryService
} // namespace QtAws

#endif
