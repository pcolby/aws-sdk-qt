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

#include "clouddirectoryclient.h"
#include "clouddirectoryclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CloudDirectoryClient
 *
 * @brief  Client for Amazon CloudDirectory
 *
 * <fullname>Amazon Cloud Directory</fullname>
 *
 * Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 * cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 * programmatically and includes detailed information on data types and errors. For information about AWS Directory
 * Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 */

/**
 * @brief  Constructs a new CloudDirectoryClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudDirectoryClient::CloudDirectoryClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudDirectoryClientPrivate(this), parent)
{
    Q_D(CloudDirectoryClient);
    d->apiVersion = QStringLiteral("2016-05-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("clouddirectory");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudDirectory");
    d->serviceName = QStringLiteral("clouddirectory");
}

/**
 * @brief  Constructs a new CloudDirectoryClient object.
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
CloudDirectoryClient::CloudDirectoryClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudDirectoryClientPrivate(this), parent)
{
    Q_D(CloudDirectoryClient);
    d->apiVersion = QStringLiteral("2016-05-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("clouddirectory");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudDirectory");
    d->serviceName = QStringLiteral("clouddirectory");
}

/**
 * Adds a new <a>Facet</a> to an
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddFacetToObjectResponse * CloudDirectoryClient::addFacetToObject(const AddFacetToObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Copies the input published schema, at the specified version, into the <a>Directory</a> with the same name and version as
 * that of the published
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ApplySchemaResponse * CloudDirectoryClient::applySchema(const ApplySchemaRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Attaches an existing object to another object. An object can be accessed in two
 *
 * ways> <ol> <li>
 *
 * Using the
 *
 * pat> </li> <li>
 *
 * Using <code>ObjectIdentifier</code>
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachObjectResponse * CloudDirectoryClient::attachObject(const AttachObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Attaches a policy object to a regular object. An object can have a limited number of attached
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachPolicyResponse * CloudDirectoryClient::attachPolicy(const AttachPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Attaches the specified object to the specified
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachToIndexResponse * CloudDirectoryClient::attachToIndex(const AttachToIndexRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Attaches a typed link to a specified source and target object. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachTypedLinkResponse * CloudDirectoryClient::attachTypedLink(const AttachTypedLinkRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Performs all the read operations in a batch.
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchReadResponse * CloudDirectoryClient::batchRead(const BatchReadRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Performs all the write operations in a batch. Either all the operations succeed or
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchWriteResponse * CloudDirectoryClient::batchWrite(const BatchWriteRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a <a>Directory</a> by copying the published schema into the directory. A directory cannot be created without a
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDirectoryResponse * CloudDirectoryClient::createDirectory(const CreateDirectoryRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a new <a>Facet</a> in a schema. Facet creation is allowed only in development or applied
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFacetResponse * CloudDirectoryClient::createFacet(const CreateFacetRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates an index object. See <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_indexing.html">Indexing</a> for more
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateIndexResponse * CloudDirectoryClient::createIndex(const CreateIndexRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates an object in a <a>Directory</a>. Additionally attaches the object to a parent, if a parent reference and
 * <code>LinkName</code> is specified. An object is simply a collection of <a>Facet</a> attributes. You can also use this
 * API call to create a policy object, if the facet from which you create the object is a policy facet.
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateObjectResponse * CloudDirectoryClient::createObject(const CreateObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a new schema in a development state. A schema can exist in three
 *
 * phases> <ul> <li>
 *
 * <i>Development:</i> This is a mutable phase of the schema. All new schemas are in the development phase. Once the schema
 * is finalized, it can be
 *
 * published> </li> <li>
 *
 * <i>Published:</i> Published schemas are immutable and have a version associated with
 *
 * them> </li> <li>
 *
 * <i>Applied:</i> Applied schemas are mutable in a way that allows you to add new schema facets. You can also add new,
 * nonrequired attributes to existing schema facets. You can apply only published schemas to directories.
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSchemaResponse * CloudDirectoryClient::createSchema(const CreateSchemaRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTypedLinkFacetResponse * CloudDirectoryClient::createTypedLinkFacet(const CreateTypedLinkFacetRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes a directory. Only disabled directories can be deleted. A deleted directory cannot be undone. Exercise extreme
 * caution when deleting
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDirectoryResponse * CloudDirectoryClient::deleteDirectory(const DeleteDirectoryRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes a given <a>Facet</a>. All attributes and <a>Rule</a>s that are associated with the facet will be deleted. Only
 * development schema facets are allowed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFacetResponse * CloudDirectoryClient::deleteFacet(const DeleteFacetRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes an object and its associated attributes. Only objects with no children and no parents can be
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteObjectResponse * CloudDirectoryClient::deleteObject(const DeleteObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes a given schema. Schemas in a development and published state can only be deleted.
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSchemaResponse * CloudDirectoryClient::deleteSchema(const DeleteSchemaRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes a <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTypedLinkFacetResponse * CloudDirectoryClient::deleteTypedLinkFacet(const DeleteTypedLinkFacetRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Detaches the specified object from the specified
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachFromIndexResponse * CloudDirectoryClient::detachFromIndex(const DetachFromIndexRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Detaches a given object from the parent object. The object that is to be detached from the parent is specified by the
 * link
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachObjectResponse * CloudDirectoryClient::detachObject(const DetachObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Detaches a policy from an
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachPolicyResponse * CloudDirectoryClient::detachPolicy(const DetachPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Detaches a typed link from a specified source and target object. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachTypedLinkResponse * CloudDirectoryClient::detachTypedLink(const DetachTypedLinkRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Disables the specified directory. Disabled directories cannot be read or written to. Only enabled directories can be
 * disabled. Disabled directories may be
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableDirectoryResponse * CloudDirectoryClient::disableDirectory(const DisableDirectoryRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Enables the specified directory. Only disabled directories can be enabled. Once enabled, the directory can then be read
 * and written
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableDirectoryResponse * CloudDirectoryClient::enableDirectory(const EnableDirectoryRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns current applied schema version ARN, including the minor version in
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAppliedSchemaVersionResponse * CloudDirectoryClient::getAppliedSchemaVersion(const GetAppliedSchemaVersionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves metadata about a
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDirectoryResponse * CloudDirectoryClient::getDirectory(const GetDirectoryRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Gets details of the <a>Facet</a>, such as facet name, attributes, <a>Rule</a>s, or <code>ObjectType</code>. You can call
 * this on all kinds of schema facets -- published, development, or
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFacetResponse * CloudDirectoryClient::getFacet(const GetFacetRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves metadata about an
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetObjectInformationResponse * CloudDirectoryClient::getObjectInformation(const GetObjectInformationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves a JSON representation of the schema. See <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_schemas.html#jsonformat">JSON Schema Format</a>
 * for more
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSchemaAsJsonResponse * CloudDirectoryClient::getSchemaAsJson(const GetSchemaAsJsonRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns the identity attribute order for a specific <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTypedLinkFacetInformationResponse * CloudDirectoryClient::getTypedLinkFacetInformation(const GetTypedLinkFacetInformationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists schema major versions applied to a directory. If <code>SchemaArn</code> is provided, lists the minor
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAppliedSchemaArnsResponse * CloudDirectoryClient::listAppliedSchemaArns(const ListAppliedSchemaArnsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists indices attached to the specified
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAttachedIndicesResponse * CloudDirectoryClient::listAttachedIndices(const ListAttachedIndicesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves each Amazon Resource Name (ARN) of schemas in the development
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDevelopmentSchemaArnsResponse * CloudDirectoryClient::listDevelopmentSchemaArns(const ListDevelopmentSchemaArnsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists directories created within an
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDirectoriesResponse * CloudDirectoryClient::listDirectories(const ListDirectoriesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves attributes attached to the
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFacetAttributesResponse * CloudDirectoryClient::listFacetAttributes(const ListFacetAttributesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves the names of facets that exist in a
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFacetNamesResponse * CloudDirectoryClient::listFacetNames(const ListFacetNamesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a> information for an object. It also supports
 * filtering by typed link facet and identity attributes. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIncomingTypedLinksResponse * CloudDirectoryClient::listIncomingTypedLinks(const ListIncomingTypedLinksRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists objects and indexed values attached to the
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIndexResponse * CloudDirectoryClient::listIndex(const ListIndexRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists all attributes that are associated with an object.
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListObjectAttributesResponse * CloudDirectoryClient::listObjectAttributes(const ListObjectAttributesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns a paginated list of child objects that are associated with a given
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListObjectChildrenResponse * CloudDirectoryClient::listObjectChildren(const ListObjectChildrenRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Retrieves all available parent paths for any object type such as node, leaf node, policy node, and index node objects.
 * For more information about objects, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_key_concepts.html#dirstructure">Directory
 *
 * Structure</a>>
 *
 * Use this API to evaluate all parents for an object. The call returns all objects from the root of the directory up to
 * the requested object. The API returns the number of paths based on user-defined <code>MaxResults</code>, in case there
 * are multiple paths to the parent. The order of the paths and nodes returned is consistent among multiple API calls
 * unless the objects are deleted or moved. Paths not leading to the directory root are ignored from the target
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListObjectParentPathsResponse * CloudDirectoryClient::listObjectParentPaths(const ListObjectParentPathsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists parent objects that are associated with a given object in pagination
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListObjectParentsResponse * CloudDirectoryClient::listObjectParents(const ListObjectParentsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns policies attached to an object in pagination
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListObjectPoliciesResponse * CloudDirectoryClient::listObjectPolicies(const ListObjectPoliciesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a> information for an object. It also supports
 * filtering by typed link facet and identity attributes. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOutgoingTypedLinksResponse * CloudDirectoryClient::listOutgoingTypedLinks(const ListOutgoingTypedLinksRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPolicyAttachmentsResponse * CloudDirectoryClient::listPolicyAttachments(const ListPolicyAttachmentsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists schema major versions for a published schema. If <code>SchemaArn</code> is provided, lists the minor
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPublishedSchemaArnsResponse * CloudDirectoryClient::listPublishedSchemaArns(const ListPublishedSchemaArnsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns tags for a resource. Tagging is currently supported only for directories with a limit of 50 tags per directory.
 * All 50 tags are returned for a given directory with this API
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForResourceResponse * CloudDirectoryClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns a paginated list of all attribute definitions for a particular <a>TypedLinkFacet</a>. For more information, see
 * <a href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTypedLinkFacetAttributesResponse * CloudDirectoryClient::listTypedLinkFacetAttributes(const ListTypedLinkFacetAttributesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns a paginated list of <code>TypedLink</code> facet names for a particular schema. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTypedLinkFacetNamesResponse * CloudDirectoryClient::listTypedLinkFacetNames(const ListTypedLinkFacetNamesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists all policies from the root of the <a>Directory</a> to the object specified. If there are no policies present, an
 * empty list is returned. If policies are present, and if some objects don't have the policies attached, it returns the
 * <code>ObjectIdentifier</code> for such objects. If policies are present, it returns <code>ObjectIdentifier</code>,
 * <code>policyId</code>, and <code>policyType</code>. Paths that don't lead to the root from the target object are
 * ignored. For more information, see <a
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
LookupPolicyResponse * CloudDirectoryClient::lookupPolicy(const LookupPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Publishes a development schema with a major version and a recommended minor
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PublishSchemaResponse * CloudDirectoryClient::publishSchema(const PublishSchemaRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Allows a schema to be updated using JSON upload. Only available for development schemas. See <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_schemas.html#jsonformat">JSON Schema Format</a>
 * for more
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutSchemaFromJsonResponse * CloudDirectoryClient::putSchemaFromJson(const PutSchemaFromJsonRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Removes the specified facet from the specified
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveFacetFromObjectResponse * CloudDirectoryClient::removeFacetFromObject(const RemoveFacetFromObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * An API operation for adding tags to a
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * CloudDirectoryClient::tagResource(const TagResourceRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * An API operation for removing tags from a
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * CloudDirectoryClient::untagResource(const UntagResourceRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Does the
 *
 * following> <ol> <li>
 *
 * Adds new <code>Attributes</code>, <code>Rules</code>, or
 *
 * <code>ObjectTypes</code>> </li> <li>
 *
 * Updates existing <code>Attributes</code>, <code>Rules</code>, or
 *
 * <code>ObjectTypes</code>> </li> <li>
 *
 * Deletes existing <code>Attributes</code>, <code>Rules</code>, or
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFacetResponse * CloudDirectoryClient::updateFacet(const UpdateFacetRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Updates a given object's
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateObjectAttributesResponse * CloudDirectoryClient::updateObjectAttributes(const UpdateObjectAttributesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Updates the schema name with a new name. Only development schema names can be
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSchemaResponse * CloudDirectoryClient::updateSchema(const UpdateSchemaRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Updates a <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTypedLinkFacetResponse * CloudDirectoryClient::updateTypedLinkFacet(const UpdateTypedLinkFacetRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Upgrades a single directory in-place using the <code>PublishedSchemaArn</code> with schema updates found in
 * <code>MinorVersion</code>. Backwards-compatible minor version upgrades are instantaneously available for readers on all
 * objects in the directory. Note: This is a synchronous API call and upgrades only one schema on a given directory per
 * call. To upgrade multiple directories from one schema, you would need to call this API on each
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpgradeAppliedSchemaResponse * CloudDirectoryClient::upgradeAppliedSchema(const UpgradeAppliedSchemaRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Upgrades a published schema under a new minor version revision using the current contents of
 *
 * @param  request Request to send to Amazon CloudDirectory.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpgradePublishedSchemaResponse * CloudDirectoryClient::upgradePublishedSchema(const UpgradePublishedSchemaRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  CloudDirectoryClientPrivate
 *
 * @brief  Private implementation for CloudDirectoryClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudDirectoryClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudDirectoryClient instance.
 */
CloudDirectoryClientPrivate::CloudDirectoryClientPrivate(CloudDirectoryClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudDirectory
} // namespace AWS
