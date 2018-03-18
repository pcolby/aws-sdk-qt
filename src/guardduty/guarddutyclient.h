/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GUARDDUTYCLIENT_H
#define QTAWS_GUARDDUTYCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace GuardDuty {

class GuardDutyClientPrivate;

class QTAWS_EXPORT GuardDutyClient : public AwsAbstractClient {
    Q_OBJECT

public:
    GuardDutyClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GuardDutyClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptInvitationResponse * acceptInvitation(const AcceptInvitationRequest &request);
    ArchiveFindingsResponse * archiveFindings(const ArchiveFindingsRequest &request);
    CreateDetectorResponse * createDetector(const CreateDetectorRequest &request);
    CreateIPSetResponse * createIPSet(const CreateIPSetRequest &request);
    CreateMembersResponse * createMembers(const CreateMembersRequest &request);
    CreateSampleFindingsResponse * createSampleFindings(const CreateSampleFindingsRequest &request);
    CreateThreatIntelSetResponse * createThreatIntelSet(const CreateThreatIntelSetRequest &request);
    DeclineInvitationsResponse * declineInvitations(const DeclineInvitationsRequest &request);
    DeleteDetectorResponse * deleteDetector(const DeleteDetectorRequest &request);
    DeleteIPSetResponse * deleteIPSet(const DeleteIPSetRequest &request);
    DeleteInvitationsResponse * deleteInvitations(const DeleteInvitationsRequest &request);
    DeleteMembersResponse * deleteMembers(const DeleteMembersRequest &request);
    DeleteThreatIntelSetResponse * deleteThreatIntelSet(const DeleteThreatIntelSetRequest &request);
    DisassociateFromMasterAccountResponse * disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request);
    DisassociateMembersResponse * disassociateMembers(const DisassociateMembersRequest &request);
    GetDetectorResponse * getDetector(const GetDetectorRequest &request);
    GetFindingsResponse * getFindings(const GetFindingsRequest &request);
    GetFindingsStatisticsResponse * getFindingsStatistics(const GetFindingsStatisticsRequest &request);
    GetIPSetResponse * getIPSet(const GetIPSetRequest &request);
    GetInvitationsCountResponse * getInvitationsCount(const GetInvitationsCountRequest &request);
    GetMasterAccountResponse * getMasterAccount(const GetMasterAccountRequest &request);
    GetMembersResponse * getMembers(const GetMembersRequest &request);
    GetThreatIntelSetResponse * getThreatIntelSet(const GetThreatIntelSetRequest &request);
    InviteMembersResponse * inviteMembers(const InviteMembersRequest &request);
    ListDetectorsResponse * listDetectors(const ListDetectorsRequest &request);
    ListFindingsResponse * listFindings(const ListFindingsRequest &request);
    ListIPSetsResponse * listIPSets(const ListIPSetsRequest &request);
    ListInvitationsResponse * listInvitations(const ListInvitationsRequest &request);
    ListMembersResponse * listMembers(const ListMembersRequest &request);
    ListThreatIntelSetsResponse * listThreatIntelSets(const ListThreatIntelSetsRequest &request);
    StartMonitoringMembersResponse * startMonitoringMembers(const StartMonitoringMembersRequest &request);
    StopMonitoringMembersResponse * stopMonitoringMembers(const StopMonitoringMembersRequest &request);
    UnarchiveFindingsResponse * unarchiveFindings(const UnarchiveFindingsRequest &request);
    UpdateDetectorResponse * updateDetector(const UpdateDetectorRequest &request);
    UpdateFindingsFeedbackResponse * updateFindingsFeedback(const UpdateFindingsFeedbackRequest &request);
    UpdateIPSetResponse * updateIPSet(const UpdateIPSetRequest &request);
    UpdateThreatIntelSetResponse * updateThreatIntelSet(const UpdateThreatIntelSetRequest &request);

private:
    Q_DECLARE_PRIVATE(GuardDutyClient)
    Q_DISABLE_COPY(GuardDutyClient)

};

} // namespace GuardDuty
} // namespace AWS

#endif
