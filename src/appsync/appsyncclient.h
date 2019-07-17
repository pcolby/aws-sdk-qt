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

#ifndef QTAWS_APPSYNCCLIENT_H
#define QTAWS_APPSYNCCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace AppSync {

class AppSyncClientPrivate;
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
class ListTypesRequest;
class ListTypesResponse;
class StartSchemaCreationRequest;
class StartSchemaCreationResponse;
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

class QTAWS_EXPORT AppSyncClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppSyncClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AppSyncClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApiKeyResponse * createApiKey(const CreateApiKeyRequest &request);
    CreateDataSourceResponse * createDataSource(const CreateDataSourceRequest &request);
    CreateFunctionResponse * createFunction(const CreateFunctionRequest &request);
    CreateGraphqlApiResponse * createGraphqlApi(const CreateGraphqlApiRequest &request);
    CreateResolverResponse * createResolver(const CreateResolverRequest &request);
    CreateTypeResponse * createType(const CreateTypeRequest &request);
    DeleteApiKeyResponse * deleteApiKey(const DeleteApiKeyRequest &request);
    DeleteDataSourceResponse * deleteDataSource(const DeleteDataSourceRequest &request);
    DeleteFunctionResponse * deleteFunction(const DeleteFunctionRequest &request);
    DeleteGraphqlApiResponse * deleteGraphqlApi(const DeleteGraphqlApiRequest &request);
    DeleteResolverResponse * deleteResolver(const DeleteResolverRequest &request);
    DeleteTypeResponse * deleteType(const DeleteTypeRequest &request);
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
    ListTypesResponse * listTypes(const ListTypesRequest &request);
    StartSchemaCreationResponse * startSchemaCreation(const StartSchemaCreationRequest &request);
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
