// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOADMINCLIENT_H
#define QTAWS_SSOADMINCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsssoadminglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SsoAdmin {

class SsoAdminClientPrivate;
class AttachCustomerManagedPolicyReferenceToPermissionSetRequest;
class AttachCustomerManagedPolicyReferenceToPermissionSetResponse;
class AttachManagedPolicyToPermissionSetRequest;
class AttachManagedPolicyToPermissionSetResponse;
class CreateAccountAssignmentRequest;
class CreateAccountAssignmentResponse;
class CreateInstanceAccessControlAttributeConfigurationRequest;
class CreateInstanceAccessControlAttributeConfigurationResponse;
class CreatePermissionSetRequest;
class CreatePermissionSetResponse;
class DeleteAccountAssignmentRequest;
class DeleteAccountAssignmentResponse;
class DeleteInlinePolicyFromPermissionSetRequest;
class DeleteInlinePolicyFromPermissionSetResponse;
class DeleteInstanceAccessControlAttributeConfigurationRequest;
class DeleteInstanceAccessControlAttributeConfigurationResponse;
class DeletePermissionSetRequest;
class DeletePermissionSetResponse;
class DeletePermissionsBoundaryFromPermissionSetRequest;
class DeletePermissionsBoundaryFromPermissionSetResponse;
class DescribeAccountAssignmentCreationStatusRequest;
class DescribeAccountAssignmentCreationStatusResponse;
class DescribeAccountAssignmentDeletionStatusRequest;
class DescribeAccountAssignmentDeletionStatusResponse;
class DescribeInstanceAccessControlAttributeConfigurationRequest;
class DescribeInstanceAccessControlAttributeConfigurationResponse;
class DescribePermissionSetRequest;
class DescribePermissionSetResponse;
class DescribePermissionSetProvisioningStatusRequest;
class DescribePermissionSetProvisioningStatusResponse;
class DetachCustomerManagedPolicyReferenceFromPermissionSetRequest;
class DetachCustomerManagedPolicyReferenceFromPermissionSetResponse;
class DetachManagedPolicyFromPermissionSetRequest;
class DetachManagedPolicyFromPermissionSetResponse;
class GetInlinePolicyForPermissionSetRequest;
class GetInlinePolicyForPermissionSetResponse;
class GetPermissionsBoundaryForPermissionSetRequest;
class GetPermissionsBoundaryForPermissionSetResponse;
class ListAccountAssignmentCreationStatusRequest;
class ListAccountAssignmentCreationStatusResponse;
class ListAccountAssignmentDeletionStatusRequest;
class ListAccountAssignmentDeletionStatusResponse;
class ListAccountAssignmentsRequest;
class ListAccountAssignmentsResponse;
class ListAccountsForProvisionedPermissionSetRequest;
class ListAccountsForProvisionedPermissionSetResponse;
class ListCustomerManagedPolicyReferencesInPermissionSetRequest;
class ListCustomerManagedPolicyReferencesInPermissionSetResponse;
class ListInstancesRequest;
class ListInstancesResponse;
class ListManagedPoliciesInPermissionSetRequest;
class ListManagedPoliciesInPermissionSetResponse;
class ListPermissionSetProvisioningStatusRequest;
class ListPermissionSetProvisioningStatusResponse;
class ListPermissionSetsRequest;
class ListPermissionSetsResponse;
class ListPermissionSetsProvisionedToAccountRequest;
class ListPermissionSetsProvisionedToAccountResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ProvisionPermissionSetRequest;
class ProvisionPermissionSetResponse;
class PutInlinePolicyToPermissionSetRequest;
class PutInlinePolicyToPermissionSetResponse;
class PutPermissionsBoundaryToPermissionSetRequest;
class PutPermissionsBoundaryToPermissionSetResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateInstanceAccessControlAttributeConfigurationRequest;
class UpdateInstanceAccessControlAttributeConfigurationResponse;
class UpdatePermissionSetRequest;
class UpdatePermissionSetResponse;

class QTAWSSSOADMIN_EXPORT SsoAdminClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SsoAdminClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SsoAdminClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AttachCustomerManagedPolicyReferenceToPermissionSetResponse * attachCustomerManagedPolicyReferenceToPermissionSet(const AttachCustomerManagedPolicyReferenceToPermissionSetRequest &request);
    AttachManagedPolicyToPermissionSetResponse * attachManagedPolicyToPermissionSet(const AttachManagedPolicyToPermissionSetRequest &request);
    CreateAccountAssignmentResponse * createAccountAssignment(const CreateAccountAssignmentRequest &request);
    CreateInstanceAccessControlAttributeConfigurationResponse * createInstanceAccessControlAttributeConfiguration(const CreateInstanceAccessControlAttributeConfigurationRequest &request);
    CreatePermissionSetResponse * createPermissionSet(const CreatePermissionSetRequest &request);
    DeleteAccountAssignmentResponse * deleteAccountAssignment(const DeleteAccountAssignmentRequest &request);
    DeleteInlinePolicyFromPermissionSetResponse * deleteInlinePolicyFromPermissionSet(const DeleteInlinePolicyFromPermissionSetRequest &request);
    DeleteInstanceAccessControlAttributeConfigurationResponse * deleteInstanceAccessControlAttributeConfiguration(const DeleteInstanceAccessControlAttributeConfigurationRequest &request);
    DeletePermissionSetResponse * deletePermissionSet(const DeletePermissionSetRequest &request);
    DeletePermissionsBoundaryFromPermissionSetResponse * deletePermissionsBoundaryFromPermissionSet(const DeletePermissionsBoundaryFromPermissionSetRequest &request);
    DescribeAccountAssignmentCreationStatusResponse * describeAccountAssignmentCreationStatus(const DescribeAccountAssignmentCreationStatusRequest &request);
    DescribeAccountAssignmentDeletionStatusResponse * describeAccountAssignmentDeletionStatus(const DescribeAccountAssignmentDeletionStatusRequest &request);
    DescribeInstanceAccessControlAttributeConfigurationResponse * describeInstanceAccessControlAttributeConfiguration(const DescribeInstanceAccessControlAttributeConfigurationRequest &request);
    DescribePermissionSetResponse * describePermissionSet(const DescribePermissionSetRequest &request);
    DescribePermissionSetProvisioningStatusResponse * describePermissionSetProvisioningStatus(const DescribePermissionSetProvisioningStatusRequest &request);
    DetachCustomerManagedPolicyReferenceFromPermissionSetResponse * detachCustomerManagedPolicyReferenceFromPermissionSet(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest &request);
    DetachManagedPolicyFromPermissionSetResponse * detachManagedPolicyFromPermissionSet(const DetachManagedPolicyFromPermissionSetRequest &request);
    GetInlinePolicyForPermissionSetResponse * getInlinePolicyForPermissionSet(const GetInlinePolicyForPermissionSetRequest &request);
    GetPermissionsBoundaryForPermissionSetResponse * getPermissionsBoundaryForPermissionSet(const GetPermissionsBoundaryForPermissionSetRequest &request);
    ListAccountAssignmentCreationStatusResponse * listAccountAssignmentCreationStatus(const ListAccountAssignmentCreationStatusRequest &request);
    ListAccountAssignmentDeletionStatusResponse * listAccountAssignmentDeletionStatus(const ListAccountAssignmentDeletionStatusRequest &request);
    ListAccountAssignmentsResponse * listAccountAssignments(const ListAccountAssignmentsRequest &request);
    ListAccountsForProvisionedPermissionSetResponse * listAccountsForProvisionedPermissionSet(const ListAccountsForProvisionedPermissionSetRequest &request);
    ListCustomerManagedPolicyReferencesInPermissionSetResponse * listCustomerManagedPolicyReferencesInPermissionSet(const ListCustomerManagedPolicyReferencesInPermissionSetRequest &request);
    ListInstancesResponse * listInstances(const ListInstancesRequest &request);
    ListManagedPoliciesInPermissionSetResponse * listManagedPoliciesInPermissionSet(const ListManagedPoliciesInPermissionSetRequest &request);
    ListPermissionSetProvisioningStatusResponse * listPermissionSetProvisioningStatus(const ListPermissionSetProvisioningStatusRequest &request);
    ListPermissionSetsResponse * listPermissionSets(const ListPermissionSetsRequest &request);
    ListPermissionSetsProvisionedToAccountResponse * listPermissionSetsProvisionedToAccount(const ListPermissionSetsProvisionedToAccountRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ProvisionPermissionSetResponse * provisionPermissionSet(const ProvisionPermissionSetRequest &request);
    PutInlinePolicyToPermissionSetResponse * putInlinePolicyToPermissionSet(const PutInlinePolicyToPermissionSetRequest &request);
    PutPermissionsBoundaryToPermissionSetResponse * putPermissionsBoundaryToPermissionSet(const PutPermissionsBoundaryToPermissionSetRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateInstanceAccessControlAttributeConfigurationResponse * updateInstanceAccessControlAttributeConfiguration(const UpdateInstanceAccessControlAttributeConfigurationRequest &request);
    UpdatePermissionSetResponse * updatePermissionSet(const UpdatePermissionSetRequest &request);

private:
    Q_DECLARE_PRIVATE(SsoAdminClient)
    Q_DISABLE_COPY(SsoAdminClient)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
