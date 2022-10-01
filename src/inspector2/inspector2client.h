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

#ifndef QTAWS_INSPECTOR2CLIENT_H
#define QTAWS_INSPECTOR2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsinspector2global.h"

class QNetworkReply;

namespace QtAws {
namespace Inspector2 {

class Inspector2ClientPrivate;
class AssociateMemberRequest;
class AssociateMemberResponse;
class BatchGetAccountStatusRequest;
class BatchGetAccountStatusResponse;
class BatchGetFreeTrialInfoRequest;
class BatchGetFreeTrialInfoResponse;
class CancelFindingsReportRequest;
class CancelFindingsReportResponse;
class CreateFilterRequest;
class CreateFilterResponse;
class CreateFindingsReportRequest;
class CreateFindingsReportResponse;
class DeleteFilterRequest;
class DeleteFilterResponse;
class DescribeOrganizationConfigurationRequest;
class DescribeOrganizationConfigurationResponse;
class DisableRequest;
class DisableResponse;
class DisableDelegatedAdminAccountRequest;
class DisableDelegatedAdminAccountResponse;
class DisassociateMemberRequest;
class DisassociateMemberResponse;
class EnableRequest;
class EnableResponse;
class EnableDelegatedAdminAccountRequest;
class EnableDelegatedAdminAccountResponse;
class GetConfigurationRequest;
class GetConfigurationResponse;
class GetDelegatedAdminAccountRequest;
class GetDelegatedAdminAccountResponse;
class GetFindingsReportStatusRequest;
class GetFindingsReportStatusResponse;
class GetMemberRequest;
class GetMemberResponse;
class ListAccountPermissionsRequest;
class ListAccountPermissionsResponse;
class ListCoverageRequest;
class ListCoverageResponse;
class ListCoverageStatisticsRequest;
class ListCoverageStatisticsResponse;
class ListDelegatedAdminAccountsRequest;
class ListDelegatedAdminAccountsResponse;
class ListFiltersRequest;
class ListFiltersResponse;
class ListFindingAggregationsRequest;
class ListFindingAggregationsResponse;
class ListFindingsRequest;
class ListFindingsResponse;
class ListMembersRequest;
class ListMembersResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListUsageTotalsRequest;
class ListUsageTotalsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConfigurationRequest;
class UpdateConfigurationResponse;
class UpdateFilterRequest;
class UpdateFilterResponse;
class UpdateOrganizationConfigurationRequest;
class UpdateOrganizationConfigurationResponse;

class QTAWSINSPECTOR2_EXPORT Inspector2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Inspector2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit Inspector2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateMemberResponse * associateMember(const AssociateMemberRequest &request);
    BatchGetAccountStatusResponse * batchGetAccountStatus(const BatchGetAccountStatusRequest &request);
    BatchGetFreeTrialInfoResponse * batchGetFreeTrialInfo(const BatchGetFreeTrialInfoRequest &request);
    CancelFindingsReportResponse * cancelFindingsReport(const CancelFindingsReportRequest &request);
    CreateFilterResponse * createFilter(const CreateFilterRequest &request);
    CreateFindingsReportResponse * createFindingsReport(const CreateFindingsReportRequest &request);
    DeleteFilterResponse * deleteFilter(const DeleteFilterRequest &request);
    DescribeOrganizationConfigurationResponse * describeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest &request);
    DisableResponse * disable(const DisableRequest &request);
    DisableDelegatedAdminAccountResponse * disableDelegatedAdminAccount(const DisableDelegatedAdminAccountRequest &request);
    DisassociateMemberResponse * disassociateMember(const DisassociateMemberRequest &request);
    EnableResponse * enable(const EnableRequest &request);
    EnableDelegatedAdminAccountResponse * enableDelegatedAdminAccount(const EnableDelegatedAdminAccountRequest &request);
    GetConfigurationResponse * getConfiguration(const GetConfigurationRequest &request);
    GetDelegatedAdminAccountResponse * getDelegatedAdminAccount(const GetDelegatedAdminAccountRequest &request);
    GetFindingsReportStatusResponse * getFindingsReportStatus(const GetFindingsReportStatusRequest &request);
    GetMemberResponse * getMember(const GetMemberRequest &request);
    ListAccountPermissionsResponse * listAccountPermissions(const ListAccountPermissionsRequest &request);
    ListCoverageResponse * listCoverage(const ListCoverageRequest &request);
    ListCoverageStatisticsResponse * listCoverageStatistics(const ListCoverageStatisticsRequest &request);
    ListDelegatedAdminAccountsResponse * listDelegatedAdminAccounts(const ListDelegatedAdminAccountsRequest &request);
    ListFiltersResponse * listFilters(const ListFiltersRequest &request);
    ListFindingAggregationsResponse * listFindingAggregations(const ListFindingAggregationsRequest &request);
    ListFindingsResponse * listFindings(const ListFindingsRequest &request);
    ListMembersResponse * listMembers(const ListMembersRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListUsageTotalsResponse * listUsageTotals(const ListUsageTotalsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConfigurationResponse * updateConfiguration(const UpdateConfigurationRequest &request);
    UpdateFilterResponse * updateFilter(const UpdateFilterRequest &request);
    UpdateOrganizationConfigurationResponse * updateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(Inspector2Client)
    Q_DISABLE_COPY(Inspector2Client)

};

} // namespace Inspector2
} // namespace QtAws

#endif
