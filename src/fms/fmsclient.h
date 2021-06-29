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
namespace FMS {

class FmsClientPrivate;
class AssociateAdminAccountRequest;
class AssociateAdminAccountResponse;
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
    DeleteAppsListResponse * deleteAppsList(const DeleteAppsListRequest &request);
    DeleteNotificationChannelResponse * deleteNotificationChannel(const DeleteNotificationChannelRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DeleteProtocolsListResponse * deleteProtocolsList(const DeleteProtocolsListRequest &request);
    DisassociateAdminAccountResponse * disassociateAdminAccount(const DisassociateAdminAccountRequest &request);
    GetAdminAccountResponse * getAdminAccount(const GetAdminAccountRequest &request);
    GetAppsListResponse * getAppsList(const GetAppsListRequest &request);
    GetComplianceDetailResponse * getComplianceDetail(const GetComplianceDetailRequest &request);
    GetNotificationChannelResponse * getNotificationChannel(const GetNotificationChannelRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    GetProtectionStatusResponse * getProtectionStatus(const GetProtectionStatusRequest &request);
    GetProtocolsListResponse * getProtocolsList(const GetProtocolsListRequest &request);
    GetViolationDetailsResponse * getViolationDetails(const GetViolationDetailsRequest &request);
    ListAppsListsResponse * listAppsLists(const ListAppsListsRequest &request);
    ListComplianceStatusResponse * listComplianceStatus(const ListComplianceStatusRequest &request);
    ListMemberAccountsResponse * listMemberAccounts(const ListMemberAccountsRequest &request);
    ListPoliciesResponse * listPolicies(const ListPoliciesRequest &request);
    ListProtocolsListsResponse * listProtocolsLists(const ListProtocolsListsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutAppsListResponse * putAppsList(const PutAppsListRequest &request);
    PutNotificationChannelResponse * putNotificationChannel(const PutNotificationChannelRequest &request);
    PutPolicyResponse * putPolicy(const PutPolicyRequest &request);
    PutProtocolsListResponse * putProtocolsList(const PutProtocolsListRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

protected:
    /// @cond internal
    FmsClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit FmsClient(FmsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(FmsClient)
    Q_DISABLE_COPY(FmsClient)

};

} // namespace FMS
} // namespace QtAws

#endif
