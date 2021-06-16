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

#include "schemasclient.h"
#include "schemasclient_p.h"

#include "core/awssignaturev4.h"
#include "creatediscovererrequest.h"
#include "creatediscovererresponse.h"
#include "createregistryrequest.h"
#include "createregistryresponse.h"
#include "createschemarequest.h"
#include "createschemaresponse.h"
#include "deletediscovererrequest.h"
#include "deletediscovererresponse.h"
#include "deleteregistryrequest.h"
#include "deleteregistryresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deleteschemarequest.h"
#include "deleteschemaresponse.h"
#include "deleteschemaversionrequest.h"
#include "deleteschemaversionresponse.h"
#include "describecodebindingrequest.h"
#include "describecodebindingresponse.h"
#include "describediscovererrequest.h"
#include "describediscovererresponse.h"
#include "describeregistryrequest.h"
#include "describeregistryresponse.h"
#include "describeschemarequest.h"
#include "describeschemaresponse.h"
#include "exportschemarequest.h"
#include "exportschemaresponse.h"
#include "getcodebindingsourcerequest.h"
#include "getcodebindingsourceresponse.h"
#include "getdiscoveredschemarequest.h"
#include "getdiscoveredschemaresponse.h"
#include "getresourcepolicyrequest.h"
#include "getresourcepolicyresponse.h"
#include "listdiscoverersrequest.h"
#include "listdiscoverersresponse.h"
#include "listregistriesrequest.h"
#include "listregistriesresponse.h"
#include "listschemaversionsrequest.h"
#include "listschemaversionsresponse.h"
#include "listschemasrequest.h"
#include "listschemasresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putcodebindingrequest.h"
#include "putcodebindingresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "searchschemasrequest.h"
#include "searchschemasresponse.h"
#include "startdiscovererrequest.h"
#include "startdiscovererresponse.h"
#include "stopdiscovererrequest.h"
#include "stopdiscovererresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatediscovererrequest.h"
#include "updatediscovererresponse.h"
#include "updateregistryrequest.h"
#include "updateregistryresponse.h"
#include "updateschemarequest.h"
#include "updateschemaresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Schemas
 * \brief Contains classess for accessing Schemas.
 *
 * \inmodule QtAwsSchemas
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::SchemasClient
 * \brief The SchemasClient class provides access to the Schemas service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 */

/*!
 * \brief Constructs a SchemasClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SchemasClient::SchemasClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SchemasClientPrivate(this), parent)
{
    Q_D(SchemasClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("schemas");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Schemas");
    d->serviceName = QStringLiteral("schemas");
}

/*!
 * \overload SchemasClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SchemasClient::SchemasClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SchemasClientPrivate(this), parent)
{
    Q_D(SchemasClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("schemas");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Schemas");
    d->serviceName = QStringLiteral("schemas");
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * CreateDiscovererResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateDiscovererResponse * SchemasClient::createDiscoverer(const CreateDiscovererRequest &request)
{
    return qobject_cast<CreateDiscovererResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * CreateRegistryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateRegistryResponse * SchemasClient::createRegistry(const CreateRegistryRequest &request)
{
    return qobject_cast<CreateRegistryResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * CreateSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a schema
 */
CreateSchemaResponse * SchemasClient::createSchema(const CreateSchemaRequest &request)
{
    return qobject_cast<CreateSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * DeleteDiscovererResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteDiscovererResponse * SchemasClient::deleteDiscoverer(const DeleteDiscovererRequest &request)
{
    return qobject_cast<DeleteDiscovererResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * DeleteRegistryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteRegistryResponse * SchemasClient::deleteRegistry(const DeleteRegistryRequest &request)
{
    return qobject_cast<DeleteRegistryResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete the resource-based policy attached to the specified
 */
DeleteResourcePolicyResponse * SchemasClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * DeleteSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a schema
 */
DeleteSchemaResponse * SchemasClient::deleteSchema(const DeleteSchemaRequest &request)
{
    return qobject_cast<DeleteSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * DeleteSchemaVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete the schema version
 */
DeleteSchemaVersionResponse * SchemasClient::deleteSchemaVersion(const DeleteSchemaVersionRequest &request)
{
    return qobject_cast<DeleteSchemaVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * DescribeCodeBindingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe the code binding
 */
DescribeCodeBindingResponse * SchemasClient::describeCodeBinding(const DescribeCodeBindingRequest &request)
{
    return qobject_cast<DescribeCodeBindingResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * DescribeDiscovererResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the
 */
DescribeDiscovererResponse * SchemasClient::describeDiscoverer(const DescribeDiscovererRequest &request)
{
    return qobject_cast<DescribeDiscovererResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * DescribeRegistryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the
 */
DescribeRegistryResponse * SchemasClient::describeRegistry(const DescribeRegistryRequest &request)
{
    return qobject_cast<DescribeRegistryResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * DescribeSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve the schema
 */
DescribeSchemaResponse * SchemasClient::describeSchema(const DescribeSchemaRequest &request)
{
    return qobject_cast<DescribeSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * ExportSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ExportSchemaResponse * SchemasClient::exportSchema(const ExportSchemaRequest &request)
{
    return qobject_cast<ExportSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * GetCodeBindingSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the code binding source
 */
GetCodeBindingSourceResponse * SchemasClient::getCodeBindingSource(const GetCodeBindingSourceRequest &request)
{
    return qobject_cast<GetCodeBindingSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * GetDiscoveredSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the discovered schema that was generated based on sampled
 */
GetDiscoveredSchemaResponse * SchemasClient::getDiscoveredSchema(const GetDiscoveredSchemaRequest &request)
{
    return qobject_cast<GetDiscoveredSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * GetResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resource-based policy attached to a given
 */
GetResourcePolicyResponse * SchemasClient::getResourcePolicy(const GetResourcePolicyRequest &request)
{
    return qobject_cast<GetResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * ListDiscoverersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the
 */
ListDiscoverersResponse * SchemasClient::listDiscoverers(const ListDiscoverersRequest &request)
{
    return qobject_cast<ListDiscoverersResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * ListRegistriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the
 */
ListRegistriesResponse * SchemasClient::listRegistries(const ListRegistriesRequest &request)
{
    return qobject_cast<ListRegistriesResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * ListSchemaVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of the schema versions and related
 */
ListSchemaVersionsResponse * SchemasClient::listSchemaVersions(const ListSchemaVersionsRequest &request)
{
    return qobject_cast<ListSchemaVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * ListSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the
 */
ListSchemasResponse * SchemasClient::listSchemas(const ListSchemasRequest &request)
{
    return qobject_cast<ListSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get tags for
 */
ListTagsForResourceResponse * SchemasClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * PutCodeBindingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Put code binding
 */
PutCodeBindingResponse * SchemasClient::putCodeBinding(const PutCodeBindingRequest &request)
{
    return qobject_cast<PutCodeBindingResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The name of the
 */
PutResourcePolicyResponse * SchemasClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * SearchSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Search the
 */
SearchSchemasResponse * SchemasClient::searchSchemas(const SearchSchemasRequest &request)
{
    return qobject_cast<SearchSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * StartDiscovererResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the
 */
StartDiscovererResponse * SchemasClient::startDiscoverer(const StartDiscovererRequest &request)
{
    return qobject_cast<StartDiscovererResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * StopDiscovererResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the
 */
StopDiscovererResponse * SchemasClient::stopDiscoverer(const StopDiscovererRequest &request)
{
    return qobject_cast<StopDiscovererResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add tags to a
 */
TagResourceResponse * SchemasClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 */
UntagResourceResponse * SchemasClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * UpdateDiscovererResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the
 */
UpdateDiscovererResponse * SchemasClient::updateDiscoverer(const UpdateDiscovererRequest &request)
{
    return qobject_cast<UpdateDiscovererResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * UpdateRegistryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateRegistryResponse * SchemasClient::updateRegistry(const UpdateRegistryRequest &request)
{
    return qobject_cast<UpdateRegistryResponse *>(send(request));
}

/*!
 * Sends \a request to the SchemasClient service, and returns a pointer to an
 * UpdateSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the schema
 */
UpdateSchemaResponse * SchemasClient::updateSchema(const UpdateSchemaRequest &request)
{
    return qobject_cast<UpdateSchemaResponse *>(send(request));
}

/*!
 * \class QtAws::Schemas::SchemasClientPrivate
 * \brief The SchemasClientPrivate class provides private implementation for SchemasClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a SchemasClientPrivate object with public implementation \a q.
 */
SchemasClientPrivate::SchemasClientPrivate(SchemasClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Schemas
} // namespace QtAws
