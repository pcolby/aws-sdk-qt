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
    d->serviceName = QLatin1String("{{servicename}}");
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
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 */
AcceptInvitationResponse * GuardDutyClient::acceptInvitation(const AcceptInvitationRequest &request)
{

}

/**
 */
ArchiveFindingsResponse * GuardDutyClient::archiveFindings(const ArchiveFindingsRequest &request)
{

}

/**
 * Creates a single Amazon GuardDuty detector. A detector is an object that represents the GuardDuty service. A detector
 */
CreateDetectorResponse * GuardDutyClient::createDetector(const CreateDetectorRequest &request)
{

}

/**
 * Creates a new IPSet - a list of trusted IP addresses that have been whitelisted for secure communication with AWS
 */
CreateIPSetResponse * GuardDutyClient::createIPSet(const CreateIPSetRequest &request)
{

}

/**
 * Creates member accounts of the current AWS account by specifying a list of AWS account IDs. The current AWS account can
 */
CreateMembersResponse * GuardDutyClient::createMembers(const CreateMembersRequest &request)
{

}

/**
 * Generates example findings of types specified by the list of finding types. If 'NULL' is specified for findingTypes, the
 */
CreateSampleFindingsResponse * GuardDutyClient::createSampleFindings(const CreateSampleFindingsRequest &request)
{

}

/**
 * Create a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP addresses. GuardDuty generates findings based
 */
CreateThreatIntelSetResponse * GuardDutyClient::createThreatIntelSet(const CreateThreatIntelSetRequest &request)
{

}

/**
 */
DeclineInvitationsResponse * GuardDutyClient::declineInvitations(const DeclineInvitationsRequest &request)
{

}

/**
 */
DeleteDetectorResponse * GuardDutyClient::deleteDetector(const DeleteDetectorRequest &request)
{

}

/**
 */
DeleteIPSetResponse * GuardDutyClient::deleteIPSet(const DeleteIPSetRequest &request)
{

}

/**
 */
DeleteInvitationsResponse * GuardDutyClient::deleteInvitations(const DeleteInvitationsRequest &request)
{

}

/**
 */
DeleteMembersResponse * GuardDutyClient::deleteMembers(const DeleteMembersRequest &request)
{

}

/**
 */
DeleteThreatIntelSetResponse * GuardDutyClient::deleteThreatIntelSet(const DeleteThreatIntelSetRequest &request)
{

}

/**
 */
DisassociateFromMasterAccountResponse * GuardDutyClient::disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request)
{

}

/**
 */
DisassociateMembersResponse * GuardDutyClient::disassociateMembers(const DisassociateMembersRequest &request)
{

}

/**
 */
GetDetectorResponse * GuardDutyClient::getDetector(const GetDetectorRequest &request)
{

}

/**
 */
GetFindingsResponse * GuardDutyClient::getFindings(const GetFindingsRequest &request)
{

}

/**
 */
GetFindingsStatisticsResponse * GuardDutyClient::getFindingsStatistics(const GetFindingsStatisticsRequest &request)
{

}

/**
 */
GetIPSetResponse * GuardDutyClient::getIPSet(const GetIPSetRequest &request)
{

}

/**
 * Returns the count of all GuardDuty membership invitations that were sent to the current member account except the
 */
GetInvitationsCountResponse * GuardDutyClient::getInvitationsCount(const GetInvitationsCountRequest &request)
{

}

/**
 */
GetMasterAccountResponse * GuardDutyClient::getMasterAccount(const GetMasterAccountRequest &request)
{

}

/**
 */
GetMembersResponse * GuardDutyClient::getMembers(const GetMembersRequest &request)
{

}

/**
 */
GetThreatIntelSetResponse * GuardDutyClient::getThreatIntelSet(const GetThreatIntelSetRequest &request)
{

}

/**
 * Invites other AWS accounts (created as members of the current AWS account by CreateMembers) to enable GuardDuty and
 * allow the current AWS account to view and manage these accounts' GuardDuty findings on their behalf as the master
 */
InviteMembersResponse * GuardDutyClient::inviteMembers(const InviteMembersRequest &request)
{

}

/**
 */
ListDetectorsResponse * GuardDutyClient::listDetectors(const ListDetectorsRequest &request)
{

}

/**
 */
ListFindingsResponse * GuardDutyClient::listFindings(const ListFindingsRequest &request)
{

}

/**
 */
ListIPSetsResponse * GuardDutyClient::listIPSets(const ListIPSetsRequest &request)
{

}

/**
 */
ListInvitationsResponse * GuardDutyClient::listInvitations(const ListInvitationsRequest &request)
{

}

/**
 */
ListMembersResponse * GuardDutyClient::listMembers(const ListMembersRequest &request)
{

}

/**
 */
ListThreatIntelSetsResponse * GuardDutyClient::listThreatIntelSets(const ListThreatIntelSetsRequest &request)
{

}

/**
 * Re-enables GuardDuty to monitor findings of the member accounts specified by the account IDs. A master GuardDuty account
 */
StartMonitoringMembersResponse * GuardDutyClient::startMonitoringMembers(const StartMonitoringMembersRequest &request)
{

}

/**
 * Disables GuardDuty from monitoring findings of the member accounts specified by the account IDs. After running this
 * command, a master GuardDuty account can run StartMonitoringMembers to re-enable GuardDuty to monitor these members'
 */
StopMonitoringMembersResponse * GuardDutyClient::stopMonitoringMembers(const StopMonitoringMembersRequest &request)
{

}

/**
 */
UnarchiveFindingsResponse * GuardDutyClient::unarchiveFindings(const UnarchiveFindingsRequest &request)
{

}

/**
 */
UpdateDetectorResponse * GuardDutyClient::updateDetector(const UpdateDetectorRequest &request)
{

}

/**
 */
UpdateFindingsFeedbackResponse * GuardDutyClient::updateFindingsFeedback(const UpdateFindingsFeedbackRequest &request)
{

}

/**
 */
UpdateIPSetResponse * GuardDutyClient::updateIPSet(const UpdateIPSetRequest &request)
{

}

/**
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
