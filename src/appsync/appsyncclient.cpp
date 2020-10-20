/*
    Copyright 2013-2020 Paul Colby

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

#include "appsyncclient.h"
#include "appsyncclient_p.h"

#include "core/awssignaturev4.h"
#include "createapikeyrequest.h"
#include "createapikeyresponse.h"
#include "createdatasourcerequest.h"
#include "createdatasourceresponse.h"
#include "createfunctionrequest.h"
#include "createfunctionresponse.h"
#include "creategraphqlapirequest.h"
#include "creategraphqlapiresponse.h"
#include "createresolverrequest.h"
#include "createresolverresponse.h"
#include "createtyperequest.h"
#include "createtyperesponse.h"
#include "deleteapikeyrequest.h"
#include "deleteapikeyresponse.h"
#include "deletedatasourcerequest.h"
#include "deletedatasourceresponse.h"
#include "deletefunctionrequest.h"
#include "deletefunctionresponse.h"
#include "deletegraphqlapirequest.h"
#include "deletegraphqlapiresponse.h"
#include "deleteresolverrequest.h"
#include "deleteresolverresponse.h"
#include "deletetyperequest.h"
#include "deletetyperesponse.h"
#include "getdatasourcerequest.h"
#include "getdatasourceresponse.h"
#include "getfunctionrequest.h"
#include "getfunctionresponse.h"
#include "getgraphqlapirequest.h"
#include "getgraphqlapiresponse.h"
#include "getintrospectionschemarequest.h"
#include "getintrospectionschemaresponse.h"
#include "getresolverrequest.h"
#include "getresolverresponse.h"
#include "getschemacreationstatusrequest.h"
#include "getschemacreationstatusresponse.h"
#include "gettyperequest.h"
#include "gettyperesponse.h"
#include "listapikeysrequest.h"
#include "listapikeysresponse.h"
#include "listdatasourcesrequest.h"
#include "listdatasourcesresponse.h"
#include "listfunctionsrequest.h"
#include "listfunctionsresponse.h"
#include "listgraphqlapisrequest.h"
#include "listgraphqlapisresponse.h"
#include "listresolversrequest.h"
#include "listresolversresponse.h"
#include "listresolversbyfunctionrequest.h"
#include "listresolversbyfunctionresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtypesrequest.h"
#include "listtypesresponse.h"
#include "startschemacreationrequest.h"
#include "startschemacreationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapikeyrequest.h"
#include "updateapikeyresponse.h"
#include "updatedatasourcerequest.h"
#include "updatedatasourceresponse.h"
#include "updatefunctionrequest.h"
#include "updatefunctionresponse.h"
#include "updategraphqlapirequest.h"
#include "updategraphqlapiresponse.h"
#include "updateresolverrequest.h"
#include "updateresolverresponse.h"
#include "updatetyperequest.h"
#include "updatetyperesponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppSync
 * \brief Contains classess for accessing AWS AppSync.
 *
 * \inmodule QtAwsAppSync
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::AppSyncClient
 * \brief The AppSyncClient class provides access to the AWS AppSync service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 */

/*!
 * \brief Constructs a AppSyncClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppSyncClient::AppSyncClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppSyncClientPrivate(this), parent)
{
    Q_D(AppSyncClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("appsync");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS AppSync");
    d->serviceName = QStringLiteral("appsync");
}

/*!
 * \overload AppSyncClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppSyncClient::AppSyncClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppSyncClientPrivate(this), parent)
{
    Q_D(AppSyncClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("appsync");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS AppSync");
    d->serviceName = QStringLiteral("appsync");
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * CreateApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a unique key that you can distribute to clients who are executing your
 */
CreateApiKeyResponse * AppSyncClient::createApiKey(const CreateApiKeyRequest &request)
{
    return qobject_cast<CreateApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * CreateDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>DataSource</code>
 */
CreateDataSourceResponse * AppSyncClient::createDataSource(const CreateDataSourceRequest &request)
{
    return qobject_cast<CreateDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * CreateFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>Function</code>
 *
 * object>
 *
 * A function is a reusable entity. Multiple functions can be used to compose the resolver
 */
CreateFunctionResponse * AppSyncClient::createFunction(const CreateFunctionRequest &request)
{
    return qobject_cast<CreateFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * CreateGraphqlApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>GraphqlApi</code>
 */
CreateGraphqlApiResponse * AppSyncClient::createGraphqlApi(const CreateGraphqlApiRequest &request)
{
    return qobject_cast<CreateGraphqlApiResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * CreateResolverResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>Resolver</code>
 *
 * object>
 *
 * A resolver converts incoming requests into a format that a data source can understand and converts the data source's
 * responses into
 */
CreateResolverResponse * AppSyncClient::createResolver(const CreateResolverRequest &request)
{
    return qobject_cast<CreateResolverResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * CreateTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>Type</code>
 */
CreateTypeResponse * AppSyncClient::createType(const CreateTypeRequest &request)
{
    return qobject_cast<CreateTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * DeleteApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an API
 */
DeleteApiKeyResponse * AppSyncClient::deleteApiKey(const DeleteApiKeyRequest &request)
{
    return qobject_cast<DeleteApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * DeleteDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <code>DataSource</code>
 */
DeleteDataSourceResponse * AppSyncClient::deleteDataSource(const DeleteDataSourceRequest &request)
{
    return qobject_cast<DeleteDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * DeleteFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteFunctionResponse * AppSyncClient::deleteFunction(const DeleteFunctionRequest &request)
{
    return qobject_cast<DeleteFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * DeleteGraphqlApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <code>GraphqlApi</code>
 */
DeleteGraphqlApiResponse * AppSyncClient::deleteGraphqlApi(const DeleteGraphqlApiRequest &request)
{
    return qobject_cast<DeleteGraphqlApiResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * DeleteResolverResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <code>Resolver</code>
 */
DeleteResolverResponse * AppSyncClient::deleteResolver(const DeleteResolverRequest &request)
{
    return qobject_cast<DeleteResolverResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * DeleteTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <code>Type</code>
 */
DeleteTypeResponse * AppSyncClient::deleteType(const DeleteTypeRequest &request)
{
    return qobject_cast<DeleteTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * GetDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a <code>DataSource</code>
 */
GetDataSourceResponse * AppSyncClient::getDataSource(const GetDataSourceRequest &request)
{
    return qobject_cast<GetDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * GetFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a
 */
GetFunctionResponse * AppSyncClient::getFunction(const GetFunctionRequest &request)
{
    return qobject_cast<GetFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * GetGraphqlApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a <code>GraphqlApi</code>
 */
GetGraphqlApiResponse * AppSyncClient::getGraphqlApi(const GetGraphqlApiRequest &request)
{
    return qobject_cast<GetGraphqlApiResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * GetIntrospectionSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the introspection schema for a GraphQL
 */
GetIntrospectionSchemaResponse * AppSyncClient::getIntrospectionSchema(const GetIntrospectionSchemaRequest &request)
{
    return qobject_cast<GetIntrospectionSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * GetResolverResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a <code>Resolver</code>
 */
GetResolverResponse * AppSyncClient::getResolver(const GetResolverRequest &request)
{
    return qobject_cast<GetResolverResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * GetSchemaCreationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current status of a schema creation
 */
GetSchemaCreationStatusResponse * AppSyncClient::getSchemaCreationStatus(const GetSchemaCreationStatusRequest &request)
{
    return qobject_cast<GetSchemaCreationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * GetTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a <code>Type</code>
 */
GetTypeResponse * AppSyncClient::getType(const GetTypeRequest &request)
{
    return qobject_cast<GetTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * ListApiKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the API keys for a given
 *
 * API> <note>
 *
 * API keys are deleted automatically sometime after they expire. However, they may still be included in the response until
 * they have actually been deleted. You can safely call <code>DeleteApiKey</code> to manually delete a key before it's
 * automatically
 */
ListApiKeysResponse * AppSyncClient::listApiKeys(const ListApiKeysRequest &request)
{
    return qobject_cast<ListApiKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * ListDataSourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the data sources for a given
 */
ListDataSourcesResponse * AppSyncClient::listDataSources(const ListDataSourcesRequest &request)
{
    return qobject_cast<ListDataSourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * ListFunctionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List multiple
 */
ListFunctionsResponse * AppSyncClient::listFunctions(const ListFunctionsRequest &request)
{
    return qobject_cast<ListFunctionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * ListGraphqlApisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your GraphQL
 */
ListGraphqlApisResponse * AppSyncClient::listGraphqlApis(const ListGraphqlApisRequest &request)
{
    return qobject_cast<ListGraphqlApisResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * ListResolversResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resolvers for a given API and
 */
ListResolversResponse * AppSyncClient::listResolvers(const ListResolversRequest &request)
{
    return qobject_cast<ListResolversResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * ListResolversByFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the resolvers that are associated with a specific
 */
ListResolversByFunctionResponse * AppSyncClient::listResolversByFunction(const ListResolversByFunctionRequest &request)
{
    return qobject_cast<ListResolversByFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for a
 */
ListTagsForResourceResponse * AppSyncClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * ListTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the types for a given
 */
ListTypesResponse * AppSyncClient::listTypes(const ListTypesRequest &request)
{
    return qobject_cast<ListTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * StartSchemaCreationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new schema to your GraphQL
 *
 * API>
 *
 * This operation is asynchronous. Use to determine when it has
 */
StartSchemaCreationResponse * AppSyncClient::startSchemaCreation(const StartSchemaCreationRequest &request)
{
    return qobject_cast<StartSchemaCreationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tags a resource with user-supplied
 */
TagResourceResponse * AppSyncClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Untags a
 */
UntagResourceResponse * AppSyncClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * UpdateApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an API
 */
UpdateApiKeyResponse * AppSyncClient::updateApiKey(const UpdateApiKeyRequest &request)
{
    return qobject_cast<UpdateApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * UpdateDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a <code>DataSource</code>
 */
UpdateDataSourceResponse * AppSyncClient::updateDataSource(const UpdateDataSourceRequest &request)
{
    return qobject_cast<UpdateDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * UpdateFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a <code>Function</code>
 */
UpdateFunctionResponse * AppSyncClient::updateFunction(const UpdateFunctionRequest &request)
{
    return qobject_cast<UpdateFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * UpdateGraphqlApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a <code>GraphqlApi</code>
 */
UpdateGraphqlApiResponse * AppSyncClient::updateGraphqlApi(const UpdateGraphqlApiRequest &request)
{
    return qobject_cast<UpdateGraphqlApiResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * UpdateResolverResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a <code>Resolver</code>
 */
UpdateResolverResponse * AppSyncClient::updateResolver(const UpdateResolverRequest &request)
{
    return qobject_cast<UpdateResolverResponse *>(send(request));
}

/*!
 * Sends \a request to the AppSyncClient service, and returns a pointer to an
 * UpdateTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a <code>Type</code>
 */
UpdateTypeResponse * AppSyncClient::updateType(const UpdateTypeRequest &request)
{
    return qobject_cast<UpdateTypeResponse *>(send(request));
}

/*!
 * \class QtAws::AppSync::AppSyncClientPrivate
 * \brief The AppSyncClientPrivate class provides private implementation for AppSyncClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a AppSyncClientPrivate object with public implementation \a q.
 */
AppSyncClientPrivate::AppSyncClientPrivate(AppSyncClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AppSync
} // namespace QtAws
