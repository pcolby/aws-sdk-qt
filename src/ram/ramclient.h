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

#ifndef QTAWS_RAMCLIENT_H
#define QTAWS_RAMCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace RAM {

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

class QTAWS_EXPORT RamClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RamClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    RamClient(
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

protected:
    /// @cond internal
    RamClientPrivate * const d_ptr; ///< Internal d-pointer.
    RamClient(RamClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(RamClient)
    Q_DISABLE_COPY(RamClient)

};

} // namespace RAM
} // namespace QtAws

#endif
