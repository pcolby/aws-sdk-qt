// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RAMCLIENT_H
#define QTAWS_RAMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsramglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Ram {

class RamClientPrivate;
class AcceptResourceShareInvitationRequest;
class AcceptResourceShareInvitationResponse;
class AssociateResourceShareRequest;
class AssociateResourceShareResponse;
class AssociateResourceSharePermissionRequest;
class AssociateResourceSharePermissionResponse;
class CreateResourceShareRequest;
class CreateResourceShareResponse;
class DeleteResourceShareRequest;
class DeleteResourceShareResponse;
class DisassociateResourceShareRequest;
class DisassociateResourceShareResponse;
class DisassociateResourceSharePermissionRequest;
class DisassociateResourceSharePermissionResponse;
class EnableSharingWithAwsOrganizationRequest;
class EnableSharingWithAwsOrganizationResponse;
class GetPermissionRequest;
class GetPermissionResponse;
class GetResourcePoliciesRequest;
class GetResourcePoliciesResponse;
class GetResourceShareAssociationsRequest;
class GetResourceShareAssociationsResponse;
class GetResourceShareInvitationsRequest;
class GetResourceShareInvitationsResponse;
class GetResourceSharesRequest;
class GetResourceSharesResponse;
class ListPendingInvitationResourcesRequest;
class ListPendingInvitationResourcesResponse;
class ListPermissionVersionsRequest;
class ListPermissionVersionsResponse;
class ListPermissionsRequest;
class ListPermissionsResponse;
class ListPrincipalsRequest;
class ListPrincipalsResponse;
class ListResourceSharePermissionsRequest;
class ListResourceSharePermissionsResponse;
class ListResourceTypesRequest;
class ListResourceTypesResponse;
class ListResourcesRequest;
class ListResourcesResponse;
class PromoteResourceShareCreatedFromPolicyRequest;
class PromoteResourceShareCreatedFromPolicyResponse;
class RejectResourceShareInvitationRequest;
class RejectResourceShareInvitationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateResourceShareRequest;
class UpdateResourceShareResponse;

class QTAWSRAM_EXPORT RamClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RamClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit RamClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptResourceShareInvitationResponse * acceptResourceShareInvitation(const AcceptResourceShareInvitationRequest &request);
    AssociateResourceShareResponse * associateResourceShare(const AssociateResourceShareRequest &request);
    AssociateResourceSharePermissionResponse * associateResourceSharePermission(const AssociateResourceSharePermissionRequest &request);
    CreateResourceShareResponse * createResourceShare(const CreateResourceShareRequest &request);
    DeleteResourceShareResponse * deleteResourceShare(const DeleteResourceShareRequest &request);
    DisassociateResourceShareResponse * disassociateResourceShare(const DisassociateResourceShareRequest &request);
    DisassociateResourceSharePermissionResponse * disassociateResourceSharePermission(const DisassociateResourceSharePermissionRequest &request);
    EnableSharingWithAwsOrganizationResponse * enableSharingWithAwsOrganization(const EnableSharingWithAwsOrganizationRequest &request);
    GetPermissionResponse * getPermission(const GetPermissionRequest &request);
    GetResourcePoliciesResponse * getResourcePolicies(const GetResourcePoliciesRequest &request);
    GetResourceShareAssociationsResponse * getResourceShareAssociations(const GetResourceShareAssociationsRequest &request);
    GetResourceShareInvitationsResponse * getResourceShareInvitations(const GetResourceShareInvitationsRequest &request);
    GetResourceSharesResponse * getResourceShares(const GetResourceSharesRequest &request);
    ListPendingInvitationResourcesResponse * listPendingInvitationResources(const ListPendingInvitationResourcesRequest &request);
    ListPermissionVersionsResponse * listPermissionVersions(const ListPermissionVersionsRequest &request);
    ListPermissionsResponse * listPermissions(const ListPermissionsRequest &request);
    ListPrincipalsResponse * listPrincipals(const ListPrincipalsRequest &request);
    ListResourceSharePermissionsResponse * listResourceSharePermissions(const ListResourceSharePermissionsRequest &request);
    ListResourceTypesResponse * listResourceTypes(const ListResourceTypesRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    PromoteResourceShareCreatedFromPolicyResponse * promoteResourceShareCreatedFromPolicy(const PromoteResourceShareCreatedFromPolicyRequest &request);
    RejectResourceShareInvitationResponse * rejectResourceShareInvitation(const RejectResourceShareInvitationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateResourceShareResponse * updateResourceShare(const UpdateResourceShareRequest &request);

private:
    Q_DECLARE_PRIVATE(RamClient)
    Q_DISABLE_COPY(RamClient)

};

} // namespace Ram
} // namespace QtAws

#endif
