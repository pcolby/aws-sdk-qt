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
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
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
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Adds a new <a>Facet</a> to an
 */
AddFacetToObjectResponse * CloudDirectoryClient::addFacetToObject(const AddFacetToObjectRequest &request)
{

}

/**
 * Copies the input published schema, at the specified version, into the <a>Directory</a> with the same name and version as
 * that of the published
 */
ApplySchemaResponse * CloudDirectoryClient::applySchema(const ApplySchemaRequest &request)
{

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
 */
AttachObjectResponse * CloudDirectoryClient::attachObject(const AttachObjectRequest &request)
{

}

/**
 * Attaches a policy object to a regular object. An object can have a limited number of attached
 */
AttachPolicyResponse * CloudDirectoryClient::attachPolicy(const AttachPolicyRequest &request)
{

}

/**
 * Attaches the specified object to the specified
 */
AttachToIndexResponse * CloudDirectoryClient::attachToIndex(const AttachToIndexRequest &request)
{

}

/**
 * Attaches a typed link to a specified source and target object. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
AttachTypedLinkResponse * CloudDirectoryClient::attachTypedLink(const AttachTypedLinkRequest &request)
{

}

/**
 * Performs all the read operations in a batch.
 */
BatchReadResponse * CloudDirectoryClient::batchRead(const BatchReadRequest &request)
{

}

/**
 * Performs all the write operations in a batch. Either all the operations succeed or
 */
BatchWriteResponse * CloudDirectoryClient::batchWrite(const BatchWriteRequest &request)
{

}

/**
 * Creates a <a>Directory</a> by copying the published schema into the directory. A directory cannot be created without a
 */
CreateDirectoryResponse * CloudDirectoryClient::createDirectory(const CreateDirectoryRequest &request)
{

}

/**
 * Creates a new <a>Facet</a> in a schema. Facet creation is allowed only in development or applied
 */
CreateFacetResponse * CloudDirectoryClient::createFacet(const CreateFacetRequest &request)
{

}

/**
 * Creates an index object. See <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_indexing.html">Indexing</a> for more
 */
CreateIndexResponse * CloudDirectoryClient::createIndex(const CreateIndexRequest &request)
{

}

/**
 * Creates an object in a <a>Directory</a>. Additionally attaches the object to a parent, if a parent reference and
 * <code>LinkName</code> is specified. An object is simply a collection of <a>Facet</a> attributes. You can also use this
 * API call to create a policy object, if the facet from which you create the object is a policy facet.
 */
CreateObjectResponse * CloudDirectoryClient::createObject(const CreateObjectRequest &request)
{

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
 */
CreateSchemaResponse * CloudDirectoryClient::createSchema(const CreateSchemaRequest &request)
{

}

/**
 * Creates a <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
CreateTypedLinkFacetResponse * CloudDirectoryClient::createTypedLinkFacet(const CreateTypedLinkFacetRequest &request)
{

}

/**
 * Deletes a directory. Only disabled directories can be deleted. A deleted directory cannot be undone. Exercise extreme
 * caution when deleting
 */
DeleteDirectoryResponse * CloudDirectoryClient::deleteDirectory(const DeleteDirectoryRequest &request)
{

}

/**
 * Deletes a given <a>Facet</a>. All attributes and <a>Rule</a>s that are associated with the facet will be deleted. Only
 * development schema facets are allowed
 */
DeleteFacetResponse * CloudDirectoryClient::deleteFacet(const DeleteFacetRequest &request)
{

}

/**
 * Deletes an object and its associated attributes. Only objects with no children and no parents can be
 */
DeleteObjectResponse * CloudDirectoryClient::deleteObject(const DeleteObjectRequest &request)
{

}

/**
 * Deletes a given schema. Schemas in a development and published state can only be deleted.
 */
DeleteSchemaResponse * CloudDirectoryClient::deleteSchema(const DeleteSchemaRequest &request)
{

}

/**
 * Deletes a <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
DeleteTypedLinkFacetResponse * CloudDirectoryClient::deleteTypedLinkFacet(const DeleteTypedLinkFacetRequest &request)
{

}

/**
 * Detaches the specified object from the specified
 */
DetachFromIndexResponse * CloudDirectoryClient::detachFromIndex(const DetachFromIndexRequest &request)
{

}

/**
 * Detaches a given object from the parent object. The object that is to be detached from the parent is specified by the
 * link
 */
DetachObjectResponse * CloudDirectoryClient::detachObject(const DetachObjectRequest &request)
{

}

/**
 * Detaches a policy from an
 */
DetachPolicyResponse * CloudDirectoryClient::detachPolicy(const DetachPolicyRequest &request)
{

}

/**
 * Detaches a typed link from a specified source and target object. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
DetachTypedLinkResponse * CloudDirectoryClient::detachTypedLink(const DetachTypedLinkRequest &request)
{

}

/**
 * Disables the specified directory. Disabled directories cannot be read or written to. Only enabled directories can be
 * disabled. Disabled directories may be
 */
DisableDirectoryResponse * CloudDirectoryClient::disableDirectory(const DisableDirectoryRequest &request)
{

}

/**
 * Enables the specified directory. Only disabled directories can be enabled. Once enabled, the directory can then be read
 * and written
 */
EnableDirectoryResponse * CloudDirectoryClient::enableDirectory(const EnableDirectoryRequest &request)
{

}

/**
 * Returns current applied schema version ARN, including the minor version in
 */
GetAppliedSchemaVersionResponse * CloudDirectoryClient::getAppliedSchemaVersion(const GetAppliedSchemaVersionRequest &request)
{

}

/**
 * Retrieves metadata about a
 */
GetDirectoryResponse * CloudDirectoryClient::getDirectory(const GetDirectoryRequest &request)
{

}

/**
 * Gets details of the <a>Facet</a>, such as facet name, attributes, <a>Rule</a>s, or <code>ObjectType</code>. You can call
 * this on all kinds of schema facets -- published, development, or
 */
GetFacetResponse * CloudDirectoryClient::getFacet(const GetFacetRequest &request)
{

}

/**
 * Retrieves metadata about an
 */
GetObjectInformationResponse * CloudDirectoryClient::getObjectInformation(const GetObjectInformationRequest &request)
{

}

/**
 * Retrieves a JSON representation of the schema. See <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_schemas.html#jsonformat">JSON Schema Format</a>
 * for more
 */
GetSchemaAsJsonResponse * CloudDirectoryClient::getSchemaAsJson(const GetSchemaAsJsonRequest &request)
{

}

/**
 * Returns the identity attribute order for a specific <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
GetTypedLinkFacetInformationResponse * CloudDirectoryClient::getTypedLinkFacetInformation(const GetTypedLinkFacetInformationRequest &request)
{

}

/**
 * Lists schema major versions applied to a directory. If <code>SchemaArn</code> is provided, lists the minor
 */
ListAppliedSchemaArnsResponse * CloudDirectoryClient::listAppliedSchemaArns(const ListAppliedSchemaArnsRequest &request)
{

}

/**
 * Lists indices attached to the specified
 */
ListAttachedIndicesResponse * CloudDirectoryClient::listAttachedIndices(const ListAttachedIndicesRequest &request)
{

}

/**
 * Retrieves each Amazon Resource Name (ARN) of schemas in the development
 */
ListDevelopmentSchemaArnsResponse * CloudDirectoryClient::listDevelopmentSchemaArns(const ListDevelopmentSchemaArnsRequest &request)
{

}

/**
 * Lists directories created within an
 */
ListDirectoriesResponse * CloudDirectoryClient::listDirectories(const ListDirectoriesRequest &request)
{

}

/**
 * Retrieves attributes attached to the
 */
ListFacetAttributesResponse * CloudDirectoryClient::listFacetAttributes(const ListFacetAttributesRequest &request)
{

}

/**
 * Retrieves the names of facets that exist in a
 */
ListFacetNamesResponse * CloudDirectoryClient::listFacetNames(const ListFacetNamesRequest &request)
{

}

/**
 * Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a> information for an object. It also supports
 * filtering by typed link facet and identity attributes. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
ListIncomingTypedLinksResponse * CloudDirectoryClient::listIncomingTypedLinks(const ListIncomingTypedLinksRequest &request)
{

}

/**
 * Lists objects and indexed values attached to the
 */
ListIndexResponse * CloudDirectoryClient::listIndex(const ListIndexRequest &request)
{

}

/**
 * Lists all attributes that are associated with an object.
 */
ListObjectAttributesResponse * CloudDirectoryClient::listObjectAttributes(const ListObjectAttributesRequest &request)
{

}

/**
 * Returns a paginated list of child objects that are associated with a given
 */
ListObjectChildrenResponse * CloudDirectoryClient::listObjectChildren(const ListObjectChildrenRequest &request)
{

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
 */
ListObjectParentPathsResponse * CloudDirectoryClient::listObjectParentPaths(const ListObjectParentPathsRequest &request)
{

}

/**
 * Lists parent objects that are associated with a given object in pagination
 */
ListObjectParentsResponse * CloudDirectoryClient::listObjectParents(const ListObjectParentsRequest &request)
{

}

/**
 * Returns policies attached to an object in pagination
 */
ListObjectPoliciesResponse * CloudDirectoryClient::listObjectPolicies(const ListObjectPoliciesRequest &request)
{

}

/**
 * Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a> information for an object. It also supports
 * filtering by typed link facet and identity attributes. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
ListOutgoingTypedLinksResponse * CloudDirectoryClient::listOutgoingTypedLinks(const ListOutgoingTypedLinksRequest &request)
{

}

/**
 * Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
 */
ListPolicyAttachmentsResponse * CloudDirectoryClient::listPolicyAttachments(const ListPolicyAttachmentsRequest &request)
{

}

/**
 * Lists schema major versions for a published schema. If <code>SchemaArn</code> is provided, lists the minor
 */
ListPublishedSchemaArnsResponse * CloudDirectoryClient::listPublishedSchemaArns(const ListPublishedSchemaArnsRequest &request)
{

}

/**
 * Returns tags for a resource. Tagging is currently supported only for directories with a limit of 50 tags per directory.
 * All 50 tags are returned for a given directory with this API
 */
ListTagsForResourceResponse * CloudDirectoryClient::listTagsForResource(const ListTagsForResourceRequest &request)
{

}

/**
 * Returns a paginated list of all attribute definitions for a particular <a>TypedLinkFacet</a>. For more information, see
 * <a href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
ListTypedLinkFacetAttributesResponse * CloudDirectoryClient::listTypedLinkFacetAttributes(const ListTypedLinkFacetAttributesRequest &request)
{

}

/**
 * Returns a paginated list of <code>TypedLink</code> facet names for a particular schema. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
ListTypedLinkFacetNamesResponse * CloudDirectoryClient::listTypedLinkFacetNames(const ListTypedLinkFacetNamesRequest &request)
{

}

/**
 * Lists all policies from the root of the <a>Directory</a> to the object specified. If there are no policies present, an
 * empty list is returned. If policies are present, and if some objects don't have the policies attached, it returns the
 * <code>ObjectIdentifier</code> for such objects. If policies are present, it returns <code>ObjectIdentifier</code>,
 * <code>policyId</code>, and <code>policyType</code>. Paths that don't lead to the root from the target object are
 * ignored. For more information, see <a
 */
LookupPolicyResponse * CloudDirectoryClient::lookupPolicy(const LookupPolicyRequest &request)
{

}

/**
 * Publishes a development schema with a major version and a recommended minor
 */
PublishSchemaResponse * CloudDirectoryClient::publishSchema(const PublishSchemaRequest &request)
{

}

/**
 * Allows a schema to be updated using JSON upload. Only available for development schemas. See <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_schemas.html#jsonformat">JSON Schema Format</a>
 * for more
 */
PutSchemaFromJsonResponse * CloudDirectoryClient::putSchemaFromJson(const PutSchemaFromJsonRequest &request)
{

}

/**
 * Removes the specified facet from the specified
 */
RemoveFacetFromObjectResponse * CloudDirectoryClient::removeFacetFromObject(const RemoveFacetFromObjectRequest &request)
{

}

/**
 * An API operation for adding tags to a
 */
TagResourceResponse * CloudDirectoryClient::tagResource(const TagResourceRequest &request)
{

}

/**
 * An API operation for removing tags from a
 */
UntagResourceResponse * CloudDirectoryClient::untagResource(const UntagResourceRequest &request)
{

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
 */
UpdateFacetResponse * CloudDirectoryClient::updateFacet(const UpdateFacetRequest &request)
{

}

/**
 * Updates a given object's
 */
UpdateObjectAttributesResponse * CloudDirectoryClient::updateObjectAttributes(const UpdateObjectAttributesRequest &request)
{

}

/**
 * Updates the schema name with a new name. Only development schema names can be
 */
UpdateSchemaResponse * CloudDirectoryClient::updateSchema(const UpdateSchemaRequest &request)
{

}

/**
 * Updates a <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
UpdateTypedLinkFacetResponse * CloudDirectoryClient::updateTypedLinkFacet(const UpdateTypedLinkFacetRequest &request)
{

}

/**
 * Upgrades a single directory in-place using the <code>PublishedSchemaArn</code> with schema updates found in
 * <code>MinorVersion</code>. Backwards-compatible minor version upgrades are instantaneously available for readers on all
 * objects in the directory. Note: This is a synchronous API call and upgrades only one schema on a given directory per
 * call. To upgrade multiple directories from one schema, you would need to call this API on each
 */
UpgradeAppliedSchemaResponse * CloudDirectoryClient::upgradeAppliedSchema(const UpgradeAppliedSchemaRequest &request)
{

}

/**
 * Upgrades a published schema under a new minor version revision using the current contents of
 */
UpgradePublishedSchemaResponse * CloudDirectoryClient::upgradePublishedSchema(const UpgradePublishedSchemaRequest &request)
{

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
