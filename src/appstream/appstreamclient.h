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

#ifndef QTAWS_APPSTREAMCLIENT_H
#define QTAWS_APPSTREAMCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace AppStream {

class AppStreamClientPrivate;
class AssociateFleetRequest;
class AssociateFleetResponse;
class BatchAssociateUserStackRequest;
class BatchAssociateUserStackResponse;
class BatchDisassociateUserStackRequest;
class BatchDisassociateUserStackResponse;
class CopyImageRequest;
class CopyImageResponse;
class CreateDirectoryConfigRequest;
class CreateDirectoryConfigResponse;
class CreateFleetRequest;
class CreateFleetResponse;
class CreateImageBuilderRequest;
class CreateImageBuilderResponse;
class CreateImageBuilderStreamingURLRequest;
class CreateImageBuilderStreamingURLResponse;
class CreateStackRequest;
class CreateStackResponse;
class CreateStreamingURLRequest;
class CreateStreamingURLResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteDirectoryConfigRequest;
class DeleteDirectoryConfigResponse;
class DeleteFleetRequest;
class DeleteFleetResponse;
class DeleteImageRequest;
class DeleteImageResponse;
class DeleteImageBuilderRequest;
class DeleteImageBuilderResponse;
class DeleteImagePermissionsRequest;
class DeleteImagePermissionsResponse;
class DeleteStackRequest;
class DeleteStackResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DescribeDirectoryConfigsRequest;
class DescribeDirectoryConfigsResponse;
class DescribeFleetsRequest;
class DescribeFleetsResponse;
class DescribeImageBuildersRequest;
class DescribeImageBuildersResponse;
class DescribeImagePermissionsRequest;
class DescribeImagePermissionsResponse;
class DescribeImagesRequest;
class DescribeImagesResponse;
class DescribeSessionsRequest;
class DescribeSessionsResponse;
class DescribeStacksRequest;
class DescribeStacksResponse;
class DescribeUserStackAssociationsRequest;
class DescribeUserStackAssociationsResponse;
class DescribeUsersRequest;
class DescribeUsersResponse;
class DisableUserRequest;
class DisableUserResponse;
class DisassociateFleetRequest;
class DisassociateFleetResponse;
class EnableUserRequest;
class EnableUserResponse;
class ExpireSessionRequest;
class ExpireSessionResponse;
class ListAssociatedFleetsRequest;
class ListAssociatedFleetsResponse;
class ListAssociatedStacksRequest;
class ListAssociatedStacksResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartFleetRequest;
class StartFleetResponse;
class StartImageBuilderRequest;
class StartImageBuilderResponse;
class StopFleetRequest;
class StopFleetResponse;
class StopImageBuilderRequest;
class StopImageBuilderResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDirectoryConfigRequest;
class UpdateDirectoryConfigResponse;
class UpdateFleetRequest;
class UpdateFleetResponse;
class UpdateImagePermissionsRequest;
class UpdateImagePermissionsResponse;
class UpdateStackRequest;
class UpdateStackResponse;

class QTAWS_EXPORT AppStreamClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppStreamClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AppStreamClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateFleetResponse * associateFleet(const AssociateFleetRequest &request);
    BatchAssociateUserStackResponse * batchAssociateUserStack(const BatchAssociateUserStackRequest &request);
    BatchDisassociateUserStackResponse * batchDisassociateUserStack(const BatchDisassociateUserStackRequest &request);
    CopyImageResponse * copyImage(const CopyImageRequest &request);
    CreateDirectoryConfigResponse * createDirectoryConfig(const CreateDirectoryConfigRequest &request);
    CreateFleetResponse * createFleet(const CreateFleetRequest &request);
    CreateImageBuilderResponse * createImageBuilder(const CreateImageBuilderRequest &request);
    CreateImageBuilderStreamingURLResponse * createImageBuilderStreamingURL(const CreateImageBuilderStreamingURLRequest &request);
    CreateStackResponse * createStack(const CreateStackRequest &request);
    CreateStreamingURLResponse * createStreamingURL(const CreateStreamingURLRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteDirectoryConfigResponse * deleteDirectoryConfig(const DeleteDirectoryConfigRequest &request);
    DeleteFleetResponse * deleteFleet(const DeleteFleetRequest &request);
    DeleteImageResponse * deleteImage(const DeleteImageRequest &request);
    DeleteImageBuilderResponse * deleteImageBuilder(const DeleteImageBuilderRequest &request);
    DeleteImagePermissionsResponse * deleteImagePermissions(const DeleteImagePermissionsRequest &request);
    DeleteStackResponse * deleteStack(const DeleteStackRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeDirectoryConfigsResponse * describeDirectoryConfigs(const DescribeDirectoryConfigsRequest &request);
    DescribeFleetsResponse * describeFleets(const DescribeFleetsRequest &request);
    DescribeImageBuildersResponse * describeImageBuilders(const DescribeImageBuildersRequest &request);
    DescribeImagePermissionsResponse * describeImagePermissions(const DescribeImagePermissionsRequest &request);
    DescribeImagesResponse * describeImages(const DescribeImagesRequest &request);
    DescribeSessionsResponse * describeSessions(const DescribeSessionsRequest &request);
    DescribeStacksResponse * describeStacks(const DescribeStacksRequest &request);
    DescribeUserStackAssociationsResponse * describeUserStackAssociations(const DescribeUserStackAssociationsRequest &request);
    DescribeUsersResponse * describeUsers(const DescribeUsersRequest &request);
    DisableUserResponse * disableUser(const DisableUserRequest &request);
    DisassociateFleetResponse * disassociateFleet(const DisassociateFleetRequest &request);
    EnableUserResponse * enableUser(const EnableUserRequest &request);
    ExpireSessionResponse * expireSession(const ExpireSessionRequest &request);
    ListAssociatedFleetsResponse * listAssociatedFleets(const ListAssociatedFleetsRequest &request);
    ListAssociatedStacksResponse * listAssociatedStacks(const ListAssociatedStacksRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartFleetResponse * startFleet(const StartFleetRequest &request);
    StartImageBuilderResponse * startImageBuilder(const StartImageBuilderRequest &request);
    StopFleetResponse * stopFleet(const StopFleetRequest &request);
    StopImageBuilderResponse * stopImageBuilder(const StopImageBuilderRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDirectoryConfigResponse * updateDirectoryConfig(const UpdateDirectoryConfigRequest &request);
    UpdateFleetResponse * updateFleet(const UpdateFleetRequest &request);
    UpdateImagePermissionsResponse * updateImagePermissions(const UpdateImagePermissionsRequest &request);
    UpdateStackResponse * updateStack(const UpdateStackRequest &request);

private:
    Q_DECLARE_PRIVATE(AppStreamClient)
    Q_DISABLE_COPY(AppStreamClient)

};

} // namespace AppStream
} // namespace QtAws

#endif
