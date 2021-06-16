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

#include "securityhubclient.h"
#include "securityhubclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptadministratorinvitationrequest.h"
#include "acceptadministratorinvitationresponse.h"
#include "acceptinvitationrequest.h"
#include "acceptinvitationresponse.h"
#include "batchdisablestandardsrequest.h"
#include "batchdisablestandardsresponse.h"
#include "batchenablestandardsrequest.h"
#include "batchenablestandardsresponse.h"
#include "batchimportfindingsrequest.h"
#include "batchimportfindingsresponse.h"
#include "batchupdatefindingsrequest.h"
#include "batchupdatefindingsresponse.h"
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
#include "describeorganizationconfigurationrequest.h"
#include "describeorganizationconfigurationresponse.h"
#include "describeproductsrequest.h"
#include "describeproductsresponse.h"
#include "describestandardsrequest.h"
#include "describestandardsresponse.h"
#include "describestandardscontrolsrequest.h"
#include "describestandardscontrolsresponse.h"
#include "disableimportfindingsforproductrequest.h"
#include "disableimportfindingsforproductresponse.h"
#include "disableorganizationadminaccountrequest.h"
#include "disableorganizationadminaccountresponse.h"
#include "disablesecurityhubrequest.h"
#include "disablesecurityhubresponse.h"
#include "disassociatefromadministratoraccountrequest.h"
#include "disassociatefromadministratoraccountresponse.h"
#include "disassociatefrommasteraccountrequest.h"
#include "disassociatefrommasteraccountresponse.h"
#include "disassociatemembersrequest.h"
#include "disassociatemembersresponse.h"
#include "enableimportfindingsforproductrequest.h"
#include "enableimportfindingsforproductresponse.h"
#include "enableorganizationadminaccountrequest.h"
#include "enableorganizationadminaccountresponse.h"
#include "enablesecurityhubrequest.h"
#include "enablesecurityhubresponse.h"
#include "getadministratoraccountrequest.h"
#include "getadministratoraccountresponse.h"
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
#include "listorganizationadminaccountsrequest.h"
#include "listorganizationadminaccountsresponse.h"
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
#include "updateorganizationconfigurationrequest.h"
#include "updateorganizationconfigurationresponse.h"
#include "updatesecurityhubconfigurationrequest.h"
#include "updatesecurityhubconfigurationresponse.h"
#include "updatestandardscontrolrequest.h"
#include "updatestandardscontrolresponse.h"

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
 *  provides you with the readiness status of your environment based on controls from supported security standards. Security
 *  Hub collects security data from AWS accounts, services, and integrated third-party products and helps you analyze
 *  security trends in your environment to identify the highest priority security issues. For more information about
 *  Security Hub, see the <i> <a
 *  href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">AWS Security Hub User Guide</a>
 * 
 *  </i>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the AWS Region that is currently
 *  active or in the specific AWS Region that you specify in your request. Any configuration or settings change that results
 *  from the operation is applied only to that Region. To make the same change in other Regions, execute the same command
 *  for each Region to apply the change
 * 
 *  to>
 * 
 *  For example, if your Region is set to <code>us-west-2</code>, when you use <code> <a>CreateMembers</a> </code> to add a
 *  member account to Security Hub, the association of the member account with the administrator account is created only in
 *  the <code>us-west-2</code> Region. Security Hub must be enabled for the member account in the same Region that the
 *  invitation was sent
 * 
 *  from>
 * 
 *  The following throttling limits apply to using Security Hub API
 * 
 *  operations> <ul> <li>
 * 
 *  <code> <a>BatchEnableStandards</a> </code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of
 *  1 request per
 * 
 *  second> </li> <li>
 * 
 *  <code> <a>GetFindings</a> </code> - <code>RateLimit</code> of 3 requests per second. <code>BurstLimit</code> of 6
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code> <a>UpdateFindings</a> </code> - <code>RateLimit</code> of 1 request per second. <code>BurstLimit</code> of 5
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code> <a>UpdateStandardsControl</a> </code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code>
 *  of 5 requests per
 * 
 *  second> </li> <li>
 * 
 *  All other operations - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30 requests per
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
 * AcceptAdministratorInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts the invitation to be a member account and be monitored by the Security Hub administrator account that the
 * invitation was sent
 *
 * from>
 *
 * This operation is only used by member accounts that are not added through
 *
 * Organizations>
 *
 * When the member account accepts the invitation, permission is granted to the administrator account to view findings
 * generated in the member
 */
AcceptAdministratorInvitationResponse * SecurityHubClient::acceptAdministratorInvitation(const AcceptAdministratorInvitationRequest &request)
{
    return qobject_cast<AcceptAdministratorInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * AcceptInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This method is deprecated. Instead, use
 *
 * <code>AcceptAdministratorInvitation</code>>
 *
 * The Security Hub console continues to use <code>AcceptInvitation</code>. It will eventually change to use
 * <code>AcceptAdministratorInvitation</code>. Any IAM policies that specifically control access to this function must
 * continue to use <code>AcceptInvitation</code>. You should also add <code>AcceptAdministratorInvitation</code> to your
 * policies to ensure that the correct permissions are in place after the console begins to use
 *
 * <code>AcceptAdministratorInvitation</code>>
 *
 * Accepts the invitation to be a member account and be monitored by the Security Hub administrator account that the
 * invitation was sent
 *
 * from>
 *
 * This operation is only used by member accounts that are not added through
 *
 * Organizations>
 *
 * When the member account accepts the invitation, permission is granted to the administrator account to view findings
 * generated in the member
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
 * Disables the standards specified by the provided
 *
 * <code>StandardsSubscriptionArns</code>>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security Standards</a>
 * section of the <i>AWS Security Hub User
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
 * Enables the standards specified by the provided <code>StandardsArn</code>. To obtain the ARN for a standard, use the
 * <code> <a>DescribeStandards</a> </code>
 *
 * operation>
 *
 * For more information, see the <a
 * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security Standards</a>
 * section of the <i>AWS Security Hub User
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
 * Imports security findings generated from an integrated product into Security Hub. This action is requested by the
 * integrated product to import its findings into Security
 *
 * Hub>
 *
 * The maximum allowed size for a finding is 240 Kb. An error is returned for any finding larger than 240
 *
 * Kb>
 *
 * After a finding is created, <code>BatchImportFindings</code> cannot be used to update the following finding fields and
 * objects, which Security Hub customers use to manage their investigation
 *
 * workflow> <ul> <li>
 *
 * <code>Note</code>
 *
 * </p </li> <li>
 *
 * <code>UserDefinedFields</code>
 *
 * </p </li> <li>
 *
 * <code>VerificationState</code>
 *
 * </p </li> <li>
 *
 * <code>Workflow</code>
 *
 * </p </li> </ul>
 *
 * Finding providers also should not use <code>BatchImportFindings</code> to update the following
 *
 * attributes> <ul> <li>
 *
 * <code>Confidence</code>
 *
 * </p </li> <li>
 *
 * <code>Criticality</code>
 *
 * </p </li> <li>
 *
 * <code>RelatedFindings</code>
 *
 * </p </li> <li>
 *
 * <code>Severity</code>
 *
 * </p </li> <li>
 *
 * <code>Types</code>
 *
 * </p </li> </ul>
 *
 * Instead, finding providers use <code>FindingProviderFields</code> to provide values for these
 */
BatchImportFindingsResponse * SecurityHubClient::batchImportFindings(const BatchImportFindingsRequest &request)
{
    return qobject_cast<BatchImportFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * BatchUpdateFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by Security Hub customers to update information about their investigation into a finding. Requested by
 * administrator accounts or member accounts. Administrator accounts can update findings for their account and their member
 * accounts. Member accounts can update findings for their
 *
 * account>
 *
 * Updates from <code>BatchUpdateFindings</code> do not affect the value of <code>UpdatedAt</code> for a
 *
 * finding>
 *
 * Administrator and member accounts can use <code>BatchUpdateFindings</code> to update the following finding fields and
 *
 * objects> <ul> <li>
 *
 * <code>Confidence</code>
 *
 * </p </li> <li>
 *
 * <code>Criticality</code>
 *
 * </p </li> <li>
 *
 * <code>Note</code>
 *
 * </p </li> <li>
 *
 * <code>RelatedFindings</code>
 *
 * </p </li> <li>
 *
 * <code>Severity</code>
 *
 * </p </li> <li>
 *
 * <code>Types</code>
 *
 * </p </li> <li>
 *
 * <code>UserDefinedFields</code>
 *
 * </p </li> <li>
 *
 * <code>VerificationState</code>
 *
 * </p </li> <li>
 *
 * <code>Workflow</code>
 *
 * </p </li> </ul>
 *
 * You can configure IAM policies to restrict access to fields and field values. For example, you might not want member
 * accounts to be able to suppress findings or change the finding severity. See <a
 * href="https://docs.aws.amazon.com/securityhub/latest/userguide/finding-update-batchupdatefindings.html#batchupdatefindings-configure-access">Configuring
 * access to BatchUpdateFindings</a> in the <i>AWS Security Hub User
 */
BatchUpdateFindingsResponse * SecurityHubClient::batchUpdateFindings(const BatchUpdateFindingsRequest &request)
{
    return qobject_cast<BatchUpdateFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * CreateActionTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom action target in Security
 *
 * Hub>
 *
 * You can use custom actions on findings and insights in Security Hub to trigger target actions in Amazon CloudWatch
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
 * requires attention or
 *
 * remediation>
 *
 * To group the related findings in the insight, use the
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
 * which is the administrator account. If you are integrated with Organizations, then the administrator account is
 * designated by the organization management
 *
 * account>
 *
 * <code>CreateMembers</code> is always used to add accounts that are not organization
 *
 * members>
 *
 * For accounts that are part of an organization, <code>CreateMembers</code> is only used in the following
 *
 * cases> <ul> <li>
 *
 * Security Hub is not configured to automatically add new accounts in an
 *
 * organization> </li> <li>
 *
 * The account was disassociated or deleted in Security
 *
 * Hub> </li> </ul>
 *
 * This action can only be used by an account that has Security Hub enabled. To enable Security Hub, you can use the <code>
 * <a>EnableSecurityHub</a> </code>
 *
 * operation>
 *
 * For accounts that are not organization members, you create the account association and then send an invitation to the
 * member account. To send the invitation, you use the <code> <a>InviteMembers</a> </code> operation. If the account owner
 * accepts the invitation, the account becomes a member account in Security
 *
 * Hub>
 *
 * Accounts that are part of an organization do not receive an invitation. They automatically become a member account in
 * Security
 *
 * Hub>
 *
 * A permissions policy is added that permits the administrator account to view the findings generated in the member
 * account. When Security Hub is enabled in a member account, the member account findings are also visible to the
 * administrator account.
 *
 * </p
 *
 * To remove the association between the administrator and member accounts, use the <code>
 * <a>DisassociateFromMasterAccount</a> </code> or <code> <a>DisassociateMembers</a> </code>
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
 *
 * account>
 *
 * This operation is only used by accounts that are not part of an organization. Organization accounts do not receive
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
 * Deletes a custom action target from Security
 *
 * Hub>
 *
 * Deleting a custom action target does not affect any findings or insights that were already sent to Amazon CloudWatch
 * Events using the custom
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
 *
 * account>
 *
 * This operation is only used by accounts that are not part of an organization. Organization accounts do not receive
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
 *
 * Hub>
 *
 * Can be used to delete member accounts that belong to an organization as well as member accounts that were invited
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
 * DescribeOrganizationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the Organizations configuration for Security Hub. Can only be called from a Security Hub
 * administrator
 */
DescribeOrganizationConfigurationResponse * SecurityHubClient::describeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest &request)
{
    return qobject_cast<DescribeOrganizationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DescribeProductsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about product integrations in Security
 *
 * Hub>
 *
 * You can optionally provide an integration ARN. If you provide an integration ARN, then the results only include that
 *
 * integration>
 *
 * If you do not provide an integration ARN, then the results include all of the available product integrations.
 */
DescribeProductsResponse * SecurityHubClient::describeProducts(const DescribeProductsRequest &request)
{
    return qobject_cast<DescribeProductsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DescribeStandardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the available standards in Security
 *
 * Hub>
 *
 * For each standard, the results include the standard ARN, the name, and a description.
 */
DescribeStandardsResponse * SecurityHubClient::describeStandards(const DescribeStandardsRequest &request)
{
    return qobject_cast<DescribeStandardsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DescribeStandardsControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of security standards
 *
 * controls>
 *
 * For each control, the results include information about whether it is currently enabled, the severity, and a link to
 * remediation
 */
DescribeStandardsControlsResponse * SecurityHubClient::describeStandardsControls(const DescribeStandardsControlsRequest &request)
{
    return qobject_cast<DescribeStandardsControlsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisableImportFindingsForProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the integration of the specified product with Security Hub. After the integration is disabled, findings from
 * that product are no longer sent to Security
 */
DisableImportFindingsForProductResponse * SecurityHubClient::disableImportFindingsForProduct(const DisableImportFindingsForProductRequest &request)
{
    return qobject_cast<DisableImportFindingsForProductResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisableOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables a Security Hub administrator account. Can only be called by the organization management
 */
DisableOrganizationAdminAccountResponse * SecurityHubClient::disableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest &request)
{
    return qobject_cast<DisableOrganizationAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisableSecurityHubResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables Security Hub in your account only in the current Region. To disable Security Hub in all Regions, you must
 * submit one request per Region where you have enabled Security
 *
 * Hub>
 *
 * When you disable Security Hub for an administrator account, it doesn't disable Security Hub for any associated member
 *
 * accounts>
 *
 * When you disable Security Hub, your existing findings and insights and any Security Hub configuration settings are
 * deleted after 90 days and cannot be recovered. Any standards that were enabled are disabled, and your administrator and
 * member account associations are
 *
 * removed>
 *
 * If you want to save your existing findings, you must export them before you disable Security
 */
DisableSecurityHubResponse * SecurityHubClient::disableSecurityHub(const DisableSecurityHubRequest &request)
{
    return qobject_cast<DisableSecurityHubResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisassociateFromAdministratorAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the current Security Hub member account from the associated administrator
 *
 * account>
 *
 * This operation is only used by accounts that are not part of an organization. For organization accounts, only the
 * administrator account can disassociate a member
 */
DisassociateFromAdministratorAccountResponse * SecurityHubClient::disassociateFromAdministratorAccount(const DisassociateFromAdministratorAccountRequest &request)
{
    return qobject_cast<DisassociateFromAdministratorAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * DisassociateFromMasterAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This method is deprecated. Instead, use
 *
 * <code>DisassociateFromAdministratorAccount</code>>
 *
 * The Security Hub console continues to use <code>DisassociateFromMasterAccount</code>. It will eventually change to use
 * <code>DisassociateFromAdministratorAccount</code>. Any IAM policies that specifically control access to this function
 * must continue to use <code>DisassociateFromMasterAccount</code>. You should also add
 * <code>DisassociateFromAdministratorAccount</code> to your policies to ensure that the correct permissions are in place
 * after the console begins to use
 *
 * <code>DisassociateFromAdministratorAccount</code>>
 *
 * Disassociates the current Security Hub member account from the associated administrator
 *
 * account>
 *
 * This operation is only used by accounts that are not part of an organization. For organization accounts, only the
 * administrator account can disassociate a member
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
 * Disassociates the specified member accounts from the associated administrator
 *
 * account>
 *
 * Can be used to disassociate both accounts that are managed using Organizations and accounts that were invited
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
 * Enables the integration of a partner product with Security Hub. Integrated products send findings to Security
 *
 * Hub>
 *
 * When you enable a product integration, a permissions policy that grants permission for the product to send findings to
 * Security Hub is
 */
EnableImportFindingsForProductResponse * SecurityHubClient::enableImportFindingsForProduct(const EnableImportFindingsForProductRequest &request)
{
    return qobject_cast<EnableImportFindingsForProductResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * EnableOrganizationAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Designates the Security Hub administrator account for an organization. Can only be called by the organization management
 */
EnableOrganizationAdminAccountResponse * SecurityHubClient::enableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest &request)
{
    return qobject_cast<EnableOrganizationAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * EnableSecurityHubResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables Security Hub for your account in the current Region or the Region you specify in the
 *
 * request>
 *
 * When you enable Security Hub, you grant to Security Hub the permissions necessary to gather findings from other services
 * that are integrated with Security
 *
 * Hub>
 *
 * When you use the <code>EnableSecurityHub</code> operation to enable Security Hub, you also automatically enable the
 * following
 *
 * standards> <ul> <li>
 *
 * CIS AWS
 *
 * Foundation> </li> <li>
 *
 * AWS Foundational Security Best
 *
 * Practice> </li> </ul>
 *
 * You do not enable the Payment Card Industry Data Security Standard (PCI DSS) standard.
 *
 * </p
 *
 * To not enable the automatically enabled standards, set <code>EnableDefaultStandards</code> to
 *
 * <code>false</code>>
 *
 * After you enable Security Hub, to enable a standard, use the <code> <a>BatchEnableStandards</a> </code> operation. To
 * disable a standard, use the <code> <a>BatchDisableStandards</a> </code>
 *
 * operation>
 *
 * To learn more, see <a href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">Setting
 * Up AWS Security Hub</a> in the <i>AWS Security Hub User
 */
EnableSecurityHubResponse * SecurityHubClient::enableSecurityHub(const EnableSecurityHubRequest &request)
{
    return qobject_cast<EnableSecurityHubResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * GetAdministratorAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides the details for the Security Hub administrator account for the current member
 *
 * account>
 *
 * Can be used by both member accounts that are managed using Organizations and accounts that were invited
 */
GetAdministratorAccountResponse * SecurityHubClient::getAdministratorAccount(const GetAdministratorAccountRequest &request)
{
    return qobject_cast<GetAdministratorAccountResponse *>(send(request));
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
 * Lists the results of the Security Hub insight specified by the insight
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
 * Lists and describes insights for the specified insight
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
 * This method is deprecated. Instead, use
 *
 * <code>GetAdministratorAccount</code>>
 *
 * The Security Hub console continues to use <code>GetMasterAccount</code>. It will eventually change to use
 * <code>GetAdministratorAccount</code>. Any IAM policies that specifically control access to this function must continue
 * to use <code>GetMasterAccount</code>. You should also add <code>GetAdministratorAccount</code> to your policies to
 * ensure that the correct permissions are in place after the console begins to use
 *
 * <code>GetAdministratorAccount</code>>
 *
 * Provides the details for the Security Hub administrator account for the current member
 *
 * account>
 *
 * Can be used by both member accounts that are managed using Organizations and accounts that were invited
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
 * Returns the details for the Security Hub member accounts for the specified account
 *
 * IDs>
 *
 * An administrator account can be either the delegated Security Hub administrator account for an organization or an
 * administrator account that enabled Security Hub
 *
 * manually>
 *
 * The results include both member accounts that are managed using Organizations and accounts that were invited
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
 * Invites other AWS accounts to become member accounts for the Security Hub administrator account that the invitation is
 * sent
 *
 * from>
 *
 * This operation is only used to invite accounts that do not belong to an organization. Organization accounts do not
 * receive
 *
 * invitations>
 *
 * Before you can use this action to invite a member, you must first use the <code> <a>CreateMembers</a> </code> action to
 * create the member account in Security
 *
 * Hub>
 *
 * When the account owner enables Security Hub and accepts the invitation to become a member account, the administrator
 * account can view the findings generated from the member
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
 * Lists all findings-generating solutions (products) that you are subscribed to receive findings from in Security
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
 * Lists all Security Hub membership invitations that were sent to the current AWS
 *
 * account>
 *
 * This operation is only used by accounts that are managed by invitation. Accounts that are managed using the integration
 * with AWS Organizations do not receive
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
 * Lists details about all member accounts for the current Security Hub administrator
 *
 * account>
 *
 * The results include both member accounts that belong to an organization and member accounts that were invited
 */
ListMembersResponse * SecurityHubClient::listMembers(const ListMembersRequest &request)
{
    return qobject_cast<ListMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * ListOrganizationAdminAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Security Hub administrator accounts. Can only be called by the organization management
 */
ListOrganizationAdminAccountsResponse * SecurityHubClient::listOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest &request)
{
    return qobject_cast<ListOrganizationAdminAccountsResponse *>(send(request));
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
 * <code>UpdateFindings</code> is deprecated. Instead of <code>UpdateFindings</code>, use
 *
 * <code>BatchUpdateFindings</code>>
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
 * Updates the Security Hub insight identified by the specified insight
 */
UpdateInsightResponse * SecurityHubClient::updateInsight(const UpdateInsightRequest &request)
{
    return qobject_cast<UpdateInsightResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * UpdateOrganizationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to update the configuration related to Organizations. Can only be called from a Security Hub administrator
 */
UpdateOrganizationConfigurationResponse * SecurityHubClient::updateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest &request)
{
    return qobject_cast<UpdateOrganizationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * UpdateSecurityHubConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates configuration options for Security
 */
UpdateSecurityHubConfigurationResponse * SecurityHubClient::updateSecurityHubConfiguration(const UpdateSecurityHubConfigurationRequest &request)
{
    return qobject_cast<UpdateSecurityHubConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SecurityHubClient service, and returns a pointer to an
 * UpdateStandardsControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to control whether an individual security standard control is enabled or
 */
UpdateStandardsControlResponse * SecurityHubClient::updateStandardsControl(const UpdateStandardsControlRequest &request)
{
    return qobject_cast<UpdateStandardsControlResponse *>(send(request));
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
