/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_APPSYNCCLIENT_H
#define QTAWS_APPSYNCCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AppSync {

class AppSyncClientPrivate;

class QTAWS_EXPORT AppSyncClient : public AwsAbstractClient {
    Q_OBJECT

public:
    AppSyncClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AppSyncClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApiKeyResponse * createApiKey(const CreateApiKeyRequest &request);
    CreateDataSourceResponse * createDataSource(const CreateDataSourceRequest &request);
    CreateGraphqlApiResponse * createGraphqlApi(const CreateGraphqlApiRequest &request);
    CreateResolverResponse * createResolver(const CreateResolverRequest &request);
    CreateTypeResponse * createType(const CreateTypeRequest &request);
    DeleteApiKeyResponse * deleteApiKey(const DeleteApiKeyRequest &request);
    DeleteDataSourceResponse * deleteDataSource(const DeleteDataSourceRequest &request);
    DeleteGraphqlApiResponse * deleteGraphqlApi(const DeleteGraphqlApiRequest &request);
    DeleteResolverResponse * deleteResolver(const DeleteResolverRequest &request);
    DeleteTypeResponse * deleteType(const DeleteTypeRequest &request);
    GetDataSourceResponse * getDataSource(const GetDataSourceRequest &request);
    GetGraphqlApiResponse * getGraphqlApi(const GetGraphqlApiRequest &request);
    GetIntrospectionSchemaResponse * getIntrospectionSchema(const GetIntrospectionSchemaRequest &request);
    GetResolverResponse * getResolver(const GetResolverRequest &request);
    GetSchemaCreationStatusResponse * getSchemaCreationStatus(const GetSchemaCreationStatusRequest &request);
    GetTypeResponse * getType(const GetTypeRequest &request);
    ListApiKeysResponse * listApiKeys(const ListApiKeysRequest &request);
    ListDataSourcesResponse * listDataSources(const ListDataSourcesRequest &request);
    ListGraphqlApisResponse * listGraphqlApis(const ListGraphqlApisRequest &request);
    ListResolversResponse * listResolvers(const ListResolversRequest &request);
    ListTypesResponse * listTypes(const ListTypesRequest &request);
    StartSchemaCreationResponse * startSchemaCreation(const StartSchemaCreationRequest &request);
    UpdateApiKeyResponse * updateApiKey(const UpdateApiKeyRequest &request);
    UpdateDataSourceResponse * updateDataSource(const UpdateDataSourceRequest &request);
    UpdateGraphqlApiResponse * updateGraphqlApi(const UpdateGraphqlApiRequest &request);
    UpdateResolverResponse * updateResolver(const UpdateResolverRequest &request);
    UpdateTypeResponse * updateType(const UpdateTypeRequest &request);

private:
    Q_DECLARE_PRIVATE(AppSyncClient)
    Q_DISABLE_COPY(AppSyncClient)

};

} // namespace AppSync
} // namespace AWS

#endif
