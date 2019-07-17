/*
    Copyright 2013-2019 Paul Colby

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

#include "securityhubclient.h"
#include "securityhubclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinvitationrequest.h"
#include "acceptinvitationresponse.h"
#include "batchdisablestandardsrequest.h"
#include "batchdisablestandardsresponse.h"
#include "batchenablestandardsrequest.h"
#include "batchenablestandardsresponse.h"
#include "batchimportfindingsrequest.h"
#include "batchimportfindingsresponse.h"
#include "createactiontargetrequest.h"
#include "createactiontargetresponse.h"
#include "createinsightrequest.h"
#include "createinsightresponse.h"
#include "createmembersrequest.h"
#include "createmembersresponse.h"
#include "declineinvitationsrequest.h"
#include "declineinvitationsresponse.h"
#include "deleteactiontargetrequest.h"
#include "deleteactiontargetresponse.h"
#include "deleteinsightrequest.h"
#include "deleteinsightresponse.h"
#include "deleteinvitationsrequest.h"
#include "deleteinvitationsresponse.h"
#include "deletemembersrequest.h"
#include "deletemembersresponse.h"
#include "describeactiontargetsrequest.h"
#include "describeactiontargetsresponse.h"
#include "describehubrequest.h"
#include "describehubresponse.h"
#include "describeproductsrequest.h"
#include "describeproductsresponse.h"
#include "disableimportfindingsforproductrequest.h"
#include "disableimportfindingsforproductresponse.h"
#include "disablesecurityhubrequest.h"
#include "disablesecurityhubresponse.h"
#include "disassociatefrommasteraccountrequest.h"
#include "disassociatefrommasteraccountresponse.h"
#include "disassociatemembersrequest.h"
#include "disassociatemembersresponse.h"
#include "enableimportfindingsforproductrequest.h"
#include "enableimportfindingsforproductresponse.h"
#include "enablesecurityhubrequest.h"
#include "enablesecurityhubresponse.h"
#include "getenabledstandardsrequest.h"
#include "getenabledstandardsresponse.h"
#include "getfindingsrequest.h"
#include "getfindingsresponse.h"
#include "getinsightresultsrequest.h"
#include "getinsightresultsresponse.h"
#include "getinsightsrequest.h"
#include "getinsightsresponse.h"
#include "getinvitationscountrequest.h"
#include "getinvitationscountresponse.h"
#include "getmasteraccountrequest.h"
#include "getmasteraccountresponse.h"
#include "getmembersrequest.h"
#include "getmembersresponse.h"
#include "invitemembersrequest.h"
#include "invitemembersresponse.h"
#include "listenabledproductsforimportrequest.h"
#include "listenabledproductsforimportresponse.h"
#include "listinvitationsrequest.h"
#include "listinvitationsresponse.h"
#include "listmembersrequest.h"
#include "listmembersresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateactiontargetrequest.h"
#include "updateactiontargetresponse.h"
#include "updatefindingsrequest.h"
#include "updatefindingsresponse.h"
#include "updateinsightrequest.h"
#include "updateinsightresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SecurityHub
 * \brief Contains classess for accessing AWS SecurityHub.
 *
 * \inmodule QtAwsSecurityHub
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::SecurityHubClient
 * \brief The SecurityHubClient class provides access to the AWS SecurityHub service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSecurityHub
 *
 *  Security Hub provides you with a comprehensive view of the security state of your AWS environment and resources. It also
 *  provides you with the compliance status of your environment based on CIS AWS Foundations compliance checks. Security Hub
 *  collects security data from AWS accounts, services, and integrated third-party products and helps you analyze security
 *  trends in your environment to identify the highest priority security issues. For more information about Security Hub,
 *  see the <i> <a href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">AWS Security Hub
 *  User Guide</a>
 * 
 *  </i>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the AWS Region that is currently
 *  active or in the specific AWS Region that you specify in your request. Any configuration or settings change that results
 *  from the operation is applied only to that Region. To make the same change in other Regions, execute the same command
 *  for each Region to apply the change to. For example, if your Region is set to <code>us-west-2</code>, when you use
 *  <code>CreateMembers</code> to add a member account to Security Hub, the association of the member account with the
 *  master account is created only in the us-west-2 Region. Security Hub must be enabled for the member account in the same
 *  Region that the invite was sent
 */

/*!
 * \brief Constructs a SecurityHubClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SecurityHubClient::SecurityHubClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SecurityHubClientPrivate(this), parent)
{
    Q_D(SecurityHubClient);
    d->apiVersion = QStringLiteral("2018-10-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("securityhub");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS SecurityHub");
    d->serviceName = QStringLiteral("securityhub");
}

/*!
 * \overload SecurityHubClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SecurityHubClient::SecurityHubClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SecurityHubClientPrivate(this), parent)
{
    Q_D(SecurityHubClient);
    d->apiVersion = QStringLiteral("2018-10-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("securityhub");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS SecurityHub");
    d->serviceName = QStringLiteral("securityhub");
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * AcceptInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts the invitation to be a member account and be monitored by the Security Hub master account that the invitation
 * was sent from. When the member account accepts the invitation, permission is granted to the master account to view
 * findings generated in the member
 */
AcceptInvitationResponse * SecurityHubClient::acceptInvitation(const AcceptInvitationRequest &request)
{
    return qobject_cast<AcceptInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * BatchDisableStandardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the standards specified by the provided <code>StandardsSubscriptionArns</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Standards Supported in AWS
 * Security
 */
BatchDisableStandardsResponse * SecurityHubClient::batchDisableStandards(const BatchDisableStandardsRequest &request)
{
    return qobject_cast<BatchDisableStandardsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * BatchEnableStandardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the standards specified by the provided <code>standardsArn</code>. In this release, only CIS AWS Foundations
 * standards are supported. For more information, see <a
 * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Standards Supported in AWS
 * Security
 */
BatchEnableStandardsResponse * SecurityHubClient::batchEnableStandards(const BatchEnableStandardsRequest &request)
{
    return qobject_cast<BatchEnableStandardsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * BatchImportFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports security findings generated from an integrated third-party product into Security Hub. This action is requested
 * by the integrated product to import its findings into Security Hub. The maximum allowed size for a finding is 240 Kb. An
 * error is returned for any finding larger than 240
 */
BatchImportFindingsResponse * SecurityHubClient::batchImportFindings(const BatchImportFindingsRequest &request)
{
    return qobject_cast<BatchImportFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * CreateActionTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom action target in Security Hub. You can use custom actions on findings and insights in Security Hub to
 * trigger target actions in Amazon CloudWatch
 */
CreateActionTargetResponse * SecurityHubClient::createActionTarget(const CreateActionTargetRequest &request)
{
    return qobject_cast<CreateActionTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * CreateInsightResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom insight in Security Hub. An insight is a consolidation of findings that relate to a security issue that
 * requires attention or remediation. Use the <code>GroupByAttribute</code> to group the related findings in the
 */
CreateInsightResponse * SecurityHubClient::createInsight(const CreateInsightRequest &request)
{
    return qobject_cast<CreateInsightResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * CreateMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a member association in Security Hub between the specified accounts and the account used to make the request,
 * which is the master account. To successfully create a member, you must use this action from an account that already has
 * Security Hub enabled. You can use the <a>EnableSecurityHub</a> to enable Security
 *
 * Hub>
 *
 * After you use <code>CreateMembers</code> to create member account associations in Security Hub, you need to use the
 * <a>InviteMembers</a> action, which invites the accounts to enable Security Hub and become member accounts in Security
 * Hub. If the invitation is accepted by the account owner, the account becomes a member account in Security Hub, and a
 * permission policy is added that permits the master account to view the findings generated in the member account. When
 * Security Hub is enabled in the invited account, findings start being sent to both the member and master
 *
 * accounts>
 *
 * You can remove the association between the master and member accounts by using the <a>DisassociateFromMasterAccount</a>
 * or <a>DisassociateMembers</a>
 */
CreateMembersResponse * SecurityHubClient::createMembers(const CreateMembersRequest &request)
{
    return qobject_cast<CreateMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DeclineInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Declines invitations to become a member
 */
DeclineInvitationsResponse * SecurityHubClient::declineInvitations(const DeclineInvitationsRequest &request)
{
    return qobject_cast<DeclineInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DeleteActionTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom action target from Security Hub. Deleting a custom action target doesn't affect any findings or
 * insights that were already sent to Amazon CloudWatch Events using the custom
 */
DeleteActionTargetResponse * SecurityHubClient::deleteActionTarget(const DeleteActionTargetRequest &request)
{
    return qobject_cast<DeleteActionTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DeleteInsightResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the insight specified by the
 */
DeleteInsightResponse * SecurityHubClient::deleteInsight(const DeleteInsightRequest &request)
{
    return qobject_cast<DeleteInsightResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DeleteInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes invitations received by the AWS account to become a member
 */
DeleteInvitationsResponse * SecurityHubClient::deleteInvitations(const DeleteInvitationsRequest &request)
{
    return qobject_cast<DeleteInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DeleteMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified member accounts from Security
 */
DeleteMembersResponse * SecurityHubClient::deleteMembers(const DeleteMembersRequest &request)
{
    return qobject_cast<DeleteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DescribeActionTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the custom action targets in Security Hub in your
 */
DescribeActionTargetsResponse * SecurityHubClient::describeActionTargets(const DescribeActionTargetsRequest &request)
{
    return qobject_cast<DescribeActionTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DescribeHubResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about the Hub resource in your account, including the <code>HubArn</code> and the time when you enabled
 * Security
 */
DescribeHubResponse * SecurityHubClient::describeHub(const DescribeHubRequest &request)
{
    return qobject_cast<DescribeHubResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DescribeProductsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the products available that you can subscribe to and integrate with Security Hub to
 * consolidate
 */
DescribeProductsResponse * SecurityHubClient::describeProducts(const DescribeProductsRequest &request)
{
    return qobject_cast<DescribeProductsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisableImportFindingsForProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the integration of the specified product with Security Hub. Findings from that product are no longer sent to
 * Security Hub after the integration is
 */
DisableImportFindingsForProductResponse * SecurityHubClient::disableImportFindingsForProduct(const DisableImportFindingsForProductRequest &request)
{
    return qobject_cast<DisableImportFindingsForProductResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisableSecurityHubResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables Security Hub in your account only in the current Region. To disable Security Hub in all Regions, you must
 * submit one request per Region where you have enabled Security Hub. When you disable Security Hub for a master account,
 * it doesn't disable Security Hub for any associated member
 *
 * accounts>
 *
 * When you disable Security Hub, your existing findings and insights and any Security Hub configuration settings are
 * deleted after 90 days and can't be recovered. Any standards that were enabled are disabled, and your master and member
 * account associations are removed. If you want to save your existing findings, you must export them before you disable
 * Security
 */
DisableSecurityHubResponse * SecurityHubClient::disableSecurityHub(const DisableSecurityHubRequest &request)
{
    return qobject_cast<DisableSecurityHubResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisassociateFromMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the current Security Hub member account from the associated master
 */
DisassociateFromMasterAccountResponse * SecurityHubClient::disassociateFromMasterAccount(const DisassociateFromMasterAccountRequest &request)
{
    return qobject_cast<DisassociateFromMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisassociateMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified member accounts from the associated master
 */
DisassociateMembersResponse * SecurityHubClient::disassociateMembers(const DisassociateMembersRequest &request)
{
    return qobject_cast<DisassociateMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * EnableImportFindingsForProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the integration of a partner product with Security Hub. Integrated products send findings to Security Hub. When
 * you enable a product integration, a permission policy that grants permission for the product to send findings to
 * Security Hub is
 */
EnableImportFindingsForProductResponse * SecurityHubClient::enableImportFindingsForProduct(const EnableImportFindingsForProductRequest &request)
{
    return qobject_cast<EnableImportFindingsForProductResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * EnableSecurityHubResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables Security Hub for your account in the current Region or the Region you specify in the request. When you enable
 * Security Hub, you grant to Security Hub the permissions necessary to gather findings from AWS Config, Amazon GuardDuty,
 * Amazon Inspector, and Amazon Macie. To learn more, see <a
 * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">Setting Up AWS Security
 */
EnableSecurityHubResponse * SecurityHubClient::enableSecurityHub(const EnableSecurityHubRequest &request)
{
    return qobject_cast<EnableSecurityHubResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetEnabledStandardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the standards that are currently
 */
GetEnabledStandardsResponse * SecurityHubClient::getEnabledStandards(const GetEnabledStandardsRequest &request)
{
    return qobject_cast<GetEnabledStandardsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of findings that match the specified
 */
GetFindingsResponse * SecurityHubClient::getFindings(const GetFindingsRequest &request)
{
    return qobject_cast<GetFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetInsightResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the results of the Security Hub insight that the insight ARN
 */
GetInsightResultsResponse * SecurityHubClient::getInsightResults(const GetInsightResultsRequest &request)
{
    return qobject_cast<GetInsightResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetInsightsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists and describes insights that insight ARNs
 */
GetInsightsResponse * SecurityHubClient::getInsights(const GetInsightsRequest &request)
{
    return qobject_cast<GetInsightsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetInvitationsCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the count of all Security Hub membership invitations that were sent to the current member account, not including
 * the currently accepted invitation.
 */
GetInvitationsCountResponse * SecurityHubClient::getInvitationsCount(const GetInvitationsCountRequest &request)
{
    return qobject_cast<GetInvitationsCountResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides the details for the Security Hub master account to the current member account.
 */
GetMasterAccountResponse * SecurityHubClient::getMasterAccount(const GetMasterAccountRequest &request)
{
    return qobject_cast<GetMasterAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details on the Security Hub member accounts that the account IDs
 */
GetMembersResponse * SecurityHubClient::getMembers(const GetMembersRequest &request)
{
    return qobject_cast<GetMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * InviteMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Invites other AWS accounts to become member accounts for the Security Hub master account that the invitation is sent
 * from. Before you can use this action to invite a member, you must first create the member account in Security Hub by
 * using the <a>CreateMembers</a> action. When the account owner accepts the invitation to become a member account and
 * enables Security Hub, the master account can view the findings generated from member
 */
InviteMembersResponse * SecurityHubClient::inviteMembers(const InviteMembersRequest &request)
{
    return qobject_cast<InviteMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * ListEnabledProductsForImportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all findings-generating solutions (products) whose findings you have subscribed to receive in Security
 */
ListEnabledProductsForImportResponse * SecurityHubClient::listEnabledProductsForImport(const ListEnabledProductsForImportRequest &request)
{
    return qobject_cast<ListEnabledProductsForImportResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * ListInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Security Hub membership invitations that were sent to the current AWS account.
 */
ListInvitationsResponse * SecurityHubClient::listInvitations(const ListInvitationsRequest &request)
{
    return qobject_cast<ListInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * ListMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists details about all member accounts for the current Security Hub master
 */
ListMembersResponse * SecurityHubClient::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags associated with a
 */
ListTagsForResourceResponse * SecurityHubClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a
 */
TagResourceResponse * SecurityHubClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a
 */
UntagResourceResponse * SecurityHubClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * UpdateActionTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name and description of a custom action target in Security
 */
UpdateActionTargetResponse * SecurityHubClient::updateActionTarget(const UpdateActionTargetRequest &request)
{
    return qobject_cast<UpdateActionTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * UpdateFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the <code>Note</code> and <code>RecordState</code> of the Security Hub-aggregated findings that the filter
 * attributes specify. Any member account that can view the finding also sees the update to the
 */
UpdateFindingsResponse * SecurityHubClient::updateFindings(const UpdateFindingsRequest &request)
{
    return qobject_cast<UpdateFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * UpdateInsightResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Security Hub insight that the insight ARN
 */
UpdateInsightResponse * SecurityHubClient::updateInsight(const UpdateInsightRequest &request)
{
    return qobject_cast<UpdateInsightResponse *>(send(request));
}

/*!
 * \class QtAws::SecurityHub::SecurityHubClientPrivate
 * \brief The SecurityHubClientPrivate class provides private implementation for SecurityHubClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a SecurityHubClientPrivate object with public implementation \a q.
 */
SecurityHubClientPrivate::SecurityHubClientPrivate(SecurityHubClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SecurityHub
} // namespace QtAws
