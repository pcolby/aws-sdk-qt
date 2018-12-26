/*
    Copyright 2013-2018 Paul Colby

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
#include "createaccountrequest.h"
#include "createaccountresponse.h"
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
#include "describeaccountrequest.h"
#include "describeaccountresponse.h"
#include "describecreateaccountstatusrequest.h"
#include "describecreateaccountstatusresponse.h"
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
#include "listtargetsforpolicyrequest.h"
#include "listtargetsforpolicyresponse.h"
#include "moveaccountrequest.h"
#include "moveaccountresponse.h"
#include "removeaccountfromorganizationrequest.h"
#include "removeaccountfromorganizationresponse.h"
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
 *  <fullname>AWS Organizations API Reference</fullname>
 * 
 *  AWS Organizations is a web service that enables you to consolidate your multiple AWS accounts into an
 *  <i>organization</i> and centrally manage your accounts and their
 * 
 *  resources>
 * 
 *  This guide provides descriptions of the Organizations API. For more information about using this service, see the <a
 *  href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">AWS Organizations User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the Organizations API Reference documents the Organizations API version
 * 
 *  2016-11-28> <note>
 * 
 *  As an alternative to using the API directly, you can use one of the AWS SDKs, which consist of libraries and sample code
 *  for various programming languages and platforms (Java, Ruby, .NET, iOS, Android, and more). The SDKs provide a
 *  convenient way to create programmatic access to AWS Organizations. For example, the SDKs take care of cryptographically
 *  signing requests, managing errors, and retrying requests automatically. For more information about the AWS SDKs,
 *  including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to Organizations. However, you also can use the
 *  Organizations Query API to make direct calls to the Organizations web service. To learn more about the Organizations
 *  Query API, see <a href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_query-requests.html">Making Query
 *  Requests</a> in the <i>AWS Organizations User Guide</i>. Organizations supports GET and POST requests for all actions.
 *  That is, the API does not require you to use GET for some actions and POST for others. However, GET requests are subject
 *  to the limitation size of a URL. Therefore, for operations that require larger sizes, use a POST
 * 
 *  request>
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  When you send HTTP requests to AWS, you must sign the requests so that AWS can identify who sent them. You sign requests
 *  with your AWS access key, which consists of an access key ID and a secret access key. We strongly recommend that you do
 *  not create an access key for your root account. Anyone who has the access key for your root account has unrestricted
 *  access to all the resources in your account. Instead, create an access key for an IAM user account that has
 *  administrative privileges. As another option, use AWS Security Token Service to generate temporary security credentials,
 *  and use those credentials to sign requests.
 * 
 *  </p
 * 
 *  To sign requests, we recommend that you use <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. If you have an
 *  existing application that uses Signature Version 2, you do not have to update it to use Signature Version 4. However,
 *  some operations now require Signature Version 4. The documentation for operations that require version 4 indicate this
 *  requirement.
 * 
 *  </p
 * 
 *  When you use the AWS Command Line Interface (AWS CLI) or one of the AWS SDKs to make requests to AWS, these tools
 *  automatically sign the requests for you with the access key that you specify when you configure the
 * 
 *  tools>
 * 
 *  In this release, each organization can have only one root. In a future release, a single organization will support
 *  multiple
 * 
 *  roots>
 * 
 *  <b>Support and Feedback for AWS Organizations</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:feedback-awsorganizations@amazon.com">feedback-awsorganizations@amazon.com</a> or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=219">AWS Organizations support forum</a>. For
 *  more information about the AWS support forums, see <a href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>Endpoint to Call When Using the CLI or the AWS API</b>
 * 
 *  </p
 * 
 *  For the current release of Organizations, you must specify the <code>us-east-1</code> region for all AWS API and CLI
 *  calls. You can do this in the CLI by using these parameters and
 * 
 *  commands> <ul> <li>
 * 
 *  Use the following parameter with each command to specify both the endpoint and its
 * 
 *  region>
 * 
 *  <code>--endpoint-url https://organizations.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  Use the default endpoint, but configure your default region with this
 * 
 *  command>
 * 
 *  <code>aws configure set default.region us-east-1</code>
 * 
 *  </p </li> <li>
 * 
 *  Use the following parameter with each command to specify the
 * 
 *  endpoint>
 * 
 *  <code>--region us-east-1</code>
 * 
 *  </p </li> </ul>
 * 
 *  For the various SDKs used to call the APIs, see the documentation for the SDK of interest to learn how to direct the
 *  requests to a specific endpoint. For more information, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sts_region">Regions and Endpoints</a> in the <i>AWS
 *  General Reference</i>.
 * 
 *  </p
 * 
 *  <b>How examples are presented</b>
 * 
 *  </p
 * 
 *  The JSON returned by the AWS Organizations service as response to your requests is returned as a single long string
 *  without line breaks or formatting whitespace. Both line breaks and whitespace are included in the examples in this guide
 *  to improve readability. When example input parameters also would result in long strings that would extend beyond the
 *  screen, we insert line breaks to enhance readability. You should always submit the input as a single JSON text
 * 
 *  string>
 * 
 *  <b>Recording API Requests</b>
 * 
 *  </p
 * 
 *  AWS Organizations supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information collected by AWS CloudTrail, you can determine which requests were
 *  successfully made to Organizations, who made the request, when it was made, and so on. For more about AWS Organizations
 *  and its support for AWS CloudTrail, see <a
 *  href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html#orgs_cloudtrail-integration">Logging
 *  AWS Organizations Events with AWS CloudTrail</a> in the <i>AWS Organizations User Guide</i>. To learn more about
 *  CloudTrail, including how to turn it on and find your log files, see the <a
 *  href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
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
 * Sends a response to the originator of a handshake agreeing to the action proposed by the handshake request.
 *
 * </p
 *
 * This operation can be called only by the following principals when they also have the relevant IAM
 *
 * permissions> <ul> <li>
 *
 * <b>Invitation to join</b> or <b>Approve all features request</b> handshakes: only a principal from the member account.
 *
 * </p
 *
 * The user who calls the API for an invitation to join must have the <code>organizations:AcceptHandshake</code>
 * permission. If you enabled all features in the organization, then the user must also have the
 * <code>iam:CreateServiceLinkedRole</code> permission so that Organizations can create the required service-linked role
 * named <i>AWSServiceRoleForOrganizations</i>. For more information, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integration_services.html#orgs_integration_service-linked-roles">AWS
 * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
 *
 * Guide</i>> </li> <li>
 *
 * <b>Enable all features final confirmation</b> handshake: only a principal from the master
 *
 * account>
 *
 * For more information about invitations, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_invites.html">Inviting an AWS
 * Account to Join Your Organization</a> in the <i>AWS Organizations User Guide</i>. For more information about requests to
 * enable all features in the organization, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling All
 * Features in Your Organization</a> in the <i>AWS Organizations User
 *
 * Guide</i>> </li> </ul>
 *
 * After you accept a handshake, it continues to appear in the results of relevant APIs for only 30 days. After that it is
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
 * depends on the type of
 *
 * policy> <ul> <li>
 *
 * <b>Service control policy (SCP)</b> - An SCP specifies what permissions can be delegated to users in affected member
 * accounts. The scope of influence for a policy depends on what you attach the policy
 *
 * to> <ul> <li>
 *
 * If you attach an SCP to a root, it affects all accounts in the
 *
 * organization> </li> <li>
 *
 * If you attach an SCP to an OU, it affects all accounts in that OU and in any child
 *
 * OUs> </li> <li>
 *
 * If you attach the policy directly to an account, then it affects only that
 *
 * account> </li> </ul>
 *
 * SCPs essentially are permission "filters". When you attach one SCP to a higher level root or OU, and you also attach a
 * different SCP to a child OU or to an account, the child policy can further restrict only the permissions that pass
 * through the parent filter and are available to the child. An SCP that is attached to a child cannot grant a permission
 * that is not already granted by the parent. For example, imagine that the parent SCP allows permissions A, B, C, D, and
 * E. The child SCP allows C, D, E, F, and G. The result is that the accounts affected by the child SCP are allowed to use
 * only C, D, and E. They cannot use A or B because they were filtered out by the child OU. They also cannot use F and G
 * because they were filtered out by the parent OU. They cannot be granted back by the child SCP; child SCPs can only
 * filter the permissions they receive from the parent
 *
 * SCP>
 *
 * AWS Organizations attaches a default SCP named <code>"FullAWSAccess</code> to every root, OU, and account. This default
 * SCP allows all services and actions, enabling any new child OU or account to inherit the permissions of the parent root
 * or OU. If you detach the default policy, you must replace it with a policy that specifies the permissions that you want
 * to allow in that OU or
 *
 * account>
 *
 * For more information about how Organizations policies permissions work, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">Using Service Control
 * Policies</a> in the <i>AWS Organizations User
 *
 * Guide</i>> </li> </ul>
 *
 * This operation can be called only from the organization's master
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
 * Cancels a handshake. Canceling a handshake sets the handshake state to <code>CANCELED</code>.
 *
 * </p
 *
 * This operation can be called only from the account that originated the handshake. The recipient of the handshake can't
 * cancel it, but can use <a>DeclineHandshake</a> instead. After a handshake is canceled, the recipient can no longer
 * respond to that
 *
 * handshake>
 *
 * After you cancel a handshake, it continues to appear in the results of relevant APIs for only 30 days. After that it is
 */
CancelHandshakeResponse * OrganizationsClient::cancelHandshake(const CancelHandshakeRequest &request)
{
    return qobject_cast<CancelHandshakeResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * CreateAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS account that is automatically a member of the organization whose credentials made the request. This is an
 * asynchronous request that AWS performs in the background. Because <code>CreateAccount</code> operates asynchronously, it
 * can return a successful completion message even though account initialization might still be in progress. You might need
 * to wait a few minutes before you can successfully access the account. To check the status of the request, do one of the
 *
 * following> <ul> <li>
 *
 * Use the <code>OperationId</code> response element from this operation to provide as a parameter to the
 * <a>DescribeCreateAccountStatus</a>
 *
 * operation> </li> <li>
 *
 * Check the AWS CloudTrail log for the <code>CreateAccountResult</code> event. For information on using AWS CloudTrail
 * with Organizations, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring the Activity in Your
 * Organization</a> in the <i>AWS Organizations User
 *
 * Guide</i>> </li> </ul> <p/>
 *
 * The user who calls the API to create an account must have the <code>organizations:CreateAccount</code> permission. If
 * you enabled all features in the organization, AWS Organizations will create the required service-linked role named
 * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
 * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
 *
 * Guide</i>>
 *
 * AWS Organizations preconfigures the new member account with a role (named <code>OrganizationAccountAccessRole</code> by
 * default) that grants users in the master account administrator permissions in the new member account. Principals in the
 * master account can assume the role. AWS Organizations clones the company name and address information for the new
 * account from the organization's master
 *
 * account>
 *
 * This operation can be called only from the organization's master
 *
 * account>
 *
 * For more information about creating accounts, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating an AWS
 * Account in Your Organization</a> in the <i>AWS Organizations User
 *
 * Guide</i>> <b> <ul> <li>
 *
 * When you create an account in an organization using the AWS Organizations console, API, or CLI commands, the information
 * required for the account to operate as a standalone account, such as a payment method and signing the end user license
 * agreement (EULA) is <i>not</i> automatically collected. If you must remove an account from your organization later, you
 * can do so only after you provide the missing information. Follow the steps at <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
 * To leave an organization as a member account</a> in the <i>AWS Organizations User
 *
 * Guide</i>> </li> <li>
 *
 * If you get an exception that indicates that you exceeded your account limits for the organization, contact <a
 * href="https://console.aws.amazon.com/support/home#/">AWS
 *
 * Support</a>> </li> <li>
 *
 * If you get an exception that indicates that the operation failed because your organization is still initializing, wait
 * one hour and then try again. If the error persists, contact <a href="https://console.aws.amazon.com/support/home#/">AWS
 *
 * Support</a>> </li> <li>
 *
 * Using CreateAccount to create multiple temporary accounts is not recommended. You can only close an account from the
 * Billing and Cost Management Console, and you must be signed in as the root user. For information on the requirements and
 * process for closing an account, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing an AWS
 * Account</a> in the <i>AWS Organizations User
 *
 * Guide</i>> </li> </ul> </b> <note>
 *
 * When you create a member account with this operation, you can choose whether to create the account with the <b>IAM User
 * and Role Access to Billing Information</b> switch enabled. If you enable it, IAM users and roles that have appropriate
 * permissions can view billing information for the account. If you disable it, only the account root user can access
 * billing information. For information about how to disable this switch for an account, see <a
 * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting Access to Your Billing
 * Information and
 */
CreateAccountResponse * OrganizationsClient::createAccount(const CreateAccountRequest &request)
{
    return qobject_cast<CreateAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * CreateOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS organization. The account whose user is calling the CreateOrganization operation automatically becomes
 * the <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/orgs_getting-started_concepts.html#account">master
 * account</a> of the new
 *
 * organization>
 *
 * This operation must be called using credentials from the account that is to become the new organization's master
 * account. The principal must also have the relevant IAM
 *
 * permissions>
 *
 * By default (or if you set the <code>FeatureSet</code> parameter to <code>ALL</code>), the new organization is created
 * with all features enabled and service control policies automatically enabled in the root. If you instead choose to
 * create the organization supporting only the consolidated billing features by setting the <code>FeatureSet</code>
 * parameter to <code>CONSOLIDATED_BILLING"</code>, then no policy types are enabled by default and you cannot use
 * organization
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
 * nest OUs is dependent upon the policy types enabled for that root. For service control policies, the limit is five.
 *
 * </p
 *
 * For more information about OUs, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing Organizational Units</a>
 * in the <i>AWS Organizations User
 *
 * Guide</i>>
 *
 * This operation can be called only from the organization's master
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
 * Creates a policy of a specified type that you can attach to a root, an organizational unit (OU), or an individual AWS
 *
 * account>
 *
 * For more information about policies and their use, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies.html">Managing Organization
 *
 * Policies</a>>
 *
 * This operation can be called only from the organization's master
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
 * <a>CancelHandshake</a> instead. The originator can't reactivate a declined request, but can re-initiate the process with
 * a new handshake
 *
 * request>
 *
 * After you decline a handshake, it continues to appear in the results of relevant APIs for only 30 days. After that it is
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
 * Deletes the organization. You can delete an organization only by using credentials from the master account. The
 * organization must be empty of member
 */
DeleteOrganizationResponse * OrganizationsClient::deleteOrganization(const DeleteOrganizationRequest &request)
{
    return qobject_cast<DeleteOrganizationResponse *>(send(request));
}

/*!
 * Sends a DeleteOrganization request to the OrganizationsClient service, and returns a pointer to an
 * DeleteOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the organization. You can delete an organization only by using credentials from the master account. The
 * organization must be empty of member
 */
DeleteOrganizationResponse * OrganizationsClient::deleteOrganization()
{
    return deleteOrganization(DeleteOrganizationRequest());
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
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
 */
DeletePolicyResponse * OrganizationsClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
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
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
 */
DescribeCreateAccountStatusResponse * OrganizationsClient::describeCreateAccountStatus(const DescribeCreateAccountStatusRequest &request)
{
    return qobject_cast<DescribeCreateAccountStatusResponse *>(send(request));
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
 * You can access handshakes that are ACCEPTED, DECLINED, or CANCELED for only 30 days after they change to that state.
 * They are then deleted and no longer
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
 * Even if a policy type is shown as available in the organization, it can be disabled separately at the root level with
 * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types for a specified
 */
DescribeOrganizationResponse * OrganizationsClient::describeOrganization(const DescribeOrganizationRequest &request)
{
    return qobject_cast<DescribeOrganizationResponse *>(send(request));
}

/*!
 * Sends a DescribeOrganization request to the OrganizationsClient service, and returns a pointer to an
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
 * Even if a policy type is shown as available in the organization, it can be disabled separately at the root level with
 * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types for a specified
 */
DescribeOrganizationResponse * OrganizationsClient::describeOrganization()
{
    return describeOrganization(DescribeOrganizationRequest());
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
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
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
 * Detaches a policy from a target root, organizational unit (OU), or account. If the policy being detached is a service
 * control policy (SCP), the changes to permissions for IAM users and roles in affected accounts are
 *
 * immediate>
 *
 * <b>Note:</b> Every root, OU, and account must have at least one SCP attached. If you want to replace the default
 * <code>FullAWSAccess</code> policy with one that limits the permissions that can be delegated, then you must attach the
 * replacement policy before you can remove the default one. This is the authorization strategy of <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_about-scps.html#orgs_policies_whitelist">whitelisting</a>.
 * If you instead attach a second SCP and leave the <code>FullAWSAccess</code> SCP still attached, and specify
 * <code>"Effect": "Deny"</code> in the second SCP to override the <code>"Effect": "Allow"</code> in the
 * <code>FullAWSAccess</code> policy (or any other attached SCP), then you are using the authorization strategy of <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_about-scps.html#orgs_policies_blacklist">blacklisting</a>.
 *
 * </p
 *
 * This operation can be called only from the organization's master
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
 * Disables the integration of an AWS service (the service that is specified by <code>ServicePrincipal</code>) with AWS
 * Organizations. When you disable integration, the specified service no longer can create a <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked role</a> in
 * <i>new</i> accounts in your organization. This means the service can't perform operations on your behalf on any new
 * accounts in your organization. The service can still perform operations in older accounts until the service completes
 * its clean-up from AWS
 *
 * Organizations> <p/> <b>
 *
 * We recommend that you disable integration between AWS Organizations and the specified AWS service by using the console
 * or commands that are provided by the specified service. Doing so ensures that the other service is aware that it can
 * clean up any resources that are required only for the integration. How the service cleans up its resources in the
 * organization's accounts depends on that service. For more information, see the documentation for the other AWS
 *
 * service> </b>
 *
 * After you perform the <code>DisableAWSServiceAccess</code> operation, the specified service can no longer perform
 * operations in your organization's accounts unless the operations are explicitly permitted by the IAM policies that are
 * attached to your roles.
 *
 * </p
 *
 * For more information about integrating other services with AWS Organizations, including the list of services that work
 * with Organizations, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating AWS
 * Organizations with Other AWS Services</a> in the <i>AWS Organizations User
 *
 * Guide</i>>
 *
 * This operation can be called only from the organization's master
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
 * Disables an organizational control policy type in a root. A policy of a certain type can be attached to entities in a
 * root only if that type is enabled in the root. After you perform this operation, you no longer can attach policies of
 * the specified type to that root or to any organizational unit (OU) or account in that root. You can undo this by using
 * the <a>EnablePolicyType</a>
 *
 * operation>
 *
 * This operation can be called only from the organization's master
 *
 * account> <note>
 *
 * If you disable a policy type for a root, it still shows as enabled for the organization if all features are enabled in
 * that organization. Use <a>ListRoots</a> to see the status of policy types for a specified root. Use
 * <a>DescribeOrganization</a> to see the status of policy types in the
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
 * Enables the integration of an AWS service (the service that is specified by <code>ServicePrincipal</code>) with AWS
 * Organizations. When you enable integration, you allow the specified service to create a <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked role</a> in all
 * the accounts in your organization. This allows the service to perform operations on your behalf in your organization and
 * its
 *
 * accounts> <b>
 *
 * We recommend that you enable integration between AWS Organizations and the specified AWS service by using the console or
 * commands that are provided by the specified service. Doing so ensures that the service is aware that it can create the
 * resources that are required for the integration. How the service creates those resources in the organization's accounts
 * depends on that service. For more information, see the documentation for the other AWS
 *
 * service> </b>
 *
 * For more information about enabling services to integrate with AWS Organizations, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating AWS
 * Organizations with Other AWS Services</a> in the <i>AWS Organizations User
 *
 * Guide</i>>
 *
 * This operation can be called only from the organization's master account and only if the organization has <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">enabled all
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
 * billing, and you can't use any of the advanced account administration features that AWS Organizations supports. For more
 * information, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling All
 * Features in Your Organization</a> in the <i>AWS Organizations User
 *
 * Guide</i>> <b>
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
 * After you enable all features in your organization, the master account in the organization can apply policies on all
 * member accounts. These policies can restrict what users and even administrators in those accounts can do. The master
 * account can apply policies that prevent accounts from leaving the organization. Ensure that your account administrators
 * are aware of
 *
 * this>
 *
 * This operation can be called only from the organization's master account.
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
 * This operation can be called only from the organization's master
 *
 * account>
 *
 * You can enable a policy type in a root only if that policy type is available in the organization. Use
 * <a>DescribeOrganization</a> to view the status of available policy types in the
 *
 * organization>
 *
 * To view the status of policy type in a root, use
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
 * You can invite AWS accounts only from the same seller as the master account. For example, if your organization's master
 * account was created by Amazon Internet Services Pvt. Ltd (AISPL), an AWS seller in India, then you can only invite other
 * AISPL accounts to your organization. You can't combine accounts from AISPL and AWS, or any other AWS seller. For more
 * information, see <a
 * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/useconsolidatedbilliing-India.html">Consolidated
 * Billing in
 *
 * India</a>> </li> <li>
 *
 * If you receive an exception that indicates that you exceeded your account limits for the organization or that the
 * operation failed because your organization is still initializing, wait one hour and then try again. If the error
 * persists after an hour, then contact <a href="https://console.aws.amazon.com/support/home#/">AWS Customer
 *
 * Support</a>> </li> </ul> </b>
 *
 * This operation can be called only from the organization's master
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
 * wants to leave. To remove a member account as a user in the master account, use <a>RemoveAccountFromOrganization</a>
 *
 * instead>
 *
 * This operation can be called only from a member account in the
 *
 * organization> <b> <ul> <li>
 *
 * The master account in an organization with all features enabled can set service control policies (SCPs) that can
 * restrict what administrators of member accounts can do, including preventing them from successfully calling
 * <code>LeaveOrganization</code> and leaving the organization.
 *
 * </p </li> <li>
 *
 * You can leave an organization as a member account only if the account is configured with the information required to
 * operate as a standalone account. When you create an account in an organization using the AWS Organizations console, API,
 * or CLI commands, the information required of standalone accounts is <i>not</i> automatically collected. For each account
 * that you want to make standalone, you must accept the End User License Agreement (EULA), choose a support plan, provide
 * and verify the required contact information, and provide a current payment method. AWS uses the payment method to charge
 * for any billable (not free tier) AWS activity that occurs while the account is not attached to an organization. Follow
 * the steps at <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
 * To leave an organization when all required account information has not yet been provided</a> in the <i>AWS Organizations
 * User
 *
 * Guide</i>> </li> <li>
 *
 * You can leave an organization only after you enable IAM user access to billing in your account. For more information,
 * see <a
 * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
 * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and Cost Management User
 */
LeaveOrganizationResponse * OrganizationsClient::leaveOrganization(const LeaveOrganizationRequest &request)
{
    return qobject_cast<LeaveOrganizationResponse *>(send(request));
}

/*!
 * Sends a LeaveOrganization request to the OrganizationsClient service, and returns a pointer to an
 * LeaveOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a member account from its parent organization. This version of the operation is performed by the account that
 * wants to leave. To remove a member account as a user in the master account, use <a>RemoveAccountFromOrganization</a>
 *
 * instead>
 *
 * This operation can be called only from a member account in the
 *
 * organization> <b> <ul> <li>
 *
 * The master account in an organization with all features enabled can set service control policies (SCPs) that can
 * restrict what administrators of member accounts can do, including preventing them from successfully calling
 * <code>LeaveOrganization</code> and leaving the organization.
 *
 * </p </li> <li>
 *
 * You can leave an organization as a member account only if the account is configured with the information required to
 * operate as a standalone account. When you create an account in an organization using the AWS Organizations console, API,
 * or CLI commands, the information required of standalone accounts is <i>not</i> automatically collected. For each account
 * that you want to make standalone, you must accept the End User License Agreement (EULA), choose a support plan, provide
 * and verify the required contact information, and provide a current payment method. AWS uses the payment method to charge
 * for any billable (not free tier) AWS activity that occurs while the account is not attached to an organization. Follow
 * the steps at <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
 * To leave an organization when all required account information has not yet been provided</a> in the <i>AWS Organizations
 * User
 *
 * Guide</i>> </li> <li>
 *
 * You can leave an organization only after you enable IAM user access to billing in your account. For more information,
 * see <a
 * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
 * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and Cost Management User
 */
LeaveOrganizationResponse * OrganizationsClient::leaveOrganization()
{
    return leaveOrganization(LeaveOrganizationRequest());
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListAWSServiceAccessForOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the AWS services that you enabled to integrate with your organization. After a service on this list
 * creates the resources that it requires for the integration, it can perform operations on your organization and its
 *
 * accounts>
 *
 * For more information about integrating other services with AWS Organizations, including the list of services that
 * currently work with Organizations, see <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating AWS
 * Organizations with Other AWS Services</a> in the <i>AWS Organizations User
 *
 * Guide</i>>
 *
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
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
 * you specify the root, you get a list of all the accounts that are not in any OU. If you specify an OU, you get a list of
 * all the accounts in only that OU, and not in any child OUs. To get a list of all accounts in the organization, use the
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
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
 */
ListCreateAccountStatusResponse * OrganizationsClient::listCreateAccountStatus(const ListCreateAccountStatusRequest &request)
{
    return qobject_cast<ListCreateAccountStatusResponse *>(send(request));
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
 * Handshakes that are ACCEPTED, DECLINED, or CANCELED appear in the results of this API for only 30 days after changing to
 * that state. After that they are deleted and no longer
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
 * Handshakes that are ACCEPTED, DECLINED, or CANCELED appear in the results of this API for only 30 days after changing to
 * that state. After that they are deleted and no longer
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
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
 *
 * account> <note>
 *
 * In the current release, a child can have only a single parent.
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
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
 *
 * account> <note>
 *
 * Policy types can be enabled and disabled in roots. This is distinct from whether they are available in the organization.
 * When you enable all features, you make policy types available for use in that organization. Individual policy types can
 * then be enabled and disabled in a root. To see the availability of a policy type in an organization, use
 */
ListRootsResponse * OrganizationsClient::listRoots(const ListRootsRequest &request)
{
    return qobject_cast<ListRootsResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * ListTargetsForPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the roots, organizaitonal units (OUs), and accounts to which the specified policy is
 *
 * attached> <note>
 *
 * Always check the <code>NextToken</code> response parameter for a <code>null</code> value when calling a
 * <code>List*</code> operation. These operations can occasionally return an empty set of results even when there are more
 * results available. The <code>NextToken</code> response parameter value is <code>null</code> <i>only</i> when there are
 * no more results to
 *
 * display> </note>
 *
 * This operation can be called only from the organization's master
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
 * This operation can be called only from the organization's master
 */
MoveAccountResponse * OrganizationsClient::moveAccount(const MoveAccountRequest &request)
{
    return qobject_cast<MoveAccountResponse *>(send(request));
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
 * The removed account becomes a stand-alone account that is not a member of any organization. It is no longer subject to
 * any policies and is responsible for its own bill payments. The organization's master account is no longer charged for
 * any expenses accrued by the member account after it is removed from the
 *
 * organization>
 *
 * This operation can be called only from the organization's master account. Member accounts can remove themselves with
 * <a>LeaveOrganization</a>
 *
 * instead> <b>
 *
 * You can remove an account from your organization only if the account is configured with the information required to
 * operate as a standalone account. When you create an account in an organization using the AWS Organizations console, API,
 * or CLI commands, the information required of standalone accounts is <i>not</i> automatically collected. For an account
 * that you want to make standalone, you must accept the End User License Agreement (EULA), choose a support plan, provide
 * and verify the required contact information, and provide a current payment method. AWS uses the payment method to charge
 * for any billable (not free tier) AWS activity that occurs while the account is not attached to an organization. To
 * remove an account that does not yet have this information, you must sign in as the member account and follow the steps
 * at <a
 * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
 * To leave an organization when all required account information has not yet been provided</a> in the <i>AWS Organizations
 * User
 */
RemoveAccountFromOrganizationResponse * OrganizationsClient::removeAccountFromOrganization(const RemoveAccountFromOrganizationRequest &request)
{
    return qobject_cast<RemoveAccountFromOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the OrganizationsClient service, and returns a pointer to an
 * UpdateOrganizationalUnitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Renames the specified organizational unit (OU). The ID and ARN do not change. The child OUs and accounts remain in
 * place, and any attached policies of the OU remain attached.
 *
 * </p
 *
 * This operation can be called only from the organization's master
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
 * Updates an existing policy with a new name, description, or content. If any parameter is not supplied, that value
 * remains unchanged. Note that you cannot change a policy's
 *
 * type>
 *
 * This operation can be called only from the organization's master
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
