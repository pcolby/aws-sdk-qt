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

#include "appstreamclient.h"
#include "appstreamclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace AppStream {

/**
 * @class  AppStreamClient
 *
 * @brief  Client for Amazon AppStream
 *
 * <fullname>Amazon AppStream 2.0</fullname>
 *
 * You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 */

/**
 * @brief  Constructs a new AppStreamClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
AppStreamClient::AppStreamClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AppStreamClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new AppStreamClient object.
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
AppStreamClient::AppStreamClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AppStreamClientPrivate(this), parent)
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

/**
 * Associates the specified fleet with the specified
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateFleetResponse * AppStreamClient::associateFleet(const AssociateFleetRequest &request)
{

}

/**
 * Copies the image within the same region or to a new region within the same AWS account. Note that any tags you added to
 * the image will not be
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyImageResponse * AppStreamClient::copyImage(const CopyImageRequest &request)
{

}

/**
 * Creates a directory
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDirectoryConfigResponse * AppStreamClient::createDirectoryConfig(const CreateDirectoryConfigRequest &request)
{

}

/**
 * Creates a
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFleetResponse * AppStreamClient::createFleet(const CreateFleetRequest &request)
{

}

/**
 * Creates an image
 *
 * builder>
 *
 * The initial state of the builder is <code>PENDING</code>. When it is ready, the state is
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateImageBuilderResponse * AppStreamClient::createImageBuilder(const CreateImageBuilderRequest &request)
{

}

/**
 * Creates a URL to start an image builder streaming
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateImageBuilderStreamingURLResponse * AppStreamClient::createImageBuilderStreamingURL(const CreateImageBuilderStreamingURLRequest &request)
{

}

/**
 * Creates a
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStackResponse * AppStreamClient::createStack(const CreateStackRequest &request)
{

}

/**
 * Creates a URL to start a streaming session for the specified
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStreamingURLResponse * AppStreamClient::createStreamingURL(const CreateStreamingURLRequest &request)
{

}

/**
 * Deletes the specified directory
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDirectoryConfigResponse * AppStreamClient::deleteDirectoryConfig(const DeleteDirectoryConfigRequest &request)
{

}

/**
 * Deletes the specified
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFleetResponse * AppStreamClient::deleteFleet(const DeleteFleetRequest &request)
{

}

/**
 * Deletes the specified image. You cannot delete an image that is currently in use. After you delete an image, you cannot
 * provision new capacity using the
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteImageResponse * AppStreamClient::deleteImage(const DeleteImageRequest &request)
{

}

/**
 * Deletes the specified image builder and releases the
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteImageBuilderResponse * AppStreamClient::deleteImageBuilder(const DeleteImageBuilderRequest &request)
{

}

/**
 * Deletes the specified stack. After this operation completes, the environment can no longer be activated and any
 * reservations made for the stack are
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteStackResponse * AppStreamClient::deleteStack(const DeleteStackRequest &request)
{

}

/**
 * Describes the specified directory configurations. Note that although the response syntax in this topic includes the
 * account password, this password is not returned in the actual response.
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDirectoryConfigsResponse * AppStreamClient::describeDirectoryConfigs(const DescribeDirectoryConfigsRequest &request)
{

}

/**
 * Describes the specified fleets or all fleets in the
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeFleetsResponse * AppStreamClient::describeFleets(const DescribeFleetsRequest &request)
{

}

/**
 * Describes the specified image builders or all image builders in the
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeImageBuildersResponse * AppStreamClient::describeImageBuilders(const DescribeImageBuildersRequest &request)
{

}

/**
 * Describes the specified images or all images in the
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeImagesResponse * AppStreamClient::describeImages(const DescribeImagesRequest &request)
{

}

/**
 * Describes the streaming sessions for the specified stack and fleet. If a user ID is provided, only the streaming
 * sessions for only that user are returned. If an authentication type is not provided, the default is to authenticate
 * users using a streaming
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSessionsResponse * AppStreamClient::describeSessions(const DescribeSessionsRequest &request)
{

}

/**
 * Describes the specified stacks or all stacks in the
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStacksResponse * AppStreamClient::describeStacks(const DescribeStacksRequest &request)
{

}

/**
 * Disassociates the specified fleet from the specified
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateFleetResponse * AppStreamClient::disassociateFleet(const DisassociateFleetRequest &request)
{

}

/**
 * Stops the specified streaming
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ExpireSessionResponse * AppStreamClient::expireSession(const ExpireSessionRequest &request)
{

}

/**
 * Lists the fleets associated with the specified
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAssociatedFleetsResponse * AppStreamClient::listAssociatedFleets(const ListAssociatedFleetsRequest &request)
{

}

/**
 * Lists the stacks associated with the specified
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAssociatedStacksResponse * AppStreamClient::listAssociatedStacks(const ListAssociatedStacksRequest &request)
{

}

/**
 * Lists the tags for the specified AppStream 2.0 resource. You can tag AppStream 2.0 image builders, images, fleets, and
 *
 * stacks>
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging Your Resources</a> in the
 * <i>Amazon AppStream 2.0 Developer
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForResourceResponse * AppStreamClient::listTagsForResource(const ListTagsForResourceRequest &request)
{

}

/**
 * Starts the specified
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartFleetResponse * AppStreamClient::startFleet(const StartFleetRequest &request)
{

}

/**
 * Starts the specified image
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartImageBuilderResponse * AppStreamClient::startImageBuilder(const StartImageBuilderRequest &request)
{

}

/**
 * Stops the specified
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopFleetResponse * AppStreamClient::stopFleet(const StopFleetRequest &request)
{

}

/**
 * Stops the specified image
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopImageBuilderResponse * AppStreamClient::stopImageBuilder(const StopImageBuilderRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * AppStreamClient::tagResource(const TagResourceRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * AppStreamClient::untagResource(const UntagResourceRequest &request)
{

}

/**
 * Updates the specified directory
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDirectoryConfigResponse * AppStreamClient::updateDirectoryConfig(const UpdateDirectoryConfigRequest &request)
{

}

/**
 * Updates the specified
 *
 * fleet>
 *
 * If the fleet is in the <code>STOPPED</code> state, you can update any attribute except the fleet name. If the fleet is
 * in the <code>RUNNING</code> state, you can update the <code>DisplayName</code> and <code>ComputeCapacity</code>
 * attributes. If the fleet is in the <code>STARTING</code> or <code>STOPPING</code> state, you can't update
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFleetResponse * AppStreamClient::updateFleet(const UpdateFleetRequest &request)
{

}

/**
 * Updates the specified
 *
 * @param  request Request to send to Amazon AppStream.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateStackResponse * AppStreamClient::updateStack(const UpdateStackRequest &request)
{

}

/**
 * @internal
 *
 * @class  AppStreamClientPrivate
 *
 * @brief  Private implementation for AppStreamClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AppStreamClientPrivate object.
 *
 * @param  q  Pointer to this object's public AppStreamClient instance.
 */
AppStreamClientPrivate::AppStreamClientPrivate(AppStreamClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace AppStream
} // namespace AWS
