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

#ifndef QTAWS_ORGANIZATIONSCLIENT_H
#define QTAWS_ORGANIZATIONSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace QtAws {
namespace Organizations {

class OrganizationsClientPrivate;
class AcceptHandshakeRequest;
class AcceptHandshakeResponse;
class AttachPolicyRequest;
class AttachPolicyResponse;
class CancelHandshakeRequest;
class CancelHandshakeResponse;
class CreateAccountRequest;
class CreateAccountResponse;
class CreateOrganizationRequest;
class CreateOrganizationResponse;
class CreateOrganizationalUnitRequest;
class CreateOrganizationalUnitResponse;
class CreatePolicyRequest;
class CreatePolicyResponse;
class DeclineHandshakeRequest;
class DeclineHandshakeResponse;
class DeleteOrganizationResponse;
class DeleteOrganizationalUnitRequest;
class DeleteOrganizationalUnitResponse;
class DeletePolicyRequest;
class DeletePolicyResponse;
class DescribeAccountRequest;
class DescribeAccountResponse;
class DescribeCreateAccountStatusRequest;
class DescribeCreateAccountStatusResponse;
class DescribeHandshakeRequest;
class DescribeHandshakeResponse;
class DescribeOrganizationResponse;
class DescribeOrganizationalUnitRequest;
class DescribeOrganizationalUnitResponse;
class DescribePolicyRequest;
class DescribePolicyResponse;
class DetachPolicyRequest;
class DetachPolicyResponse;
class DisableAWSServiceAccessRequest;
class DisableAWSServiceAccessResponse;
class DisablePolicyTypeRequest;
class DisablePolicyTypeResponse;
class EnableAWSServiceAccessRequest;
class EnableAWSServiceAccessResponse;
class EnableAllFeaturesRequest;
class EnableAllFeaturesResponse;
class EnablePolicyTypeRequest;
class EnablePolicyTypeResponse;
class InviteAccountToOrganizationRequest;
class InviteAccountToOrganizationResponse;
class LeaveOrganizationResponse;
class ListAWSServiceAccessForOrganizationRequest;
class ListAWSServiceAccessForOrganizationResponse;
class ListAccountsRequest;
class ListAccountsResponse;
class ListAccountsForParentRequest;
class ListAccountsForParentResponse;
class ListChildrenRequest;
class ListChildrenResponse;
class ListCreateAccountStatusRequest;
class ListCreateAccountStatusResponse;
class ListHandshakesForAccountRequest;
class ListHandshakesForAccountResponse;
class ListHandshakesForOrganizationRequest;
class ListHandshakesForOrganizationResponse;
class ListOrganizationalUnitsForParentRequest;
class ListOrganizationalUnitsForParentResponse;
class ListParentsRequest;
class ListParentsResponse;
class ListPoliciesRequest;
class ListPoliciesResponse;
class ListPoliciesForTargetRequest;
class ListPoliciesForTargetResponse;
class ListRootsRequest;
class ListRootsResponse;
class ListTargetsForPolicyRequest;
class ListTargetsForPolicyResponse;
class MoveAccountRequest;
class MoveAccountResponse;
class RemoveAccountFromOrganizationRequest;
class RemoveAccountFromOrganizationResponse;
class UpdateOrganizationalUnitRequest;
class UpdateOrganizationalUnitResponse;
class UpdatePolicyRequest;
class UpdatePolicyResponse;

class QTAWS_EXPORT OrganizationsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    OrganizationsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    OrganizationsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptHandshakeResponse * acceptHandshake(const AcceptHandshakeRequest &request);
    AttachPolicyResponse * attachPolicy(const AttachPolicyRequest &request);
    CancelHandshakeResponse * cancelHandshake(const CancelHandshakeRequest &request);
    CreateAccountResponse * createAccount(const CreateAccountRequest &request);
    CreateOrganizationResponse * createOrganization(const CreateOrganizationRequest &request);
    CreateOrganizationalUnitResponse * createOrganizationalUnit(const CreateOrganizationalUnitRequest &request);
    CreatePolicyResponse * createPolicy(const CreatePolicyRequest &request);
    DeclineHandshakeResponse * declineHandshake(const DeclineHandshakeRequest &request);
    DeleteOrganizationResponse * deleteOrganization();
    DeleteOrganizationalUnitResponse * deleteOrganizationalUnit(const DeleteOrganizationalUnitRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DescribeAccountResponse * describeAccount(const DescribeAccountRequest &request);
    DescribeCreateAccountStatusResponse * describeCreateAccountStatus(const DescribeCreateAccountStatusRequest &request);
    DescribeHandshakeResponse * describeHandshake(const DescribeHandshakeRequest &request);
    DescribeOrganizationResponse * describeOrganization();
    DescribeOrganizationalUnitResponse * describeOrganizationalUnit(const DescribeOrganizationalUnitRequest &request);
    DescribePolicyResponse * describePolicy(const DescribePolicyRequest &request);
    DetachPolicyResponse * detachPolicy(const DetachPolicyRequest &request);
    DisableAWSServiceAccessResponse * disableAWSServiceAccess(const DisableAWSServiceAccessRequest &request);
    DisablePolicyTypeResponse * disablePolicyType(const DisablePolicyTypeRequest &request);
    EnableAWSServiceAccessResponse * enableAWSServiceAccess(const EnableAWSServiceAccessRequest &request);
    EnableAllFeaturesResponse * enableAllFeatures(const EnableAllFeaturesRequest &request);
    EnablePolicyTypeResponse * enablePolicyType(const EnablePolicyTypeRequest &request);
    InviteAccountToOrganizationResponse * inviteAccountToOrganization(const InviteAccountToOrganizationRequest &request);
    LeaveOrganizationResponse * leaveOrganization();
    ListAWSServiceAccessForOrganizationResponse * listAWSServiceAccessForOrganization(const ListAWSServiceAccessForOrganizationRequest &request);
    ListAccountsResponse * listAccounts(const ListAccountsRequest &request);
    ListAccountsForParentResponse * listAccountsForParent(const ListAccountsForParentRequest &request);
    ListChildrenResponse * listChildren(const ListChildrenRequest &request);
    ListCreateAccountStatusResponse * listCreateAccountStatus(const ListCreateAccountStatusRequest &request);
    ListHandshakesForAccountResponse * listHandshakesForAccount(const ListHandshakesForAccountRequest &request);
    ListHandshakesForOrganizationResponse * listHandshakesForOrganization(const ListHandshakesForOrganizationRequest &request);
    ListOrganizationalUnitsForParentResponse * listOrganizationalUnitsForParent(const ListOrganizationalUnitsForParentRequest &request);
    ListParentsResponse * listParents(const ListParentsRequest &request);
    ListPoliciesResponse * listPolicies(const ListPoliciesRequest &request);
    ListPoliciesForTargetResponse * listPoliciesForTarget(const ListPoliciesForTargetRequest &request);
    ListRootsResponse * listRoots(const ListRootsRequest &request);
    ListTargetsForPolicyResponse * listTargetsForPolicy(const ListTargetsForPolicyRequest &request);
    MoveAccountResponse * moveAccount(const MoveAccountRequest &request);
    RemoveAccountFromOrganizationResponse * removeAccountFromOrganization(const RemoveAccountFromOrganizationRequest &request);
    UpdateOrganizationalUnitResponse * updateOrganizationalUnit(const UpdateOrganizationalUnitRequest &request);
    UpdatePolicyResponse * updatePolicy(const UpdatePolicyRequest &request);

private:
    Q_DECLARE_PRIVATE(OrganizationsClient)
    Q_DISABLE_COPY(OrganizationsClient)

};

} // namespace Organizations
} // namespace QtAws

#endif
