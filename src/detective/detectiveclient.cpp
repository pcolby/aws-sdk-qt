// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectiveclient.h"
#include "detectiveclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinvitationrequest.h"
#include "acceptinvitationresponse.h"
#include "batchgetgraphmemberdatasourcesrequest.h"
#include "batchgetgraphmemberdatasourcesresponse.h"
#include "batchgetmembershipdatasourcesrequest.h"
#include "batchgetmembershipdatasourcesresponse.h"
#include "creategraphrequest.h"
#include "creategraphresponse.h"
#include "createmembersrequest.h"
#include "createmembersresponse.h"
#include "deletegraphrequest.h"
#include "deletegraphresponse.h"
#include "deletemembersrequest.h"
#include "deletemembersresponse.h"
#include "describeorganizationconfigurationrequest.h"
#include "describeorganizationconfigurationresponse.h"
#include "disableorganizationadminaccountrequest.h"
#include "disableorganizationadminaccountresponse.h"
#include "disassociatemembershiprequest.h"
#include "disassociatemembershipresponse.h"
#include "enableorganizationadminaccountrequest.h"
#include "enableorganizationadminaccountresponse.h"
#include "getmembersrequest.h"
#include "getmembersresponse.h"
#include "listdatasourcepackagesrequest.h"
#include "listdatasourcepackagesresponse.h"
#include "listgraphsrequest.h"
#include "listgraphsresponse.h"
#include "listinvitationsrequest.h"
#include "listinvitationsresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "listorganizationadminaccountsrequest.h"
#include "listorganizationadminaccountsresponse.h"
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
#include "updatedatasourcepackagesrequest.h"
#include "updatedatasourcepackagesresponse.h"
#include "updateorganizationconfigurationrequest.h"
#include "updateorganizationconfigurationresponse.h"

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
 *  Detective uses machine learning and purpose-built visualizations to help you to analyze and investigate security issues
 *  across your Amazon Web Services (Amazon Web Services) workloads. Detective automatically extracts time-based events such
 *  as login attempts, API calls, and network traffic from CloudTrail and Amazon Virtual Private Cloud (Amazon VPC) flow
 *  logs. It also extracts findings detected by Amazon
 * 
 *  GuardDuty>
 * 
 *  The Detective API primarily supports the creation and management of behavior graphs. A behavior graph contains the
 *  extracted data from a set of member accounts, and is created and managed by an administrator
 * 
 *  account>
 * 
 *  To add a member account to the behavior graph, the administrator account sends an invitation to the account. When the
 *  account accepts the invitation, it becomes a member account in the behavior
 * 
 *  graph>
 * 
 *  Detective is also integrated with Organizations. The organization management account designates the Detective
 *  administrator account for the organization. That account becomes the administrator account for the organization behavior
 *  graph. The Detective administrator account is also the delegated administrator account for Detective in
 * 
 *  Organizations>
 * 
 *  The Detective administrator account can enable any organization account as a member account in the organization behavior
 *  graph. The organization accounts do not receive invitations. The Detective administrator account can also invite other
 *  accounts to the organization behavior
 * 
 *  graph>
 * 
 *  Every behavior graph is specific to a Region. You can only use the API to manage behavior graphs that belong to the
 *  Region that is associated with the currently selected
 * 
 *  endpoint>
 * 
 *  The administrator account for a behavior graph can use the Detective API to do the
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
 *  graph> </li> <li>
 * 
 *  Apply tags to a behavior
 * 
 *  graph> </li> </ul>
 * 
 *  The organization management account can use the Detective API to select the delegated administrator for
 * 
 *  Detective>
 * 
 *  The Detective administrator account for an organization can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  Perform all of the functions of an administrator
 * 
 *  account> </li> <li>
 * 
 *  Determine whether to automatically enable new organization accounts as member accounts in the organization behavior
 * 
 *  graph> </li> </ul>
 * 
 *  An invited member account can use the Detective API to do the
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
: QtAws::Core::AwsAbstractClient(new DetectiveClientPrivate(this), parent)
{
    Q_D(DetectiveClient);
    d->apiVersion = QStringLiteral("2018-10-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("api.detective");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Detective");
    d->serviceName = QStringLiteral("detective");
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
: QtAws::Core::AwsAbstractClient(new DetectiveClientPrivate(this), parent)
{
    Q_D(DetectiveClient);
    d->apiVersion = QStringLiteral("2018-10-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("api.detective");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Detective");
    d->serviceName = QStringLiteral("detective");
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
 * BatchGetGraphMemberDatasourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets data source package information for the behavior
 */
BatchGetGraphMemberDatasourcesResponse * DetectiveClient::batchGetGraphMemberDatasources(const BatchGetGraphMemberDatasourcesRequest &request)
{
    return qobject_cast<BatchGetGraphMemberDatasourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * BatchGetMembershipDatasourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information on the data source package history for an
 */
BatchGetMembershipDatasourcesResponse * DetectiveClient::batchGetMembershipDatasources(const BatchGetMembershipDatasourcesRequest &request)
{
    return qobject_cast<BatchGetMembershipDatasourcesResponse *>(send(request));
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
 * <code>CreateMembers</code> is used to send invitations to accounts. For the organization behavior graph, the Detective
 * administrator account uses <code>CreateMembers</code> to enable organization accounts as member
 *
 * accounts>
 *
 * For invited accounts, <code>CreateMembers</code> sends a request to invite the specified Amazon Web Services accounts to
 * be member accounts in the behavior graph. This operation can only be called by the administrator account for a behavior
 * graph.
 *
 * </p
 *
 * <code>CreateMembers</code> verifies the accounts and then invites the verified accounts. The administrator can
 * optionally specify to not send invitation emails to the member accounts. This would be used when the administrator
 * manages their member accounts
 *
 * centrally>
 *
 * For organization accounts in the organization behavior graph, <code>CreateMembers</code> attempts to enable the
 * accounts. The organization accounts do not receive
 *
 * invitations>
 *
 * The request provides the behavior graph ARN and the list of accounts to invite or to
 *
 * enable>
 *
 * The response separates the requested accounts into two
 *
 * lists> <ul> <li>
 *
 * The accounts that <code>CreateMembers</code> was able to process. For invited accounts, includes member accounts that
 * are being verified, that have passed verification and are to be invited, and that have failed verification. For
 * organization accounts in the organization behavior graph, includes accounts that can be enabled and that cannot be
 *
 * enabled> </li> <li>
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
 * Disables the specified behavior graph and queues it to be deleted. This operation removes the behavior graph from each
 * member account's list of behavior
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
 * Removes the specified member accounts from the behavior graph. The removed accounts no longer contribute data to the
 * behavior graph. This operation can only be called by the administrator account for the behavior
 *
 * graph>
 *
 * For invited accounts, the removed accounts are deleted from the list of accounts in the behavior graph. To restore the
 * account, the administrator account must send another
 *
 * invitation>
 *
 * For organization accounts in the organization behavior graph, the Detective administrator account can always enable the
 * organization account again. Organization accounts that are not enabled as member accounts are not included in the
 * <code>ListMembers</code> results for the organization behavior
 *
 * graph>
 *
 * An administrator account cannot use <code>DeleteMembers</code> to remove their own account from the behavior graph. To
 * disable a behavior graph, the administrator account uses the <code>DeleteGraph</code> API
 */
DeleteMembersResponse * DetectiveClient::deleteMembers(const DeleteMembersRequest &request)
{
    return qobject_cast<DeleteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * DescribeOrganizationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the configuration for the organization behavior graph. Currently indicates whether to
 * automatically enable new organization accounts as member
 *
 * accounts>
 *
 * Can only be called by the Detective administrator account for the organization.
 */
DescribeOrganizationConfigurationResponse * DetectiveClient::describeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest &request)
{
    return qobject_cast<DescribeOrganizationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * DisableOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the Detective administrator account in the current Region. Deletes the organization behavior
 *
 * graph>
 *
 * Can only be called by the organization management
 *
 * account>
 *
 * Removing the Detective administrator account does not affect the delegated administrator account for Detective in
 *
 * Organizations>
 *
 * To remove the delegated administrator account in Organizations, use the Organizations API. Removing the delegated
 * administrator account also removes the Detective administrator account in all Regions, except for Regions where the
 * Detective administrator account is the organization management
 */
DisableOrganizationAdminAccountResponse * DetectiveClient::disableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest &request)
{
    return qobject_cast<DisableOrganizationAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * DisassociateMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the member account from the specified behavior graph. This operation can only be called by an invited member
 * account that has the <code>ENABLED</code>
 *
 * status>
 *
 * <code>DisassociateMembership</code> cannot be called by an organization account in the organization behavior graph. For
 * the organization behavior graph, the Detective administrator account determines which organization accounts to enable or
 * disable as member
 */
DisassociateMembershipResponse * DetectiveClient::disassociateMembership(const DisassociateMembershipRequest &request)
{
    return qobject_cast<DisassociateMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * EnableOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Designates the Detective administrator account for the organization in the current
 *
 * Region>
 *
 * If the account does not have Detective enabled, then enables Detective for that account and creates a new behavior
 *
 * graph>
 *
 * Can only be called by the organization management
 *
 * account>
 *
 * If the organization has a delegated administrator account in Organizations, then the Detective administrator account
 * must be either the delegated administrator account or the organization management
 *
 * account>
 *
 * If the organization does not have a delegated administrator account in Organizations, then you can choose any account in
 * the organization. If you choose an account other than the organization management account, Detective calls Organizations
 * to make that account the delegated administrator account for Detective. The organization management account cannot be
 * the delegated administrator
 */
EnableOrganizationAdminAccountResponse * DetectiveClient::enableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest &request)
{
    return qobject_cast<EnableOrganizationAdminAccountResponse *>(send(request));
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
 * ListDatasourcePackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists data source packages in the behavior
 */
ListDatasourcePackagesResponse * DetectiveClient::listDatasourcePackages(const ListDatasourcePackagesRequest &request)
{
    return qobject_cast<ListDatasourcePackagesResponse *>(send(request));
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
 * called by an invited member
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
 * Retrieves the list of member accounts for a behavior
 *
 * graph>
 *
 * For invited accounts, the results do not include member accounts that were removed from the behavior
 *
 * graph>
 *
 * For the organization behavior graph, the results do not include organization accounts that the Detective administrator
 * account has not enabled as member
 */
ListMembersResponse * DetectiveClient::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * ListOrganizationAdminAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the Detective administrator account for an organization. Can only be called by the
 * organization management
 */
ListOrganizationAdminAccountsResponse * DetectiveClient::listOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest &request)
{
    return qobject_cast<ListOrganizationAdminAccountsResponse *>(send(request));
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
 * Rejects an invitation to contribute the account data to a behavior graph. This operation must be called by an invited
 * member account that has the <code>INVITED</code>
 *
 * status>
 *
 * <code>RejectInvitation</code> cannot be called by an organization account in the organization behavior graph. In the
 * organization behavior graph, organization accounts do not receive an
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
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * UpdateDatasourcePackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a data source packages for the behavior
 */
UpdateDatasourcePackagesResponse * DetectiveClient::updateDatasourcePackages(const UpdateDatasourcePackagesRequest &request)
{
    return qobject_cast<UpdateDatasourcePackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the DetectiveClient service, and returns a pointer to an
 * UpdateOrganizationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration for the Organizations integration in the current Region. Can only be called by the Detective
 * administrator account for the
 */
UpdateOrganizationConfigurationResponse * DetectiveClient::updateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest &request)
{
    return qobject_cast<UpdateOrganizationConfigurationResponse *>(send(request));
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
DetectiveClientPrivate::DetectiveClientPrivate(DetectiveClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Detective
} // namespace QtAws
