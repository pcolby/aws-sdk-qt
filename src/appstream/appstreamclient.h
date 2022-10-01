// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSTREAMCLIENT_H
#define QTAWS_APPSTREAMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsappstreamglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AppStream {

class AppStreamClientPrivate;
class AssociateApplicationFleetRequest;
class AssociateApplicationFleetResponse;
class AssociateApplicationToEntitlementRequest;
class AssociateApplicationToEntitlementResponse;
class AssociateFleetRequest;
class AssociateFleetResponse;
class BatchAssociateUserStackRequest;
class BatchAssociateUserStackResponse;
class BatchDisassociateUserStackRequest;
class BatchDisassociateUserStackResponse;
class CopyImageRequest;
class CopyImageResponse;
class CreateAppBlockRequest;
class CreateAppBlockResponse;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateDirectoryConfigRequest;
class CreateDirectoryConfigResponse;
class CreateEntitlementRequest;
class CreateEntitlementResponse;
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
class CreateUpdatedImageRequest;
class CreateUpdatedImageResponse;
class CreateUsageReportSubscriptionRequest;
class CreateUsageReportSubscriptionResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteAppBlockRequest;
class DeleteAppBlockResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteDirectoryConfigRequest;
class DeleteDirectoryConfigResponse;
class DeleteEntitlementRequest;
class DeleteEntitlementResponse;
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
class DeleteUsageReportSubscriptionRequest;
class DeleteUsageReportSubscriptionResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DescribeAppBlocksRequest;
class DescribeAppBlocksResponse;
class DescribeApplicationFleetAssociationsRequest;
class DescribeApplicationFleetAssociationsResponse;
class DescribeApplicationsRequest;
class DescribeApplicationsResponse;
class DescribeDirectoryConfigsRequest;
class DescribeDirectoryConfigsResponse;
class DescribeEntitlementsRequest;
class DescribeEntitlementsResponse;
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
class DescribeUsageReportSubscriptionsRequest;
class DescribeUsageReportSubscriptionsResponse;
class DescribeUserStackAssociationsRequest;
class DescribeUserStackAssociationsResponse;
class DescribeUsersRequest;
class DescribeUsersResponse;
class DisableUserRequest;
class DisableUserResponse;
class DisassociateApplicationFleetRequest;
class DisassociateApplicationFleetResponse;
class DisassociateApplicationFromEntitlementRequest;
class DisassociateApplicationFromEntitlementResponse;
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
class ListEntitledApplicationsRequest;
class ListEntitledApplicationsResponse;
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
class UpdateApplicationRequest;
class UpdateApplicationResponse;
class UpdateDirectoryConfigRequest;
class UpdateDirectoryConfigResponse;
class UpdateEntitlementRequest;
class UpdateEntitlementResponse;
class UpdateFleetRequest;
class UpdateFleetResponse;
class UpdateImagePermissionsRequest;
class UpdateImagePermissionsResponse;
class UpdateStackRequest;
class UpdateStackResponse;

class QTAWSAPPSTREAM_EXPORT AppStreamClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppStreamClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AppStreamClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateApplicationFleetResponse * associateApplicationFleet(const AssociateApplicationFleetRequest &request);
    AssociateApplicationToEntitlementResponse * associateApplicationToEntitlement(const AssociateApplicationToEntitlementRequest &request);
    AssociateFleetResponse * associateFleet(const AssociateFleetRequest &request);
    BatchAssociateUserStackResponse * batchAssociateUserStack(const BatchAssociateUserStackRequest &request);
    BatchDisassociateUserStackResponse * batchDisassociateUserStack(const BatchDisassociateUserStackRequest &request);
    CopyImageResponse * copyImage(const CopyImageRequest &request);
    CreateAppBlockResponse * createAppBlock(const CreateAppBlockRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateDirectoryConfigResponse * createDirectoryConfig(const CreateDirectoryConfigRequest &request);
    CreateEntitlementResponse * createEntitlement(const CreateEntitlementRequest &request);
    CreateFleetResponse * createFleet(const CreateFleetRequest &request);
    CreateImageBuilderResponse * createImageBuilder(const CreateImageBuilderRequest &request);
    CreateImageBuilderStreamingURLResponse * createImageBuilderStreamingURL(const CreateImageBuilderStreamingURLRequest &request);
    CreateStackResponse * createStack(const CreateStackRequest &request);
    CreateStreamingURLResponse * createStreamingURL(const CreateStreamingURLRequest &request);
    CreateUpdatedImageResponse * createUpdatedImage(const CreateUpdatedImageRequest &request);
    CreateUsageReportSubscriptionResponse * createUsageReportSubscription(const CreateUsageReportSubscriptionRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteAppBlockResponse * deleteAppBlock(const DeleteAppBlockRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteDirectoryConfigResponse * deleteDirectoryConfig(const DeleteDirectoryConfigRequest &request);
    DeleteEntitlementResponse * deleteEntitlement(const DeleteEntitlementRequest &request);
    DeleteFleetResponse * deleteFleet(const DeleteFleetRequest &request);
    DeleteImageResponse * deleteImage(const DeleteImageRequest &request);
    DeleteImageBuilderResponse * deleteImageBuilder(const DeleteImageBuilderRequest &request);
    DeleteImagePermissionsResponse * deleteImagePermissions(const DeleteImagePermissionsRequest &request);
    DeleteStackResponse * deleteStack(const DeleteStackRequest &request);
    DeleteUsageReportSubscriptionResponse * deleteUsageReportSubscription(const DeleteUsageReportSubscriptionRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeAppBlocksResponse * describeAppBlocks(const DescribeAppBlocksRequest &request);
    DescribeApplicationFleetAssociationsResponse * describeApplicationFleetAssociations(const DescribeApplicationFleetAssociationsRequest &request);
    DescribeApplicationsResponse * describeApplications(const DescribeApplicationsRequest &request);
    DescribeDirectoryConfigsResponse * describeDirectoryConfigs(const DescribeDirectoryConfigsRequest &request);
    DescribeEntitlementsResponse * describeEntitlements(const DescribeEntitlementsRequest &request);
    DescribeFleetsResponse * describeFleets(const DescribeFleetsRequest &request);
    DescribeImageBuildersResponse * describeImageBuilders(const DescribeImageBuildersRequest &request);
    DescribeImagePermissionsResponse * describeImagePermissions(const DescribeImagePermissionsRequest &request);
    DescribeImagesResponse * describeImages(const DescribeImagesRequest &request);
    DescribeSessionsResponse * describeSessions(const DescribeSessionsRequest &request);
    DescribeStacksResponse * describeStacks(const DescribeStacksRequest &request);
    DescribeUsageReportSubscriptionsResponse * describeUsageReportSubscriptions(const DescribeUsageReportSubscriptionsRequest &request);
    DescribeUserStackAssociationsResponse * describeUserStackAssociations(const DescribeUserStackAssociationsRequest &request);
    DescribeUsersResponse * describeUsers(const DescribeUsersRequest &request);
    DisableUserResponse * disableUser(const DisableUserRequest &request);
    DisassociateApplicationFleetResponse * disassociateApplicationFleet(const DisassociateApplicationFleetRequest &request);
    DisassociateApplicationFromEntitlementResponse * disassociateApplicationFromEntitlement(const DisassociateApplicationFromEntitlementRequest &request);
    DisassociateFleetResponse * disassociateFleet(const DisassociateFleetRequest &request);
    EnableUserResponse * enableUser(const EnableUserRequest &request);
    ExpireSessionResponse * expireSession(const ExpireSessionRequest &request);
    ListAssociatedFleetsResponse * listAssociatedFleets(const ListAssociatedFleetsRequest &request);
    ListAssociatedStacksResponse * listAssociatedStacks(const ListAssociatedStacksRequest &request);
    ListEntitledApplicationsResponse * listEntitledApplications(const ListEntitledApplicationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartFleetResponse * startFleet(const StartFleetRequest &request);
    StartImageBuilderResponse * startImageBuilder(const StartImageBuilderRequest &request);
    StopFleetResponse * stopFleet(const StopFleetRequest &request);
    StopImageBuilderResponse * stopImageBuilder(const StopImageBuilderRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateDirectoryConfigResponse * updateDirectoryConfig(const UpdateDirectoryConfigRequest &request);
    UpdateEntitlementResponse * updateEntitlement(const UpdateEntitlementRequest &request);
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
