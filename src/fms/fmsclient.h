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

#ifndef QTAWS_FMSCLIENT_H
#define QTAWS_FMSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsfmsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Fms {

class FmsClientPrivate;
class AssociateAdminAccountRequest;
class AssociateAdminAccountResponse;
class AssociateThirdPartyFirewallRequest;
class AssociateThirdPartyFirewallResponse;
class DeleteAppsListRequest;
class DeleteAppsListResponse;
class DeleteNotificationChannelRequest;
class DeleteNotificationChannelResponse;
class DeletePolicyRequest;
class DeletePolicyResponse;
class DeleteProtocolsListRequest;
class DeleteProtocolsListResponse;
class DisassociateAdminAccountRequest;
class DisassociateAdminAccountResponse;
class DisassociateThirdPartyFirewallRequest;
class DisassociateThirdPartyFirewallResponse;
class GetAdminAccountRequest;
class GetAdminAccountResponse;
class GetAppsListRequest;
class GetAppsListResponse;
class GetComplianceDetailRequest;
class GetComplianceDetailResponse;
class GetNotificationChannelRequest;
class GetNotificationChannelResponse;
class GetPolicyRequest;
class GetPolicyResponse;
class GetProtectionStatusRequest;
class GetProtectionStatusResponse;
class GetProtocolsListRequest;
class GetProtocolsListResponse;
class GetThirdPartyFirewallAssociationStatusRequest;
class GetThirdPartyFirewallAssociationStatusResponse;
class GetViolationDetailsRequest;
class GetViolationDetailsResponse;
class ListAppsListsRequest;
class ListAppsListsResponse;
class ListComplianceStatusRequest;
class ListComplianceStatusResponse;
class ListMemberAccountsRequest;
class ListMemberAccountsResponse;
class ListPoliciesRequest;
class ListPoliciesResponse;
class ListProtocolsListsRequest;
class ListProtocolsListsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListThirdPartyFirewallFirewallPoliciesRequest;
class ListThirdPartyFirewallFirewallPoliciesResponse;
class PutAppsListRequest;
class PutAppsListResponse;
class PutNotificationChannelRequest;
class PutNotificationChannelResponse;
class PutPolicyRequest;
class PutPolicyResponse;
class PutProtocolsListRequest;
class PutProtocolsListResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSFMS_EXPORT FmsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FmsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit FmsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateAdminAccountResponse * associateAdminAccount(const AssociateAdminAccountRequest &request);
    AssociateThirdPartyFirewallResponse * associateThirdPartyFirewall(const AssociateThirdPartyFirewallRequest &request);
    DeleteAppsListResponse * deleteAppsList(const DeleteAppsListRequest &request);
    DeleteNotificationChannelResponse * deleteNotificationChannel(const DeleteNotificationChannelRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DeleteProtocolsListResponse * deleteProtocolsList(const DeleteProtocolsListRequest &request);
    DisassociateAdminAccountResponse * disassociateAdminAccount(const DisassociateAdminAccountRequest &request);
    DisassociateThirdPartyFirewallResponse * disassociateThirdPartyFirewall(const DisassociateThirdPartyFirewallRequest &request);
    GetAdminAccountResponse * getAdminAccount(const GetAdminAccountRequest &request);
    GetAppsListResponse * getAppsList(const GetAppsListRequest &request);
    GetComplianceDetailResponse * getComplianceDetail(const GetComplianceDetailRequest &request);
    GetNotificationChannelResponse * getNotificationChannel(const GetNotificationChannelRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    GetProtectionStatusResponse * getProtectionStatus(const GetProtectionStatusRequest &request);
    GetProtocolsListResponse * getProtocolsList(const GetProtocolsListRequest &request);
    GetThirdPartyFirewallAssociationStatusResponse * getThirdPartyFirewallAssociationStatus(const GetThirdPartyFirewallAssociationStatusRequest &request);
    GetViolationDetailsResponse * getViolationDetails(const GetViolationDetailsRequest &request);
    ListAppsListsResponse * listAppsLists(const ListAppsListsRequest &request);
    ListComplianceStatusResponse * listComplianceStatus(const ListComplianceStatusRequest &request);
    ListMemberAccountsResponse * listMemberAccounts(const ListMemberAccountsRequest &request);
    ListPoliciesResponse * listPolicies(const ListPoliciesRequest &request);
    ListProtocolsListsResponse * listProtocolsLists(const ListProtocolsListsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListThirdPartyFirewallFirewallPoliciesResponse * listThirdPartyFirewallFirewallPolicies(const ListThirdPartyFirewallFirewallPoliciesRequest &request);
    PutAppsListResponse * putAppsList(const PutAppsListRequest &request);
    PutNotificationChannelResponse * putNotificationChannel(const PutNotificationChannelRequest &request);
    PutPolicyResponse * putPolicy(const PutPolicyRequest &request);
    PutProtocolsListResponse * putProtocolsList(const PutProtocolsListRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(FmsClient)
    Q_DISABLE_COPY(FmsClient)

};

} // namespace Fms
} // namespace QtAws

#endif
