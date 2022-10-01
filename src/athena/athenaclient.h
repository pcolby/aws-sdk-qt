// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATHENACLIENT_H
#define QTAWS_ATHENACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsathenaglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Athena {

class AthenaClientPrivate;
class BatchGetNamedQueryRequest;
class BatchGetNamedQueryResponse;
class BatchGetPreparedStatementRequest;
class BatchGetPreparedStatementResponse;
class BatchGetQueryExecutionRequest;
class BatchGetQueryExecutionResponse;
class CreateDataCatalogRequest;
class CreateDataCatalogResponse;
class CreateNamedQueryRequest;
class CreateNamedQueryResponse;
class CreatePreparedStatementRequest;
class CreatePreparedStatementResponse;
class CreateWorkGroupRequest;
class CreateWorkGroupResponse;
class DeleteDataCatalogRequest;
class DeleteDataCatalogResponse;
class DeleteNamedQueryRequest;
class DeleteNamedQueryResponse;
class DeletePreparedStatementRequest;
class DeletePreparedStatementResponse;
class DeleteWorkGroupRequest;
class DeleteWorkGroupResponse;
class GetDataCatalogRequest;
class GetDataCatalogResponse;
class GetDatabaseRequest;
class GetDatabaseResponse;
class GetNamedQueryRequest;
class GetNamedQueryResponse;
class GetPreparedStatementRequest;
class GetPreparedStatementResponse;
class GetQueryExecutionRequest;
class GetQueryExecutionResponse;
class GetQueryResultsRequest;
class GetQueryResultsResponse;
class GetQueryRuntimeStatisticsRequest;
class GetQueryRuntimeStatisticsResponse;
class GetTableMetadataRequest;
class GetTableMetadataResponse;
class GetWorkGroupRequest;
class GetWorkGroupResponse;
class ListDataCatalogsRequest;
class ListDataCatalogsResponse;
class ListDatabasesRequest;
class ListDatabasesResponse;
class ListEngineVersionsRequest;
class ListEngineVersionsResponse;
class ListNamedQueriesRequest;
class ListNamedQueriesResponse;
class ListPreparedStatementsRequest;
class ListPreparedStatementsResponse;
class ListQueryExecutionsRequest;
class ListQueryExecutionsResponse;
class ListTableMetadataRequest;
class ListTableMetadataResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWorkGroupsRequest;
class ListWorkGroupsResponse;
class StartQueryExecutionRequest;
class StartQueryExecutionResponse;
class StopQueryExecutionRequest;
class StopQueryExecutionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDataCatalogRequest;
class UpdateDataCatalogResponse;
class UpdateNamedQueryRequest;
class UpdateNamedQueryResponse;
class UpdatePreparedStatementRequest;
class UpdatePreparedStatementResponse;
class UpdateWorkGroupRequest;
class UpdateWorkGroupResponse;

class QTAWSATHENA_EXPORT AthenaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AthenaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AthenaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetNamedQueryResponse * batchGetNamedQuery(const BatchGetNamedQueryRequest &request);
    BatchGetPreparedStatementResponse * batchGetPreparedStatement(const BatchGetPreparedStatementRequest &request);
    BatchGetQueryExecutionResponse * batchGetQueryExecution(const BatchGetQueryExecutionRequest &request);
    CreateDataCatalogResponse * createDataCatalog(const CreateDataCatalogRequest &request);
    CreateNamedQueryResponse * createNamedQuery(const CreateNamedQueryRequest &request);
    CreatePreparedStatementResponse * createPreparedStatement(const CreatePreparedStatementRequest &request);
    CreateWorkGroupResponse * createWorkGroup(const CreateWorkGroupRequest &request);
    DeleteDataCatalogResponse * deleteDataCatalog(const DeleteDataCatalogRequest &request);
    DeleteNamedQueryResponse * deleteNamedQuery(const DeleteNamedQueryRequest &request);
    DeletePreparedStatementResponse * deletePreparedStatement(const DeletePreparedStatementRequest &request);
    DeleteWorkGroupResponse * deleteWorkGroup(const DeleteWorkGroupRequest &request);
    GetDataCatalogResponse * getDataCatalog(const GetDataCatalogRequest &request);
    GetDatabaseResponse * getDatabase(const GetDatabaseRequest &request);
    GetNamedQueryResponse * getNamedQuery(const GetNamedQueryRequest &request);
    GetPreparedStatementResponse * getPreparedStatement(const GetPreparedStatementRequest &request);
    GetQueryExecutionResponse * getQueryExecution(const GetQueryExecutionRequest &request);
    GetQueryResultsResponse * getQueryResults(const GetQueryResultsRequest &request);
    GetQueryRuntimeStatisticsResponse * getQueryRuntimeStatistics(const GetQueryRuntimeStatisticsRequest &request);
    GetTableMetadataResponse * getTableMetadata(const GetTableMetadataRequest &request);
    GetWorkGroupResponse * getWorkGroup(const GetWorkGroupRequest &request);
    ListDataCatalogsResponse * listDataCatalogs(const ListDataCatalogsRequest &request);
    ListDatabasesResponse * listDatabases(const ListDatabasesRequest &request);
    ListEngineVersionsResponse * listEngineVersions(const ListEngineVersionsRequest &request);
    ListNamedQueriesResponse * listNamedQueries(const ListNamedQueriesRequest &request);
    ListPreparedStatementsResponse * listPreparedStatements(const ListPreparedStatementsRequest &request);
    ListQueryExecutionsResponse * listQueryExecutions(const ListQueryExecutionsRequest &request);
    ListTableMetadataResponse * listTableMetadata(const ListTableMetadataRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWorkGroupsResponse * listWorkGroups(const ListWorkGroupsRequest &request);
    StartQueryExecutionResponse * startQueryExecution(const StartQueryExecutionRequest &request);
    StopQueryExecutionResponse * stopQueryExecution(const StopQueryExecutionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDataCatalogResponse * updateDataCatalog(const UpdateDataCatalogRequest &request);
    UpdateNamedQueryResponse * updateNamedQuery(const UpdateNamedQueryRequest &request);
    UpdatePreparedStatementResponse * updatePreparedStatement(const UpdatePreparedStatementRequest &request);
    UpdateWorkGroupResponse * updateWorkGroup(const UpdateWorkGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(AthenaClient)
    Q_DISABLE_COPY(AthenaClient)

};

} // namespace Athena
} // namespace QtAws

#endif
