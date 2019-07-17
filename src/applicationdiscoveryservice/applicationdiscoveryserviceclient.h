/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_APPLICATIONDISCOVERYSERVICECLIENT_H
#define QTAWS_APPLICATIONDISCOVERYSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ApplicationDiscoveryService {

class ApplicationDiscoveryServiceClientPrivate;
class AssociateConfigurationItemsToApplicationRequest;
class AssociateConfigurationItemsToApplicationResponse;
class BatchDeleteImportDataRequest;
class BatchDeleteImportDataResponse;
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
class DescribeContinuousExportsRequest;
class DescribeContinuousExportsResponse;
class DescribeExportConfigurationsRequest;
class DescribeExportConfigurationsResponse;
class DescribeExportTasksRequest;
class DescribeExportTasksResponse;
class DescribeImportTasksRequest;
class DescribeImportTasksResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DisassociateConfigurationItemsFromApplicationRequest;
class DisassociateConfigurationItemsFromApplicationResponse;
class ExportConfigurationsRequest;
class ExportConfigurationsResponse;
class GetDiscoverySummaryRequest;
class GetDiscoverySummaryResponse;
class ListConfigurationsRequest;
class ListConfigurationsResponse;
class ListServerNeighborsRequest;
class ListServerNeighborsResponse;
class StartContinuousExportRequest;
class StartContinuousExportResponse;
class StartDataCollectionByAgentIdsRequest;
class StartDataCollectionByAgentIdsResponse;
class StartExportTaskRequest;
class StartExportTaskResponse;
class StartImportTaskRequest;
class StartImportTaskResponse;
class StopContinuousExportRequest;
class StopContinuousExportResponse;
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
    BatchDeleteImportDataResponse * batchDeleteImportData(const BatchDeleteImportDataRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    DeleteApplicationsResponse * deleteApplications(const DeleteApplicationsRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeAgentsResponse * describeAgents(const DescribeAgentsRequest &request);
    DescribeConfigurationsResponse * describeConfigurations(const DescribeConfigurationsRequest &request);
    DescribeContinuousExportsResponse * describeContinuousExports(const DescribeContinuousExportsRequest &request);
    DescribeExportConfigurationsResponse * describeExportConfigurations(const DescribeExportConfigurationsRequest &request);
    DescribeExportTasksResponse * describeExportTasks(const DescribeExportTasksRequest &request);
    DescribeImportTasksResponse * describeImportTasks(const DescribeImportTasksRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DisassociateConfigurationItemsFromApplicationResponse * disassociateConfigurationItemsFromApplication(const DisassociateConfigurationItemsFromApplicationRequest &request);
    ExportConfigurationsResponse * exportConfigurations(const ExportConfigurationsRequest &request);
    ExportConfigurationsResponse * exportConfigurations();
    GetDiscoverySummaryResponse * getDiscoverySummary(const GetDiscoverySummaryRequest &request);
    ListConfigurationsResponse * listConfigurations(const ListConfigurationsRequest &request);
    ListServerNeighborsResponse * listServerNeighbors(const ListServerNeighborsRequest &request);
    StartContinuousExportResponse * startContinuousExport(const StartContinuousExportRequest &request);
    StartDataCollectionByAgentIdsResponse * startDataCollectionByAgentIds(const StartDataCollectionByAgentIdsRequest &request);
    StartExportTaskResponse * startExportTask(const StartExportTaskRequest &request);
    StartImportTaskResponse * startImportTask(const StartImportTaskRequest &request);
    StopContinuousExportResponse * stopContinuousExport(const StopContinuousExportRequest &request);
    StopDataCollectionByAgentIdsResponse * stopDataCollectionByAgentIds(const StopDataCollectionByAgentIdsRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(ApplicationDiscoveryServiceClient)
    Q_DISABLE_COPY(ApplicationDiscoveryServiceClient)

};

} // namespace ApplicationDiscoveryService
} // namespace QtAws

#endif
