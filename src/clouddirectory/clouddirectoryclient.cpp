/*
    Copyright 2013-2018 Paul Colby

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

#include "clouddirectoryclient.h"
#include "clouddirectoryclient_p.h"

#include "core/awssignaturev4.h"
#include "addfacettoobjectrequest.h"
#include "addfacettoobjectresponse.h"
#include "applyschemarequest.h"
#include "applyschemaresponse.h"
#include "attachobjectrequest.h"
#include "attachobjectresponse.h"
#include "attachpolicyrequest.h"
#include "attachpolicyresponse.h"
#include "attachtoindexrequest.h"
#include "attachtoindexresponse.h"
#include "attachtypedlinkrequest.h"
#include "attachtypedlinkresponse.h"
#include "batchreadrequest.h"
#include "batchreadresponse.h"
#include "batchwriterequest.h"
#include "batchwriteresponse.h"
#include "createdirectoryrequest.h"
#include "createdirectoryresponse.h"
#include "createfacetrequest.h"
#include "createfacetresponse.h"
#include "createindexrequest.h"
#include "createindexresponse.h"
#include "createobjectrequest.h"
#include "createobjectresponse.h"
#include "createschemarequest.h"
#include "createschemaresponse.h"
#include "createtypedlinkfacetrequest.h"
#include "createtypedlinkfacetresponse.h"
#include "deletedirectoryrequest.h"
#include "deletedirectoryresponse.h"
#include "deletefacetrequest.h"
#include "deletefacetresponse.h"
#include "deleteobjectrequest.h"
#include "deleteobjectresponse.h"
#include "deleteschemarequest.h"
#include "deleteschemaresponse.h"
#include "deletetypedlinkfacetrequest.h"
#include "deletetypedlinkfacetresponse.h"
#include "detachfromindexrequest.h"
#include "detachfromindexresponse.h"
#include "detachobjectrequest.h"
#include "detachobjectresponse.h"
#include "detachpolicyrequest.h"
#include "detachpolicyresponse.h"
#include "detachtypedlinkrequest.h"
#include "detachtypedlinkresponse.h"
#include "disabledirectoryrequest.h"
#include "disabledirectoryresponse.h"
#include "enabledirectoryrequest.h"
#include "enabledirectoryresponse.h"
#include "getappliedschemaversionrequest.h"
#include "getappliedschemaversionresponse.h"
#include "getdirectoryrequest.h"
#include "getdirectoryresponse.h"
#include "getfacetrequest.h"
#include "getfacetresponse.h"
#include "getlinkattributesrequest.h"
#include "getlinkattributesresponse.h"
#include "getobjectattributesrequest.h"
#include "getobjectattributesresponse.h"
#include "getobjectinformationrequest.h"
#include "getobjectinformationresponse.h"
#include "getschemaasjsonrequest.h"
#include "getschemaasjsonresponse.h"
#include "gettypedlinkfacetinformationrequest.h"
#include "gettypedlinkfacetinformationresponse.h"
#include "listappliedschemaarnsrequest.h"
#include "listappliedschemaarnsresponse.h"
#include "listattachedindicesrequest.h"
#include "listattachedindicesresponse.h"
#include "listdevelopmentschemaarnsrequest.h"
#include "listdevelopmentschemaarnsresponse.h"
#include "listdirectoriesrequest.h"
#include "listdirectoriesresponse.h"
#include "listfacetattributesrequest.h"
#include "listfacetattributesresponse.h"
#include "listfacetnamesrequest.h"
#include "listfacetnamesresponse.h"
#include "listincomingtypedlinksrequest.h"
#include "listincomingtypedlinksresponse.h"
#include "listindexrequest.h"
#include "listindexresponse.h"
#include "listobjectattributesrequest.h"
#include "listobjectattributesresponse.h"
#include "listobjectchildrenrequest.h"
#include "listobjectchildrenresponse.h"
#include "listobjectparentpathsrequest.h"
#include "listobjectparentpathsresponse.h"
#include "listobjectparentsrequest.h"
#include "listobjectparentsresponse.h"
#include "listobjectpoliciesrequest.h"
#include "listobjectpoliciesresponse.h"
#include "listoutgoingtypedlinksrequest.h"
#include "listoutgoingtypedlinksresponse.h"
#include "listpolicyattachmentsrequest.h"
#include "listpolicyattachmentsresponse.h"
#include "listpublishedschemaarnsrequest.h"
#include "listpublishedschemaarnsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtypedlinkfacetattributesrequest.h"
#include "listtypedlinkfacetattributesresponse.h"
#include "listtypedlinkfacetnamesrequest.h"
#include "listtypedlinkfacetnamesresponse.h"
#include "lookuppolicyrequest.h"
#include "lookuppolicyresponse.h"
#include "publishschemarequest.h"
#include "publishschemaresponse.h"
#include "putschemafromjsonrequest.h"
#include "putschemafromjsonresponse.h"
#include "removefacetfromobjectrequest.h"
#include "removefacetfromobjectresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatefacetrequest.h"
#include "updatefacetresponse.h"
#include "updatelinkattributesrequest.h"
#include "updatelinkattributesresponse.h"
#include "updateobjectattributesrequest.h"
#include "updateobjectattributesresponse.h"
#include "updateschemarequest.h"
#include "updateschemaresponse.h"
#include "updatetypedlinkfacetrequest.h"
#include "updatetypedlinkfacetresponse.h"
#include "upgradeappliedschemarequest.h"
#include "upgradeappliedschemaresponse.h"
#include "upgradepublishedschemarequest.h"
#include "upgradepublishedschemaresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudDirectory
 * \brief Contains classess for accessing Amazon CloudDirectory.
 *
 * \inmodule QtAwsCloudDirectory
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CloudDirectoryClient
 * \brief The CloudDirectoryClient class provides access to the Amazon CloudDirectory service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 */

/*!
 * \brief Constructs a CloudDirectoryClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudDirectoryClient::CloudDirectoryClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudDirectoryClientPrivate(this), parent)
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

/*!
 * \overload CloudDirectoryClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudDirectoryClient::CloudDirectoryClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudDirectoryClientPrivate(this), parent)
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

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * AddFacetToObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new <a>Facet</a> to an object. An object can have more than one facet applied on
 */
AddFacetToObjectResponse * CloudDirectoryClient::addFacetToObject(const AddFacetToObjectRequest &request)
{
    return qobject_cast<AddFacetToObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ApplySchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the input published schema, at the specified version, into the <a>Directory</a> with the same name and version as
 * that of the published
 */
ApplySchemaResponse * CloudDirectoryClient::applySchema(const ApplySchemaRequest &request)
{
    return qobject_cast<ApplySchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * AttachObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<AttachObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * AttachPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a policy object to a regular object. An object can have a limited number of attached
 */
AttachPolicyResponse * CloudDirectoryClient::attachPolicy(const AttachPolicyRequest &request)
{
    return qobject_cast<AttachPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * AttachToIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified object to the specified
 */
AttachToIndexResponse * CloudDirectoryClient::attachToIndex(const AttachToIndexRequest &request)
{
    return qobject_cast<AttachToIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * AttachTypedLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a typed link to a specified source and target object. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
AttachTypedLinkResponse * CloudDirectoryClient::attachTypedLink(const AttachTypedLinkRequest &request)
{
    return qobject_cast<AttachTypedLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * BatchReadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Performs all the read operations in a batch.
 */
BatchReadResponse * CloudDirectoryClient::batchRead(const BatchReadRequest &request)
{
    return qobject_cast<BatchReadResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * BatchWriteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Performs all the write operations in a batch. Either all the operations succeed or
 */
BatchWriteResponse * CloudDirectoryClient::batchWrite(const BatchWriteRequest &request)
{
    return qobject_cast<BatchWriteResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * CreateDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a>Directory</a> by copying the published schema into the directory. A directory cannot be created without a
 */
CreateDirectoryResponse * CloudDirectoryClient::createDirectory(const CreateDirectoryRequest &request)
{
    return qobject_cast<CreateDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * CreateFacetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new <a>Facet</a> in a schema. Facet creation is allowed only in development or applied
 */
CreateFacetResponse * CloudDirectoryClient::createFacet(const CreateFacetRequest &request)
{
    return qobject_cast<CreateFacetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * CreateIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an index object. See <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_indexing.html">Indexing</a> for more
 */
CreateIndexResponse * CloudDirectoryClient::createIndex(const CreateIndexRequest &request)
{
    return qobject_cast<CreateIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * CreateObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an object in a <a>Directory</a>. Additionally attaches the object to a parent, if a parent reference and
 * <code>LinkName</code> is specified. An object is simply a collection of <a>Facet</a> attributes. You can also use this
 * API call to create a policy object, if the facet from which you create the object is a policy facet.
 */
CreateObjectResponse * CloudDirectoryClient::createObject(const CreateObjectRequest &request)
{
    return qobject_cast<CreateObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * CreateSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<CreateSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * CreateTypedLinkFacetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
CreateTypedLinkFacetResponse * CloudDirectoryClient::createTypedLinkFacet(const CreateTypedLinkFacetRequest &request)
{
    return qobject_cast<CreateTypedLinkFacetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DeleteDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a directory. Only disabled directories can be deleted. A deleted directory cannot be undone. Exercise extreme
 * caution when deleting
 */
DeleteDirectoryResponse * CloudDirectoryClient::deleteDirectory(const DeleteDirectoryRequest &request)
{
    return qobject_cast<DeleteDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DeleteFacetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a given <a>Facet</a>. All attributes and <a>Rule</a>s that are associated with the facet will be deleted. Only
 * development schema facets are allowed
 */
DeleteFacetResponse * CloudDirectoryClient::deleteFacet(const DeleteFacetRequest &request)
{
    return qobject_cast<DeleteFacetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DeleteObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an object and its associated attributes. Only objects with no children and no parents can be
 */
DeleteObjectResponse * CloudDirectoryClient::deleteObject(const DeleteObjectRequest &request)
{
    return qobject_cast<DeleteObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DeleteSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a given schema. Schemas in a development and published state can only be deleted.
 */
DeleteSchemaResponse * CloudDirectoryClient::deleteSchema(const DeleteSchemaRequest &request)
{
    return qobject_cast<DeleteSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DeleteTypedLinkFacetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
DeleteTypedLinkFacetResponse * CloudDirectoryClient::deleteTypedLinkFacet(const DeleteTypedLinkFacetRequest &request)
{
    return qobject_cast<DeleteTypedLinkFacetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DetachFromIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches the specified object from the specified
 */
DetachFromIndexResponse * CloudDirectoryClient::detachFromIndex(const DetachFromIndexRequest &request)
{
    return qobject_cast<DetachFromIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DetachObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a given object from the parent object. The object that is to be detached from the parent is specified by the
 * link
 */
DetachObjectResponse * CloudDirectoryClient::detachObject(const DetachObjectRequest &request)
{
    return qobject_cast<DetachObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DetachPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a policy from an
 */
DetachPolicyResponse * CloudDirectoryClient::detachPolicy(const DetachPolicyRequest &request)
{
    return qobject_cast<DetachPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DetachTypedLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a typed link from a specified source and target object. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
DetachTypedLinkResponse * CloudDirectoryClient::detachTypedLink(const DetachTypedLinkRequest &request)
{
    return qobject_cast<DetachTypedLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * DisableDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the specified directory. Disabled directories cannot be read or written to. Only enabled directories can be
 * disabled. Disabled directories may be
 */
DisableDirectoryResponse * CloudDirectoryClient::disableDirectory(const DisableDirectoryRequest &request)
{
    return qobject_cast<DisableDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * EnableDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the specified directory. Only disabled directories can be enabled. Once enabled, the directory can then be read
 * and written
 */
EnableDirectoryResponse * CloudDirectoryClient::enableDirectory(const EnableDirectoryRequest &request)
{
    return qobject_cast<EnableDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * GetAppliedSchemaVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns current applied schema version ARN, including the minor version in
 */
GetAppliedSchemaVersionResponse * CloudDirectoryClient::getAppliedSchemaVersion(const GetAppliedSchemaVersionRequest &request)
{
    return qobject_cast<GetAppliedSchemaVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * GetDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata about a
 */
GetDirectoryResponse * CloudDirectoryClient::getDirectory(const GetDirectoryRequest &request)
{
    return qobject_cast<GetDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * GetFacetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details of the <a>Facet</a>, such as facet name, attributes, <a>Rule</a>s, or <code>ObjectType</code>. You can call
 * this on all kinds of schema facets -- published, development, or
 */
GetFacetResponse * CloudDirectoryClient::getFacet(const GetFacetRequest &request)
{
    return qobject_cast<GetFacetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * GetLinkAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves attributes that are associated with a typed
 */
GetLinkAttributesResponse * CloudDirectoryClient::getLinkAttributes(const GetLinkAttributesRequest &request)
{
    return qobject_cast<GetLinkAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * GetObjectAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves attributes within a facet that are associated with an
 */
GetObjectAttributesResponse * CloudDirectoryClient::getObjectAttributes(const GetObjectAttributesRequest &request)
{
    return qobject_cast<GetObjectAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * GetObjectInformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata about an
 */
GetObjectInformationResponse * CloudDirectoryClient::getObjectInformation(const GetObjectInformationRequest &request)
{
    return qobject_cast<GetObjectInformationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * GetSchemaAsJsonResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a JSON representation of the schema. See <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_schemas.html#jsonformat">JSON Schema Format</a>
 * for more
 */
GetSchemaAsJsonResponse * CloudDirectoryClient::getSchemaAsJson(const GetSchemaAsJsonRequest &request)
{
    return qobject_cast<GetSchemaAsJsonResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * GetTypedLinkFacetInformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the identity attribute order for a specific <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
GetTypedLinkFacetInformationResponse * CloudDirectoryClient::getTypedLinkFacetInformation(const GetTypedLinkFacetInformationRequest &request)
{
    return qobject_cast<GetTypedLinkFacetInformationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListAppliedSchemaArnsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists schema major versions applied to a directory. If <code>SchemaArn</code> is provided, lists the minor
 */
ListAppliedSchemaArnsResponse * CloudDirectoryClient::listAppliedSchemaArns(const ListAppliedSchemaArnsRequest &request)
{
    return qobject_cast<ListAppliedSchemaArnsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListAttachedIndicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists indices attached to the specified
 */
ListAttachedIndicesResponse * CloudDirectoryClient::listAttachedIndices(const ListAttachedIndicesRequest &request)
{
    return qobject_cast<ListAttachedIndicesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListDevelopmentSchemaArnsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves each Amazon Resource Name (ARN) of schemas in the development
 */
ListDevelopmentSchemaArnsResponse * CloudDirectoryClient::listDevelopmentSchemaArns(const ListDevelopmentSchemaArnsRequest &request)
{
    return qobject_cast<ListDevelopmentSchemaArnsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListDirectoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists directories created within an
 */
ListDirectoriesResponse * CloudDirectoryClient::listDirectories(const ListDirectoriesRequest &request)
{
    return qobject_cast<ListDirectoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListFacetAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves attributes attached to the
 */
ListFacetAttributesResponse * CloudDirectoryClient::listFacetAttributes(const ListFacetAttributesRequest &request)
{
    return qobject_cast<ListFacetAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListFacetNamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the names of facets that exist in a
 */
ListFacetNamesResponse * CloudDirectoryClient::listFacetNames(const ListFacetNamesRequest &request)
{
    return qobject_cast<ListFacetNamesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListIncomingTypedLinksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of all the incoming <a>TypedLinkSpecifier</a> information for an object. It also supports
 * filtering by typed link facet and identity attributes. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
ListIncomingTypedLinksResponse * CloudDirectoryClient::listIncomingTypedLinks(const ListIncomingTypedLinksRequest &request)
{
    return qobject_cast<ListIncomingTypedLinksResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists objects attached to the specified
 */
ListIndexResponse * CloudDirectoryClient::listIndex(const ListIndexRequest &request)
{
    return qobject_cast<ListIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListObjectAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all attributes that are associated with an object.
 */
ListObjectAttributesResponse * CloudDirectoryClient::listObjectAttributes(const ListObjectAttributesRequest &request)
{
    return qobject_cast<ListObjectAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListObjectChildrenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of child objects that are associated with a given
 */
ListObjectChildrenResponse * CloudDirectoryClient::listObjectChildren(const ListObjectChildrenRequest &request)
{
    return qobject_cast<ListObjectChildrenResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListObjectParentPathsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<ListObjectParentPathsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListObjectParentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists parent objects that are associated with a given object in pagination
 */
ListObjectParentsResponse * CloudDirectoryClient::listObjectParents(const ListObjectParentsRequest &request)
{
    return qobject_cast<ListObjectParentsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListObjectPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns policies attached to an object in pagination
 */
ListObjectPoliciesResponse * CloudDirectoryClient::listObjectPolicies(const ListObjectPoliciesRequest &request)
{
    return qobject_cast<ListObjectPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListOutgoingTypedLinksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of all the outgoing <a>TypedLinkSpecifier</a> information for an object. It also supports
 * filtering by typed link facet and identity attributes. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
ListOutgoingTypedLinksResponse * CloudDirectoryClient::listOutgoingTypedLinks(const ListOutgoingTypedLinksRequest &request)
{
    return qobject_cast<ListOutgoingTypedLinksResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListPolicyAttachmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all of the <code>ObjectIdentifiers</code> to which a given policy is
 */
ListPolicyAttachmentsResponse * CloudDirectoryClient::listPolicyAttachments(const ListPolicyAttachmentsRequest &request)
{
    return qobject_cast<ListPolicyAttachmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListPublishedSchemaArnsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the major version families of each published schema. If a major version ARN is provided as <code>SchemaArn</code>,
 * the minor version revisions in that family are listed
 */
ListPublishedSchemaArnsResponse * CloudDirectoryClient::listPublishedSchemaArns(const ListPublishedSchemaArnsRequest &request)
{
    return qobject_cast<ListPublishedSchemaArnsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns tags for a resource. Tagging is currently supported only for directories with a limit of 50 tags per directory.
 * All 50 tags are returned for a given directory with this API
 */
ListTagsForResourceResponse * CloudDirectoryClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListTypedLinkFacetAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of all attribute definitions for a particular <a>TypedLinkFacet</a>. For more information, see
 * <a href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
ListTypedLinkFacetAttributesResponse * CloudDirectoryClient::listTypedLinkFacetAttributes(const ListTypedLinkFacetAttributesRequest &request)
{
    return qobject_cast<ListTypedLinkFacetAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * ListTypedLinkFacetNamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of <code>TypedLink</code> facet names for a particular schema. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
ListTypedLinkFacetNamesResponse * CloudDirectoryClient::listTypedLinkFacetNames(const ListTypedLinkFacetNamesRequest &request)
{
    return qobject_cast<ListTypedLinkFacetNamesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * LookupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all policies from the root of the <a>Directory</a> to the object specified. If there are no policies present, an
 * empty list is returned. If policies are present, and if some objects don't have the policies attached, it returns the
 * <code>ObjectIdentifier</code> for such objects. If policies are present, it returns <code>ObjectIdentifier</code>,
 * <code>policyId</code>, and <code>policyType</code>. Paths that don't lead to the root from the target object are
 * ignored. For more information, see <a
 */
LookupPolicyResponse * CloudDirectoryClient::lookupPolicy(const LookupPolicyRequest &request)
{
    return qobject_cast<LookupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * PublishSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Publishes a development schema with a major version and a recommended minor
 */
PublishSchemaResponse * CloudDirectoryClient::publishSchema(const PublishSchemaRequest &request)
{
    return qobject_cast<PublishSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * PutSchemaFromJsonResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows a schema to be updated using JSON upload. Only available for development schemas. See <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/cd_schemas.html#jsonformat">JSON Schema Format</a>
 * for more
 */
PutSchemaFromJsonResponse * CloudDirectoryClient::putSchemaFromJson(const PutSchemaFromJsonRequest &request)
{
    return qobject_cast<PutSchemaFromJsonResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * RemoveFacetFromObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified facet from the specified
 */
RemoveFacetFromObjectResponse * CloudDirectoryClient::removeFacetFromObject(const RemoveFacetFromObjectRequest &request)
{
    return qobject_cast<RemoveFacetFromObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An API operation for adding tags to a
 */
TagResourceResponse * CloudDirectoryClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An API operation for removing tags from a
 */
UntagResourceResponse * CloudDirectoryClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * UpdateFacetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UpdateFacetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * UpdateLinkAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a given typed link’s attributes. Attributes to be updated must not contribute to the typed link’s identity, as
 * defined by its
 */
UpdateLinkAttributesResponse * CloudDirectoryClient::updateLinkAttributes(const UpdateLinkAttributesRequest &request)
{
    return qobject_cast<UpdateLinkAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * UpdateObjectAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a given object's
 */
UpdateObjectAttributesResponse * CloudDirectoryClient::updateObjectAttributes(const UpdateObjectAttributesRequest &request)
{
    return qobject_cast<UpdateObjectAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * UpdateSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the schema name with a new name. Only development schema names can be
 */
UpdateSchemaResponse * CloudDirectoryClient::updateSchema(const UpdateSchemaRequest &request)
{
    return qobject_cast<UpdateSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * UpdateTypedLinkFacetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a <a>TypedLinkFacet</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/objectsandlinks.html#typedlink">Typed
 */
UpdateTypedLinkFacetResponse * CloudDirectoryClient::updateTypedLinkFacet(const UpdateTypedLinkFacetRequest &request)
{
    return qobject_cast<UpdateTypedLinkFacetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * UpgradeAppliedSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Upgrades a single directory in-place using the <code>PublishedSchemaArn</code> with schema updates found in
 * <code>MinorVersion</code>. Backwards-compatible minor version upgrades are instantaneously available for readers on all
 * objects in the directory. Note: This is a synchronous API call and upgrades only one schema on a given directory per
 * call. To upgrade multiple directories from one schema, you would need to call this API on each
 */
UpgradeAppliedSchemaResponse * CloudDirectoryClient::upgradeAppliedSchema(const UpgradeAppliedSchemaRequest &request)
{
    return qobject_cast<UpgradeAppliedSchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudDirectoryClient service, and returns a pointer to an
 * UpgradePublishedSchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Upgrades a published schema under a new minor version revision using the current contents of
 */
UpgradePublishedSchemaResponse * CloudDirectoryClient::upgradePublishedSchema(const UpgradePublishedSchemaRequest &request)
{
    return qobject_cast<UpgradePublishedSchemaResponse *>(send(request));
}

/*!
 * \class QtAws::CloudDirectory::CloudDirectoryClientPrivate
 * \brief The CloudDirectoryClientPrivate class provides private implementation for CloudDirectoryClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CloudDirectoryClientPrivate object with public implementation \a q.
 */
CloudDirectoryClientPrivate::CloudDirectoryClientPrivate(CloudDirectoryClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudDirectory
} // namespace QtAws
