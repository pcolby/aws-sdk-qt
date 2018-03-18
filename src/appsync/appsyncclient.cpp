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

#include "appsyncclient.h"
#include "appsyncclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace AppSync {

/**
 * @class  AppSyncClient
 *
 * @brief  Client for AWS AppSync
 *
 * AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 */

/**
 * @brief  Constructs a new AppSyncClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
AppSyncClient::AppSyncClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AppSyncClientPrivate(this), parent)
{
    Q_D(AppSyncClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new AppSyncClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
AppSyncClient::AppSyncClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AppSyncClientPrivate(this), parent)
{
    Q_D(AppSyncClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Creates a unique key that you can distribute to clients who are executing your
 */
CreateApiKeyResponse * AppSyncClient::createApiKey(const CreateApiKeyRequest &request)
{

}

/**
 * Creates a <code>DataSource</code>
 */
CreateDataSourceResponse * AppSyncClient::createDataSource(const CreateDataSourceRequest &request)
{

}

/**
 * Creates a <code>GraphqlApi</code>
 */
CreateGraphqlApiResponse * AppSyncClient::createGraphqlApi(const CreateGraphqlApiRequest &request)
{

}

/**
 * Creates a <code>Resolver</code>
 *
 * object>
 *
 * A resolver converts incoming requests into a format that a data source can understand and converts the data source's
 * responses into
 */
CreateResolverResponse * AppSyncClient::createResolver(const CreateResolverRequest &request)
{

}

/**
 * Creates a <code>Type</code>
 */
CreateTypeResponse * AppSyncClient::createType(const CreateTypeRequest &request)
{

}

/**
 * Deletes an API
 */
DeleteApiKeyResponse * AppSyncClient::deleteApiKey(const DeleteApiKeyRequest &request)
{

}

/**
 * Deletes a <code>DataSource</code>
 */
DeleteDataSourceResponse * AppSyncClient::deleteDataSource(const DeleteDataSourceRequest &request)
{

}

/**
 * Deletes a <code>GraphqlApi</code>
 */
DeleteGraphqlApiResponse * AppSyncClient::deleteGraphqlApi(const DeleteGraphqlApiRequest &request)
{

}

/**
 * Deletes a <code>Resolver</code>
 */
DeleteResolverResponse * AppSyncClient::deleteResolver(const DeleteResolverRequest &request)
{

}

/**
 * Deletes a <code>Type</code>
 */
DeleteTypeResponse * AppSyncClient::deleteType(const DeleteTypeRequest &request)
{

}

/**
 * Retrieves a <code>DataSource</code>
 */
GetDataSourceResponse * AppSyncClient::getDataSource(const GetDataSourceRequest &request)
{

}

/**
 * Retrieves a <code>GraphqlApi</code>
 */
GetGraphqlApiResponse * AppSyncClient::getGraphqlApi(const GetGraphqlApiRequest &request)
{

}

/**
 * Retrieves the introspection schema for a GraphQL
 */
GetIntrospectionSchemaResponse * AppSyncClient::getIntrospectionSchema(const GetIntrospectionSchemaRequest &request)
{

}

/**
 * Retrieves a <code>Resolver</code>
 */
GetResolverResponse * AppSyncClient::getResolver(const GetResolverRequest &request)
{

}

/**
 * Retrieves the current status of a schema creation
 */
GetSchemaCreationStatusResponse * AppSyncClient::getSchemaCreationStatus(const GetSchemaCreationStatusRequest &request)
{

}

/**
 * Retrieves a <code>Type</code>
 */
GetTypeResponse * AppSyncClient::getType(const GetTypeRequest &request)
{

}

/**
 * Lists the API keys for a given
 */
ListApiKeysResponse * AppSyncClient::listApiKeys(const ListApiKeysRequest &request)
{

}

/**
 * Lists the data sources for a given
 */
ListDataSourcesResponse * AppSyncClient::listDataSources(const ListDataSourcesRequest &request)
{

}

/**
 * Lists your GraphQL
 */
ListGraphqlApisResponse * AppSyncClient::listGraphqlApis(const ListGraphqlApisRequest &request)
{

}

/**
 * Lists the resolvers for a given API and
 */
ListResolversResponse * AppSyncClient::listResolvers(const ListResolversRequest &request)
{

}

/**
 * Lists the types for a given
 */
ListTypesResponse * AppSyncClient::listTypes(const ListTypesRequest &request)
{

}

/**
 * Adds a new schema to your GraphQL
 *
 * API>
 *
 * This operation is asynchronous. Use to determine when it has
 */
StartSchemaCreationResponse * AppSyncClient::startSchemaCreation(const StartSchemaCreationRequest &request)
{

}

/**
 * Updates an API
 */
UpdateApiKeyResponse * AppSyncClient::updateApiKey(const UpdateApiKeyRequest &request)
{

}

/**
 * Updates a <code>DataSource</code>
 */
UpdateDataSourceResponse * AppSyncClient::updateDataSource(const UpdateDataSourceRequest &request)
{

}

/**
 * Updates a <code>GraphqlApi</code>
 */
UpdateGraphqlApiResponse * AppSyncClient::updateGraphqlApi(const UpdateGraphqlApiRequest &request)
{

}

/**
 * Updates a <code>Resolver</code>
 */
UpdateResolverResponse * AppSyncClient::updateResolver(const UpdateResolverRequest &request)
{

}

/**
 * Updates a <code>Type</code>
 */
UpdateTypeResponse * AppSyncClient::updateType(const UpdateTypeRequest &request)
{

}

/**
 * @internal
 *
 * @class  AppSyncClientPrivate
 *
 * @brief  Private implementation for AppSyncClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AppSyncClientPrivate object.
 *
 * @param  q  Pointer to this object's public AppSyncClient instance.
 */
AppSyncClientPrivate::AppSyncClientPrivate(AppSyncClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace AppSync
} // namespace AWS
