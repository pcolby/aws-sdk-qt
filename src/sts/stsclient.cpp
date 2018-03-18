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

#include "stsclient.h"
#include "stsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace STS {

/**
 * @class  StsClient
 *
 * @brief  Client for AWS Security Token Service ( STS)
 *
 * <fullname>AWS Security Token Service</fullname>
 *
 * The AWS Security Token Service (STS) is a web service that enables you to request temporary, limited-privilege
 * credentials for AWS Identity and Access Management (IAM) users or for users that you authenticate (federated users).
 * This guide provides descriptions of the STS API. For more detailed information about using this service, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security Credentials</a>.
 *
 * </p <note>
 *
 * As an alternative to using the API, you can use one of the AWS SDKs, which consist of libraries and sample code for
 * various programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to
 * create programmatic access to STS. For example, the SDKs take care of cryptographically signing requests, managing
 * errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install
 * them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services page</a>.
 *
 * </p </note>
 *
 * For information about setting up signatures and authorization through the API, go to <a
 * href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the
 * <i>AWS General Reference</i>. For general information about the Query API, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in <i>Using
 * IAM</i>. For information about using security tokens with other AWS products, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS Services That
 * Work with IAM</a> in the <i>IAM User Guide</i>.
 *
 * </p
 *
 * If you're new to AWS and need additional technical information about a specific AWS product, you can find the product's
 * technical documentation at <a href="http://aws.amazon.com/documentation/">http://aws.amazon.com/documentation/</a>.
 *
 * </p
 *
 * <b>Endpoints</b>
 *
 * </p
 *
 * The AWS Security Token Service (STS) has a default endpoint of https://sts.amazonaws.com that maps to the US East (N.
 * Virginia) region. Additional regions are available and are activated by default. For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating and
 * Deactivating AWS STS in an AWS Region</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * For information about STS endpoints, see <a
 * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sts_region">Regions and Endpoints</a> in the <i>AWS
 * General
 *
 * Reference</i>>
 *
 * <b>Recording API requests</b>
 *
 * </p
 *
 * STS supports AWS CloudTrail, which is a service that records AWS calls for your AWS account and delivers log files to an
 * Amazon S3 bucket. By using information collected by CloudTrail, you can determine what requests were successfully made
 * to STS, who made the request, when it was made, and so on. To learn more about CloudTrail, including how to turn it on
 * and find your log files, see the <a
 * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
 */

/**
 * @brief  Constructs a new StsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
StsClient::StsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new StsClientPrivate(this), parent)
{
    Q_D(StsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new StsClient object.
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
StsClient::StsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new StsClientPrivate(this), parent)
{
    Q_D(StsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Returns a set of temporary security credentials (consisting of an access key ID, a secret access key, and a security
 * token) that you can use to access AWS resources that you might not normally have access to. Typically, you use
 * <code>AssumeRole</code> for cross-account access or federation. For a comparison of <code>AssumeRole</code> with the
 * other APIs that produce temporary credentials, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html">Requesting Temporary Security
 * Credentials</a> and <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html#stsapi_comparison">Comparing the
 * AWS STS APIs</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * <b>Important:</b> You cannot call <code>AssumeRole</code> by using AWS root account credentials; access is denied. You
 * must use credentials for an IAM user or an IAM role to call <code>AssumeRole</code>.
 *
 * </p
 *
 * For cross-account access, imagine that you own multiple accounts and need to access resources in each account. You could
 * create long-term credentials in each account to access those resources. However, managing all those credentials and
 * remembering which one can access which account can be time consuming. Instead, you can create one set of long-term
 * credentials in one account and then use temporary security credentials to access all the other accounts by assuming
 * roles in those accounts. For more information about roles, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/roles-toplevel.html">IAM Roles (Delegation and Federation)</a> in
 * the <i>IAM User Guide</i>.
 *
 * </p
 *
 * For federation, you can, for example, grant single sign-on access to the AWS Management Console. If you already have an
 * identity and authentication system in your corporate network, you don't have to recreate user identities in AWS in order
 * to grant those user identities access to AWS. Instead, after a user has been authenticated, you call
 * <code>AssumeRole</code> (and specify the role with the appropriate permissions) to get temporary security credentials
 * for that user. With those temporary security credentials, you construct a sign-in URL that users can use to access the
 * console. For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html#sts-introduction">Common Scenarios for
 * Temporary Credentials</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * The temporary security credentials are valid for the duration that you specified when calling <code>AssumeRole</code>,
 * which can be from 900 seconds (15 minutes) to a maximum of 3600 seconds (1 hour). The default is 1 hour.
 *
 * </p
 *
 * The temporary security credentials created by <code>AssumeRole</code> can be used to make API calls to any AWS service
 * with the following exception: you cannot call the STS service's <code>GetFederationToken</code> or
 * <code>GetSessionToken</code>
 *
 * APIs>
 *
 * Optionally, you can pass an IAM access policy to this operation. If you choose not to pass a policy, the temporary
 * security credentials that are returned by the operation have the permissions that are defined in the access policy of
 * the role that is being assumed. If you pass a policy to this operation, the temporary security credentials that are
 * returned by the operation have the permissions that are allowed by both the access policy of the role that is being
 * assumed, <i> <b>and</b> </i> the policy that you pass. This gives you a way to further restrict the permissions for the
 * resulting temporary security credentials. You cannot use the passed policy to grant permissions that are in excess of
 * those allowed by the access policy of the role that is being assumed. For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
 * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * To assume a role, your AWS account must be trusted by the role. The trust relationship is defined in the role's trust
 * policy when the role is created. That trust policy states which accounts are allowed to delegate access to this
 * account's role.
 *
 * </p
 *
 * The user who wants to access the role must also have permissions delegated from the role's administrator. If the user is
 * in a different account than the role, then the user's administrator must attach a policy that allows the user to call
 * AssumeRole on the ARN of the role in the other account. If the user is in the same account as the role, then you can
 * either attach a policy to the user (identical to the previous different account user), or you can add the user as a
 * principal directly in the role's trust policy. In this case, the trust policy acts as the only resource-based policy in
 * IAM, and users in the same account as the role do not need explicit permission to assume the role. For more information
 * about trust policies and resource-based policies, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">IAM Policies</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * <b>Using MFA with AssumeRole</b>
 *
 * </p
 *
 * You can optionally include multi-factor authentication (MFA) information when you call <code>AssumeRole</code>. This is
 * useful for cross-account scenarios in which you want to make sure that the user who is assuming the role has been
 * authenticated using an AWS MFA device. In that scenario, the trust policy of the role being assumed includes a condition
 * that tests for MFA authentication; if the caller does not include valid MFA information, the request to assume the role
 * is denied. The condition in a trust policy that tests for MFA authentication might look like the following
 *
 * example>
 *
 * <code>"Condition": {"Bool": {"aws:MultiFactorAuthPresent": true}}</code>
 *
 * </p
 *
 * For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/MFAProtectedAPI.html">Configuring
 * MFA-Protected API Access</a> in the <i>IAM User Guide</i>
 *
 * guide>
 *
 * To use MFA with <code>AssumeRole</code>, you pass values for the <code>SerialNumber</code> and <code>TokenCode</code>
 * parameters. The <code>SerialNumber</code> value identifies the user's hardware or virtual MFA device. The
 * <code>TokenCode</code> is the time-based one-time password (TOTP) that the MFA devices produces.
 */
AssumeRoleResponse * StsClient::assumeRole(const AssumeRoleRequest &request)
{

}

/**
 * Returns a set of temporary security credentials for users who have been authenticated via a SAML authentication
 * response. This operation provides a mechanism for tying an enterprise identity store or directory to role-based AWS
 * access without user-specific credentials or configuration. For a comparison of <code>AssumeRoleWithSAML</code> with the
 * other APIs that produce temporary credentials, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html">Requesting Temporary Security
 * Credentials</a> and <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html#stsapi_comparison">Comparing the
 * AWS STS APIs</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * The temporary security credentials returned by this operation consist of an access key ID, a secret access key, and a
 * security token. Applications can use these temporary security credentials to sign calls to AWS
 *
 * services>
 *
 * The temporary security credentials are valid for the duration that you specified when calling <code>AssumeRole</code>,
 * or until the time specified in the SAML authentication response's <code>SessionNotOnOrAfter</code> value, whichever is
 * shorter. The duration can be from 900 seconds (15 minutes) to a maximum of 3600 seconds (1 hour). The default is 1
 *
 * hour>
 *
 * The temporary security credentials created by <code>AssumeRoleWithSAML</code> can be used to make API calls to any AWS
 * service with the following exception: you cannot call the STS service's <code>GetFederationToken</code> or
 * <code>GetSessionToken</code>
 *
 * APIs>
 *
 * Optionally, you can pass an IAM access policy to this operation. If you choose not to pass a policy, the temporary
 * security credentials that are returned by the operation have the permissions that are defined in the access policy of
 * the role that is being assumed. If you pass a policy to this operation, the temporary security credentials that are
 * returned by the operation have the permissions that are allowed by the intersection of both the access policy of the
 * role that is being assumed, <i> <b>and</b> </i> the policy that you pass. This means that both policies must grant the
 * permission for the action to be allowed. This gives you a way to further restrict the permissions for the resulting
 * temporary security credentials. You cannot use the passed policy to grant permissions that are in excess of those
 * allowed by the access policy of the role that is being assumed. For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
 * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * Before your application can call <code>AssumeRoleWithSAML</code>, you must configure your SAML identity provider (IdP)
 * to issue the claims required by AWS. Additionally, you must use AWS Identity and Access Management (IAM) to create a
 * SAML provider entity in your AWS account that represents your identity provider, and create an IAM role that specifies
 * this SAML provider in its trust policy.
 *
 * </p
 *
 * Calling <code>AssumeRoleWithSAML</code> does not require the use of AWS security credentials. The identity of the caller
 * is validated by using keys in the metadata document that is uploaded for the SAML provider entity for your identity
 * provider.
 *
 * </p <important>
 *
 * Calling <code>AssumeRoleWithSAML</code> can result in an entry in your AWS CloudTrail logs. The entry includes the value
 * in the <code>NameID</code> element of the SAML assertion. We recommend that you use a NameIDType that is not associated
 * with any personally identifiable information (PII). For example, you could instead use the Persistent Identifier
 *
 * (<code>urn:oasis:names:tc:SAML:2.0:nameid-format:persistent</code>)> </important>
 *
 * For more information, see the following
 *
 * resources> <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_saml.html">About SAML 2.0-based
 * Federation</a> in the <i>IAM User Guide</i>.
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_create_saml.html">Creating SAML Identity
 * Providers</a> in the <i>IAM User Guide</i>.
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_create_saml_relying-party.html">Configuring
 * a Relying Party and Claims</a> in the <i>IAM User Guide</i>.
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-idp_saml.html">Creating a Role for SAML 2.0
 * Federation</a> in the <i>IAM User Guide</i>.
 */
AssumeRoleWithSAMLResponse * StsClient::assumeRoleWithSAML(const AssumeRoleWithSAMLRequest &request)
{

}

/**
 * Returns a set of temporary security credentials for users who have been authenticated in a mobile or web application
 * with a web identity provider, such as Amazon Cognito, Login with Amazon, Facebook, Google, or any OpenID
 * Connect-compatible identity
 *
 * provider> <note>
 *
 * For mobile applications, we recommend that you use Amazon Cognito. You can use Amazon Cognito with the <a
 * href="http://aws.amazon.com/sdkforios/">AWS SDK for iOS</a> and the <a href="http://aws.amazon.com/sdkforandroid/">AWS
 * SDK for Android</a> to uniquely identify a user and supply the user with a consistent identity throughout the lifetime
 * of an
 *
 * application>
 *
 * To learn more about Amazon Cognito, see <a
 * href="http://docs.aws.amazon.com/mobile/sdkforandroid/developerguide/cognito-auth.html#d0e840">Amazon Cognito
 * Overview</a> in the <i>AWS SDK for Android Developer Guide</i> guide and <a
 * href="http://docs.aws.amazon.com/mobile/sdkforios/developerguide/cognito-auth.html#d0e664">Amazon Cognito Overview</a>
 * in the <i>AWS SDK for iOS Developer
 *
 * Guide</i>> </note>
 *
 * Calling <code>AssumeRoleWithWebIdentity</code> does not require the use of AWS security credentials. Therefore, you can
 * distribute an application (for example, on mobile devices) that requests temporary security credentials without
 * including long-term AWS credentials in the application, and without deploying server-based proxy services that use
 * long-term AWS credentials. Instead, the identity of the caller is validated by using a token from the web identity
 * provider. For a comparison of <code>AssumeRoleWithWebIdentity</code> with the other APIs that produce temporary
 * credentials, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html">Requesting
 * Temporary Security Credentials</a> and <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html#stsapi_comparison">Comparing the
 * AWS STS APIs</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * The temporary security credentials returned by this API consist of an access key ID, a secret access key, and a security
 * token. Applications can use these temporary security credentials to sign calls to AWS service
 *
 * APIs>
 *
 * The credentials are valid for the duration that you specified when calling <code>AssumeRoleWithWebIdentity</code>, which
 * can be from 900 seconds (15 minutes) to a maximum of 3600 seconds (1 hour). The default is 1 hour.
 *
 * </p
 *
 * The temporary security credentials created by <code>AssumeRoleWithWebIdentity</code> can be used to make API calls to
 * any AWS service with the following exception: you cannot call the STS service's <code>GetFederationToken</code> or
 * <code>GetSessionToken</code>
 *
 * APIs>
 *
 * Optionally, you can pass an IAM access policy to this operation. If you choose not to pass a policy, the temporary
 * security credentials that are returned by the operation have the permissions that are defined in the access policy of
 * the role that is being assumed. If you pass a policy to this operation, the temporary security credentials that are
 * returned by the operation have the permissions that are allowed by both the access policy of the role that is being
 * assumed, <i> <b>and</b> </i> the policy that you pass. This gives you a way to further restrict the permissions for the
 * resulting temporary security credentials. You cannot use the passed policy to grant permissions that are in excess of
 * those allowed by the access policy of the role that is being assumed. For more information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_assumerole.html">Permissions
 * for AssumeRole, AssumeRoleWithSAML, and AssumeRoleWithWebIdentity</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * Before your application can call <code>AssumeRoleWithWebIdentity</code>, you must have an identity token from a
 * supported identity provider and create a role that the application can assume. The role that your application assumes
 * must trust the identity provider that is associated with the identity token. In other words, the identity provider must
 * be specified in the role's trust policy.
 *
 * </p <important>
 *
 * Calling <code>AssumeRoleWithWebIdentity</code> can result in an entry in your AWS CloudTrail logs. The entry includes
 * the <a href="http://openid.net/specs/openid-connect-core-1_0.html#Claims">Subject</a> of the provided Web Identity
 * Token. We recommend that you avoid using any personally identifiable information (PII) in this field. For example, you
 * could instead use a GUID or a pairwise identifier, as <a
 * href="http://openid.net/specs/openid-connect-core-1_0.html#SubjectIDTypes">suggested in the OIDC
 *
 * specification</a>> </important>
 *
 * For more information about how to use web identity federation and the <code>AssumeRoleWithWebIdentity</code> API, see
 * the following resources:
 *
 * </p <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_providers_oidc_manual.html">Using Web Identity
 * Federation APIs for Mobile Apps</a> and <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html#api_assumerolewithwebidentity">Federation
 * Through a Web-based Identity Provider</a>.
 *
 * </p </li> <li>
 *
 * <a href="https://web-identity-federation-playground.s3.amazonaws.com/index.html"> Web Identity Federation
 * Playground</a>. This interactive website lets you walk through the process of authenticating via Login with Amazon,
 * Facebook, or Google, getting temporary security credentials, and then using those credentials to make a request to AWS.
 *
 * </p </li> <li>
 *
 * <a href="http://aws.amazon.com/sdkforios/">AWS SDK for iOS</a> and <a href="http://aws.amazon.com/sdkforandroid/">AWS
 * SDK for Android</a>. These toolkits contain sample apps that show how to invoke the identity providers, and then how to
 * use the information from these providers to get and use temporary security credentials.
 *
 * </p </li> <li>
 *
 * <a href="http://aws.amazon.com/articles/web-identity-federation-with-mobile-applications">Web Identity Federation with
 * Mobile Applications</a>. This article discusses web identity federation and shows an example of how to use web identity
 * federation to get access to content in Amazon S3.
 */
AssumeRoleWithWebIdentityResponse * StsClient::assumeRoleWithWebIdentity(const AssumeRoleWithWebIdentityRequest &request)
{

}

/**
 * Decodes additional information about the authorization status of a request from an encoded message returned in response
 * to an AWS
 *
 * request>
 *
 * For example, if a user is not authorized to perform an action that he or she has requested, the request returns a
 * <code>Client.UnauthorizedOperation</code> response (an HTTP 403 response). Some AWS actions additionally return an
 * encoded message that can provide details about this authorization failure.
 *
 * </p <note>
 *
 * Only certain AWS actions return an encoded authorization message. The documentation for an individual action indicates
 * whether that action returns an encoded message in addition to returning an HTTP
 *
 * code> </note>
 *
 * The message is encoded because the details of the authorization status can constitute privileged information that the
 * user who requested the action should not see. To decode an authorization status message, a user must be granted
 * permissions via an IAM policy to request the <code>DecodeAuthorizationMessage</code>
 * (<code>sts:DecodeAuthorizationMessage</code>) action.
 *
 * </p
 *
 * The decoded message includes the following type of
 *
 * information> <ul> <li>
 *
 * Whether the request was denied due to an explicit deny or due to the absence of an explicit allow. For more information,
 * see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html#policy-eval-denyallow">Determining
 * Whether a Request is Allowed or Denied</a> in the <i>IAM User Guide</i>.
 *
 * </p </li> <li>
 *
 * The principal who made the
 *
 * request> </li> <li>
 *
 * The requested
 *
 * action> </li> <li>
 *
 * The requested
 *
 * resource> </li> <li>
 *
 * The values of condition keys in the context of the user's
 */
DecodeAuthorizationMessageResponse * StsClient::decodeAuthorizationMessage(const DecodeAuthorizationMessageRequest &request)
{

}

/**
 * Returns details about the IAM identity whose credentials are used to call the
 */
GetCallerIdentityResponse * StsClient::getCallerIdentity(const GetCallerIdentityRequest &request)
{

}

/**
 * Returns a set of temporary security credentials (consisting of an access key ID, a secret access key, and a security
 * token) for a federated user. A typical use is in a proxy application that gets temporary security credentials on behalf
 * of distributed applications inside a corporate network. Because you must call the <code>GetFederationToken</code> action
 * using the long-term security credentials of an IAM user, this call is appropriate in contexts where those credentials
 * can be safely stored, usually in a server-based application. For a comparison of <code>GetFederationToken</code> with
 * the other APIs that produce temporary credentials, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html">Requesting Temporary Security
 * Credentials</a> and <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html#stsapi_comparison">Comparing the
 * AWS STS APIs</a> in the <i>IAM User
 *
 * Guide</i>> <note>
 *
 * If you are creating a mobile-based or browser-based app that can authenticate users using a web identity provider like
 * Login with Amazon, Facebook, Google, or an OpenID Connect-compatible identity provider, we recommend that you use <a
 * href="http://aws.amazon.com/cognito/">Amazon Cognito</a> or <code>AssumeRoleWithWebIdentity</code>. For more
 * information, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html#api_assumerolewithwebidentity">Federation
 * Through a Web-based Identity
 *
 * Provider</a>> </note>
 *
 * The <code>GetFederationToken</code> action must be called by using the long-term AWS security credentials of an IAM
 * user. You can also call <code>GetFederationToken</code> using the security credentials of an AWS root account, but we do
 * not recommended it. Instead, we recommend that you create an IAM user for the purpose of the proxy application and then
 * attach a policy to the IAM user that limits federated users to only the actions and resources that they need access to.
 * For more information, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/best-practices.html">IAM Best
 * Practices</a> in the <i>IAM User Guide</i>.
 *
 * </p
 *
 * The temporary security credentials that are obtained by using the long-term credentials of an IAM user are valid for the
 * specified duration, from 900 seconds (15 minutes) up to a maximium of 129600 seconds (36 hours). The default is 43200
 * seconds (12 hours). Temporary credentials that are obtained by using AWS root account credentials have a maximum
 * duration of 3600 seconds (1
 *
 * hour)>
 *
 * The temporary security credentials created by <code>GetFederationToken</code> can be used to make API calls to any AWS
 * service with the following
 *
 * exceptions> <ul> <li>
 *
 * You cannot use these credentials to call any IAM
 *
 * APIs> </li> <li>
 *
 * You cannot call any STS APIs except
 *
 * <code>GetCallerIdentity</code>> </li> </ul>
 *
 * <b>Permissions</b>
 *
 * </p
 *
 * The permissions for the temporary security credentials returned by <code>GetFederationToken</code> are determined by a
 * combination of the following:
 *
 * </p <ul> <li>
 *
 * The policy or policies that are attached to the IAM user whose credentials are used to call
 *
 * <code>GetFederationToken</code>> </li> <li>
 *
 * The policy that is passed as a parameter in the
 *
 * call> </li> </ul>
 *
 * The passed policy is attached to the temporary security credentials that result from the <code>GetFederationToken</code>
 * API call--that is, to the <i>federated user</i>. When the federated user makes an AWS request, AWS evaluates the policy
 * attached to the federated user in combination with the policy or policies attached to the IAM user whose credentials
 * were used to call <code>GetFederationToken</code>. AWS allows the federated user's request only when both the federated
 * user <i> <b>and</b> </i> the IAM user are explicitly allowed to perform the requested action. The passed policy cannot
 * grant more permissions than those that are defined in the IAM user
 *
 * policy>
 *
 * A typical use case is that the permissions of the IAM user whose credentials are used to call
 * <code>GetFederationToken</code> are designed to allow access to all the actions and resources that any federated user
 * will need. Then, for individual users, you pass a policy to the operation that scopes down the permissions to a level
 * that's appropriate to that individual user, using a policy that allows only a subset of permissions that are granted to
 * the IAM user.
 *
 * </p
 *
 * If you do not pass a policy, the resulting temporary security credentials have no effective permissions. The only
 * exception is when the temporary security credentials are used to access a resource that has a resource-based policy that
 * specifically allows the federated user to access the
 *
 * resource>
 *
 * For more information about how permissions work, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_getfederationtoken.html">Permissions
 * for GetFederationToken</a>. For information about using <code>GetFederationToken</code> to create temporary security
 * credentials, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html#api_getfederationtoken">GetFederationToken—Federation
 * Through a Custom Identity Broker</a>.
 */
GetFederationTokenResponse * StsClient::getFederationToken(const GetFederationTokenRequest &request)
{

}

/**
 * Returns a set of temporary credentials for an AWS account or IAM user. The credentials consist of an access key ID, a
 * secret access key, and a security token. Typically, you use <code>GetSessionToken</code> if you want to use MFA to
 * protect programmatic calls to specific AWS APIs like Amazon EC2 <code>StopInstances</code>. MFA-enabled IAM users would
 * need to call <code>GetSessionToken</code> and submit an MFA code that is associated with their MFA device. Using the
 * temporary security credentials that are returned from the call, IAM users can then make programmatic calls to APIs that
 * require MFA authentication. If you do not supply a correct MFA code, then the API returns an access denied error. For a
 * comparison of <code>GetSessionToken</code> with the other APIs that produce temporary credentials, see <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html">Requesting Temporary Security
 * Credentials</a> and <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html#stsapi_comparison">Comparing the
 * AWS STS APIs</a> in the <i>IAM User
 *
 * Guide</i>>
 *
 * The <code>GetSessionToken</code> action must be called by using the long-term AWS security credentials of the AWS
 * account or an IAM user. Credentials that are created by IAM users are valid for the duration that you specify, from 900
 * seconds (15 minutes) up to a maximum of 129600 seconds (36 hours), with a default of 43200 seconds (12 hours);
 * credentials that are created by using account credentials can range from 900 seconds (15 minutes) up to a maximum of
 * 3600 seconds (1 hour), with a default of 1 hour.
 *
 * </p
 *
 * The temporary security credentials created by <code>GetSessionToken</code> can be used to make API calls to any AWS
 * service with the following
 *
 * exceptions> <ul> <li>
 *
 * You cannot call any IAM APIs unless MFA authentication information is included in the
 *
 * request> </li> <li>
 *
 * You cannot call any STS API <i>except</i> <code>AssumeRole</code> or
 *
 * <code>GetCallerIdentity</code>> </li> </ul> <note>
 *
 * We recommend that you do not call <code>GetSessionToken</code> with root account credentials. Instead, follow our <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/best-practices.html#create-iam-users">best practices</a> by
 * creating one or more IAM users, giving them the necessary permissions, and using IAM users for everyday interaction with
 * AWS.
 *
 * </p </note>
 *
 * The permissions associated with the temporary security credentials returned by <code>GetSessionToken</code> are based on
 * the permissions associated with account or IAM user whose credentials are used to call the action. If
 * <code>GetSessionToken</code> is called using root account credentials, the temporary credentials have root account
 * permissions. Similarly, if <code>GetSessionToken</code> is called using the credentials of an IAM user, the temporary
 * credentials have the same permissions as the IAM user.
 *
 * </p
 *
 * For more information about using <code>GetSessionToken</code> to create temporary credentials, go to <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_request.html#api_getsessiontoken">Temporary
 * Credentials for Users in Untrusted Environments</a> in the <i>IAM User Guide</i>.
 */
GetSessionTokenResponse * StsClient::getSessionToken(const GetSessionTokenRequest &request)
{

}

/**
 * @internal
 *
 * @class  StsClientPrivate
 *
 * @brief  Private implementation for StsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StsClientPrivate object.
 *
 * @param  q  Pointer to this object's public StsClient instance.
 */
StsClientPrivate::StsClientPrivate(StsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace STS
} // namespace AWS
