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

#include "guarddutyclient.h"
#include "guarddutyclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace GuardDuty {

/**
 * @class  GuardDutyClient
 *
 * @brief  Client for Amazon GuardDuty
 *
 */

/**
 * @brief  Constructs a new GuardDutyClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
GuardDutyClient::GuardDutyClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GuardDutyClientPrivate(this), parent)
{
    Q_D(GuardDutyClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("guardduty");
}

/**
 * @brief  Constructs a new GuardDutyClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
GuardDutyClient::GuardDutyClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GuardDutyClientPrivate(this), parent)
{
    Q_D(GuardDutyClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("guardduty");
}

/// @todo override getEndpoint() to use guardduty.

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AcceptInvitationResponse * GuardDutyClient::acceptInvitation(const AcceptInvitationRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ArchiveFindingsResponse * GuardDutyClient::archiveFindings(const ArchiveFindingsRequest &request)
{

}

/**
 * Creates a single Amazon GuardDuty detector. A detector is an object that represents the GuardDuty service. A detector
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDetectorResponse * GuardDutyClient::createDetector(const CreateDetectorRequest &request)
{

}

/**
 * Creates a new IPSet - a list of trusted IP addresses that have been whitelisted for secure communication with AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateIPSetResponse * GuardDutyClient::createIPSet(const CreateIPSetRequest &request)
{

}

/**
 * Creates member accounts of the current AWS account by specifying a list of AWS account IDs. The current AWS account can
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateMembersResponse * GuardDutyClient::createMembers(const CreateMembersRequest &request)
{

}

/**
 * Generates example findings of types specified by the list of finding types. If 'NULL' is specified for findingTypes, the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSampleFindingsResponse * GuardDutyClient::createSampleFindings(const CreateSampleFindingsRequest &request)
{

}

/**
 * Create a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP addresses. GuardDuty generates findings based
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateThreatIntelSetResponse * GuardDutyClient::createThreatIntelSet(const CreateThreatIntelSetRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeclineInvitationsResponse * GuardDutyClient::declineInvitations(const DeclineInvitationsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDetectorResponse * GuardDutyClient::deleteDetector(const DeleteDetectorRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIPSetResponse * GuardDutyClient::deleteIPSet(const DeleteIPSetRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInvitationsResponse * GuardDutyClient::deleteInvitations(const DeleteInvitationsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteMembersResponse * GuardDutyClient::deleteMembers(const DeleteMembersRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteThreatIntelSetResponse * GuardDutyClient::deleteThreatIntelSet(const DeleteThreatIntelSetRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateFromMasterAccountResponse * GuardDutyClient::disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateMembersResponse * GuardDutyClient::disassociateMembers(const DisassociateMembersRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDetectorResponse * GuardDutyClient::getDetector(const GetDetectorRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFindingsResponse * GuardDutyClient::getFindings(const GetFindingsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFindingsStatisticsResponse * GuardDutyClient::getFindingsStatistics(const GetFindingsStatisticsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIPSetResponse * GuardDutyClient::getIPSet(const GetIPSetRequest &request)
{

}

/**
 * Returns the count of all GuardDuty membership invitations that were sent to the current member account except the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInvitationsCountResponse * GuardDutyClient::getInvitationsCount(const GetInvitationsCountRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMasterAccountResponse * GuardDutyClient::getMasterAccount(const GetMasterAccountRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMembersResponse * GuardDutyClient::getMembers(const GetMembersRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetThreatIntelSetResponse * GuardDutyClient::getThreatIntelSet(const GetThreatIntelSetRequest &request)
{

}

/**
 * Invites other AWS accounts (created as members of the current AWS account by CreateMembers) to enable GuardDuty and
 * allow the current AWS account to view and manage these accounts' GuardDuty findings on their behalf as the master
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
InviteMembersResponse * GuardDutyClient::inviteMembers(const InviteMembersRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDetectorsResponse * GuardDutyClient::listDetectors(const ListDetectorsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFindingsResponse * GuardDutyClient::listFindings(const ListFindingsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIPSetsResponse * GuardDutyClient::listIPSets(const ListIPSetsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListInvitationsResponse * GuardDutyClient::listInvitations(const ListInvitationsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListMembersResponse * GuardDutyClient::listMembers(const ListMembersRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThreatIntelSetsResponse * GuardDutyClient::listThreatIntelSets(const ListThreatIntelSetsRequest &request)
{

}

/**
 * Re-enables GuardDuty to monitor findings of the member accounts specified by the account IDs. A master GuardDuty account
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartMonitoringMembersResponse * GuardDutyClient::startMonitoringMembers(const StartMonitoringMembersRequest &request)
{

}

/**
 * Disables GuardDuty from monitoring findings of the member accounts specified by the account IDs. After running this
 * command, a master GuardDuty account can run StartMonitoringMembers to re-enable GuardDuty to monitor these members'
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopMonitoringMembersResponse * GuardDutyClient::stopMonitoringMembers(const StopMonitoringMembersRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UnarchiveFindingsResponse * GuardDutyClient::unarchiveFindings(const UnarchiveFindingsRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDetectorResponse * GuardDutyClient::updateDetector(const UpdateDetectorRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFindingsFeedbackResponse * GuardDutyClient::updateFindingsFeedback(const UpdateFindingsFeedbackRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateIPSetResponse * GuardDutyClient::updateIPSet(const UpdateIPSetRequest &request)
{

}

/**
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateThreatIntelSetResponse * GuardDutyClient::updateThreatIntelSet(const UpdateThreatIntelSetRequest &request)
{

}

/**
 * @internal
 *
 * @class  GuardDutyClientPrivate
 *
 * @brief  Private implementation for GuardDutyClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GuardDutyClientPrivate object.
 *
 * @param  q  Pointer to this object's public GuardDutyClient instance.
 */
GuardDutyClientPrivate::GuardDutyClientPrivate(GuardDutyClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace GuardDuty
} // namespace AWS
