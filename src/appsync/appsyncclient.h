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

#ifndef QTAWS_APPSYNCCLIENT_H
#define QTAWS_APPSYNCCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsappsyncglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AppSync {

class AppSyncClientPrivate;
class CreateApiCacheRequest;
class CreateApiCacheResponse;
class CreateApiKeyRequest;
class CreateApiKeyResponse;
class CreateDataSourceRequest;
class CreateDataSourceResponse;
class CreateFunctionRequest;
class CreateFunctionResponse;
class CreateGraphqlApiRequest;
class CreateGraphqlApiResponse;
class CreateResolverRequest;
class CreateResolverResponse;
class CreateTypeRequest;
class CreateTypeResponse;
class DeleteApiCacheRequest;
class DeleteApiCacheResponse;
class DeleteApiKeyRequest;
class DeleteApiKeyResponse;
class DeleteDataSourceRequest;
class DeleteDataSourceResponse;
class DeleteFunctionRequest;
class DeleteFunctionResponse;
class DeleteGraphqlApiRequest;
class DeleteGraphqlApiResponse;
class DeleteResolverRequest;
class DeleteResolverResponse;
class DeleteTypeRequest;
class DeleteTypeResponse;
class FlushApiCacheRequest;
class FlushApiCacheResponse;
class GetApiCacheRequest;
class GetApiCacheResponse;
class GetDataSourceRequest;
class GetDataSourceResponse;
class GetFunctionRequest;
class GetFunctionResponse;
class GetGraphqlApiRequest;
class GetGraphqlApiResponse;
class GetIntrospectionSchemaRequest;
class GetIntrospectionSchemaResponse;
class GetResolverRequest;
class GetResolverResponse;
class GetSchemaCreationStatusRequest;
class GetSchemaCreationStatusResponse;
class GetTypeRequest;
class GetTypeResponse;
class ListApiKeysRequest;
class ListApiKeysResponse;
class ListDataSourcesRequest;
class ListDataSourcesResponse;
class ListFunctionsRequest;
class ListFunctionsResponse;
class ListGraphqlApisRequest;
class ListGraphqlApisResponse;
class ListResolversRequest;
class ListResolversResponse;
class ListResolversByFunctionRequest;
class ListResolversByFunctionResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTypesRequest;
class ListTypesResponse;
class StartSchemaCreationRequest;
class StartSchemaCreationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApiCacheRequest;
class UpdateApiCacheResponse;
class UpdateApiKeyRequest;
class UpdateApiKeyResponse;
class UpdateDataSourceRequest;
class UpdateDataSourceResponse;
class UpdateFunctionRequest;
class UpdateFunctionResponse;
class UpdateGraphqlApiRequest;
class UpdateGraphqlApiResponse;
class UpdateResolverRequest;
class UpdateResolverResponse;
class UpdateTypeRequest;
class UpdateTypeResponse;

class QTAWSAPPSYNC_EXPORT AppSyncClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppSyncClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AppSyncClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApiCacheResponse * createApiCache(const CreateApiCacheRequest &request);
    CreateApiKeyResponse * createApiKey(const CreateApiKeyRequest &request);
    CreateDataSourceResponse * createDataSource(const CreateDataSourceRequest &request);
    CreateFunctionResponse * createFunction(const CreateFunctionRequest &request);
    CreateGraphqlApiResponse * createGraphqlApi(const CreateGraphqlApiRequest &request);
    CreateResolverResponse * createResolver(const CreateResolverRequest &request);
    CreateTypeResponse * createType(const CreateTypeRequest &request);
    DeleteApiCacheResponse * deleteApiCache(const DeleteApiCacheRequest &request);
    DeleteApiKeyResponse * deleteApiKey(const DeleteApiKeyRequest &request);
    DeleteDataSourceResponse * deleteDataSource(const DeleteDataSourceRequest &request);
    DeleteFunctionResponse * deleteFunction(const DeleteFunctionRequest &request);
    DeleteGraphqlApiResponse * deleteGraphqlApi(const DeleteGraphqlApiRequest &request);
    DeleteResolverResponse * deleteResolver(const DeleteResolverRequest &request);
    DeleteTypeResponse * deleteType(const DeleteTypeRequest &request);
    FlushApiCacheResponse * flushApiCache(const FlushApiCacheRequest &request);
    GetApiCacheResponse * getApiCache(const GetApiCacheRequest &request);
    GetDataSourceResponse * getDataSource(const GetDataSourceRequest &request);
    GetFunctionResponse * getFunction(const GetFunctionRequest &request);
    GetGraphqlApiResponse * getGraphqlApi(const GetGraphqlApiRequest &request);
    GetIntrospectionSchemaResponse * getIntrospectionSchema(const GetIntrospectionSchemaRequest &request);
    GetResolverResponse * getResolver(const GetResolverRequest &request);
    GetSchemaCreationStatusResponse * getSchemaCreationStatus(const GetSchemaCreationStatusRequest &request);
    GetTypeResponse * getType(const GetTypeRequest &request);
    ListApiKeysResponse * listApiKeys(const ListApiKeysRequest &request);
    ListDataSourcesResponse * listDataSources(const ListDataSourcesRequest &request);
    ListFunctionsResponse * listFunctions(const ListFunctionsRequest &request);
    ListGraphqlApisResponse * listGraphqlApis(const ListGraphqlApisRequest &request);
    ListResolversResponse * listResolvers(const ListResolversRequest &request);
    ListResolversByFunctionResponse * listResolversByFunction(const ListResolversByFunctionRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTypesResponse * listTypes(const ListTypesRequest &request);
    StartSchemaCreationResponse * startSchemaCreation(const StartSchemaCreationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApiCacheResponse * updateApiCache(const UpdateApiCacheRequest &request);
    UpdateApiKeyResponse * updateApiKey(const UpdateApiKeyRequest &request);
    UpdateDataSourceResponse * updateDataSource(const UpdateDataSourceRequest &request);
    UpdateFunctionResponse * updateFunction(const UpdateFunctionRequest &request);
    UpdateGraphqlApiResponse * updateGraphqlApi(const UpdateGraphqlApiRequest &request);
    UpdateResolverResponse * updateResolver(const UpdateResolverRequest &request);
    UpdateTypeResponse * updateType(const UpdateTypeRequest &request);

private:
    Q_DECLARE_PRIVATE(AppSyncClient)
    Q_DISABLE_COPY(AppSyncClient)

};

} // namespace AppSync
} // namespace QtAws

#endif
