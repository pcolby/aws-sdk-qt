// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTSITEWISECLIENT_H
#define QTAWS_IOTSITEWISECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiotsitewiseglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTSiteWise {

class IoTSiteWiseClientPrivate;
class AssociateAssetsRequest;
class AssociateAssetsResponse;
class AssociateTimeSeriesToAssetPropertyRequest;
class AssociateTimeSeriesToAssetPropertyResponse;
class BatchAssociateProjectAssetsRequest;
class BatchAssociateProjectAssetsResponse;
class BatchDisassociateProjectAssetsRequest;
class BatchDisassociateProjectAssetsResponse;
class BatchGetAssetPropertyAggregatesRequest;
class BatchGetAssetPropertyAggregatesResponse;
class BatchGetAssetPropertyValueRequest;
class BatchGetAssetPropertyValueResponse;
class BatchGetAssetPropertyValueHistoryRequest;
class BatchGetAssetPropertyValueHistoryResponse;
class BatchPutAssetPropertyValueRequest;
class BatchPutAssetPropertyValueResponse;
class CreateAccessPolicyRequest;
class CreateAccessPolicyResponse;
class CreateAssetRequest;
class CreateAssetResponse;
class CreateAssetModelRequest;
class CreateAssetModelResponse;
class CreateBulkImportJobRequest;
class CreateBulkImportJobResponse;
class CreateDashboardRequest;
class CreateDashboardResponse;
class CreateGatewayRequest;
class CreateGatewayResponse;
class CreatePortalRequest;
class CreatePortalResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class DeleteAccessPolicyRequest;
class DeleteAccessPolicyResponse;
class DeleteAssetRequest;
class DeleteAssetResponse;
class DeleteAssetModelRequest;
class DeleteAssetModelResponse;
class DeleteDashboardRequest;
class DeleteDashboardResponse;
class DeleteGatewayRequest;
class DeleteGatewayResponse;
class DeletePortalRequest;
class DeletePortalResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DeleteTimeSeriesRequest;
class DeleteTimeSeriesResponse;
class DescribeAccessPolicyRequest;
class DescribeAccessPolicyResponse;
class DescribeAssetRequest;
class DescribeAssetResponse;
class DescribeAssetModelRequest;
class DescribeAssetModelResponse;
class DescribeAssetPropertyRequest;
class DescribeAssetPropertyResponse;
class DescribeBulkImportJobRequest;
class DescribeBulkImportJobResponse;
class DescribeDashboardRequest;
class DescribeDashboardResponse;
class DescribeDefaultEncryptionConfigurationRequest;
class DescribeDefaultEncryptionConfigurationResponse;
class DescribeGatewayRequest;
class DescribeGatewayResponse;
class DescribeGatewayCapabilityConfigurationRequest;
class DescribeGatewayCapabilityConfigurationResponse;
class DescribeLoggingOptionsRequest;
class DescribeLoggingOptionsResponse;
class DescribePortalRequest;
class DescribePortalResponse;
class DescribeProjectRequest;
class DescribeProjectResponse;
class DescribeStorageConfigurationRequest;
class DescribeStorageConfigurationResponse;
class DescribeTimeSeriesRequest;
class DescribeTimeSeriesResponse;
class DisassociateAssetsRequest;
class DisassociateAssetsResponse;
class DisassociateTimeSeriesFromAssetPropertyRequest;
class DisassociateTimeSeriesFromAssetPropertyResponse;
class GetAssetPropertyAggregatesRequest;
class GetAssetPropertyAggregatesResponse;
class GetAssetPropertyValueRequest;
class GetAssetPropertyValueResponse;
class GetAssetPropertyValueHistoryRequest;
class GetAssetPropertyValueHistoryResponse;
class GetInterpolatedAssetPropertyValuesRequest;
class GetInterpolatedAssetPropertyValuesResponse;
class ListAccessPoliciesRequest;
class ListAccessPoliciesResponse;
class ListAssetModelsRequest;
class ListAssetModelsResponse;
class ListAssetRelationshipsRequest;
class ListAssetRelationshipsResponse;
class ListAssetsRequest;
class ListAssetsResponse;
class ListAssociatedAssetsRequest;
class ListAssociatedAssetsResponse;
class ListBulkImportJobsRequest;
class ListBulkImportJobsResponse;
class ListDashboardsRequest;
class ListDashboardsResponse;
class ListGatewaysRequest;
class ListGatewaysResponse;
class ListPortalsRequest;
class ListPortalsResponse;
class ListProjectAssetsRequest;
class ListProjectAssetsResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTimeSeriesRequest;
class ListTimeSeriesResponse;
class PutDefaultEncryptionConfigurationRequest;
class PutDefaultEncryptionConfigurationResponse;
class PutLoggingOptionsRequest;
class PutLoggingOptionsResponse;
class PutStorageConfigurationRequest;
class PutStorageConfigurationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAccessPolicyRequest;
class UpdateAccessPolicyResponse;
class UpdateAssetRequest;
class UpdateAssetResponse;
class UpdateAssetModelRequest;
class UpdateAssetModelResponse;
class UpdateAssetPropertyRequest;
class UpdateAssetPropertyResponse;
class UpdateDashboardRequest;
class UpdateDashboardResponse;
class UpdateGatewayRequest;
class UpdateGatewayResponse;
class UpdateGatewayCapabilityConfigurationRequest;
class UpdateGatewayCapabilityConfigurationResponse;
class UpdatePortalRequest;
class UpdatePortalResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;

class QTAWSIOTSITEWISE_EXPORT IoTSiteWiseClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTSiteWiseClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTSiteWiseClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateAssetsResponse * associateAssets(const AssociateAssetsRequest &request);
    AssociateTimeSeriesToAssetPropertyResponse * associateTimeSeriesToAssetProperty(const AssociateTimeSeriesToAssetPropertyRequest &request);
    BatchAssociateProjectAssetsResponse * batchAssociateProjectAssets(const BatchAssociateProjectAssetsRequest &request);
    BatchDisassociateProjectAssetsResponse * batchDisassociateProjectAssets(const BatchDisassociateProjectAssetsRequest &request);
    BatchGetAssetPropertyAggregatesResponse * batchGetAssetPropertyAggregates(const BatchGetAssetPropertyAggregatesRequest &request);
    BatchGetAssetPropertyValueResponse * batchGetAssetPropertyValue(const BatchGetAssetPropertyValueRequest &request);
    BatchGetAssetPropertyValueHistoryResponse * batchGetAssetPropertyValueHistory(const BatchGetAssetPropertyValueHistoryRequest &request);
    BatchPutAssetPropertyValueResponse * batchPutAssetPropertyValue(const BatchPutAssetPropertyValueRequest &request);
    CreateAccessPolicyResponse * createAccessPolicy(const CreateAccessPolicyRequest &request);
    CreateAssetResponse * createAsset(const CreateAssetRequest &request);
    CreateAssetModelResponse * createAssetModel(const CreateAssetModelRequest &request);
    CreateBulkImportJobResponse * createBulkImportJob(const CreateBulkImportJobRequest &request);
    CreateDashboardResponse * createDashboard(const CreateDashboardRequest &request);
    CreateGatewayResponse * createGateway(const CreateGatewayRequest &request);
    CreatePortalResponse * createPortal(const CreatePortalRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    DeleteAccessPolicyResponse * deleteAccessPolicy(const DeleteAccessPolicyRequest &request);
    DeleteAssetResponse * deleteAsset(const DeleteAssetRequest &request);
    DeleteAssetModelResponse * deleteAssetModel(const DeleteAssetModelRequest &request);
    DeleteDashboardResponse * deleteDashboard(const DeleteDashboardRequest &request);
    DeleteGatewayResponse * deleteGateway(const DeleteGatewayRequest &request);
    DeletePortalResponse * deletePortal(const DeletePortalRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteTimeSeriesResponse * deleteTimeSeries(const DeleteTimeSeriesRequest &request);
    DescribeAccessPolicyResponse * describeAccessPolicy(const DescribeAccessPolicyRequest &request);
    DescribeAssetResponse * describeAsset(const DescribeAssetRequest &request);
    DescribeAssetModelResponse * describeAssetModel(const DescribeAssetModelRequest &request);
    DescribeAssetPropertyResponse * describeAssetProperty(const DescribeAssetPropertyRequest &request);
    DescribeBulkImportJobResponse * describeBulkImportJob(const DescribeBulkImportJobRequest &request);
    DescribeDashboardResponse * describeDashboard(const DescribeDashboardRequest &request);
    DescribeDefaultEncryptionConfigurationResponse * describeDefaultEncryptionConfiguration(const DescribeDefaultEncryptionConfigurationRequest &request);
    DescribeGatewayResponse * describeGateway(const DescribeGatewayRequest &request);
    DescribeGatewayCapabilityConfigurationResponse * describeGatewayCapabilityConfiguration(const DescribeGatewayCapabilityConfigurationRequest &request);
    DescribeLoggingOptionsResponse * describeLoggingOptions(const DescribeLoggingOptionsRequest &request);
    DescribePortalResponse * describePortal(const DescribePortalRequest &request);
    DescribeProjectResponse * describeProject(const DescribeProjectRequest &request);
    DescribeStorageConfigurationResponse * describeStorageConfiguration(const DescribeStorageConfigurationRequest &request);
    DescribeTimeSeriesResponse * describeTimeSeries(const DescribeTimeSeriesRequest &request);
    DisassociateAssetsResponse * disassociateAssets(const DisassociateAssetsRequest &request);
    DisassociateTimeSeriesFromAssetPropertyResponse * disassociateTimeSeriesFromAssetProperty(const DisassociateTimeSeriesFromAssetPropertyRequest &request);
    GetAssetPropertyAggregatesResponse * getAssetPropertyAggregates(const GetAssetPropertyAggregatesRequest &request);
    GetAssetPropertyValueResponse * getAssetPropertyValue(const GetAssetPropertyValueRequest &request);
    GetAssetPropertyValueHistoryResponse * getAssetPropertyValueHistory(const GetAssetPropertyValueHistoryRequest &request);
    GetInterpolatedAssetPropertyValuesResponse * getInterpolatedAssetPropertyValues(const GetInterpolatedAssetPropertyValuesRequest &request);
    ListAccessPoliciesResponse * listAccessPolicies(const ListAccessPoliciesRequest &request);
    ListAssetModelsResponse * listAssetModels(const ListAssetModelsRequest &request);
    ListAssetRelationshipsResponse * listAssetRelationships(const ListAssetRelationshipsRequest &request);
    ListAssetsResponse * listAssets(const ListAssetsRequest &request);
    ListAssociatedAssetsResponse * listAssociatedAssets(const ListAssociatedAssetsRequest &request);
    ListBulkImportJobsResponse * listBulkImportJobs(const ListBulkImportJobsRequest &request);
    ListDashboardsResponse * listDashboards(const ListDashboardsRequest &request);
    ListGatewaysResponse * listGateways(const ListGatewaysRequest &request);
    ListPortalsResponse * listPortals(const ListPortalsRequest &request);
    ListProjectAssetsResponse * listProjectAssets(const ListProjectAssetsRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTimeSeriesResponse * listTimeSeries(const ListTimeSeriesRequest &request);
    PutDefaultEncryptionConfigurationResponse * putDefaultEncryptionConfiguration(const PutDefaultEncryptionConfigurationRequest &request);
    PutLoggingOptionsResponse * putLoggingOptions(const PutLoggingOptionsRequest &request);
    PutStorageConfigurationResponse * putStorageConfiguration(const PutStorageConfigurationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAccessPolicyResponse * updateAccessPolicy(const UpdateAccessPolicyRequest &request);
    UpdateAssetResponse * updateAsset(const UpdateAssetRequest &request);
    UpdateAssetModelResponse * updateAssetModel(const UpdateAssetModelRequest &request);
    UpdateAssetPropertyResponse * updateAssetProperty(const UpdateAssetPropertyRequest &request);
    UpdateDashboardResponse * updateDashboard(const UpdateDashboardRequest &request);
    UpdateGatewayResponse * updateGateway(const UpdateGatewayRequest &request);
    UpdateGatewayCapabilityConfigurationResponse * updateGatewayCapabilityConfiguration(const UpdateGatewayCapabilityConfigurationRequest &request);
    UpdatePortalResponse * updatePortal(const UpdatePortalRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTSiteWiseClient)
    Q_DISABLE_COPY(IoTSiteWiseClient)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
