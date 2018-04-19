/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "appstreamclient.h"
#include "appstreamclient_p.h"

#include "core/awssignaturev4.h"
#include "associatefleetrequest.h"
#include "associatefleetresponse.h"
#include "copyimagerequest.h"
#include "copyimageresponse.h"
#include "createdirectoryconfigrequest.h"
#include "createdirectoryconfigresponse.h"
#include "createfleetrequest.h"
#include "createfleetresponse.h"
#include "createimagebuilderrequest.h"
#include "createimagebuilderresponse.h"
#include "createimagebuilderstreamingurlrequest.h"
#include "createimagebuilderstreamingurlresponse.h"
#include "createstackrequest.h"
#include "createstackresponse.h"
#include "createstreamingurlrequest.h"
#include "createstreamingurlresponse.h"
#include "deletedirectoryconfigrequest.h"
#include "deletedirectoryconfigresponse.h"
#include "deletefleetrequest.h"
#include "deletefleetresponse.h"
#include "deleteimagerequest.h"
#include "deleteimageresponse.h"
#include "deleteimagebuilderrequest.h"
#include "deleteimagebuilderresponse.h"
#include "deletestackrequest.h"
#include "deletestackresponse.h"
#include "describedirectoryconfigsrequest.h"
#include "describedirectoryconfigsresponse.h"
#include "describefleetsrequest.h"
#include "describefleetsresponse.h"
#include "describeimagebuildersrequest.h"
#include "describeimagebuildersresponse.h"
#include "describeimagesrequest.h"
#include "describeimagesresponse.h"
#include "describesessionsrequest.h"
#include "describesessionsresponse.h"
#include "describestacksrequest.h"
#include "describestacksresponse.h"
#include "disassociatefleetrequest.h"
#include "disassociatefleetresponse.h"
#include "expiresessionrequest.h"
#include "expiresessionresponse.h"
#include "listassociatedfleetsrequest.h"
#include "listassociatedfleetsresponse.h"
#include "listassociatedstacksrequest.h"
#include "listassociatedstacksresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startfleetrequest.h"
#include "startfleetresponse.h"
#include "startimagebuilderrequest.h"
#include "startimagebuilderresponse.h"
#include "stopfleetrequest.h"
#include "stopfleetresponse.h"
#include "stopimagebuilderrequest.h"
#include "stopimagebuilderresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedirectoryconfigrequest.h"
#include "updatedirectoryconfigresponse.h"
#include "updatefleetrequest.h"
#include "updatefleetresponse.h"
#include "updatestackrequest.h"
#include "updatestackresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppStream
 * \brief The QtAws::AppStream contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AppStreamClient
 * \brief The AppStreamClient class provides access to the Amazon AppStream service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 */

/*!
 * \brief Constructs a AppStreamClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppStreamClient::AppStreamClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppStreamClientPrivate(this), parent)
{
    Q_D(AppStreamClient);
    d->apiVersion = QStringLiteral("2016-12-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("appstream2");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon AppStream");
    d->serviceName = QStringLiteral("appstream");
}

/*!
 * \overload AppStreamClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
AppStreamClient::AppStreamClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppStreamClientPrivate(this), parent)
{
    Q_D(AppStreamClient);
    d->apiVersion = QStringLiteral("2016-12-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("appstream2");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon AppStream");
    d->serviceName = QStringLiteral("appstream");
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * AssociateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified fleet with the specified
 */
AssociateFleetResponse * AppStreamClient::associateFleet(const AssociateFleetRequest &request)
{
    return qobject_cast<AssociateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CopyImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the image within the same region or to a new region within the same AWS account. Note that any tags you added to
 * the image will not be
 */
CopyImageResponse * AppStreamClient::copyImage(const CopyImageRequest &request)
{
    return qobject_cast<CopyImageResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateDirectoryConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a directory
 */
CreateDirectoryConfigResponse * AppStreamClient::createDirectoryConfig(const CreateDirectoryConfigRequest &request)
{
    return qobject_cast<CreateDirectoryConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateFleetResponse * AppStreamClient::createFleet(const CreateFleetRequest &request)
{
    return qobject_cast<CreateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateImageBuilderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an image
 *
 * builder>
 *
 * The initial state of the builder is <code>PENDING</code>. When it is ready, the state is
 */
CreateImageBuilderResponse * AppStreamClient::createImageBuilder(const CreateImageBuilderRequest &request)
{
    return qobject_cast<CreateImageBuilderResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateImageBuilderStreamingURLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a URL to start an image builder streaming
 */
CreateImageBuilderStreamingURLResponse * AppStreamClient::createImageBuilderStreamingURL(const CreateImageBuilderStreamingURLRequest &request)
{
    return qobject_cast<CreateImageBuilderStreamingURLResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateStackResponse * AppStreamClient::createStack(const CreateStackRequest &request)
{
    return qobject_cast<CreateStackResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateStreamingURLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a URL to start a streaming session for the specified
 */
CreateStreamingURLResponse * AppStreamClient::createStreamingURL(const CreateStreamingURLRequest &request)
{
    return qobject_cast<CreateStreamingURLResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteDirectoryConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified directory
 */
DeleteDirectoryConfigResponse * AppStreamClient::deleteDirectoryConfig(const DeleteDirectoryConfigRequest &request)
{
    return qobject_cast<DeleteDirectoryConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteFleetResponse * AppStreamClient::deleteFleet(const DeleteFleetRequest &request)
{
    return qobject_cast<DeleteFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified image. You cannot delete an image that is currently in use. After you delete an image, you cannot
 * provision new capacity using the
 */
DeleteImageResponse * AppStreamClient::deleteImage(const DeleteImageRequest &request)
{
    return qobject_cast<DeleteImageResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteImageBuilderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified image builder and releases the
 */
DeleteImageBuilderResponse * AppStreamClient::deleteImageBuilder(const DeleteImageBuilderRequest &request)
{
    return qobject_cast<DeleteImageBuilderResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified stack. After this operation completes, the environment can no longer be activated and any
 * reservations made for the stack are
 */
DeleteStackResponse * AppStreamClient::deleteStack(const DeleteStackRequest &request)
{
    return qobject_cast<DeleteStackResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeDirectoryConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified directory configurations. Note that although the response syntax in this topic includes the
 * account password, this password is not returned in the actual response.
 */
DescribeDirectoryConfigsResponse * AppStreamClient::describeDirectoryConfigs(const DescribeDirectoryConfigsRequest &request)
{
    return qobject_cast<DescribeDirectoryConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeFleetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified fleets or all fleets in the
 */
DescribeFleetsResponse * AppStreamClient::describeFleets(const DescribeFleetsRequest &request)
{
    return qobject_cast<DescribeFleetsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeImageBuildersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified image builders or all image builders in the
 */
DescribeImageBuildersResponse * AppStreamClient::describeImageBuilders(const DescribeImageBuildersRequest &request)
{
    return qobject_cast<DescribeImageBuildersResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified images or all images in the
 */
DescribeImagesResponse * AppStreamClient::describeImages(const DescribeImagesRequest &request)
{
    return qobject_cast<DescribeImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the streaming sessions for the specified stack and fleet. If a user ID is provided, only the streaming
 * sessions for only that user are returned. If an authentication type is not provided, the default is to authenticate
 * users using a streaming
 */
DescribeSessionsResponse * AppStreamClient::describeSessions(const DescribeSessionsRequest &request)
{
    return qobject_cast<DescribeSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeStacksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified stacks or all stacks in the
 */
DescribeStacksResponse * AppStreamClient::describeStacks(const DescribeStacksRequest &request)
{
    return qobject_cast<DescribeStacksResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DisassociateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified fleet from the specified
 */
DisassociateFleetResponse * AppStreamClient::disassociateFleet(const DisassociateFleetRequest &request)
{
    return qobject_cast<DisassociateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * ExpireSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the specified streaming
 */
ExpireSessionResponse * AppStreamClient::expireSession(const ExpireSessionRequest &request)
{
    return qobject_cast<ExpireSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * ListAssociatedFleetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the fleets associated with the specified
 */
ListAssociatedFleetsResponse * AppStreamClient::listAssociatedFleets(const ListAssociatedFleetsRequest &request)
{
    return qobject_cast<ListAssociatedFleetsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * ListAssociatedStacksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the stacks associated with the specified
 */
ListAssociatedStacksResponse * AppStreamClient::listAssociatedStacks(const ListAssociatedStacksRequest &request)
{
    return qobject_cast<ListAssociatedStacksResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified AppStream 2.0 resource. You can tag AppStream 2.0 image builders, images, fleets, and
 *
 * stacks>
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging Your Resources</a> in the
 * <i>Amazon AppStream 2.0 Developer
 */
ListTagsForResourceResponse * AppStreamClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * StartFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the specified
 */
StartFleetResponse * AppStreamClient::startFleet(const StartFleetRequest &request)
{
    return qobject_cast<StartFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * StartImageBuilderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the specified image
 */
StartImageBuilderResponse * AppStreamClient::startImageBuilder(const StartImageBuilderRequest &request)
{
    return qobject_cast<StartImageBuilderResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * StopFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the specified
 */
StopFleetResponse * AppStreamClient::stopFleet(const StopFleetRequest &request)
{
    return qobject_cast<StopFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * StopImageBuilderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the specified image
 */
StopImageBuilderResponse * AppStreamClient::stopImageBuilder(const StopImageBuilderRequest &request)
{
    return qobject_cast<StopImageBuilderResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified AppStream 2.0 resource. You can tag AppStream 2.0 image builders,
 * images, fleets, and
 *
 * stacks>
 *
 * Each tag consists of a key and an optional value. If a resource already has a tag with the same key, this operation
 * updates its
 *
 * value>
 *
 * To list the current tags for your resources, use <a>ListTagsForResource</a>. To disassociate tags from your resources,
 * use
 *
 * <a>UntagResource</a>>
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging Your Resources</a> in the
 * <i>Amazon AppStream 2.0 Developer
 */
TagResourceResponse * AppStreamClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified tags from the specified AppStream 2.0
 *
 * resource>
 *
 * To list the current tags for your resources, use
 *
 * <a>ListTagsForResource</a>>
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging Your Resources</a> in the
 * <i>Amazon AppStream 2.0 Developer
 */
UntagResourceResponse * AppStreamClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UpdateDirectoryConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified directory
 */
UpdateDirectoryConfigResponse * AppStreamClient::updateDirectoryConfig(const UpdateDirectoryConfigRequest &request)
{
    return qobject_cast<UpdateDirectoryConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UpdateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 *
 * fleet>
 *
 * If the fleet is in the <code>STOPPED</code> state, you can update any attribute except the fleet name. If the fleet is
 * in the <code>RUNNING</code> state, you can update the <code>DisplayName</code> and <code>ComputeCapacity</code>
 * attributes. If the fleet is in the <code>STARTING</code> or <code>STOPPING</code> state, you can't update
 */
UpdateFleetResponse * AppStreamClient::updateFleet(const UpdateFleetRequest &request)
{
    return qobject_cast<UpdateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UpdateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateStackResponse * AppStreamClient::updateStack(const UpdateStackRequest &request)
{
    return qobject_cast<UpdateStackResponse *>(send(request));
}

/*!
 * \class QtAws::AppStream::AppStreamClientPrivate
 * \brief The AppStreamClientPrivate class provides private implementation for AppStreamClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a AppStreamClientPrivate object with public implementation \a q.
 */
AppStreamClientPrivate::AppStreamClientPrivate(AppStreamClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AppStream
} // namespace QtAws
