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

#include "guarddutyclient.h"
#include "guarddutyclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinvitationrequest.h"
#include "acceptinvitationresponse.h"
#include "archivefindingsrequest.h"
#include "archivefindingsresponse.h"
#include "createdetectorrequest.h"
#include "createdetectorresponse.h"
#include "createipsetrequest.h"
#include "createipsetresponse.h"
#include "createmembersrequest.h"
#include "createmembersresponse.h"
#include "createsamplefindingsrequest.h"
#include "createsamplefindingsresponse.h"
#include "createthreatintelsetrequest.h"
#include "createthreatintelsetresponse.h"
#include "declineinvitationsrequest.h"
#include "declineinvitationsresponse.h"
#include "deletedetectorrequest.h"
#include "deletedetectorresponse.h"
#include "deleteipsetrequest.h"
#include "deleteipsetresponse.h"
#include "deleteinvitationsrequest.h"
#include "deleteinvitationsresponse.h"
#include "deletemembersrequest.h"
#include "deletemembersresponse.h"
#include "deletethreatintelsetrequest.h"
#include "deletethreatintelsetresponse.h"
#include "disassociatefrommasteraccountrequest.h"
#include "disassociatefrommasteraccountresponse.h"
#include "disassociatemembersrequest.h"
#include "disassociatemembersresponse.h"
#include "getdetectorrequest.h"
#include "getdetectorresponse.h"
#include "getfindingsrequest.h"
#include "getfindingsresponse.h"
#include "getfindingsstatisticsrequest.h"
#include "getfindingsstatisticsresponse.h"
#include "getipsetrequest.h"
#include "getipsetresponse.h"
#include "getinvitationscountrequest.h"
#include "getinvitationscountresponse.h"
#include "getmasteraccountrequest.h"
#include "getmasteraccountresponse.h"
#include "getmembersrequest.h"
#include "getmembersresponse.h"
#include "getthreatintelsetrequest.h"
#include "getthreatintelsetresponse.h"
#include "invitemembersrequest.h"
#include "invitemembersresponse.h"
#include "listdetectorsrequest.h"
#include "listdetectorsresponse.h"
#include "listfindingsrequest.h"
#include "listfindingsresponse.h"
#include "listipsetsrequest.h"
#include "listipsetsresponse.h"
#include "listinvitationsrequest.h"
#include "listinvitationsresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "listthreatintelsetsrequest.h"
#include "listthreatintelsetsresponse.h"
#include "startmonitoringmembersrequest.h"
#include "startmonitoringmembersresponse.h"
#include "stopmonitoringmembersrequest.h"
#include "stopmonitoringmembersresponse.h"
#include "unarchivefindingsrequest.h"
#include "unarchivefindingsresponse.h"
#include "updatedetectorrequest.h"
#include "updatedetectorresponse.h"
#include "updatefindingsfeedbackrequest.h"
#include "updatefindingsfeedbackresponse.h"
#include "updateipsetrequest.h"
#include "updateipsetresponse.h"
#include "updatethreatintelsetrequest.h"
#include "updatethreatintelsetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::GuardDuty
 * \brief The QtAws::GuardDuty contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GuardDutyClient
 *
 * \brief The GuardDutyClient class provides access to the Amazon GuardDuty service.
 *
 * \ingroup GuardDuty
 *
 */

/*!
 * \brief Constructs a GuardDutyClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GuardDutyClient::GuardDutyClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GuardDutyClientPrivate(this), parent)
{
    Q_D(GuardDutyClient);
    d->apiVersion = QStringLiteral("2017-11-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("guardduty");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon GuardDuty");
    d->serviceName = QStringLiteral("guardduty");
}

/*!
 * \overload GuardDutyClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
GuardDutyClient::GuardDutyClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GuardDutyClientPrivate(this), parent)
{
    Q_D(GuardDutyClient);
    d->apiVersion = QStringLiteral("2017-11-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("guardduty");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon GuardDuty");
    d->serviceName = QStringLiteral("guardduty");
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AcceptInvitationResponse * GuardDutyClient::acceptInvitation(const AcceptInvitationRequest &request)
{
    return qobject_cast<AcceptInvitationResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ArchiveFindingsResponse * GuardDutyClient::archiveFindings(const ArchiveFindingsRequest &request)
{
    return qobject_cast<ArchiveFindingsResponse *>(send(request));
}

/*!
 * Creates a single Amazon GuardDuty detector. A detector is an object that represents the GuardDuty service. A detector
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDetectorResponse * GuardDutyClient::createDetector(const CreateDetectorRequest &request)
{
    return qobject_cast<CreateDetectorResponse *>(send(request));
}

/*!
 * Creates a new IPSet - a list of trusted IP addresses that have been whitelisted for secure communication with AWS
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateIPSetResponse * GuardDutyClient::createIPSet(const CreateIPSetRequest &request)
{
    return qobject_cast<CreateIPSetResponse *>(send(request));
}

/*!
 * Creates member accounts of the current AWS account by specifying a list of AWS account IDs. The current AWS account can
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateMembersResponse * GuardDutyClient::createMembers(const CreateMembersRequest &request)
{
    return qobject_cast<CreateMembersResponse *>(send(request));
}

/*!
 * Generates example findings of types specified by the list of finding types. If 'NULL' is specified for findingTypes, the
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSampleFindingsResponse * GuardDutyClient::createSampleFindings(const CreateSampleFindingsRequest &request)
{
    return qobject_cast<CreateSampleFindingsResponse *>(send(request));
}

/*!
 * Create a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP addresses. GuardDuty generates findings based
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateThreatIntelSetResponse * GuardDutyClient::createThreatIntelSet(const CreateThreatIntelSetRequest &request)
{
    return qobject_cast<CreateThreatIntelSetResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeclineInvitationsResponse * GuardDutyClient::declineInvitations(const DeclineInvitationsRequest &request)
{
    return qobject_cast<DeclineInvitationsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDetectorResponse * GuardDutyClient::deleteDetector(const DeleteDetectorRequest &request)
{
    return qobject_cast<DeleteDetectorResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIPSetResponse * GuardDutyClient::deleteIPSet(const DeleteIPSetRequest &request)
{
    return qobject_cast<DeleteIPSetResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInvitationsResponse * GuardDutyClient::deleteInvitations(const DeleteInvitationsRequest &request)
{
    return qobject_cast<DeleteInvitationsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteMembersResponse * GuardDutyClient::deleteMembers(const DeleteMembersRequest &request)
{
    return qobject_cast<DeleteMembersResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteThreatIntelSetResponse * GuardDutyClient::deleteThreatIntelSet(const DeleteThreatIntelSetRequest &request)
{
    return qobject_cast<DeleteThreatIntelSetResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateFromMasterAccountResponse * GuardDutyClient::disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request)
{
    return qobject_cast<DisassociateFromMasterAccountResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateMembersResponse * GuardDutyClient::disassociateMembers(const DisassociateMembersRequest &request)
{
    return qobject_cast<DisassociateMembersResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDetectorResponse * GuardDutyClient::getDetector(const GetDetectorRequest &request)
{
    return qobject_cast<GetDetectorResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFindingsResponse * GuardDutyClient::getFindings(const GetFindingsRequest &request)
{
    return qobject_cast<GetFindingsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFindingsStatisticsResponse * GuardDutyClient::getFindingsStatistics(const GetFindingsStatisticsRequest &request)
{
    return qobject_cast<GetFindingsStatisticsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIPSetResponse * GuardDutyClient::getIPSet(const GetIPSetRequest &request)
{
    return qobject_cast<GetIPSetResponse *>(send(request));
}

/*!
 * Returns the count of all GuardDuty membership invitations that were sent to the current member account except the
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetInvitationsCountResponse * GuardDutyClient::getInvitationsCount(const GetInvitationsCountRequest &request)
{
    return qobject_cast<GetInvitationsCountResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMasterAccountResponse * GuardDutyClient::getMasterAccount(const GetMasterAccountRequest &request)
{
    return qobject_cast<GetMasterAccountResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMembersResponse * GuardDutyClient::getMembers(const GetMembersRequest &request)
{
    return qobject_cast<GetMembersResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetThreatIntelSetResponse * GuardDutyClient::getThreatIntelSet(const GetThreatIntelSetRequest &request)
{
    return qobject_cast<GetThreatIntelSetResponse *>(send(request));
}

/*!
 * Invites other AWS accounts (created as members of the current AWS account by CreateMembers) to enable GuardDuty and
 * allow the current AWS account to view and manage these accounts' GuardDuty findings on their behalf as the master
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
InviteMembersResponse * GuardDutyClient::inviteMembers(const InviteMembersRequest &request)
{
    return qobject_cast<InviteMembersResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDetectorsResponse * GuardDutyClient::listDetectors(const ListDetectorsRequest &request)
{
    return qobject_cast<ListDetectorsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFindingsResponse * GuardDutyClient::listFindings(const ListFindingsRequest &request)
{
    return qobject_cast<ListFindingsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIPSetsResponse * GuardDutyClient::listIPSets(const ListIPSetsRequest &request)
{
    return qobject_cast<ListIPSetsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListInvitationsResponse * GuardDutyClient::listInvitations(const ListInvitationsRequest &request)
{
    return qobject_cast<ListInvitationsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListMembersResponse * GuardDutyClient::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThreatIntelSetsResponse * GuardDutyClient::listThreatIntelSets(const ListThreatIntelSetsRequest &request)
{
    return qobject_cast<ListThreatIntelSetsResponse *>(send(request));
}

/*!
 * Re-enables GuardDuty to monitor findings of the member accounts specified by the account IDs. A master GuardDuty account
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartMonitoringMembersResponse * GuardDutyClient::startMonitoringMembers(const StartMonitoringMembersRequest &request)
{
    return qobject_cast<StartMonitoringMembersResponse *>(send(request));
}

/*!
 * Disables GuardDuty from monitoring findings of the member accounts specified by the account IDs. After running this
 * command, a master GuardDuty account can run StartMonitoringMembers to re-enable GuardDuty to monitor these members'
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopMonitoringMembersResponse * GuardDutyClient::stopMonitoringMembers(const StopMonitoringMembersRequest &request)
{
    return qobject_cast<StopMonitoringMembersResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UnarchiveFindingsResponse * GuardDutyClient::unarchiveFindings(const UnarchiveFindingsRequest &request)
{
    return qobject_cast<UnarchiveFindingsResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDetectorResponse * GuardDutyClient::updateDetector(const UpdateDetectorRequest &request)
{
    return qobject_cast<UpdateDetectorResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFindingsFeedbackResponse * GuardDutyClient::updateFindingsFeedback(const UpdateFindingsFeedbackRequest &request)
{
    return qobject_cast<UpdateFindingsFeedbackResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateIPSetResponse * GuardDutyClient::updateIPSet(const UpdateIPSetRequest &request)
{
    return qobject_cast<UpdateIPSetResponse *>(send(request));
}

/*!
 *
 * @param  request Request to send to Amazon GuardDuty.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateThreatIntelSetResponse * GuardDutyClient::updateThreatIntelSet(const UpdateThreatIntelSetRequest &request)
{
    return qobject_cast<UpdateThreatIntelSetResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  GuardDutyClientPrivate
 *
 * @brief  Private implementation for GuardDutyClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GuardDutyClientPrivate object.
 *
 * @param  q  Pointer to this object's public GuardDutyClient instance.
 */
GuardDutyClientPrivate::GuardDutyClientPrivate(GuardDutyClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace GuardDuty
} // namespace QtAws
