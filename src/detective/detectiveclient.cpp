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

#include "detectiveclient.h"
#include "detectiveclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinvitationrequest.h"
#include "acceptinvitationresponse.h"
#include "creategraphrequest.h"
#include "creategraphresponse.h"
#include "createmembersrequest.h"
#include "createmembersresponse.h"
#include "deletegraphrequest.h"
#include "deletegraphresponse.h"
#include "deletemembersrequest.h"
#include "deletemembersresponse.h"
#include "disassociatemembershiprequest.h"
#include "disassociatemembershipresponse.h"
#include "getmembersrequest.h"
#include "getmembersresponse.h"
#include "listgraphsrequest.h"
#include "listgraphsresponse.h"
#include "listinvitationsrequest.h"
#include "listinvitationsresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "rejectinvitationrequest.h"
#include "rejectinvitationresponse.h"
#include "startmonitoringmemberrequest.h"
#include "startmonitoringmemberresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Detective
 * \brief Contains classess for accessing Amazon Detective.
 *
 * \inmodule QtAwsDetective
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Detective {

/*!
 * \class QtAws::Detective::DetectiveClient
 * \brief The DetectiveClient class provides access to the Amazon Detective service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDetective
 *
 *  Detective uses machine learning and purpose-built visualizations to help you analyze and investigate security issues
 *  across your Amazon Web Services (AWS) workloads. Detective automatically extracts time-based events such as login
 *  attempts, API calls, and network traffic from AWS CloudTrail and Amazon Virtual Private Cloud (Amazon VPC) flow logs. It
 *  also extracts findings detected by Amazon
 * 
 *  GuardDuty>
 * 
 *  The Detective API primarily supports the creation and management of behavior graphs. A behavior graph contains the
 *  extracted data from a set of member accounts, and is created and managed by an administrator
 * 
 *  account>
 * 
 *  Every behavior graph is specific to a Region. You can only use the API to manage graphs that belong to the Region that
 *  is associated with the currently selected
 * 
 *  endpoint>
 * 
 *  A Detective administrator account can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  Enable and disable Detective. Enabling Detective creates a new behavior
 * 
 *  graph> </li> <li>
 * 
 *  View the list of member accounts in a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Add member accounts to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Remove member accounts from a behavior
 * 
 *  graph> </li> </ul>
 * 
 *  A member account can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  View the list of behavior graphs that they are invited
 * 
 *  to> </li> <li>
 * 
 *  Accept an invitation to contribute to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Decline an invitation to contribute to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Remove their account from a behavior
 * 
 *  graph> </li> </ul>
 * 
 *  All API actions are logged as CloudTrail events. See <a
 *  href="https://docs.aws.amazon.com/detective/latest/adminguide/logging-using-cloudtrail.html">Logging Detective API Calls
 *  with
 * 
 *  CloudTrail</a>> <note>
 * 
 *  We replaced the term "master account" with the term "administrator account." An administrator account is used to
 *  centrally manage multiple accounts. In the case of Detective, the administrator account manages the accounts in their
 *  behavior
 */

/*!
 * \brief Constructs a DetectiveClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DetectiveClient::DetectiveClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-10-26"),
    QStringLiteral("api.detective"),
    QStringLiteral("Amazon Detective"),
    QStringLiteral("detective"),
    parent), d_ptr(new DetectiveClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload DetectiveClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DetectiveClient::DetectiveClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-10-26"),
    QStringLiteral("api.detective"),
    QStringLiteral("Amazon Detective"),
    QStringLiteral("detective"),
    parent), d_ptr(new DetectiveClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * AcceptInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts an invitation for the member account to contribute data to a behavior graph. This operation can only be called
 * by an invited member account.
 *
 * </p
 *
 * The request provides the ARN of behavior
 *
 * graph>
 *
 * The member account status in the graph must be
 */
AcceptInvitationResponse * DetectiveClient::acceptInvitation(const AcceptInvitationRequest &request)
{
    return qobject_cast<AcceptInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * CreateGraphResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new behavior graph for the calling account, and sets that account as the administrator account. This operation
 * is called by the account that is enabling
 *
 * Detective>
 *
 * Before you try to enable Detective, make sure that your account has been enrolled in Amazon GuardDuty for at least 48
 * hours. If you do not meet this requirement, you cannot enable Detective. If you do meet the GuardDuty prerequisite, then
 * when you make the request to enable Detective, it checks whether your data volume is within the Detective quota. If it
 * exceeds the quota, then you cannot enable Detective.
 *
 * </p
 *
 * The operation also enables Detective for the calling account in the currently selected Region. It returns the ARN of the
 * new behavior
 *
 * graph>
 *
 * <code>CreateGraph</code> triggers a process to create the corresponding data tables for the new behavior
 *
 * graph>
 *
 * An account can only be the administrator account for one behavior graph within a Region. If the same account calls
 * <code>CreateGraph</code> with the same administrator account, it always returns the same behavior graph ARN. It does not
 * create a new behavior
 */
CreateGraphResponse * DetectiveClient::createGraph(const CreateGraphRequest &request)
{
    return qobject_cast<CreateGraphResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * CreateMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a request to invite the specified AWS accounts to be member accounts in the behavior graph. This operation can
 * only be called by the administrator account for a behavior graph.
 *
 * </p
 *
 * <code>CreateMembers</code> verifies the accounts and then invites the verified accounts. The administrator can
 * optionally specify to not send invitation emails to the member accounts. This would be used when the administrator
 * manages their member accounts
 *
 * centrally>
 *
 * The request provides the behavior graph ARN and the list of accounts to
 *
 * invite>
 *
 * The response separates the requested accounts into two
 *
 * lists> <ul> <li>
 *
 * The accounts that <code>CreateMembers</code> was able to start the verification for. This list includes member accounts
 * that are being verified, that have passed verification and are to be invited, and that have failed
 *
 * verification> </li> <li>
 *
 * The accounts that <code>CreateMembers</code> was unable to process. This list includes accounts that were already
 * invited to be member accounts in the behavior
 */
CreateMembersResponse * DetectiveClient::createMembers(const CreateMembersRequest &request)
{
    return qobject_cast<CreateMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * DeleteGraphResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the specified behavior graph and queues it to be deleted. This operation removes the graph from each member
 * account's list of behavior
 *
 * graphs>
 *
 * <code>DeleteGraph</code> can only be called by the administrator account for a behavior
 */
DeleteGraphResponse * DetectiveClient::deleteGraph(const DeleteGraphRequest &request)
{
    return qobject_cast<DeleteGraphResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * DeleteMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more member accounts from the administrator account's behavior graph. This operation can only be called
 * by a Detective administrator account. That account cannot use <code>DeleteMembers</code> to delete their own account
 * from the behavior graph. To disable a behavior graph, the administrator account uses the <code>DeleteGraph</code> API
 */
DeleteMembersResponse * DetectiveClient::deleteMembers(const DeleteMembersRequest &request)
{
    return qobject_cast<DeleteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * DisassociateMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the member account from the specified behavior graph. This operation can only be called by a member account that
 * has the <code>ENABLED</code>
 */
DisassociateMembershipResponse * DetectiveClient::disassociateMembership(const DisassociateMembershipRequest &request)
{
    return qobject_cast<DisassociateMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * GetMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the membership details for specified member accounts for a behavior
 */
GetMembersResponse * DetectiveClient::getMembers(const GetMembersRequest &request)
{
    return qobject_cast<GetMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * ListGraphsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of behavior graphs that the calling account is an administrator account of. This operation can only be
 * called by an administrator
 *
 * account>
 *
 * Because an account can currently only be the administrator of one behavior graph within a Region, the results always
 * contain a single behavior
 */
ListGraphsResponse * DetectiveClient::listGraphs(const ListGraphsRequest &request)
{
    return qobject_cast<ListGraphsResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * ListInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of open and accepted behavior graph invitations for the member account. This operation can only be
 * called by a member
 *
 * account>
 *
 * Open invitations are invitations that the member account has not responded
 *
 * to>
 *
 * The results do not include behavior graphs for which the member account declined the invitation. The results also do not
 * include behavior graphs that the member account resigned from or was removed
 */
ListInvitationsResponse * DetectiveClient::listInvitations(const ListInvitationsRequest &request)
{
    return qobject_cast<ListInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * ListMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of member accounts for a behavior graph. Does not return member accounts that were removed from the
 * behavior
 */
ListMembersResponse * DetectiveClient::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the tag values that are assigned to a behavior
 */
ListTagsForResourceResponse * DetectiveClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * RejectInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects an invitation to contribute the account data to a behavior graph. This operation must be called by a member
 * account that has the <code>INVITED</code>
 */
RejectInvitationResponse * DetectiveClient::rejectInvitation(const RejectInvitationRequest &request)
{
    return qobject_cast<RejectInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * StartMonitoringMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a request to enable data ingest for a member account that has a status of
 *
 * <code>ACCEPTED_BUT_DISABLED</code>>
 *
 * For valid member accounts, the status is updated as
 *
 * follows> <ul> <li>
 *
 * If Detective enabled the member account, then the new status is
 *
 * <code>ENABLED</code>> </li> <li>
 *
 * If Detective cannot enable the member account, the status remains <code>ACCEPTED_BUT_DISABLED</code>.
 */
StartMonitoringMemberResponse * DetectiveClient::startMonitoringMember(const StartMonitoringMemberRequest &request)
{
    return qobject_cast<StartMonitoringMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies tag values to a behavior
 */
TagResourceResponse * DetectiveClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a behavior
 */
UntagResourceResponse * DetectiveClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::Detective::DetectiveClientPrivate
 * \brief The DetectiveClientPrivate class provides private implementation for DetectiveClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDetective
 */

/*!
 * Constructs a DetectiveClientPrivate object with public implementation \a q.
 */
DetectiveClientPrivate::DetectiveClientPrivate(DetectiveClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Detective
} // namespace QtAws
