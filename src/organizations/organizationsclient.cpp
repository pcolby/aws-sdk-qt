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

#include "organizationsclient.h"
#include "organizationsclient_p.h"

#include "core/awssignaturev4.h"
#include "accepthandshakerequest.h"
#include "accepthandshakeresponse.h"
#include "attachpolicyrequest.h"
#include "attachpolicyresponse.h"
#include "cancelhandshakerequest.h"
#include "cancelhandshakeresponse.h"
#include "closeaccountrequest.h"
#include "closeaccountresponse.h"
#include "createaccountrequest.h"
#include "createaccountresponse.h"
#include "creategovcloudaccountrequest.h"
#include "creategovcloudaccountresponse.h"
#include "createorganizationrequest.h"
#include "createorganizationresponse.h"
#include "createorganizationalunitrequest.h"
#include "createorganizationalunitresponse.h"
#include "createpolicyrequest.h"
#include "createpolicyresponse.h"
#include "declinehandshakerequest.h"
#include "declinehandshakeresponse.h"
#include "deleteorganizationrequest.h"
#include "deleteorganizationresponse.h"
#include "deleteorganizationalunitrequest.h"
#include "deleteorganizationalunitresponse.h"
#include "deletepolicyrequest.h"
#include "deletepolicyresponse.h"
#include "deregisterdelegatedadministratorrequest.h"
#include "deregisterdelegatedadministratorresponse.h"
#include "describeaccountrequest.h"
#include "describeaccountresponse.h"
#include "describecreateaccountstatusrequest.h"
#include "describecreateaccountstatusresponse.h"
#include "describeeffectivepolicyrequest.h"
#include "describeeffectivepolicyresponse.h"
#include "describehandshakerequest.h"
#include "describehandshakeresponse.h"
#include "describeorganizationrequest.h"
#include "describeorganizationresponse.h"
#include "describeorganizationalunitrequest.h"
#include "describeorganizationalunitresponse.h"
#include "describepolicyrequest.h"
#include "describepolicyresponse.h"
#include "detachpolicyrequest.h"
#include "detachpolicyresponse.h"
#include "disableawsserviceaccessrequest.h"
#include "disableawsserviceaccessresponse.h"
#include "disablepolicytyperequest.h"
#include "disablepolicytyperesponse.h"
#include "enableawsserviceaccessrequest.h"
#include "enableawsserviceaccessresponse.h"
#include "enableallfeaturesrequest.h"
#include "enableallfeaturesresponse.h"
#include "enablepolicytyperequest.h"
#include "enablepolicytyperesponse.h"
#include "inviteaccounttoorganizationrequest.h"
#include "inviteaccounttoorganizationresponse.h"
#include "leaveorganizationrequest.h"
#include "leaveorganizationresponse.h"
#include "listawsserviceaccessfororganizationrequest.h"
#include "listawsserviceaccessfororganizationresponse.h"
#include "listaccountsrequest.h"
#include "listaccountsresponse.h"
#include "listaccountsforparentrequest.h"
#include "listaccountsforparentresponse.h"
#include "listchildrenrequest.h"
#include "listchildrenresponse.h"
#include "listcreateaccountstatusrequest.h"
#include "listcreateaccountstatusresponse.h"
#include "listdelegatedadministratorsrequest.h"
#include "listdelegatedadministratorsresponse.h"
#include "listdelegatedservicesforaccountrequest.h"
#include "listdelegatedservicesforaccountresponse.h"
#include "listhandshakesforaccountrequest.h"
#include "listhandshakesforaccountresponse.h"
#include "listhandshakesfororganizationrequest.h"
#include "listhandshakesfororganizationresponse.h"
#include "listorganizationalunitsforparentrequest.h"
#include "listorganizationalunitsforparentresponse.h"
#include "listparentsrequest.h"
#include "listparentsresponse.h"
#include "listpoliciesrequest.h"
#include "listpoliciesresponse.h"
#include "listpoliciesfortargetrequest.h"
#include "listpoliciesfortargetresponse.h"
#include "listrootsrequest.h"
#include "listrootsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtargetsforpolicyrequest.h"
#include "listtargetsforpolicyresponse.h"
#include "moveaccountrequest.h"
#include "moveaccountresponse.h"
#include "registerdelegatedadministratorrequest.h"
#include "registerdelegatedadministratorresponse.h"
#include "removeaccountfromorganizationrequest.h"
#include "removeaccountfromorganizationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateorganizationalunitrequest.h"
#include "updateorganizationalunitresponse.h"
#include "updatepolicyrequest.h"
#include "updatepolicyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Organizations
 * \brief Contains classess for accessing AWS Organizations.
 *
 * \inmodule QtAwsOrganizations
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Organizations {

/*!
 * \class QtAws::Organizations::OrganizationsClient
 * \brief The OrganizationsClient class provides access to the AWS Organizations service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOrganizations
 *
 *  Organizations is a web service that enables you to consolidate your multiple Amazon Web Services accounts into an
 *  <i>organization</i> and centrally manage your accounts and their
 * 
 *  resources>
 * 
 *  This guide provides descriptions of the Organizations operations. For more information about using this service, see the
 *  <a href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">Organizations User
 * 
 *  Guide</a>>
 * 
 *  <b>Support and feedback for Organizations</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:feedback-awsorganizations@amazon.com">feedback-awsorganizations@amazon.com</a> or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=219">Organizations support forum</a>. For more
 *  information about the Amazon Web Services support forums, see <a href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>Endpoint to call When using the CLI or the Amazon Web Services SDK</b>
 * 
 *  </p
 * 
 *  For the current release of Organizations, specify the <code>us-east-1</code> region for all Amazon Web Services API and
 *  CLI calls made from the commercial Amazon Web Services Regions outside of China. If calling from one of the Amazon Web
 *  Services Regions in China, then specify <code>cn-northwest-1</code>. You can do this in the CLI by using these
 *  parameters and
 * 
 *  commands> <ul> <li>
 * 
 *  Use the following parameter with each command to specify both the endpoint and its
 * 
 *  region>
 * 
 *  <code>--endpoint-url https://organizations.us-east-1.amazonaws.com</code> <i>(from commercial Amazon Web Services
 *  Regions outside of China)</i>
 * 
 *  </p
 * 
 *  o>
 * 
 *  <code>--endpoint-url https://organizations.cn-northwest-1.amazonaws.com.cn</code> <i>(from Amazon Web Services Regions
 *  in China)</i>
 * 
 *  </p </li> <li>
 * 
 *  Use the default endpoint, but configure your default region with this
 * 
 *  command>
 * 
 *  <code>aws configure set default.region us-east-1</code> <i>(from commercial Amazon Web Services Regions outside of
 *  China)</i>
 * 
 *  </p
 * 
 *  o>
 * 
 *  <code>aws configure set default.region cn-northwest-1</code> <i>(from Amazon Web Services Regions in China)</i>
 * 
 *  </p </li> <li>
 * 
 *  Use the following parameter with each command to specify the
 * 
 *  endpoint>
 * 
 *  <code>--region us-east-1</code> <i>(from commercial Amazon Web Services Regions outside of China)</i>
 * 
 *  </p
 * 
 *  o>
 * 
 *  <code>--region cn-northwest-1</code> <i>(from Amazon Web Services Regions in China)</i>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Recording API Requests</b>
 * 
 *  </p
 * 
 *  Organizations supports CloudTrail, a service that records Amazon Web Services API calls for your Amazon Web Services
 *  account and delivers log files to an Amazon S3 bucket. By using information collected by CloudTrail, you can determine
 *  which requests the Organizations service received, who made the request and when, and so on. For more about
 *  Organizations and its support for CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_incident-response.html#orgs_cloudtrail-integration">Logging
 *  Organizations Events with CloudTrail</a> in the <i>Organizations User Guide</i>. To learn more about CloudTrail,
 *  including how to turn it on and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">CloudTrail User
 */

/*!
 * \brief Constructs a OrganizationsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
OrganizationsClient::OrganizationsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OrganizationsClientPrivate(this), parent)
{
    Q_D(OrganizationsClient);
    d->apiVersion = QStringLiteral("2016-11-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("organizations");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Organizations");
    d->serviceName = QStringLiteral("organizations");
}

/*!
 * \overload OrganizationsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
OrganizationsClient::OrganizationsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OrganizationsClientPrivate(this), parent)
{
    Q_D(OrganizationsClient);
    d->apiVersion = QStringLiteral("2016-11-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("organizations");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Organizations");
    d->serviceName = QStringLiteral("organizations");
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * AcceptHandshakeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a response to the originator of a handshake agreeing to the action proposed by the handshake
 *
 * request>
 *
 * This operation can be called only by the following principals when they also have the relevant IAM
 *
 * permissions> <ul> <li>
 *
 * <b>Invitation to join</b> or <b>Approve all features request</b> handshakes: only a principal from the member
 *
 * account>
 *
 * The user who calls the API for an invitation to join must have the <code>organizations:AcceptHandshake</code>
 * permission. If you enabled all features in the organization, the user must also have the
 * <code>iam:CreateServiceLinkedRole</code> permission so that Organizations can create the required service-linked role
 * named <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integration_services.html#orgs_integration_service-linked-roles">Organizations
 * and Service-Linked Roles</a> in the <i>Organizations User
 *
 * Guide</i>> </li> <li>
 *
 * <b>Enable all features final confirmation</b> handshake: only a principal from the management
 *
 * account>
 *
 * For more information about invitations, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_invites.html">Inviting an Amazon
 * Web Services account to join your organization</a> in the <i>Organizations User Guide.</i> For more information about
 * requests to enable all features in the organization, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling all
 * features in your organization</a> in the <i>Organizations User Guide.</i>
 *
 * </p </li> </ul>
 *
 * After you accept a handshake, it continues to appear in the results of relevant APIs for only 30 days. After that, it's
 */
AcceptHandshakeResponse * OrganizationsClient::acceptHandshake(const AcceptHandshakeRequest &request)
{
    return qobject_cast<AcceptHandshakeResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * AttachPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a policy to a root, an organizational unit (OU), or an individual account. How the policy affects accounts
 * depends on the type of policy. Refer to the <i>Organizations User Guide</i> for information about each policy
 *
 * type> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
 *
 * </p </li> </ul>
 *
 * This operation can be called only from the organization's management
 */
AttachPolicyResponse * OrganizationsClient::attachPolicy(const AttachPolicyRequest &request)
{
    return qobject_cast<AttachPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * CancelHandshakeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a handshake. Canceling a handshake sets the handshake state to
 *
 * <code>CANCELED</code>>
 *
 * This operation can be called only from the account that originated the handshake. The recipient of the handshake can't
 * cancel it, but can use <a>DeclineHandshake</a> instead. After a handshake is canceled, the recipient can no longer
 * respond to that
 *
 * handshake>
 *
 * After you cancel a handshake, it continues to appear in the results of relevant APIs for only 30 days. After that, it's
 */
CancelHandshakeResponse * OrganizationsClient::cancelHandshake(const CancelHandshakeRequest &request)
{
    return qobject_cast<CancelHandshakeResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * CloseAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Closes an Amazon Web Services member account within an organization. You can't close the management account with this
 * API. This is an asynchronous request that Amazon Web Services performs in the background. Because
 * <code>CloseAccount</code> operates asynchronously, it can return a successful completion message even though account
 * closure might still be in progress. You need to wait a few minutes before the account is fully closed. To check the
 * status of the request, do one of the
 *
 * following> <ul> <li>
 *
 * Use the <code>AccountId</code> that you sent in the <code>CloseAccount</code> request to provide as a parameter to the
 * <a>DescribeAccount</a> operation.
 *
 * </p
 *
 * While the close account request is in progress, Account status will indicate PENDING_CLOSURE. When the close account
 * request completes, the status will change to SUSPENDED.
 *
 * </p </li> <li>
 *
 * Check the CloudTrail log for the <code>CloseAccountResult</code> event that gets published after the account closes
 * successfully. For information on using CloudTrail with Organizations, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_security_incident-response.html#orgs_cloudtrail-integration">Logging
 * and monitoring in Organizations</a> in the <i>Organizations User Guide.</i>
 *
 * </p </li> </ul> <note> <ul> <li>
 *
 * You can only close 10% of active member accounts within a rolling 30 day period. This quota is not bound by a calendar
 * month, but starts when you close an account. Within 30 days of that initial account closure, you can't exceed the 10%
 * account closure
 *
 * limit> </li> <li>
 *
 * To reinstate a closed account, contact Amazon Web Services Support within the 90-day grace period while the account is
 * in SUSPENDED status.
 *
 * </p </li> <li>
 *
 * If the Amazon Web Services account you attempt to close is linked to an Amazon Web Services GovCloud (US) account, the
 * <code>CloseAccount</code> request will close both accounts. To learn important pre-closure details, see <a
 * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/Closing-govcloud-account.html"> Closing an Amazon Web
 * Services GovCloud (US) account</a> in the <i> Amazon Web Services GovCloud User
 *
 * Guide</i>> </li> </ul> </note>
 *
 * For more information about closing accounts, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing an Amazon Web
 * Services account</a> in the <i>Organizations User Guide.</i>
 */
CloseAccountResponse * OrganizationsClient::closeAccount(const CloseAccountRequest &request)
{
    return qobject_cast<CloseAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * CreateAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Web Services account that is automatically a member of the organization whose credentials made the
 * request. This is an asynchronous request that Amazon Web Services performs in the background. Because
 * <code>CreateAccount</code> operates asynchronously, it can return a successful completion message even though account
 * initialization might still be in progress. You might need to wait a few minutes before you can successfully access the
 * account. To check the status of the request, do one of the
 *
 * following> <ul> <li>
 *
 * Use the <code>Id</code> member of the <code>CreateAccountStatus</code> response element from this operation to provide
 * as a parameter to the <a>DescribeCreateAccountStatus</a>
 *
 * operation> </li> <li>
 *
 * Check the CloudTrail log for the <code>CreateAccountResult</code> event. For information on using CloudTrail with
 * Organizations, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_security_incident-response.html#orgs_cloudtrail-integration">Logging
 * and monitoring in Organizations</a> in the <i>Organizations User Guide.</i>
 *
 * </p </li> </ul>
 *
 * The user who calls the API to create an account must have the <code>organizations:CreateAccount</code> permission. If
 * you enabled all features in the organization, Organizations creates the required service-linked role named
 * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">Organizations
 * and Service-Linked Roles</a> in the <i>Organizations User
 *
 * Guide</i>>
 *
 * If the request includes tags, then the requester must have the <code>organizations:TagResource</code>
 *
 * permission>
 *
 * Organizations preconfigures the new member account with a role (named <code>OrganizationAccountAccessRole</code> by
 * default) that grants users in the management account administrator permissions in the new member account. Principals in
 * the management account can assume the role. Organizations clones the company name and address information for the new
 * account from the organization's management
 *
 * account>
 *
 * This operation can be called only from the organization's management
 *
 * account>
 *
 * For more information about creating accounts, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating an Amazon
 * Web Services account in Your Organization</a> in the <i>Organizations User Guide.</i>
 *
 * </p <b> <ul> <li>
 *
 * When you create an account in an organization using the Organizations console, API, or CLI commands, the information
 * required for the account to operate as a standalone account, such as a payment method and signing the end user license
 * agreement (EULA) is <i>not</i> automatically collected. If you must remove an account from your organization later, you
 * can do so only after you provide the missing information. Follow the steps at <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
 * To leave an organization as a member account</a> in the <i>Organizations User
 *
 * Guide</i>> </li> <li>
 *
 * If you get an exception that indicates that you exceeded your account limits for the organization, contact <a
 * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
 *
 * Support</a>> </li> <li>
 *
 * If you get an exception that indicates that the operation failed because your organization is still initializing, wait
 * one hour and then try again. If the error persists, contact <a
 * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
 *
 * Support</a>> </li> <li>
 *
 * Using <code>CreateAccount</code> to create multiple temporary accounts isn't recommended. You can only close an account
 * from the Billing and Cost Management console, and you must be signed in as the root user. For information on the
 * requirements and process for closing an account, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing an Amazon Web
 * Services account</a> in the <i>Organizations User
 *
 * Guide</i>> </li> </ul> </b> <note>
 *
 * When you create a member account with this operation, you can choose whether to create the account with the <b>IAM User
 * and Role Access to Billing Information</b> switch enabled. If you enable it, IAM users and roles that have appropriate
 * permissions can view billing information for the account. If you disable it, only the account root user can access
 * billing information. For information about how to disable this switch for an account, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting Access to Your Billing
 * Information and
 */
CreateAccountResponse * OrganizationsClient::createAccount(const CreateAccountRequest &request)
{
    return qobject_cast<CreateAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * CreateGovCloudAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This action is available if all of the following are
 *
 * true> <ul> <li>
 *
 * You're authorized to create accounts in the Amazon Web Services GovCloud (US) Region. For more information on the Amazon
 * Web Services GovCloud (US) Region, see the <a
 * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/welcome.html"> <i>Amazon Web Services GovCloud User
 * Guide</i>.</a>
 *
 * </p </li> <li>
 *
 * You already have an account in the Amazon Web Services GovCloud (US) Region that is paired with a management account of
 * an organization in the commercial
 *
 * Region> </li> <li>
 *
 * You call this action from the management account of your organization in the commercial
 *
 * Region> </li> <li>
 *
 * You have the <code>organizations:CreateGovCloudAccount</code> permission.
 *
 * </p </li> </ul>
 *
 * Organizations automatically creates the required service-linked role named <code>AWSServiceRoleForOrganizations</code>.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">Organizations
 * and Service-Linked Roles</a> in the <i>Organizations User Guide.</i>
 *
 * </p
 *
 * Amazon Web Services automatically enables CloudTrail for Amazon Web Services GovCloud (US) accounts, but you should also
 * do the
 *
 * following> <ul> <li>
 *
 * Verify that CloudTrail is enabled to store
 *
 * logs> </li> <li>
 *
 * Create an Amazon S3 bucket for CloudTrail log
 *
 * storage>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/verifying-cloudtrail.html">Verifying CloudTrail Is
 * Enabled</a> in the <i>Amazon Web Services GovCloud User Guide</i>.
 *
 * </p </li> </ul>
 *
 * If the request includes tags, then the requester must have the <code>organizations:TagResource</code> permission. The
 * tags are attached to the commercial account associated with the GovCloud account, rather than the GovCloud account
 * itself. To add tags to the GovCloud account, call the <a>TagResource</a> operation in the GovCloud Region after the new
 * GovCloud account
 *
 * exists>
 *
 * You call this action from the management account of your organization in the commercial Region to create a standalone
 * Amazon Web Services account in the Amazon Web Services GovCloud (US) Region. After the account is created, the
 * management account of an organization in the Amazon Web Services GovCloud (US) Region can invite it to that
 * organization. For more information on inviting standalone accounts in the Amazon Web Services GovCloud (US) to join an
 * organization, see <a
 * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">Organizations</a> in the
 * <i>Amazon Web Services GovCloud User Guide.</i>
 *
 * </p
 *
 * Calling <code>CreateGovCloudAccount</code> is an asynchronous request that Amazon Web Services performs in the
 * background. Because <code>CreateGovCloudAccount</code> operates asynchronously, it can return a successful completion
 * message even though account initialization might still be in progress. You might need to wait a few minutes before you
 * can successfully access the account. To check the status of the request, do one of the
 *
 * following> <ul> <li>
 *
 * Use the <code>OperationId</code> response element from this operation to provide as a parameter to the
 * <a>DescribeCreateAccountStatus</a>
 *
 * operation> </li> <li>
 *
 * Check the CloudTrail log for the <code>CreateAccountResult</code> event. For information on using CloudTrail with
 * Organizations, see <a href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
 * the Activity in Your Organization</a> in the <i>Organizations User Guide.</i>
 *
 * </p </li> </ul>
 *
 * </p
 *
 * When you call the <code>CreateGovCloudAccount</code> action, you create two accounts: a standalone account in the Amazon
 * Web Services GovCloud (US) Region and an associated account in the commercial Region for billing and support purposes.
 * The account in the commercial Region is automatically a member of the organization whose credentials made the request.
 * Both accounts are associated with the same email
 *
 * address>
 *
 * A role is created in the new account in the commercial Region that allows the management account in the organization in
 * the commercial Region to assume it. An Amazon Web Services GovCloud (US) account is then created and associated with the
 * commercial account that you just created. A role is also created in the new Amazon Web Services GovCloud (US) account
 * that can be assumed by the Amazon Web Services GovCloud (US) account that is associated with the management account of
 * the commercial organization. For more information and to view a diagram that explains how account access works, see <a
 * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">Organizations</a> in the
 * <i>Amazon Web Services GovCloud User Guide.</i>
 *
 * </p
 *
 * For more information about creating accounts, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating an Amazon
 * Web Services account in Your Organization</a> in the <i>Organizations User Guide.</i>
 *
 * </p <b> <ul> <li>
 *
 * When you create an account in an organization using the Organizations console, API, or CLI commands, the information
 * required for the account to operate as a standalone account is <i>not</i> automatically collected. This includes a
 * payment method and signing the end user license agreement (EULA). If you must remove an account from your organization
 * later, you can do so only after you provide the missing information. Follow the steps at <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
 * To leave an organization as a member account</a> in the <i>Organizations User Guide.</i>
 *
 * </p </li> <li>
 *
 * If you get an exception that indicates that you exceeded your account limits for the organization, contact <a
 * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
 *
 * Support</a>> </li> <li>
 *
 * If you get an exception that indicates that the operation failed because your organization is still initializing, wait
 * one hour and then try again. If the error persists, contact <a
 * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
 *
 * Support</a>> </li> <li>
 *
 * Using <code>CreateGovCloudAccount</code> to create multiple temporary accounts isn't recommended. You can only close an
 * account from the Amazon Web Services Billing and Cost Management console, and you must be signed in as the root user.
 * For information on the requirements and process for closing an account, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing an Amazon Web
 * Services account</a> in the <i>Organizations User
 *
 * Guide</i>> </li> </ul> </b> <note>
 *
 * When you create a member account with this operation, you can choose whether to create the account with the <b>IAM User
 * and Role Access to Billing Information</b> switch enabled. If you enable it, IAM users and roles that have appropriate
 * permissions can view billing information for the account. If you disable it, only the account root user can access
 * billing information. For information about how to disable this switch for an account, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting Access to Your Billing
 * Information and
 */
CreateGovCloudAccountResponse * OrganizationsClient::createGovCloudAccount(const CreateGovCloudAccountRequest &request)
{
    return qobject_cast<CreateGovCloudAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * CreateOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Web Services organization. The account whose user is calling the <code>CreateOrganization</code>
 * operation automatically becomes the <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">management
 * account</a> of the new
 *
 * organization>
 *
 * This operation must be called using credentials from the account that is to become the new organization's management
 * account. The principal must also have the relevant IAM
 *
 * permissions>
 *
 * By default (or if you set the <code>FeatureSet</code> parameter to <code>ALL</code>), the new organization is created
 * with all features enabled and service control policies automatically enabled in the root. If you instead choose to
 * create the organization supporting only the consolidated billing features by setting the <code>FeatureSet</code>
 * parameter to <code>CONSOLIDATED_BILLING"</code>, no policy types are enabled by default, and you can't use organization
 */
CreateOrganizationResponse * OrganizationsClient::createOrganization(const CreateOrganizationRequest &request)
{
    return qobject_cast<CreateOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * CreateOrganizationalUnitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an organizational unit (OU) within a root or parent OU. An OU is a container for accounts that enables you to
 * organize your accounts to apply policies according to your business requirements. The number of levels deep that you can
 * nest OUs is dependent upon the policy types enabled for that root. For service control policies, the limit is
 *
 * five>
 *
 * For more information about OUs, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing Organizational Units</a>
 * in the <i>Organizations User Guide.</i>
 *
 * </p
 *
 * If the request includes tags, then the requester must have the <code>organizations:TagResource</code>
 *
 * permission>
 *
 * This operation can be called only from the organization's management
 */
CreateOrganizationalUnitResponse * OrganizationsClient::createOrganizationalUnit(const CreateOrganizationalUnitRequest &request)
{
    return qobject_cast<CreateOrganizationalUnitResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * CreatePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a policy of a specified type that you can attach to a root, an organizational unit (OU), or an individual Amazon
 * Web Services
 *
 * account>
 *
 * For more information about policies and their use, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies.html">Managing Organization
 *
 * Policies</a>>
 *
 * If the request includes tags, then the requester must have the <code>organizations:TagResource</code>
 *
 * permission>
 *
 * This operation can be called only from the organization's management
 */
CreatePolicyResponse * OrganizationsClient::createPolicy(const CreatePolicyRequest &request)
{
    return qobject_cast<CreatePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DeclineHandshakeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Declines a handshake request. This sets the handshake state to <code>DECLINED</code> and effectively deactivates the
 *
 * request>
 *
 * This operation can be called only from the account that received the handshake. The originator of the handshake can use
 * <a>CancelHandshake</a> instead. The originator can't reactivate a declined request, but can reinitiate the process with
 * a new handshake
 *
 * request>
 *
 * After you decline a handshake, it continues to appear in the results of relevant APIs for only 30 days. After that, it's
 */
DeclineHandshakeResponse * OrganizationsClient::declineHandshake(const DeclineHandshakeRequest &request)
{
    return qobject_cast<DeclineHandshakeResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DeleteOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the organization. You can delete an organization only by using credentials from the management account. The
 * organization must be empty of member
 */
DeleteOrganizationResponse * OrganizationsClient::deleteOrganization(const DeleteOrganizationRequest &request)
{
    return qobject_cast<DeleteOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DeleteOrganizationalUnitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an organizational unit (OU) from a root or another OU. You must first remove all accounts and child OUs from the
 * OU that you want to
 *
 * delete>
 *
 * This operation can be called only from the organization's management
 */
DeleteOrganizationalUnitResponse * OrganizationsClient::deleteOrganizationalUnit(const DeleteOrganizationalUnitRequest &request)
{
    return qobject_cast<DeleteOrganizationalUnitResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DeletePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified policy from your organization. Before you perform this operation, you must first detach the policy
 * from all organizational units (OUs), roots, and
 *
 * accounts>
 *
 * This operation can be called only from the organization's management
 */
DeletePolicyResponse * OrganizationsClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DeregisterDelegatedAdministratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified member Amazon Web Services account as a delegated administrator for the specified Amazon Web
 * Services
 *
 * service> <b>
 *
 * Deregistering a delegated administrator can have unintended impacts on the functionality of the enabled Amazon Web
 * Services service. See the documentation for the enabled service before you deregister a delegated administrator so that
 * you understand any potential
 *
 * impacts> </b>
 *
 * You can run this action only for Amazon Web Services services that support this feature. For a current list of services
 * that support it, see the column <i>Supports Delegated Administrator</i> in the table at <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services_list.html">Amazon Web Services
 * Services that you can use with Organizations</a> in the <i>Organizations User Guide.</i>
 *
 * </p
 *
 * This operation can be called only from the organization's management
 */
DeregisterDelegatedAdministratorResponse * OrganizationsClient::deregisterDelegatedAdministrator(const DeregisterDelegatedAdministratorRequest &request)
{
    return qobject_cast<DeregisterDelegatedAdministratorResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DescribeAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves Organizations-related information about the specified
 *
 * account>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
DescribeAccountResponse * OrganizationsClient::describeAccount(const DescribeAccountRequest &request)
{
    return qobject_cast<DescribeAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DescribeCreateAccountStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current status of an asynchronous request to create an
 *
 * account>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
DescribeCreateAccountStatusResponse * OrganizationsClient::describeCreateAccountStatus(const DescribeCreateAccountStatusRequest &request)
{
    return qobject_cast<DescribeCreateAccountStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DescribeEffectivePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the contents of the effective policy for specified policy type and account. The effective policy is the
 * aggregation of any policies of the specified type that the account inherits, plus any policy of that type that is
 * directly attached to the
 *
 * account>
 *
 * This operation applies only to policy types <i>other</i> than service control policies
 *
 * (SCPs)>
 *
 * For more information about policy inheritance, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies-inheritance.html">How Policy
 * Inheritance Works</a> in the <i>Organizations User
 *
 * Guide</i>>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
DescribeEffectivePolicyResponse * OrganizationsClient::describeEffectivePolicy(const DescribeEffectivePolicyRequest &request)
{
    return qobject_cast<DescribeEffectivePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DescribeHandshakeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a previously requested handshake. The handshake ID comes from the response to the original
 * <a>InviteAccountToOrganization</a> operation that generated the
 *
 * handshake>
 *
 * You can access handshakes that are <code>ACCEPTED</code>, <code>DECLINED</code>, or <code>CANCELED</code> for only 30
 * days after they change to that state. They're then deleted and no longer
 *
 * accessible>
 *
 * This operation can be called from any account in the
 */
DescribeHandshakeResponse * OrganizationsClient::describeHandshake(const DescribeHandshakeRequest &request)
{
    return qobject_cast<DescribeHandshakeResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DescribeOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the organization that the user's account belongs
 *
 * to>
 *
 * This operation can be called from any account in the
 *
 * organization> <note>
 *
 * Even if a policy type is shown as available in the organization, you can disable it separately at the root level with
 * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types for a specified
 */
DescribeOrganizationResponse * OrganizationsClient::describeOrganization(const DescribeOrganizationRequest &request)
{
    return qobject_cast<DescribeOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DescribeOrganizationalUnitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an organizational unit
 *
 * (OU)>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
DescribeOrganizationalUnitResponse * OrganizationsClient::describeOrganizationalUnit(const DescribeOrganizationalUnitRequest &request)
{
    return qobject_cast<DescribeOrganizationalUnitResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DescribePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 *
 * policy>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
DescribePolicyResponse * OrganizationsClient::describePolicy(const DescribePolicyRequest &request)
{
    return qobject_cast<DescribePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DetachPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a policy from a target root, organizational unit (OU), or
 *
 * account> <b>
 *
 * If the policy being detached is a service control policy (SCP), the changes to permissions for Identity and Access
 * Management (IAM) users and roles in affected accounts are
 *
 * immediate> </b>
 *
 * Every root, OU, and account must have at least one SCP attached. If you want to replace the default
 * <code>FullAWSAccess</code> policy with an SCP that limits the permissions that can be delegated, you must attach the
 * replacement SCP before you can remove the default SCP. This is the authorization strategy of an "<a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_allowlist">allow
 * list</a>". If you instead attach a second SCP and leave the <code>FullAWSAccess</code> SCP still attached, and specify
 * <code>"Effect": "Deny"</code> in the second SCP to override the <code>"Effect": "Allow"</code> in the
 * <code>FullAWSAccess</code> policy (or any other attached SCP), you're using the authorization strategy of a "<a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_denylist">deny
 *
 * list</a>">
 *
 * This operation can be called only from the organization's management
 */
DetachPolicyResponse * OrganizationsClient::detachPolicy(const DetachPolicyRequest &request)
{
    return qobject_cast<DetachPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DisableAWSServiceAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the integration of an Amazon Web Services service (the service that is specified by
 * <code>ServicePrincipal</code>) with Organizations. When you disable integration, the specified service no longer can
 * create a <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
 * role</a> in <i>new</i> accounts in your organization. This means the service can't perform operations on your behalf on
 * any new accounts in your organization. The service can still perform operations in older accounts until the service
 * completes its clean-up from
 *
 * Organizations> <b>
 *
 * We <b> <i>strongly recommend</i> </b> that you don't use this command to disable integration between Organizations and
 * the specified Amazon Web Services service. Instead, use the console or commands that are provided by the specified
 * service. This lets the trusted service perform any required initialization when enabling trusted access, such as
 * creating any required resources and any required clean up of resources when disabling trusted access.
 *
 * </p
 *
 * For information about how to disable trusted service access to your organization using the trusted service, see the
 * <b>Learn more</b> link under the <b>Supports Trusted Access</b> column at <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services_list.html">Amazon Web Services
 * services that you can use with Organizations</a>. on this
 *
 * page>
 *
 * If you disable access by using this command, it causes the following actions to
 *
 * occur> <ul> <li>
 *
 * The service can no longer create a service-linked role in the accounts in your organization. This means that the service
 * can't perform operations on your behalf on any new accounts in your organization. The service can still perform
 * operations in older accounts until the service completes its clean-up from Organizations.
 *
 * </p </li> <li>
 *
 * The service can no longer perform tasks in the member accounts in the organization, unless those operations are
 * explicitly permitted by the IAM policies that are attached to your roles. This includes any data aggregation from the
 * member accounts to the management account, or to a delegated administrator account, where
 *
 * relevant> </li> <li>
 *
 * Some services detect this and clean up any remaining data or resources related to the integration, while other services
 * stop accessing the organization but leave any historical data and configuration in place to support a possible
 * re-enabling of the
 *
 * integration> </li> </ul>
 *
 * Using the other service's console or commands to disable the integration ensures that the other service is aware that it
 * can clean up any resources that are required only for the integration. How the service cleans up its resources in the
 * organization's accounts depends on that service. For more information, see the documentation for the other Amazon Web
 * Services service.
 *
 * </p </b>
 *
 * After you perform the <code>DisableAWSServiceAccess</code> operation, the specified service can no longer perform
 * operations in your organization's accounts
 *
 * </p
 *
 * For more information about integrating other services with Organizations, including the list of services that work with
 * Organizations, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating Organizations
 * with Other Amazon Web Services Services</a> in the <i>Organizations User Guide.</i>
 *
 * </p
 *
 * This operation can be called only from the organization's management
 */
DisableAWSServiceAccessResponse * OrganizationsClient::disableAWSServiceAccess(const DisableAWSServiceAccessRequest &request)
{
    return qobject_cast<DisableAWSServiceAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * DisablePolicyTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables an organizational policy type in a root. A policy of a certain type can be attached to entities in a root only
 * if that type is enabled in the root. After you perform this operation, you no longer can attach policies of the
 * specified type to that root or to any organizational unit (OU) or account in that root. You can undo this by using the
 * <a>EnablePolicyType</a>
 *
 * operation>
 *
 * This is an asynchronous request that Amazon Web Services performs in the background. If you disable a policy type for a
 * root, it still appears enabled for the organization if <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
 * features</a> are enabled for the organization. Amazon Web Services recommends that you first use <a>ListRoots</a> to see
 * the status of policy types for a specified root, and then use this
 *
 * operation>
 *
 * This operation can be called only from the organization's management
 *
 * account>
 *
 * To view the status of available policy types in the organization, use
 */
DisablePolicyTypeResponse * OrganizationsClient::disablePolicyType(const DisablePolicyTypeRequest &request)
{
    return qobject_cast<DisablePolicyTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * EnableAWSServiceAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the integration of an Amazon Web Services service (the service that is specified by
 * <code>ServicePrincipal</code>) with Organizations. When you enable integration, you allow the specified service to
 * create a <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
 * role</a> in all the accounts in your organization. This allows the service to perform operations on your behalf in your
 * organization and its
 *
 * accounts> <b>
 *
 * We recommend that you enable integration between Organizations and the specified Amazon Web Services service by using
 * the console or commands that are provided by the specified service. Doing so ensures that the service is aware that it
 * can create the resources that are required for the integration. How the service creates those resources in the
 * organization's accounts depends on that service. For more information, see the documentation for the other Amazon Web
 * Services
 *
 * service> </b>
 *
 * For more information about enabling services to integrate with Organizations, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating Organizations
 * with Other Amazon Web Services Services</a> in the <i>Organizations User Guide.</i>
 *
 * </p
 *
 * This operation can be called only from the organization's management account and only if the organization has <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">enabled all
 */
EnableAWSServiceAccessResponse * OrganizationsClient::enableAWSServiceAccess(const EnableAWSServiceAccessRequest &request)
{
    return qobject_cast<EnableAWSServiceAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * EnableAllFeaturesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables all features in an organization. This enables the use of organization policies that can restrict the services
 * and actions that can be called in each account. Until you enable all features, you have access only to consolidated
 * billing, and you can't use any of the advanced account administration features that Organizations supports. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling All
 * Features in Your Organization</a> in the <i>Organizations User Guide.</i>
 *
 * </p <b>
 *
 * This operation is required only for organizations that were created explicitly with only the consolidated billing
 * features enabled. Calling this operation sends a handshake to every invited account in the organization. The feature set
 * change can be finalized and the additional features enabled only after all administrators in the invited accounts
 * approve the change by accepting the
 *
 * handshake> </b>
 *
 * After you enable all features, you can separately enable or disable individual policy types in a root using
 * <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. To see the status of policy types in a root, use
 *
 * <a>ListRoots</a>>
 *
 * After all invited member accounts accept the handshake, you finalize the feature set change by accepting the handshake
 * that contains <code>"Action": "ENABLE_ALL_FEATURES"</code>. This completes the
 *
 * change>
 *
 * After you enable all features in your organization, the management account in the organization can apply policies on all
 * member accounts. These policies can restrict what users and even administrators in those accounts can do. The management
 * account can apply policies that prevent accounts from leaving the organization. Ensure that your account administrators
 * are aware of
 *
 * this>
 *
 * This operation can be called only from the organization's management
 */
EnableAllFeaturesResponse * OrganizationsClient::enableAllFeatures(const EnableAllFeaturesRequest &request)
{
    return qobject_cast<EnableAllFeaturesResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * EnablePolicyTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables a policy type in a root. After you enable a policy type in a root, you can attach policies of that type to the
 * root, any organizational unit (OU), or account in that root. You can undo this by using the <a>DisablePolicyType</a>
 *
 * operation>
 *
 * This is an asynchronous request that Amazon Web Services performs in the background. Amazon Web Services recommends that
 * you first use <a>ListRoots</a> to see the status of policy types for a specified root, and then use this
 *
 * operation>
 *
 * This operation can be called only from the organization's management
 *
 * account>
 *
 * You can enable a policy type in a root only if that policy type is available in the organization. To view the status of
 * available policy types in the organization, use
 */
EnablePolicyTypeResponse * OrganizationsClient::enablePolicyType(const EnablePolicyTypeRequest &request)
{
    return qobject_cast<EnablePolicyTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * InviteAccountToOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends an invitation to another account to join your organization as a member account. Organizations sends email on your
 * behalf to the email address that is associated with the other account's owner. The invitation is implemented as a
 * <a>Handshake</a> whose details are in the
 *
 * response> <b> <ul> <li>
 *
 * You can invite Amazon Web Services accounts only from the same seller as the management account. For example, if your
 * organization's management account was created by Amazon Internet Services Pvt. Ltd (AISPL), an Amazon Web Services
 * seller in India, you can invite only other AISPL accounts to your organization. You can't combine accounts from AISPL
 * and Amazon Web Services or from any other Amazon Web Services seller. For more information, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/useconsolidatedbilliing-India.html">Consolidated
 * Billing in
 *
 * India</a>> </li> <li>
 *
 * If you receive an exception that indicates that you exceeded your account limits for the organization or that the
 * operation failed because your organization is still initializing, wait one hour and then try again. If the error
 * persists after an hour, contact <a href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
 *
 * Support</a>> </li> </ul> </b>
 *
 * If the request includes tags, then the requester must have the <code>organizations:TagResource</code>
 *
 * permission>
 *
 * This operation can be called only from the organization's management
 */
InviteAccountToOrganizationResponse * OrganizationsClient::inviteAccountToOrganization(const InviteAccountToOrganizationRequest &request)
{
    return qobject_cast<InviteAccountToOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * LeaveOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a member account from its parent organization. This version of the operation is performed by the account that
 * wants to leave. To remove a member account as a user in the management account, use <a>RemoveAccountFromOrganization</a>
 *
 * instead>
 *
 * This operation can be called only from a member account in the
 *
 * organization> <b> <ul> <li>
 *
 * The management account in an organization with all features enabled can set service control policies (SCPs) that can
 * restrict what administrators of member accounts can do. This includes preventing them from successfully calling
 * <code>LeaveOrganization</code> and leaving the
 *
 * organization> </li> <li>
 *
 * You can leave an organization as a member account only if the account is configured with the information required to
 * operate as a standalone account. When you create an account in an organization using the Organizations console, API, or
 * CLI commands, the information required of standalone accounts is <i>not</i> automatically collected. For each account
 * that you want to make standalone, you must perform the following steps. If any of the steps are already completed for
 * this account, that step doesn't
 *
 * appear> <ul> <li>
 *
 * Choose a support
 *
 * pla> </li> <li>
 *
 * Provide and verify the required contact
 *
 * informatio> </li> <li>
 *
 * Provide a current payment
 *
 * metho> </li> </ul>
 *
 * Amazon Web Services uses the payment method to charge for any billable (not free tier) Amazon Web Services activity that
 * occurs while the account isn't attached to an organization. Follow the steps at <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
 * To leave an organization when all required account information has not yet been provided</a> in the <i>Organizations
 * User Guide.</i>
 *
 * </p </li> <li>
 *
 * The account that you want to leave must not be a delegated administrator account for any Amazon Web Services service
 * enabled for your organization. If the account is a delegated administrator, you must first change the delegated
 * administrator account to another account that is remaining in the
 *
 * organization> </li> <li>
 *
 * You can leave an organization only after you enable IAM user access to billing in your account. For more information,
 * see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
 * Access to the Billing and Cost Management Console</a> in the <i>Amazon Web Services Billing and Cost Management User
 * Guide.</i>
 *
 * </p </li> <li>
 *
 * After the account leaves the organization, all tags that were attached to the account object in the organization are
 * deleted. Amazon Web Services accounts outside of an organization do not support
 *
 * tags> </li> <li>
 *
 * A newly created account has a waiting period before it can be removed from its organization. If you get an error that
 * indicates that a wait period is required, then try again in a few
 */
LeaveOrganizationResponse * OrganizationsClient::leaveOrganization(const LeaveOrganizationRequest &request)
{
    return qobject_cast<LeaveOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListAWSServiceAccessForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the Amazon Web Services services that you enabled to integrate with your organization. After a service
 * on this list creates the resources that it requires for the integration, it can perform operations on your organization
 * and its
 *
 * accounts>
 *
 * For more information about integrating other services with Organizations, including the list of services that currently
 * work with Organizations, see <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating Organizations
 * with Other Amazon Web Services Services</a> in the <i>Organizations User Guide.</i>
 *
 * </p
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListAWSServiceAccessForOrganizationResponse * OrganizationsClient::listAWSServiceAccessForOrganization(const ListAWSServiceAccessForOrganizationRequest &request)
{
    return qobject_cast<ListAWSServiceAccessForOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the accounts in the organization. To request only the accounts in a specified root or organizational unit
 * (OU), use the <a>ListAccountsForParent</a> operation
 *
 * instead> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListAccountsResponse * OrganizationsClient::listAccounts(const ListAccountsRequest &request)
{
    return qobject_cast<ListAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListAccountsForParentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the accounts in an organization that are contained by the specified target root or organizational unit (OU). If
 * you specify the root, you get a list of all the accounts that aren't in any OU. If you specify an OU, you get a list of
 * all the accounts in only that OU and not in any child OUs. To get a list of all accounts in the organization, use the
 * <a>ListAccounts</a>
 *
 * operation> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListAccountsForParentResponse * OrganizationsClient::listAccountsForParent(const ListAccountsForParentRequest &request)
{
    return qobject_cast<ListAccountsForParentResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListChildrenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the organizational units (OUs) or accounts that are contained in the specified parent OU or root. This
 * operation, along with <a>ListParents</a> enables you to traverse the tree structure that makes up this
 *
 * root> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListChildrenResponse * OrganizationsClient::listChildren(const ListChildrenRequest &request)
{
    return qobject_cast<ListChildrenResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListCreateAccountStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the account creation requests that match the specified status that is currently being tracked for the
 *
 * organization> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListCreateAccountStatusResponse * OrganizationsClient::listCreateAccountStatus(const ListCreateAccountStatusRequest &request)
{
    return qobject_cast<ListCreateAccountStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListDelegatedAdministratorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Web Services accounts that are designated as delegated administrators in this
 *
 * organization>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListDelegatedAdministratorsResponse * OrganizationsClient::listDelegatedAdministrators(const ListDelegatedAdministratorsRequest &request)
{
    return qobject_cast<ListDelegatedAdministratorsResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListDelegatedServicesForAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the Amazon Web Services services for which the specified account is a delegated
 *
 * administrator>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListDelegatedServicesForAccountResponse * OrganizationsClient::listDelegatedServicesForAccount(const ListDelegatedServicesForAccountRequest &request)
{
    return qobject_cast<ListDelegatedServicesForAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListHandshakesForAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the current handshakes that are associated with the account of the requesting
 *
 * user>
 *
 * Handshakes that are <code>ACCEPTED</code>, <code>DECLINED</code>, <code>CANCELED</code>, or <code>EXPIRED</code> appear
 * in the results of this API for only 30 days after changing to that state. After that, they're deleted and no longer
 *
 * accessible> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called from any account in the
 */
ListHandshakesForAccountResponse * OrganizationsClient::listHandshakesForAccount(const ListHandshakesForAccountRequest &request)
{
    return qobject_cast<ListHandshakesForAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListHandshakesForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the handshakes that are associated with the organization that the requesting user is part of. The
 * <code>ListHandshakesForOrganization</code> operation returns a list of handshake structures. Each structure contains
 * details and status about a
 *
 * handshake>
 *
 * Handshakes that are <code>ACCEPTED</code>, <code>DECLINED</code>, <code>CANCELED</code>, or <code>EXPIRED</code> appear
 * in the results of this API for only 30 days after changing to that state. After that, they're deleted and no longer
 *
 * accessible> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListHandshakesForOrganizationResponse * OrganizationsClient::listHandshakesForOrganization(const ListHandshakesForOrganizationRequest &request)
{
    return qobject_cast<ListHandshakesForOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListOrganizationalUnitsForParentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the organizational units (OUs) in a parent organizational unit or
 *
 * root> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListOrganizationalUnitsForParentResponse * OrganizationsClient::listOrganizationalUnitsForParent(const ListOrganizationalUnitsForParentRequest &request)
{
    return qobject_cast<ListOrganizationalUnitsForParentResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListParentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the root or organizational units (OUs) that serve as the immediate parent of the specified child OU or account.
 * This operation, along with <a>ListChildren</a> enables you to traverse the tree structure that makes up this
 *
 * root> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 *
 * service> <note>
 *
 * In the current release, a child can have only a single
 */
ListParentsResponse * OrganizationsClient::listParents(const ListParentsRequest &request)
{
    return qobject_cast<ListParentsResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of all policies in an organization of a specified
 *
 * type> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListPoliciesResponse * OrganizationsClient::listPolicies(const ListPoliciesRequest &request)
{
    return qobject_cast<ListPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListPoliciesForTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the policies that are directly attached to the specified target root, organizational unit (OU), or account. You
 * must specify the policy type that you want included in the returned
 *
 * list> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListPoliciesForTargetResponse * OrganizationsClient::listPoliciesForTarget(const ListPoliciesForTargetRequest &request)
{
    return qobject_cast<ListPoliciesForTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListRootsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the roots that are defined in the current
 *
 * organization> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 *
 * service> <note>
 *
 * Policy types can be enabled and disabled in roots. This is distinct from whether they're available in the organization.
 * When you enable all features, you make policy types available for use in that organization. Individual policy types can
 * then be enabled and disabled in a root. To see the availability of a policy type in an organization, use
 */
ListRootsResponse * OrganizationsClient::listRoots(const ListRootsRequest &request)
{
    return qobject_cast<ListRootsResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tags that are attached to the specified
 *
 * resource>
 *
 * You can attach tags to the following resources in
 *
 * Organizations> <ul> <li>
 *
 * Amazon Web Services
 *
 * accoun> </li> <li>
 *
 * Organization
 *
 * roo> </li> <li>
 *
 * Organizational unit
 *
 * (OU> </li> <li>
 *
 * Policy (any
 *
 * type> </li> </ul>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListTagsForResourceResponse * OrganizationsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListTargetsForPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the roots, organizational units (OUs), and accounts that the specified policy is attached
 *
 * to> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's management account or by a member account that is a delegated
 * administrator for an Amazon Web Services
 */
ListTargetsForPolicyResponse * OrganizationsClient::listTargetsForPolicy(const ListTargetsForPolicyRequest &request)
{
    return qobject_cast<ListTargetsForPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * MoveAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves an account from its current source parent root or organizational unit (OU) to the specified destination parent
 * root or
 *
 * OU>
 *
 * This operation can be called only from the organization's management
 */
MoveAccountResponse * OrganizationsClient::moveAccount(const MoveAccountRequest &request)
{
    return qobject_cast<MoveAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * RegisterDelegatedAdministratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the specified member account to administer the Organizations features of the specified Amazon Web Services
 * service. It grants read-only access to Organizations service data. The account still requires IAM permissions to access
 * and administer the Amazon Web Services
 *
 * service>
 *
 * You can run this action only for Amazon Web Services services that support this feature. For a current list of services
 * that support it, see the column <i>Supports Delegated Administrator</i> in the table at <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services_list.html">Amazon Web Services
 * Services that you can use with Organizations</a> in the <i>Organizations User Guide.</i>
 *
 * </p
 *
 * This operation can be called only from the organization's management
 */
RegisterDelegatedAdministratorResponse * OrganizationsClient::registerDelegatedAdministrator(const RegisterDelegatedAdministratorRequest &request)
{
    return qobject_cast<RegisterDelegatedAdministratorResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * RemoveAccountFromOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified account from the
 *
 * organization>
 *
 * The removed account becomes a standalone account that isn't a member of any organization. It's no longer subject to any
 * policies and is responsible for its own bill payments. The organization's management account is no longer charged for
 * any expenses accrued by the member account after it's removed from the
 *
 * organization>
 *
 * This operation can be called only from the organization's management account. Member accounts can remove themselves with
 * <a>LeaveOrganization</a>
 *
 * instead> <b> <ul> <li>
 *
 * You can remove an account from your organization only if the account is configured with the information required to
 * operate as a standalone account. When you create an account in an organization using the Organizations console, API, or
 * CLI commands, the information required of standalone accounts is <i>not</i> automatically collected. For an account that
 * you want to make standalone, you must choose a support plan, provide and verify the required contact information, and
 * provide a current payment method. Amazon Web Services uses the payment method to charge for any billable (not free tier)
 * Amazon Web Services activity that occurs while the account isn't attached to an organization. To remove an account that
 * doesn't yet have this information, you must sign in as the member account and follow the steps at <a
 * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
 * To leave an organization when all required account information has not yet been provided</a> in the <i>Organizations
 * User Guide.</i>
 *
 * </p </li> <li>
 *
 * The account that you want to leave must not be a delegated administrator account for any Amazon Web Services service
 * enabled for your organization. If the account is a delegated administrator, you must first change the delegated
 * administrator account to another account that is remaining in the
 *
 * organization> </li> <li>
 *
 * After the account leaves the organization, all tags that were attached to the account object in the organization are
 * deleted. Amazon Web Services accounts outside of an organization do not support
 */
RemoveAccountFromOrganizationResponse * OrganizationsClient::removeAccountFromOrganization(const RemoveAccountFromOrganizationRequest &request)
{
    return qobject_cast<RemoveAccountFromOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to the specified
 *
 * resource>
 *
 * Currently, you can attach tags to the following resources in
 *
 * Organizations> <ul> <li>
 *
 * Amazon Web Services
 *
 * accoun> </li> <li>
 *
 * Organization
 *
 * roo> </li> <li>
 *
 * Organizational unit
 *
 * (OU> </li> <li>
 *
 * Policy (any
 *
 * type> </li> </ul>
 *
 * This operation can be called only from the organization's management
 */
TagResourceResponse * OrganizationsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes any tags with the specified keys from the specified
 *
 * resource>
 *
 * You can attach tags to the following resources in
 *
 * Organizations> <ul> <li>
 *
 * Amazon Web Services
 *
 * accoun> </li> <li>
 *
 * Organization
 *
 * roo> </li> <li>
 *
 * Organizational unit
 *
 * (OU> </li> <li>
 *
 * Policy (any
 *
 * type> </li> </ul>
 *
 * This operation can be called only from the organization's management
 */
UntagResourceResponse * OrganizationsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * UpdateOrganizationalUnitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Renames the specified organizational unit (OU). The ID and ARN don't change. The child OUs and accounts remain in place,
 * and any attached policies of the OU remain
 *
 * attached>
 *
 * This operation can be called only from the organization's management
 */
UpdateOrganizationalUnitResponse * OrganizationsClient::updateOrganizationalUnit(const UpdateOrganizationalUnitRequest &request)
{
    return qobject_cast<UpdateOrganizationalUnitResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * UpdatePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing policy with a new name, description, or content. If you don't supply any parameter, that value
 * remains unchanged. You can't change a policy's
 *
 * type>
 *
 * This operation can be called only from the organization's management
 */
UpdatePolicyResponse * OrganizationsClient::updatePolicy(const UpdatePolicyRequest &request)
{
    return qobject_cast<UpdatePolicyResponse *>(send(request));
}

/*!
 * \class QtAws::Organizations::OrganizationsClientPrivate
 * \brief The OrganizationsClientPrivate class provides private implementation for OrganizationsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOrganizations
 */

/*!
 * Constructs a OrganizationsClientPrivate object with public implementation \a q.
 */
OrganizationsClientPrivate::OrganizationsClientPrivate(OrganizationsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Organizations
} // namespace QtAws
