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

#ifndef QTAWS_MACIE2CLIENT_H
#define QTAWS_MACIE2CLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Macie2 {

class Macie2ClientPrivate;
class AcceptInvitationRequest;
class AcceptInvitationResponse;
class BatchGetCustomDataIdentifiersRequest;
class BatchGetCustomDataIdentifiersResponse;
class CreateClassificationJobRequest;
class CreateClassificationJobResponse;
class CreateCustomDataIdentifierRequest;
class CreateCustomDataIdentifierResponse;
class CreateFindingsFilterRequest;
class CreateFindingsFilterResponse;
class CreateInvitationsRequest;
class CreateInvitationsResponse;
class CreateMemberRequest;
class CreateMemberResponse;
class CreateSampleFindingsRequest;
class CreateSampleFindingsResponse;
class DeclineInvitationsRequest;
class DeclineInvitationsResponse;
class DeleteCustomDataIdentifierRequest;
class DeleteCustomDataIdentifierResponse;
class DeleteFindingsFilterRequest;
class DeleteFindingsFilterResponse;
class DeleteInvitationsRequest;
class DeleteInvitationsResponse;
class DeleteMemberRequest;
class DeleteMemberResponse;
class DescribeBucketsRequest;
class DescribeBucketsResponse;
class DescribeClassificationJobRequest;
class DescribeClassificationJobResponse;
class DescribeOrganizationConfigurationRequest;
class DescribeOrganizationConfigurationResponse;
class DisableMacieRequest;
class DisableMacieResponse;
class DisableOrganizationAdminAccountRequest;
class DisableOrganizationAdminAccountResponse;
class DisassociateFromAdministratorAccountRequest;
class DisassociateFromAdministratorAccountResponse;
class DisassociateFromMasterAccountRequest;
class DisassociateFromMasterAccountResponse;
class DisassociateMemberRequest;
class DisassociateMemberResponse;
class EnableMacieRequest;
class EnableMacieResponse;
class EnableOrganizationAdminAccountRequest;
class EnableOrganizationAdminAccountResponse;
class GetAdministratorAccountRequest;
class GetAdministratorAccountResponse;
class GetBucketStatisticsRequest;
class GetBucketStatisticsResponse;
class GetClassificationExportConfigurationRequest;
class GetClassificationExportConfigurationResponse;
class GetCustomDataIdentifierRequest;
class GetCustomDataIdentifierResponse;
class GetFindingStatisticsRequest;
class GetFindingStatisticsResponse;
class GetFindingsRequest;
class GetFindingsResponse;
class GetFindingsFilterRequest;
class GetFindingsFilterResponse;
class GetFindingsPublicationConfigurationRequest;
class GetFindingsPublicationConfigurationResponse;
class GetInvitationsCountRequest;
class GetInvitationsCountResponse;
class GetMacieSessionRequest;
class GetMacieSessionResponse;
class GetMasterAccountRequest;
class GetMasterAccountResponse;
class GetMemberRequest;
class GetMemberResponse;
class GetUsageStatisticsRequest;
class GetUsageStatisticsResponse;
class GetUsageTotalsRequest;
class GetUsageTotalsResponse;
class ListClassificationJobsRequest;
class ListClassificationJobsResponse;
class ListCustomDataIdentifiersRequest;
class ListCustomDataIdentifiersResponse;
class ListFindingsRequest;
class ListFindingsResponse;
class ListFindingsFiltersRequest;
class ListFindingsFiltersResponse;
class ListInvitationsRequest;
class ListInvitationsResponse;
class ListMembersRequest;
class ListMembersResponse;
class ListOrganizationAdminAccountsRequest;
class ListOrganizationAdminAccountsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutClassificationExportConfigurationRequest;
class PutClassificationExportConfigurationResponse;
class PutFindingsPublicationConfigurationRequest;
class PutFindingsPublicationConfigurationResponse;
class SearchResourcesRequest;
class SearchResourcesResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestCustomDataIdentifierRequest;
class TestCustomDataIdentifierResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateClassificationJobRequest;
class UpdateClassificationJobResponse;
class UpdateFindingsFilterRequest;
class UpdateFindingsFilterResponse;
class UpdateMacieSessionRequest;
class UpdateMacieSessionResponse;
class UpdateMemberSessionRequest;
class UpdateMemberSessionResponse;
class UpdateOrganizationConfigurationRequest;
class UpdateOrganizationConfigurationResponse;

class QTAWS_EXPORT Macie2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Macie2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Macie2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptInvitationResponse * acceptInvitation(const AcceptInvitationRequest &request);
    BatchGetCustomDataIdentifiersResponse * batchGetCustomDataIdentifiers(const BatchGetCustomDataIdentifiersRequest &request);
    CreateClassificationJobResponse * createClassificationJob(const CreateClassificationJobRequest &request);
    CreateCustomDataIdentifierResponse * createCustomDataIdentifier(const CreateCustomDataIdentifierRequest &request);
    CreateFindingsFilterResponse * createFindingsFilter(const CreateFindingsFilterRequest &request);
    CreateInvitationsResponse * createInvitations(const CreateInvitationsRequest &request);
    CreateMemberResponse * createMember(const CreateMemberRequest &request);
    CreateSampleFindingsResponse * createSampleFindings(const CreateSampleFindingsRequest &request);
    DeclineInvitationsResponse * declineInvitations(const DeclineInvitationsRequest &request);
    DeleteCustomDataIdentifierResponse * deleteCustomDataIdentifier(const DeleteCustomDataIdentifierRequest &request);
    DeleteFindingsFilterResponse * deleteFindingsFilter(const DeleteFindingsFilterRequest &request);
    DeleteInvitationsResponse * deleteInvitations(const DeleteInvitationsRequest &request);
    DeleteMemberResponse * deleteMember(const DeleteMemberRequest &request);
    DescribeBucketsResponse * describeBuckets(const DescribeBucketsRequest &request);
    DescribeClassificationJobResponse * describeClassificationJob(const DescribeClassificationJobRequest &request);
    DescribeOrganizationConfigurationResponse * describeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest &request);
    DisableMacieResponse * disableMacie(const DisableMacieRequest &request);
    DisableOrganizationAdminAccountResponse * disableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest &request);
    DisassociateFromAdministratorAccountResponse * disassociateFromAdministratorAccount(const DisassociateFromAdministratorAccountRequest &request);
    DisassociateFromMasterAccountResponse * disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request);
    DisassociateMemberResponse * disassociateMember(const DisassociateMemberRequest &request);
    EnableMacieResponse * enableMacie(const EnableMacieRequest &request);
    EnableOrganizationAdminAccountResponse * enableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest &request);
    GetAdministratorAccountResponse * getAdministratorAccount(const GetAdministratorAccountRequest &request);
    GetBucketStatisticsResponse * getBucketStatistics(const GetBucketStatisticsRequest &request);
    GetClassificationExportConfigurationResponse * getClassificationExportConfiguration(const GetClassificationExportConfigurationRequest &request);
    GetCustomDataIdentifierResponse * getCustomDataIdentifier(const GetCustomDataIdentifierRequest &request);
    GetFindingStatisticsResponse * getFindingStatistics(const GetFindingStatisticsRequest &request);
    GetFindingsResponse * getFindings(const GetFindingsRequest &request);
    GetFindingsFilterResponse * getFindingsFilter(const GetFindingsFilterRequest &request);
    GetFindingsPublicationConfigurationResponse * getFindingsPublicationConfiguration(const GetFindingsPublicationConfigurationRequest &request);
    GetInvitationsCountResponse * getInvitationsCount(const GetInvitationsCountRequest &request);
    GetMacieSessionResponse * getMacieSession(const GetMacieSessionRequest &request);
    GetMasterAccountResponse * getMasterAccount(const GetMasterAccountRequest &request);
    GetMemberResponse * getMember(const GetMemberRequest &request);
    GetUsageStatisticsResponse * getUsageStatistics(const GetUsageStatisticsRequest &request);
    GetUsageTotalsResponse * getUsageTotals(const GetUsageTotalsRequest &request);
    ListClassificationJobsResponse * listClassificationJobs(const ListClassificationJobsRequest &request);
    ListCustomDataIdentifiersResponse * listCustomDataIdentifiers(const ListCustomDataIdentifiersRequest &request);
    ListFindingsResponse * listFindings(const ListFindingsRequest &request);
    ListFindingsFiltersResponse * listFindingsFilters(const ListFindingsFiltersRequest &request);
    ListInvitationsResponse * listInvitations(const ListInvitationsRequest &request);
    ListMembersResponse * listMembers(const ListMembersRequest &request);
    ListOrganizationAdminAccountsResponse * listOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutClassificationExportConfigurationResponse * putClassificationExportConfiguration(const PutClassificationExportConfigurationRequest &request);
    PutFindingsPublicationConfigurationResponse * putFindingsPublicationConfiguration(const PutFindingsPublicationConfigurationRequest &request);
    SearchResourcesResponse * searchResources(const SearchResourcesRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestCustomDataIdentifierResponse * testCustomDataIdentifier(const TestCustomDataIdentifierRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateClassificationJobResponse * updateClassificationJob(const UpdateClassificationJobRequest &request);
    UpdateFindingsFilterResponse * updateFindingsFilter(const UpdateFindingsFilterRequest &request);
    UpdateMacieSessionResponse * updateMacieSession(const UpdateMacieSessionRequest &request);
    UpdateMemberSessionResponse * updateMemberSession(const UpdateMemberSessionRequest &request);
    UpdateOrganizationConfigurationResponse * updateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(Macie2Client)
    Q_DISABLE_COPY(Macie2Client)

};

} // namespace Macie2
} // namespace QtAws

#endif
