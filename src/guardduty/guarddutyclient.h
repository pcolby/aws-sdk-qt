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

#ifndef QTAWS_GUARDDUTYCLIENT_H
#define QTAWS_GUARDDUTYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsguarddutyglobal.h"

class QNetworkReply;

namespace QtAws {
namespace GuardDuty {

class GuardDutyClientPrivate;
class AcceptInvitationRequest;
class AcceptInvitationResponse;
class ArchiveFindingsRequest;
class ArchiveFindingsResponse;
class CreateDetectorRequest;
class CreateDetectorResponse;
class CreateFilterRequest;
class CreateFilterResponse;
class CreateIPSetRequest;
class CreateIPSetResponse;
class CreateMembersRequest;
class CreateMembersResponse;
class CreatePublishingDestinationRequest;
class CreatePublishingDestinationResponse;
class CreateSampleFindingsRequest;
class CreateSampleFindingsResponse;
class CreateThreatIntelSetRequest;
class CreateThreatIntelSetResponse;
class DeclineInvitationsRequest;
class DeclineInvitationsResponse;
class DeleteDetectorRequest;
class DeleteDetectorResponse;
class DeleteFilterRequest;
class DeleteFilterResponse;
class DeleteIPSetRequest;
class DeleteIPSetResponse;
class DeleteInvitationsRequest;
class DeleteInvitationsResponse;
class DeleteMembersRequest;
class DeleteMembersResponse;
class DeletePublishingDestinationRequest;
class DeletePublishingDestinationResponse;
class DeleteThreatIntelSetRequest;
class DeleteThreatIntelSetResponse;
class DescribeOrganizationConfigurationRequest;
class DescribeOrganizationConfigurationResponse;
class DescribePublishingDestinationRequest;
class DescribePublishingDestinationResponse;
class DisableOrganizationAdminAccountRequest;
class DisableOrganizationAdminAccountResponse;
class DisassociateFromMasterAccountRequest;
class DisassociateFromMasterAccountResponse;
class DisassociateMembersRequest;
class DisassociateMembersResponse;
class EnableOrganizationAdminAccountRequest;
class EnableOrganizationAdminAccountResponse;
class GetDetectorRequest;
class GetDetectorResponse;
class GetFilterRequest;
class GetFilterResponse;
class GetFindingsRequest;
class GetFindingsResponse;
class GetFindingsStatisticsRequest;
class GetFindingsStatisticsResponse;
class GetIPSetRequest;
class GetIPSetResponse;
class GetInvitationsCountRequest;
class GetInvitationsCountResponse;
class GetMasterAccountRequest;
class GetMasterAccountResponse;
class GetMemberDetectorsRequest;
class GetMemberDetectorsResponse;
class GetMembersRequest;
class GetMembersResponse;
class GetThreatIntelSetRequest;
class GetThreatIntelSetResponse;
class GetUsageStatisticsRequest;
class GetUsageStatisticsResponse;
class InviteMembersRequest;
class InviteMembersResponse;
class ListDetectorsRequest;
class ListDetectorsResponse;
class ListFiltersRequest;
class ListFiltersResponse;
class ListFindingsRequest;
class ListFindingsResponse;
class ListIPSetsRequest;
class ListIPSetsResponse;
class ListInvitationsRequest;
class ListInvitationsResponse;
class ListMembersRequest;
class ListMembersResponse;
class ListOrganizationAdminAccountsRequest;
class ListOrganizationAdminAccountsResponse;
class ListPublishingDestinationsRequest;
class ListPublishingDestinationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListThreatIntelSetsRequest;
class ListThreatIntelSetsResponse;
class StartMonitoringMembersRequest;
class StartMonitoringMembersResponse;
class StopMonitoringMembersRequest;
class StopMonitoringMembersResponse;
class TagResourceRequest;
class TagResourceResponse;
class UnarchiveFindingsRequest;
class UnarchiveFindingsResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDetectorRequest;
class UpdateDetectorResponse;
class UpdateFilterRequest;
class UpdateFilterResponse;
class UpdateFindingsFeedbackRequest;
class UpdateFindingsFeedbackResponse;
class UpdateIPSetRequest;
class UpdateIPSetResponse;
class UpdateMemberDetectorsRequest;
class UpdateMemberDetectorsResponse;
class UpdateOrganizationConfigurationRequest;
class UpdateOrganizationConfigurationResponse;
class UpdatePublishingDestinationRequest;
class UpdatePublishingDestinationResponse;
class UpdateThreatIntelSetRequest;
class UpdateThreatIntelSetResponse;

class QTAWSGUARDDUTY_EXPORT GuardDutyClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GuardDutyClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GuardDutyClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptInvitationResponse * acceptInvitation(const AcceptInvitationRequest &request);
    ArchiveFindingsResponse * archiveFindings(const ArchiveFindingsRequest &request);
    CreateDetectorResponse * createDetector(const CreateDetectorRequest &request);
    CreateFilterResponse * createFilter(const CreateFilterRequest &request);
    CreateIPSetResponse * createIPSet(const CreateIPSetRequest &request);
    CreateMembersResponse * createMembers(const CreateMembersRequest &request);
    CreatePublishingDestinationResponse * createPublishingDestination(const CreatePublishingDestinationRequest &request);
    CreateSampleFindingsResponse * createSampleFindings(const CreateSampleFindingsRequest &request);
    CreateThreatIntelSetResponse * createThreatIntelSet(const CreateThreatIntelSetRequest &request);
    DeclineInvitationsResponse * declineInvitations(const DeclineInvitationsRequest &request);
    DeleteDetectorResponse * deleteDetector(const DeleteDetectorRequest &request);
    DeleteFilterResponse * deleteFilter(const DeleteFilterRequest &request);
    DeleteIPSetResponse * deleteIPSet(const DeleteIPSetRequest &request);
    DeleteInvitationsResponse * deleteInvitations(const DeleteInvitationsRequest &request);
    DeleteMembersResponse * deleteMembers(const DeleteMembersRequest &request);
    DeletePublishingDestinationResponse * deletePublishingDestination(const DeletePublishingDestinationRequest &request);
    DeleteThreatIntelSetResponse * deleteThreatIntelSet(const DeleteThreatIntelSetRequest &request);
    DescribeOrganizationConfigurationResponse * describeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest &request);
    DescribePublishingDestinationResponse * describePublishingDestination(const DescribePublishingDestinationRequest &request);
    DisableOrganizationAdminAccountResponse * disableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest &request);
    DisassociateFromMasterAccountResponse * disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request);
    DisassociateMembersResponse * disassociateMembers(const DisassociateMembersRequest &request);
    EnableOrganizationAdminAccountResponse * enableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest &request);
    GetDetectorResponse * getDetector(const GetDetectorRequest &request);
    GetFilterResponse * getFilter(const GetFilterRequest &request);
    GetFindingsResponse * getFindings(const GetFindingsRequest &request);
    GetFindingsStatisticsResponse * getFindingsStatistics(const GetFindingsStatisticsRequest &request);
    GetIPSetResponse * getIPSet(const GetIPSetRequest &request);
    GetInvitationsCountResponse * getInvitationsCount(const GetInvitationsCountRequest &request);
    GetMasterAccountResponse * getMasterAccount(const GetMasterAccountRequest &request);
    GetMemberDetectorsResponse * getMemberDetectors(const GetMemberDetectorsRequest &request);
    GetMembersResponse * getMembers(const GetMembersRequest &request);
    GetThreatIntelSetResponse * getThreatIntelSet(const GetThreatIntelSetRequest &request);
    GetUsageStatisticsResponse * getUsageStatistics(const GetUsageStatisticsRequest &request);
    InviteMembersResponse * inviteMembers(const InviteMembersRequest &request);
    ListDetectorsResponse * listDetectors(const ListDetectorsRequest &request);
    ListFiltersResponse * listFilters(const ListFiltersRequest &request);
    ListFindingsResponse * listFindings(const ListFindingsRequest &request);
    ListIPSetsResponse * listIPSets(const ListIPSetsRequest &request);
    ListInvitationsResponse * listInvitations(const ListInvitationsRequest &request);
    ListMembersResponse * listMembers(const ListMembersRequest &request);
    ListOrganizationAdminAccountsResponse * listOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest &request);
    ListPublishingDestinationsResponse * listPublishingDestinations(const ListPublishingDestinationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListThreatIntelSetsResponse * listThreatIntelSets(const ListThreatIntelSetsRequest &request);
    StartMonitoringMembersResponse * startMonitoringMembers(const StartMonitoringMembersRequest &request);
    StopMonitoringMembersResponse * stopMonitoringMembers(const StopMonitoringMembersRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UnarchiveFindingsResponse * unarchiveFindings(const UnarchiveFindingsRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDetectorResponse * updateDetector(const UpdateDetectorRequest &request);
    UpdateFilterResponse * updateFilter(const UpdateFilterRequest &request);
    UpdateFindingsFeedbackResponse * updateFindingsFeedback(const UpdateFindingsFeedbackRequest &request);
    UpdateIPSetResponse * updateIPSet(const UpdateIPSetRequest &request);
    UpdateMemberDetectorsResponse * updateMemberDetectors(const UpdateMemberDetectorsRequest &request);
    UpdateOrganizationConfigurationResponse * updateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest &request);
    UpdatePublishingDestinationResponse * updatePublishingDestination(const UpdatePublishingDestinationRequest &request);
    UpdateThreatIntelSetResponse * updateThreatIntelSet(const UpdateThreatIntelSetRequest &request);

private:
    Q_DECLARE_PRIVATE(GuardDutyClient)
    Q_DISABLE_COPY(GuardDutyClient)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
