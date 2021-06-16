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

#include "guarddutyclient.h"
#include "guarddutyclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinvitationrequest.h"
#include "acceptinvitationresponse.h"
#include "archivefindingsrequest.h"
#include "archivefindingsresponse.h"
#include "createdetectorrequest.h"
#include "createdetectorresponse.h"
#include "createfilterrequest.h"
#include "createfilterresponse.h"
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
#include "deletefilterrequest.h"
#include "deletefilterresponse.h"
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
#include "getfilterrequest.h"
#include "getfilterresponse.h"
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
#include "listfiltersrequest.h"
#include "listfiltersresponse.h"
#include "listfindingsrequest.h"
#include "listfindingsresponse.h"
#include "listipsetsrequest.h"
#include "listipsetsresponse.h"
#include "listinvitationsrequest.h"
#include "listinvitationsresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listthreatintelsetsrequest.h"
#include "listthreatintelsetsresponse.h"
#include "startmonitoringmembersrequest.h"
#include "startmonitoringmembersresponse.h"
#include "stopmonitoringmembersrequest.h"
#include "stopmonitoringmembersresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "unarchivefindingsrequest.h"
#include "unarchivefindingsresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedetectorrequest.h"
#include "updatedetectorresponse.h"
#include "updatefilterrequest.h"
#include "updatefilterresponse.h"
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
 * \brief Contains classess for accessing Amazon GuardDuty.
 *
 * \inmodule QtAwsGuardDuty
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GuardDutyClient
 * \brief The GuardDutyClient class provides access to the Amazon GuardDuty service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGuardDuty
 *
 *  Amazon GuardDuty is a continuous security monitoring service that analyzes and processes the following data sources: VPC
 *  Flow Logs, AWS CloudTrail event logs, and DNS logs. It uses threat intelligence feeds, such as lists of malicious IPs
 *  and domains, and machine learning to identify unexpected and potentially unauthorized and malicious activity within your
 *  AWS environment. This can include issues like escalations of privileges, uses of exposed credentials, or communication
 *  with malicious IPs, URLs, or domains. For example, GuardDuty can detect compromised EC2 instances serving malware or
 *  mining bitcoin. It also monitors AWS account access behavior for signs of compromise, such as unauthorized
 *  infrastructure deployments, like instances deployed in a region that has never been used, or unusual API calls, like a
 *  password policy change to reduce password strength. GuardDuty informs you of the status of your AWS environment by
 *  producing security findings that you can view in the GuardDuty console or through Amazon CloudWatch events. For more
 *  information, see <a href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html"> Amazon GuardDuty User
 *  Guide</a>.
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
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * AcceptInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts the invitation to be monitored by a master GuardDuty
 */
AcceptInvitationResponse * GuardDutyClient::acceptInvitation(const AcceptInvitationRequest &request)
{
    return qobject_cast<AcceptInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ArchiveFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Archives Amazon GuardDuty findings specified by the list of finding
 */
ArchiveFindingsResponse * GuardDutyClient::archiveFindings(const ArchiveFindingsRequest &request)
{
    return qobject_cast<ArchiveFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a single Amazon GuardDuty detector. A detector is an object that represents the GuardDuty service. A detector
 * must be created in order for GuardDuty to become
 */
CreateDetectorResponse * GuardDutyClient::createDetector(const CreateDetectorRequest &request)
{
    return qobject_cast<CreateDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a filter using the specified finding
 */
CreateFilterResponse * GuardDutyClient::createFilter(const CreateFilterRequest &request)
{
    return qobject_cast<CreateFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new IPSet - a list of trusted IP addresses that have been whitelisted for secure communication with AWS
 * infrastructure and
 */
CreateIPSetResponse * GuardDutyClient::createIPSet(const CreateIPSetRequest &request)
{
    return qobject_cast<CreateIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates member accounts of the current AWS account by specifying a list of AWS account IDs. The current AWS account can
 * then invite these members to manage GuardDuty in their
 */
CreateMembersResponse * GuardDutyClient::createMembers(const CreateMembersRequest &request)
{
    return qobject_cast<CreateMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateSampleFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates example findings of types specified by the list of finding types. If 'NULL' is specified for findingTypes, the
 * API generates example findings of all supported finding
 */
CreateSampleFindingsResponse * GuardDutyClient::createSampleFindings(const CreateSampleFindingsRequest &request)
{
    return qobject_cast<CreateSampleFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * CreateThreatIntelSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP addresses. GuardDuty generates findings based
 * on
 */
CreateThreatIntelSetResponse * GuardDutyClient::createThreatIntelSet(const CreateThreatIntelSetRequest &request)
{
    return qobject_cast<CreateThreatIntelSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeclineInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Declines invitations sent to the current member account by AWS account specified by their account
 */
DeclineInvitationsResponse * GuardDutyClient::declineInvitations(const DeclineInvitationsRequest &request)
{
    return qobject_cast<DeclineInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Amazon GuardDuty detector specified by the detector
 */
DeleteDetectorResponse * GuardDutyClient::deleteDetector(const DeleteDetectorRequest &request)
{
    return qobject_cast<DeleteDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the filter specified by the filter
 */
DeleteFilterResponse * GuardDutyClient::deleteFilter(const DeleteFilterRequest &request)
{
    return qobject_cast<DeleteFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the IPSet specified by the IPSet
 */
DeleteIPSetResponse * GuardDutyClient::deleteIPSet(const DeleteIPSetRequest &request)
{
    return qobject_cast<DeleteIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes invitations sent to the current member account by AWS accounts specified by their account
 */
DeleteInvitationsResponse * GuardDutyClient::deleteInvitations(const DeleteInvitationsRequest &request)
{
    return qobject_cast<DeleteInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes GuardDuty member accounts (to the current GuardDuty master account) specified by the account
 */
DeleteMembersResponse * GuardDutyClient::deleteMembers(const DeleteMembersRequest &request)
{
    return qobject_cast<DeleteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DeleteThreatIntelSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes ThreatIntelSet specified by the ThreatIntelSet
 */
DeleteThreatIntelSetResponse * GuardDutyClient::deleteThreatIntelSet(const DeleteThreatIntelSetRequest &request)
{
    return qobject_cast<DeleteThreatIntelSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DisassociateFromMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the current GuardDuty member account from its master
 */
DisassociateFromMasterAccountResponse * GuardDutyClient::disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request)
{
    return qobject_cast<DisassociateFromMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * DisassociateMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates GuardDuty member accounts (to the current GuardDuty master account) specified by the account
 */
DisassociateMembersResponse * GuardDutyClient::disassociateMembers(const DisassociateMembersRequest &request)
{
    return qobject_cast<DisassociateMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an Amazon GuardDuty detector specified by the
 */
GetDetectorResponse * GuardDutyClient::getDetector(const GetDetectorRequest &request)
{
    return qobject_cast<GetDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of the filter specified by the filter
 */
GetFilterResponse * GuardDutyClient::getFilter(const GetFilterRequest &request)
{
    return qobject_cast<GetFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes Amazon GuardDuty findings specified by finding
 */
GetFindingsResponse * GuardDutyClient::getFindings(const GetFindingsRequest &request)
{
    return qobject_cast<GetFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetFindingsStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists Amazon GuardDuty findings' statistics for the specified detector
 */
GetFindingsStatisticsResponse * GuardDutyClient::getFindingsStatistics(const GetFindingsStatisticsRequest &request)
{
    return qobject_cast<GetFindingsStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the IPSet specified by the IPSet
 */
GetIPSetResponse * GuardDutyClient::getIPSet(const GetIPSetRequest &request)
{
    return qobject_cast<GetIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetInvitationsCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the count of all GuardDuty membership invitations that were sent to the current member account except the
 * currently accepted
 */
GetInvitationsCountResponse * GuardDutyClient::getInvitationsCount(const GetInvitationsCountRequest &request)
{
    return qobject_cast<GetInvitationsCountResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides the details for the GuardDuty master account to the current GuardDuty member
 */
GetMasterAccountResponse * GuardDutyClient::getMasterAccount(const GetMasterAccountRequest &request)
{
    return qobject_cast<GetMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves GuardDuty member accounts (to the current GuardDuty master account) specified by the account
 */
GetMembersResponse * GuardDutyClient::getMembers(const GetMembersRequest &request)
{
    return qobject_cast<GetMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * GetThreatIntelSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the ThreatIntelSet that is specified by the ThreatIntelSet
 */
GetThreatIntelSetResponse * GuardDutyClient::getThreatIntelSet(const GetThreatIntelSetRequest &request)
{
    return qobject_cast<GetThreatIntelSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * InviteMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Invites other AWS accounts (created as members of the current AWS account by CreateMembers) to enable GuardDuty and
 * allow the current AWS account to view and manage these accounts' GuardDuty findings on their behalf as the master
 */
InviteMembersResponse * GuardDutyClient::inviteMembers(const InviteMembersRequest &request)
{
    return qobject_cast<InviteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListDetectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists detectorIds of all the existing Amazon GuardDuty detector
 */
ListDetectorsResponse * GuardDutyClient::listDetectors(const ListDetectorsRequest &request)
{
    return qobject_cast<ListDetectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListFiltersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of the current
 */
ListFiltersResponse * GuardDutyClient::listFilters(const ListFiltersRequest &request)
{
    return qobject_cast<ListFiltersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists Amazon GuardDuty findings for the specified detector
 */
ListFindingsResponse * GuardDutyClient::listFindings(const ListFindingsRequest &request)
{
    return qobject_cast<ListFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListIPSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the IPSets of the GuardDuty service specified by the detector
 */
ListIPSetsResponse * GuardDutyClient::listIPSets(const ListIPSetsRequest &request)
{
    return qobject_cast<ListIPSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all GuardDuty membership invitations that were sent to the current AWS
 */
ListInvitationsResponse * GuardDutyClient::listInvitations(const ListInvitationsRequest &request)
{
    return qobject_cast<ListInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists details about all member accounts for the current GuardDuty master
 */
ListMembersResponse * GuardDutyClient::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tags for a resource. Tagging is currently supported for detectors, finding filters, IP sets, and Threat Intel
 * sets, with a limit of 50 tags per resource. When invoked, this operation returns all assigned tags for a given
 */
ListTagsForResourceResponse * GuardDutyClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * ListThreatIntelSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the ThreatIntelSets of the GuardDuty service specified by the detector
 */
ListThreatIntelSetsResponse * GuardDutyClient::listThreatIntelSets(const ListThreatIntelSetsRequest &request)
{
    return qobject_cast<ListThreatIntelSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * StartMonitoringMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Re-enables GuardDuty to monitor findings of the member accounts specified by the account IDs. A master GuardDuty account
 * can run this command after disabling GuardDuty from monitoring these members' findings by running
 */
StartMonitoringMembersResponse * GuardDutyClient::startMonitoringMembers(const StartMonitoringMembersRequest &request)
{
    return qobject_cast<StartMonitoringMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * StopMonitoringMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables GuardDuty from monitoring findings of the member accounts specified by the account IDs. After running this
 * command, a master GuardDuty account can run StartMonitoringMembers to re-enable GuardDuty to monitor these members’
 */
StopMonitoringMembersResponse * GuardDutyClient::stopMonitoringMembers(const StopMonitoringMembersRequest &request)
{
    return qobject_cast<StopMonitoringMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to a
 */
TagResourceResponse * GuardDutyClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UnarchiveFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unarchives Amazon GuardDuty findings specified by the list of finding
 */
UnarchiveFindingsResponse * GuardDutyClient::unarchiveFindings(const UnarchiveFindingsRequest &request)
{
    return qobject_cast<UnarchiveFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 */
UntagResourceResponse * GuardDutyClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UpdateDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon GuardDuty detector specified by the
 */
UpdateDetectorResponse * GuardDutyClient::updateDetector(const UpdateDetectorRequest &request)
{
    return qobject_cast<UpdateDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UpdateFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the filter specified by the filter
 */
UpdateFilterResponse * GuardDutyClient::updateFilter(const UpdateFilterRequest &request)
{
    return qobject_cast<UpdateFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UpdateFindingsFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Marks specified Amazon GuardDuty findings as useful or not
 */
UpdateFindingsFeedbackResponse * GuardDutyClient::updateFindingsFeedback(const UpdateFindingsFeedbackRequest &request)
{
    return qobject_cast<UpdateFindingsFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UpdateIPSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the IPSet specified by the IPSet
 */
UpdateIPSetResponse * GuardDutyClient::updateIPSet(const UpdateIPSetRequest &request)
{
    return qobject_cast<UpdateIPSetResponse *>(send(request));
}

/*!
 * Sends \a request to the GuardDutyClient service, and returns a pointer to an
 * UpdateThreatIntelSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the ThreatIntelSet specified by ThreatIntelSet
 */
UpdateThreatIntelSetResponse * GuardDutyClient::updateThreatIntelSet(const UpdateThreatIntelSetRequest &request)
{
    return qobject_cast<UpdateThreatIntelSetResponse *>(send(request));
}

/*!
 * \class QtAws::GuardDuty::GuardDutyClientPrivate
 * \brief The GuardDutyClientPrivate class provides private implementation for GuardDutyClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GuardDutyClientPrivate object with public implementation \a q.
 */
GuardDutyClientPrivate::GuardDutyClientPrivate(GuardDutyClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace GuardDuty
} // namespace QtAws
