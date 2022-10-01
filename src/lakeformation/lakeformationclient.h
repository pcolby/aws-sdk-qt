// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAKEFORMATIONCLIENT_H
#define QTAWS_LAKEFORMATIONCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslakeformationglobal.h"

class QNetworkReply;

namespace QtAws {
namespace LakeFormation {

class LakeFormationClientPrivate;
class AddLFTagsToResourceRequest;
class AddLFTagsToResourceResponse;
class AssumeDecoratedRoleWithSAMLRequest;
class AssumeDecoratedRoleWithSAMLResponse;
class BatchGrantPermissionsRequest;
class BatchGrantPermissionsResponse;
class BatchRevokePermissionsRequest;
class BatchRevokePermissionsResponse;
class CancelTransactionRequest;
class CancelTransactionResponse;
class CommitTransactionRequest;
class CommitTransactionResponse;
class CreateDataCellsFilterRequest;
class CreateDataCellsFilterResponse;
class CreateLFTagRequest;
class CreateLFTagResponse;
class DeleteDataCellsFilterRequest;
class DeleteDataCellsFilterResponse;
class DeleteLFTagRequest;
class DeleteLFTagResponse;
class DeleteObjectsOnCancelRequest;
class DeleteObjectsOnCancelResponse;
class DeregisterResourceRequest;
class DeregisterResourceResponse;
class DescribeResourceRequest;
class DescribeResourceResponse;
class DescribeTransactionRequest;
class DescribeTransactionResponse;
class ExtendTransactionRequest;
class ExtendTransactionResponse;
class GetDataLakeSettingsRequest;
class GetDataLakeSettingsResponse;
class GetEffectivePermissionsForPathRequest;
class GetEffectivePermissionsForPathResponse;
class GetLFTagRequest;
class GetLFTagResponse;
class GetQueryStateRequest;
class GetQueryStateResponse;
class GetQueryStatisticsRequest;
class GetQueryStatisticsResponse;
class GetResourceLFTagsRequest;
class GetResourceLFTagsResponse;
class GetTableObjectsRequest;
class GetTableObjectsResponse;
class GetTemporaryGluePartitionCredentialsRequest;
class GetTemporaryGluePartitionCredentialsResponse;
class GetTemporaryGlueTableCredentialsRequest;
class GetTemporaryGlueTableCredentialsResponse;
class GetWorkUnitResultsRequest;
class GetWorkUnitResultsResponse;
class GetWorkUnitsRequest;
class GetWorkUnitsResponse;
class GrantPermissionsRequest;
class GrantPermissionsResponse;
class ListDataCellsFilterRequest;
class ListDataCellsFilterResponse;
class ListLFTagsRequest;
class ListLFTagsResponse;
class ListPermissionsRequest;
class ListPermissionsResponse;
class ListResourcesRequest;
class ListResourcesResponse;
class ListTableStorageOptimizersRequest;
class ListTableStorageOptimizersResponse;
class ListTransactionsRequest;
class ListTransactionsResponse;
class PutDataLakeSettingsRequest;
class PutDataLakeSettingsResponse;
class RegisterResourceRequest;
class RegisterResourceResponse;
class RemoveLFTagsFromResourceRequest;
class RemoveLFTagsFromResourceResponse;
class RevokePermissionsRequest;
class RevokePermissionsResponse;
class SearchDatabasesByLFTagsRequest;
class SearchDatabasesByLFTagsResponse;
class SearchTablesByLFTagsRequest;
class SearchTablesByLFTagsResponse;
class StartQueryPlanningRequest;
class StartQueryPlanningResponse;
class StartTransactionRequest;
class StartTransactionResponse;
class UpdateLFTagRequest;
class UpdateLFTagResponse;
class UpdateResourceRequest;
class UpdateResourceResponse;
class UpdateTableObjectsRequest;
class UpdateTableObjectsResponse;
class UpdateTableStorageOptimizerRequest;
class UpdateTableStorageOptimizerResponse;

class QTAWSLAKEFORMATION_EXPORT LakeFormationClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LakeFormationClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LakeFormationClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddLFTagsToResourceResponse * addLFTagsToResource(const AddLFTagsToResourceRequest &request);
    AssumeDecoratedRoleWithSAMLResponse * assumeDecoratedRoleWithSAML(const AssumeDecoratedRoleWithSAMLRequest &request);
    BatchGrantPermissionsResponse * batchGrantPermissions(const BatchGrantPermissionsRequest &request);
    BatchRevokePermissionsResponse * batchRevokePermissions(const BatchRevokePermissionsRequest &request);
    CancelTransactionResponse * cancelTransaction(const CancelTransactionRequest &request);
    CommitTransactionResponse * commitTransaction(const CommitTransactionRequest &request);
    CreateDataCellsFilterResponse * createDataCellsFilter(const CreateDataCellsFilterRequest &request);
    CreateLFTagResponse * createLFTag(const CreateLFTagRequest &request);
    DeleteDataCellsFilterResponse * deleteDataCellsFilter(const DeleteDataCellsFilterRequest &request);
    DeleteLFTagResponse * deleteLFTag(const DeleteLFTagRequest &request);
    DeleteObjectsOnCancelResponse * deleteObjectsOnCancel(const DeleteObjectsOnCancelRequest &request);
    DeregisterResourceResponse * deregisterResource(const DeregisterResourceRequest &request);
    DescribeResourceResponse * describeResource(const DescribeResourceRequest &request);
    DescribeTransactionResponse * describeTransaction(const DescribeTransactionRequest &request);
    ExtendTransactionResponse * extendTransaction(const ExtendTransactionRequest &request);
    GetDataLakeSettingsResponse * getDataLakeSettings(const GetDataLakeSettingsRequest &request);
    GetEffectivePermissionsForPathResponse * getEffectivePermissionsForPath(const GetEffectivePermissionsForPathRequest &request);
    GetLFTagResponse * getLFTag(const GetLFTagRequest &request);
    GetQueryStateResponse * getQueryState(const GetQueryStateRequest &request);
    GetQueryStatisticsResponse * getQueryStatistics(const GetQueryStatisticsRequest &request);
    GetResourceLFTagsResponse * getResourceLFTags(const GetResourceLFTagsRequest &request);
    GetTableObjectsResponse * getTableObjects(const GetTableObjectsRequest &request);
    GetTemporaryGluePartitionCredentialsResponse * getTemporaryGluePartitionCredentials(const GetTemporaryGluePartitionCredentialsRequest &request);
    GetTemporaryGlueTableCredentialsResponse * getTemporaryGlueTableCredentials(const GetTemporaryGlueTableCredentialsRequest &request);
    GetWorkUnitResultsResponse * getWorkUnitResults(const GetWorkUnitResultsRequest &request);
    GetWorkUnitsResponse * getWorkUnits(const GetWorkUnitsRequest &request);
    GrantPermissionsResponse * grantPermissions(const GrantPermissionsRequest &request);
    ListDataCellsFilterResponse * listDataCellsFilter(const ListDataCellsFilterRequest &request);
    ListLFTagsResponse * listLFTags(const ListLFTagsRequest &request);
    ListPermissionsResponse * listPermissions(const ListPermissionsRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    ListTableStorageOptimizersResponse * listTableStorageOptimizers(const ListTableStorageOptimizersRequest &request);
    ListTransactionsResponse * listTransactions(const ListTransactionsRequest &request);
    PutDataLakeSettingsResponse * putDataLakeSettings(const PutDataLakeSettingsRequest &request);
    RegisterResourceResponse * registerResource(const RegisterResourceRequest &request);
    RemoveLFTagsFromResourceResponse * removeLFTagsFromResource(const RemoveLFTagsFromResourceRequest &request);
    RevokePermissionsResponse * revokePermissions(const RevokePermissionsRequest &request);
    SearchDatabasesByLFTagsResponse * searchDatabasesByLFTags(const SearchDatabasesByLFTagsRequest &request);
    SearchTablesByLFTagsResponse * searchTablesByLFTags(const SearchTablesByLFTagsRequest &request);
    StartQueryPlanningResponse * startQueryPlanning(const StartQueryPlanningRequest &request);
    StartTransactionResponse * startTransaction(const StartTransactionRequest &request);
    UpdateLFTagResponse * updateLFTag(const UpdateLFTagRequest &request);
    UpdateResourceResponse * updateResource(const UpdateResourceRequest &request);
    UpdateTableObjectsResponse * updateTableObjects(const UpdateTableObjectsRequest &request);
    UpdateTableStorageOptimizerResponse * updateTableStorageOptimizer(const UpdateTableStorageOptimizerRequest &request);

private:
    Q_DECLARE_PRIVATE(LakeFormationClient)
    Q_DISABLE_COPY(LakeFormationClient)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
