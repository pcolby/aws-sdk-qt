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

#include "appregistryclient.h"
#include "appregistryclient_p.h"

#include "core/awssignaturev4.h"
#include "associateattributegrouprequest.h"
#include "associateattributegroupresponse.h"
#include "associateresourcerequest.h"
#include "associateresourceresponse.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createattributegrouprequest.h"
#include "createattributegroupresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "deleteattributegrouprequest.h"
#include "deleteattributegroupresponse.h"
#include "disassociateattributegrouprequest.h"
#include "disassociateattributegroupresponse.h"
#include "disassociateresourcerequest.h"
#include "disassociateresourceresponse.h"
#include "getapplicationrequest.h"
#include "getapplicationresponse.h"
#include "getattributegrouprequest.h"
#include "getattributegroupresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "listassociatedattributegroupsrequest.h"
#include "listassociatedattributegroupsresponse.h"
#include "listassociatedresourcesrequest.h"
#include "listassociatedresourcesresponse.h"
#include "listattributegroupsrequest.h"
#include "listattributegroupsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "syncresourcerequest.h"
#include "syncresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"
#include "updateattributegrouprequest.h"
#include "updateattributegroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppRegistry
 * \brief Contains classess for accessing AWS Service Catalog App Registry (AppRegistry).
 *
 * \inmodule QtAwsAppRegistry
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::AppRegistryClient
 * \brief The AppRegistryClient class provides access to the AWS Service Catalog App Registry (AppRegistry) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 */

/*!
 * \brief Constructs a AppRegistryClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppRegistryClient::AppRegistryClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-06-24"),
    QStringLiteral("servicecatalog-appregistry"),
    QStringLiteral("AWS Service Catalog App Registry"),
    QStringLiteral("servicecatalog"),
    parent), d_ptr(new AppRegistryClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload AppRegistryClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppRegistryClient::AppRegistryClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-06-24"),
    QStringLiteral("servicecatalog-appregistry"),
    QStringLiteral("AWS Service Catalog App Registry"),
    QStringLiteral("servicecatalog"),
    parent), d_ptr(new AppRegistryClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * AssociateAttributeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an attribute group with an application to augment the application's metadata with the group's attributes.
 * This feature enables applications to be described with user-defined details that are machine-readable, such as
 * third-party
 */
AssociateAttributeGroupResponse * AppRegistryClient::associateAttributeGroup(const AssociateAttributeGroupRequest &request)
{
    return qobject_cast<AssociateAttributeGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * AssociateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a resource with an application. Both the resource and the application can be specified either by ID or
 */
AssociateResourceResponse * AppRegistryClient::associateResource(const AssociateResourceRequest &request)
{
    return qobject_cast<AssociateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new application that is the top-level node in a hierarchy of related cloud resource
 */
CreateApplicationResponse * AppRegistryClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * CreateAttributeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new attribute group as a container for user-defined attributes. This feature enables users to have full
 * control over their cloud application's metadata in a rich machine-readable format to facilitate integration with
 * automated workflows and third-party
 */
CreateAttributeGroupResponse * AppRegistryClient::createAttributeGroup(const CreateAttributeGroupRequest &request)
{
    return qobject_cast<CreateAttributeGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an application that is specified either by its application ID or name. All associated attribute groups and
 * resources must be disassociated from it before deleting an
 */
DeleteApplicationResponse * AppRegistryClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * DeleteAttributeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an attribute group, specified either by its attribute group ID or
 */
DeleteAttributeGroupResponse * AppRegistryClient::deleteAttributeGroup(const DeleteAttributeGroupRequest &request)
{
    return qobject_cast<DeleteAttributeGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * DisassociateAttributeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an attribute group from an application to remove the extra attributes contained in the attribute group
 * from the application's metadata. This operation reverts
 */
DisassociateAttributeGroupResponse * AppRegistryClient::disassociateAttributeGroup(const DisassociateAttributeGroupRequest &request)
{
    return qobject_cast<DisassociateAttributeGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * DisassociateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a resource from application. Both the resource and the application can be specified either by ID or
 */
DisassociateResourceResponse * AppRegistryClient::disassociateResource(const DisassociateResourceRequest &request)
{
    return qobject_cast<DisassociateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * GetApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata information about one of your applications. The application can be specified either by its unique ID
 * or by its name (which is unique within one account in one region at a given point in time). Specify by ID in automated
 * workflows if you want to make sure that the exact same application is returned or a
 * <code>ResourceNotFoundException</code> is thrown, avoiding the ABA addressing
 */
GetApplicationResponse * AppRegistryClient::getApplication(const GetApplicationRequest &request)
{
    return qobject_cast<GetApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * GetAttributeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an attribute group, either by its name or its ID. The attribute group can be specified either by its unique ID
 * or by its
 */
GetAttributeGroupResponse * AppRegistryClient::getAttributeGroup(const GetAttributeGroupRequest &request)
{
    return qobject_cast<GetAttributeGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all of your applications. Results are
 */
ListApplicationsResponse * AppRegistryClient::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * ListAssociatedAttributeGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all attribute groups that are associated with specified application. Results are
 */
ListAssociatedAttributeGroupsResponse * AppRegistryClient::listAssociatedAttributeGroups(const ListAssociatedAttributeGroupsRequest &request)
{
    return qobject_cast<ListAssociatedAttributeGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * ListAssociatedResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all resources that are associated with specified application. Results are
 */
ListAssociatedResourcesResponse * AppRegistryClient::listAssociatedResources(const ListAssociatedResourcesRequest &request)
{
    return qobject_cast<ListAssociatedResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * ListAttributeGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all attribute groups which you have access to. Results are
 */
ListAttributeGroupsResponse * AppRegistryClient::listAttributeGroups(const ListAttributeGroupsRequest &request)
{
    return qobject_cast<ListAttributeGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the tags on the
 */
ListTagsForResourceResponse * AppRegistryClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * SyncResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Syncs the resource with what is currently recorded in App registry. Specifically, the resource’s App registry system
 * tags are synced with its associated application. The resource is removed if it is not associated with the application.
 * The caller must have permissions to read and update the
 */
SyncResourceResponse * AppRegistryClient::syncResource(const SyncResourceRequest &request)
{
    return qobject_cast<SyncResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified
 *
 * resource>
 *
 * Each tag consists of a key and an optional value. If a tag with the same key is already associated with the resource,
 * this action updates its
 *
 * value>
 *
 * This operation returns an empty response if the call was
 */
TagResourceResponse * AppRegistryClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 *
 * resource>
 *
 * This operation returns an empty response if the call was
 */
UntagResourceResponse * AppRegistryClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing application with new
 */
UpdateApplicationResponse * AppRegistryClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppRegistryClient service, and returns a pointer to an
 * UpdateAttributeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing attribute group with new details.
 */
UpdateAttributeGroupResponse * AppRegistryClient::updateAttributeGroup(const UpdateAttributeGroupRequest &request)
{
    return qobject_cast<UpdateAttributeGroupResponse *>(send(request));
}

/*!
 * \class QtAws::AppRegistry::AppRegistryClientPrivate
 * \brief The AppRegistryClientPrivate class provides private implementation for AppRegistryClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a AppRegistryClientPrivate object with public implementation \a q.
 */
AppRegistryClientPrivate::AppRegistryClientPrivate(AppRegistryClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace AppRegistry
} // namespace QtAws
