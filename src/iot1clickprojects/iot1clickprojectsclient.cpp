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

#include "iot1clickprojectsclient.h"
#include "iot1clickprojectsclient_p.h"

#include "core/awssignaturev4.h"
#include "associatedevicewithplacementrequest.h"
#include "associatedevicewithplacementresponse.h"
#include "createplacementrequest.h"
#include "createplacementresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "deleteplacementrequest.h"
#include "deleteplacementresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "describeplacementrequest.h"
#include "describeplacementresponse.h"
#include "describeprojectrequest.h"
#include "describeprojectresponse.h"
#include "disassociatedevicefromplacementrequest.h"
#include "disassociatedevicefromplacementresponse.h"
#include "getdevicesinplacementrequest.h"
#include "getdevicesinplacementresponse.h"
#include "listplacementsrequest.h"
#include "listplacementsresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateplacementrequest.h"
#include "updateplacementresponse.h"
#include "updateprojectrequest.h"
#include "updateprojectresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoT1ClickProjects
 * \brief Contains classess for accessing AWS IoT 1-Click Projects Service.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::IoT1ClickProjectsClient
 * \brief The IoT1ClickProjectsClient class provides access to the AWS IoT 1-Click Projects Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 */

/*!
 * \brief Constructs a IoT1ClickProjectsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoT1ClickProjectsClient::IoT1ClickProjectsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-05-14"),
    QStringLiteral("projects.iot1click"),
    QStringLiteral("AWS IoT 1-Click Projects Service"),
    QStringLiteral("iot1click"),
    parent), d_ptr(new IoT1ClickProjectsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload IoT1ClickProjectsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoT1ClickProjectsClient::IoT1ClickProjectsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-05-14"),
    QStringLiteral("projects.iot1click"),
    QStringLiteral("AWS IoT 1-Click Projects Service"),
    QStringLiteral("iot1click"),
    parent), d_ptr(new IoT1ClickProjectsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * AssociateDeviceWithPlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a physical device with a
 */
AssociateDeviceWithPlacementResponse * IoT1ClickProjectsClient::associateDeviceWithPlacement(const AssociateDeviceWithPlacementRequest &request)
{
    return qobject_cast<AssociateDeviceWithPlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * CreatePlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an empty
 */
CreatePlacementResponse * IoT1ClickProjectsClient::createPlacement(const CreatePlacementRequest &request)
{
    return qobject_cast<CreatePlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an empty project with a placement template. A project contains zero or more placements that adhere to the
 * placement template defined in the
 */
CreateProjectResponse * IoT1ClickProjectsClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * DeletePlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a placement. To delete a placement, it must not have any devices associated with
 *
 * it> <note>
 *
 * When you delete a placement, all associated data becomes
 */
DeletePlacementResponse * IoT1ClickProjectsClient::deletePlacement(const DeletePlacementRequest &request)
{
    return qobject_cast<DeletePlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a project. To delete a project, it must not have any placements associated with
 *
 * it> <note>
 *
 * When you delete a project, all associated data becomes
 */
DeleteProjectResponse * IoT1ClickProjectsClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * DescribePlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a placement in a
 */
DescribePlacementResponse * IoT1ClickProjectsClient::describePlacement(const DescribePlacementRequest &request)
{
    return qobject_cast<DescribePlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * DescribeProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an object describing a
 */
DescribeProjectResponse * IoT1ClickProjectsClient::describeProject(const DescribeProjectRequest &request)
{
    return qobject_cast<DescribeProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * DisassociateDeviceFromPlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a physical device from a
 */
DisassociateDeviceFromPlacementResponse * IoT1ClickProjectsClient::disassociateDeviceFromPlacement(const DisassociateDeviceFromPlacementRequest &request)
{
    return qobject_cast<DisassociateDeviceFromPlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * GetDevicesInPlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an object enumerating the devices in a
 */
GetDevicesInPlacementResponse * IoT1ClickProjectsClient::getDevicesInPlacement(const GetDevicesInPlacementRequest &request)
{
    return qobject_cast<GetDevicesInPlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * ListPlacementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the placement(s) of a
 */
ListPlacementsResponse * IoT1ClickProjectsClient::listPlacements(const ListPlacementsRequest &request)
{
    return qobject_cast<ListPlacementsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * ListProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the AWS IoT 1-Click project(s) associated with your AWS account and
 */
ListProjectsResponse * IoT1ClickProjectsClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags (metadata key/value pairs) which you have assigned to the
 */
ListTagsForResourceResponse * IoT1ClickProjectsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or modifies tags for a resource. Tags are key/value pairs (metadata) that can be used to manage a resource. For
 * more information, see <a href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS Tagging
 */
TagResourceResponse * IoT1ClickProjectsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags (metadata key/value pairs) from a
 */
UntagResourceResponse * IoT1ClickProjectsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * UpdatePlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a placement with the given attributes. To clear an attribute, pass an empty value (i.e.,
 */
UpdatePlacementResponse * IoT1ClickProjectsClient::updatePlacement(const UpdatePlacementRequest &request)
{
    return qobject_cast<UpdatePlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the IoT1ClickProjectsClient service, and returns a pointer to an
 * UpdateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a project associated with your AWS account and region. With the exception of device template names, you can pass
 * just the values that need to be updated because the update request will change only the values that are provided. To
 * clear a value, pass the empty string (i.e.,
 */
UpdateProjectResponse * IoT1ClickProjectsClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
}

/*!
 * \class QtAws::IoT1ClickProjects::IoT1ClickProjectsClientPrivate
 * \brief The IoT1ClickProjectsClientPrivate class provides private implementation for IoT1ClickProjectsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a IoT1ClickProjectsClientPrivate object with public implementation \a q.
 */
IoT1ClickProjectsClientPrivate::IoT1ClickProjectsClientPrivate(IoT1ClickProjectsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace IoT1ClickProjects
} // namespace QtAws
