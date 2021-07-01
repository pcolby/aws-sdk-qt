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

#include "secretsmanagerclient.h"
#include "secretsmanagerclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelrotatesecretrequest.h"
#include "cancelrotatesecretresponse.h"
#include "createsecretrequest.h"
#include "createsecretresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deletesecretrequest.h"
#include "deletesecretresponse.h"
#include "describesecretrequest.h"
#include "describesecretresponse.h"
#include "getrandompasswordrequest.h"
#include "getrandompasswordresponse.h"
#include "getresourcepolicyrequest.h"
#include "getresourcepolicyresponse.h"
#include "getsecretvaluerequest.h"
#include "getsecretvalueresponse.h"
#include "listsecretversionidsrequest.h"
#include "listsecretversionidsresponse.h"
#include "listsecretsrequest.h"
#include "listsecretsresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "putsecretvaluerequest.h"
#include "putsecretvalueresponse.h"
#include "removeregionsfromreplicationrequest.h"
#include "removeregionsfromreplicationresponse.h"
#include "replicatesecrettoregionsrequest.h"
#include "replicatesecrettoregionsresponse.h"
#include "restoresecretrequest.h"
#include "restoresecretresponse.h"
#include "rotatesecretrequest.h"
#include "rotatesecretresponse.h"
#include "stopreplicationtoreplicarequest.h"
#include "stopreplicationtoreplicaresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatesecretrequest.h"
#include "updatesecretresponse.h"
#include "updatesecretversionstagerequest.h"
#include "updatesecretversionstageresponse.h"
#include "validateresourcepolicyrequest.h"
#include "validateresourcepolicyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SecretsManager
 * \brief Contains classess for accessing AWS Secrets Manager.
 *
 * \inmodule QtAwsSecretsManager
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::SecretsManagerClient
 * \brief The SecretsManagerClient class provides access to the AWS Secrets Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSecretsManager
 *
 *  <fullname>AWS Secrets Manager API Reference</fullname>
 * 
 *  AWS Secrets Manager provides a service to enable you to store, manage, and retrieve,
 * 
 *  secrets>
 * 
 *  This guide provides descriptions of the Secrets Manager API. For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">AWS Secrets Manager User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the Secrets Manager API Reference documents the Secrets Manager API version
 * 
 *  2017-10-17> <note>
 * 
 *  As an alternative to using the API, you can use one of the AWS SDKs, which consist of libraries and sample code for
 *  various programming languages and platforms such as Java, Ruby, .NET, iOS, and Android. The SDKs provide a convenient
 *  way to create programmatic access to AWS Secrets Manager. For example, the SDKs provide cryptographically signing
 *  requests, managing errors, and retrying requests automatically. For more information about the AWS SDKs, including
 *  downloading and installing them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend you use the AWS SDKs to make programmatic API calls to Secrets Manager. However, you also can use the
 *  Secrets Manager HTTP Query API to make direct calls to the Secrets Manager web service. To learn more about the Secrets
 *  Manager HTTP Query API, see <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/query-requests.html">Making Query Requests</a> in the
 *  <i>AWS Secrets Manager User Guide</i>.
 * 
 *  </p
 * 
 *  Secrets Manager API supports GET and POST requests for all actions, and doesn't require you to use GET for some actions
 *  and POST for others. However, GET requests are subject to the limitation size of a URL. Therefore, for operations that
 *  require larger sizes, use a POST
 * 
 *  request>
 * 
 *  <b>Support and Feedback for AWS Secrets Manager</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>, or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=296">AWS Secrets Manager Discussion Forum</a>.
 *  For more information about the AWS Discussion Forums, see <a href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>How examples are presented</b>
 * 
 *  </p
 * 
 *  The JSON that AWS Secrets Manager expects as your request parameters and the service returns as a response to HTTP query
 *  requests contain single, long strings without line breaks or white space formatting. The JSON shown in the examples
 *  displays the code formatted with both line breaks and white space to improve readability. When example input parameters
 *  can also cause long strings extending beyond the screen, you can insert line breaks to enhance readability. You should
 *  always submit the input as a single JSON text
 * 
 *  string>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  AWS Secrets Manager supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information that's collected by AWS CloudTrail, you can determine the requests
 *  successfully made to Secrets Manager, who made the request, when it was made, and so on. For more about AWS Secrets
 *  Manager and support for AWS CloudTrail, see <a
 *  href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring.html#monitoring_cloudtrail">Logging AWS
 *  Secrets Manager Events with AWS CloudTrail</a> in the <i>AWS Secrets Manager User Guide</i>. To learn more about
 *  CloudTrail, including enabling it and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
 */

/*!
 * \brief Constructs a SecretsManagerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SecretsManagerClient::SecretsManagerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SecretsManagerClientPrivate(this), parent)
{
    Q_D(SecretsManagerClient);
    d->apiVersion = QStringLiteral("2017-10-17");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("secretsmanager");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Secrets Manager");
    d->serviceName = QStringLiteral("secretsmanager");
}

/*!
 * \overload SecretsManagerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SecretsManagerClient::SecretsManagerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SecretsManagerClientPrivate(this), parent)
{
    Q_D(SecretsManagerClient);
    d->apiVersion = QStringLiteral("2017-10-17");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("secretsmanager");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Secrets Manager");
    d->serviceName = QStringLiteral("secretsmanager");
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * CancelRotateSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables automatic scheduled rotation and cancels the rotation of a secret if currently in
 *
 * progress>
 *
 * To re-enable scheduled rotation, call <a>RotateSecret</a> with <code>AutomaticallyRotateAfterDays</code> set to a value
 * greater than 0. This immediately rotates your secret and then enables the automatic
 *
 * schedule> <note>
 *
 * If you cancel a rotation while in progress, it can leave the <code>VersionStage</code> labels in an unexpected state.
 * Depending on the step of the rotation in progress, you might need to remove the staging label <code>AWSPENDING</code>
 * from the partially created version, specified by the <code>VersionId</code> response value. You should also evaluate the
 * partially rotated new version to see if it should be deleted, which you can do by removing all staging labels from the
 * new version <code>VersionStage</code>
 *
 * field> </note>
 *
 * To successfully start a rotation, the staging label <code>AWSPENDING</code> must be in one of the following
 *
 * states> <ul> <li>
 *
 * Not attached to any version at
 *
 * al> </li> <li>
 *
 * Attached to the same version as the staging label <code>AWSCURRENT</code>
 *
 * </p </li> </ul>
 *
 * If the staging label <code>AWSPENDING</code> attached to a different version than the version with
 * <code>AWSCURRENT</code> then the attempt to rotate
 *
 * fails>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:CancelRotateSecre> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To configure rotation for a secret or to manually trigger a rotation, use
 *
 * <a>RotateSecret</a>> </li> <li>
 *
 * To get the rotation configuration details for a secret, use
 *
 * <a>DescribeSecret</a>> </li> <li>
 *
 * To list all of the currently available secrets, use
 *
 * <a>ListSecrets</a>> </li> <li>
 *
 * To list all of the versions currently associated with a secret, use
 */
CancelRotateSecretResponse * SecretsManagerClient::cancelRotateSecret(const CancelRotateSecretRequest &request)
{
    return qobject_cast<CancelRotateSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * CreateSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new secret. A secret in Secrets Manager consists of both the protected secret data and the important
 * information needed to manage the
 *
 * secret>
 *
 * Secrets Manager stores the encrypted secret data in one of a collection of "versions" associated with the secret. Each
 * version contains a copy of the encrypted secret data. Each version is associated with one or more "staging labels" that
 * identify where the version is in the rotation cycle. The <code>SecretVersionsToStages</code> field of the secret
 * contains the mapping of staging labels to the active versions of the secret. Versions without a staging label are
 * considered deprecated and not included in the
 *
 * list>
 *
 * You provide the secret data to be encrypted by putting text in either the <code>SecretString</code> parameter or binary
 * data in the <code>SecretBinary</code> parameter, but not both. If you include <code>SecretString</code> or
 * <code>SecretBinary</code> then Secrets Manager also creates an initial secret version and automatically attaches the
 * staging label <code>AWSCURRENT</code> to the new
 *
 * version> <note> <ul> <li>
 *
 * If you call an operation to encrypt or decrypt the <code>SecretString</code> or <code>SecretBinary</code> for a secret
 * in the same account as the calling user and that secret doesn't specify a AWS KMS encryption key, Secrets Manager uses
 * the account's default AWS managed customer master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
 * doesn't already exist in your account then Secrets Manager creates it for you automatically. All users and roles in the
 * same AWS account automatically have access to use the default CMK. Note that if an Secrets Manager API call results in
 * AWS creating the account's AWS-managed CMK, it can result in a one-time significant delay in returning the
 *
 * result> </li> <li>
 *
 * If the secret resides in a different AWS account from the credentials calling an API that requires encryption or
 * decryption of the secret value then you must create and use a custom AWS KMS CMK because you can't access the default
 * CMK for the account using credentials from a different AWS account. Store the ARN of the CMK in the secret when you
 * create the secret or when you update it by including it in the <code>KMSKeyId</code>. If you call an API that must
 * encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code> using credentials from a different account
 * then the AWS KMS key policy must grant cross-account access to that other account's user or role for both the
 * kms:GenerateDataKey and kms:Decrypt
 *
 * operations> </li> </ul> </note>
 *
 *
 * </p
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:CreateSecre> </li> <li>
 *
 * kms:GenerateDataKey - needed only if you use a customer-managed AWS KMS key to encrypt the secret. You do not need this
 * permission to use the account default AWS managed CMK for Secrets
 *
 * Manager> </li> <li>
 *
 * kms:Decrypt - needed only if you use a customer-managed AWS KMS key to encrypt the secret. You do not need this
 * permission to use the account default AWS managed CMK for Secrets
 *
 * Manager> </li> <li>
 *
 * secretsmanager:TagResource - needed only if you include the <code>Tags</code> parameter.
 *
 * </p </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To delete a secret, use
 *
 * <a>DeleteSecret</a>> </li> <li>
 *
 * To modify an existing secret, use
 *
 * <a>UpdateSecret</a>> </li> <li>
 *
 * To create a new version of a secret, use
 *
 * <a>PutSecretValue</a>> </li> <li>
 *
 * To retrieve the encrypted secure string and secure binary values, use
 *
 * <a>GetSecretValue</a>> </li> <li>
 *
 * To retrieve all other details for a secret, use <a>DescribeSecret</a>. This does not include the encrypted secure string
 * and secure binary
 *
 * values> </li> <li>
 *
 * To retrieve the list of secret versions associated with the current secret, use <a>DescribeSecret</a> and examine the
 * <code>SecretVersionsToStages</code> response
 */
CreateSecretResponse * SecretsManagerClient::createSecret(const CreateSecretRequest &request)
{
    return qobject_cast<CreateSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the resource-based permission policy attached to the
 *
 * secret>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:DeleteResourcePolic> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To attach a resource policy to a secret, use
 *
 * <a>PutResourcePolicy</a>> </li> <li>
 *
 * To retrieve the current resource-based policy attached to a secret, use
 *
 * <a>GetResourcePolicy</a>> </li> <li>
 *
 * To list all of the currently available secrets, use
 */
DeleteResourcePolicyResponse * SecretsManagerClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * DeleteSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an entire secret and all of the versions. You can optionally include a recovery window during which you can
 * restore the secret. If you don't specify a recovery window value, the operation defaults to 30 days. Secrets Manager
 * attaches a <code>DeletionDate</code> stamp to the secret that specifies the end of the recovery window. At the end of
 * the recovery window, Secrets Manager deletes the secret
 *
 * permanently>
 *
 * At any time before recovery window ends, you can use <a>RestoreSecret</a> to remove the <code>DeletionDate</code> and
 * cancel the deletion of the
 *
 * secret>
 *
 * You cannot access the encrypted secret information in any secret scheduled for deletion. If you need to access that
 * information, you must cancel the deletion with <a>RestoreSecret</a> and then retrieve the
 *
 * information> <note> <ul> <li>
 *
 * There is no explicit operation to delete a version of a secret. Instead, remove all staging labels from the
 * <code>VersionStage</code> field of a version. That marks the version as deprecated and allows Secrets Manager to delete
 * it as needed. Versions without any staging labels do not show up in <a>ListSecretVersionIds</a> unless you specify
 *
 * <code>IncludeDeprecated</code>> </li> <li>
 *
 * The permanent secret deletion at the end of the waiting period is performed as a background task with low priority.
 * There is no guarantee of a specific time after the recovery window for the actual delete operation to
 *
 * occur> </li> </ul> </note>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:DeleteSecre> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To create a secret, use
 *
 * <a>CreateSecret</a>> </li> <li>
 *
 * To cancel deletion of a version of a secret before the recovery window has expired, use
 */
DeleteSecretResponse * SecretsManagerClient::deleteSecret(const DeleteSecretRequest &request)
{
    return qobject_cast<DeleteSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * DescribeSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details of a secret. It does not include the encrypted fields. Secrets Manager only returns fields
 * populated with a value in the response.
 *
 * </p
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:DescribeSecre> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To create a secret, use
 *
 * <a>CreateSecret</a>> </li> <li>
 *
 * To modify a secret, use
 *
 * <a>UpdateSecret</a>> </li> <li>
 *
 * To retrieve the encrypted secret information in a version of the secret, use
 *
 * <a>GetSecretValue</a>> </li> <li>
 *
 * To list all of the secrets in the AWS account, use
 */
DescribeSecretResponse * SecretsManagerClient::describeSecret(const DescribeSecretRequest &request)
{
    return qobject_cast<DescribeSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * GetRandomPasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a random password of the specified complexity. This operation is intended for use in the Lambda rotation
 * function. Per best practice, we recommend that you specify the maximum length and include every character type that the
 * system you are generating a password for can
 *
 * support>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 */
GetRandomPasswordResponse * SecretsManagerClient::getRandomPassword(const GetRandomPasswordRequest &request)
{
    return qobject_cast<GetRandomPasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * GetResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the JSON text of the resource-based policy document attached to the specified secret. The JSON request string
 * input and response output displays formatted code with white space and line breaks for better readability. Submit your
 * input as a single line JSON
 *
 * string>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:GetResourcePolic> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To attach a resource policy to a secret, use
 *
 * <a>PutResourcePolicy</a>> </li> <li>
 *
 * To delete the resource-based policy attached to a secret, use
 *
 * <a>DeleteResourcePolicy</a>> </li> <li>
 *
 * To list all of the currently available secrets, use
 */
GetResourcePolicyResponse * SecretsManagerClient::getResourcePolicy(const GetResourcePolicyRequest &request)
{
    return qobject_cast<GetResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * GetSecretValueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the contents of the encrypted fields <code>SecretString</code> or <code>SecretBinary</code> from the specified
 * version of a secret, whichever contains
 *
 * content>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:GetSecretValu> </li> <li>
 *
 * kms:Decrypt - required only if you use a customer-managed AWS KMS key to encrypt the secret. You do not need this
 * permission to use the account's default AWS managed CMK for Secrets
 *
 * Manager> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To create a new version of the secret with different encrypted information, use
 *
 * <a>PutSecretValue</a>> </li> <li>
 *
 * To retrieve the non-encrypted details for the secret, use
 */
GetSecretValueResponse * SecretsManagerClient::getSecretValue(const GetSecretValueRequest &request)
{
    return qobject_cast<GetSecretValueResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * ListSecretVersionIdsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the versions attached to the specified secret. The output does not include the <code>SecretString</code> or
 * <code>SecretBinary</code> fields. By default, the list includes only versions that have at least one staging label in
 * <code>VersionStage</code>
 *
 * attached> <note>
 *
 * Always check the <code>NextToken</code> response parameter when calling any of the <code>List*</code> operations. These
 * operations can occasionally return an empty or shorter than expected list of results even when there more results become
 * available. When this happens, the <code>NextToken</code> response parameter contains a value to pass to the next call to
 * the same API to request the next part of the
 *
 * list> </note>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:ListSecretVersionId> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To list the secrets in an account, use
 */
ListSecretVersionIdsResponse * SecretsManagerClient::listSecretVersionIds(const ListSecretVersionIdsRequest &request)
{
    return qobject_cast<ListSecretVersionIdsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * ListSecretsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the secrets that are stored by Secrets Manager in the AWS account. To list the versions currently stored
 * for a specific secret, use <a>ListSecretVersionIds</a>. The encrypted fields <code>SecretString</code> and
 * <code>SecretBinary</code> are not included in the output. To get that information, call the <a>GetSecretValue</a>
 *
 * operation> <note>
 *
 * Always check the <code>NextToken</code> response parameter when calling any of the <code>List*</code> operations. These
 * operations can occasionally return an empty or shorter than expected list of results even when there more results become
 * available. When this happens, the <code>NextToken</code> response parameter contains a value to pass to the next call to
 * the same API to request the next part of the
 *
 * list> </note>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:ListSecret> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To list the versions attached to a secret, use
 */
ListSecretsResponse * SecretsManagerClient::listSecrets(const ListSecretsRequest &request)
{
    return qobject_cast<ListSecretsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the contents of the specified resource-based permission policy to a secret. A resource-based policy is
 * optional. Alternatively, you can use IAM identity-based policies that specify the secret's Amazon Resource Name (ARN) in
 * the policy statement's <code>Resources</code> element. You can also use a combination of both identity-based and
 * resource-based policies. The affected users and roles receive the permissions that are permitted by all of the relevant
 * policies. For more information, see <a
 * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_resource-based-policies.html">Using
 * Resource-Based Policies for AWS Secrets Manager</a>. For the complete description of the AWS policy syntax and grammar,
 * see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM JSON Policy Reference</a> in
 * the <i>IAM User
 *
 * Guide</i>>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:PutResourcePolic> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To retrieve the resource policy attached to a secret, use
 *
 * <a>GetResourcePolicy</a>> </li> <li>
 *
 * To delete the resource-based policy attached to a secret, use
 *
 * <a>DeleteResourcePolicy</a>> </li> <li>
 *
 * To list all of the currently available secrets, use
 */
PutResourcePolicyResponse * SecretsManagerClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * PutSecretValueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stores a new encrypted secret value in the specified secret. To do this, the operation creates a new version and
 * attaches it to the secret. The version can contain a new <code>SecretString</code> value or a new
 * <code>SecretBinary</code> value. You can also specify the staging labels that are initially attached to the new
 *
 * version> <note>
 *
 * The Secrets Manager console uses only the <code>SecretString</code> field. To add binary data to a secret with the
 * <code>SecretBinary</code> field you must use the AWS CLI or one of the AWS
 *
 * SDKs> </note> <ul> <li>
 *
 * If this operation creates the first version for the secret then Secrets Manager automatically attaches the staging label
 * <code>AWSCURRENT</code> to the new
 *
 * version> </li> <li>
 *
 * If you do not specify a value for VersionStages then Secrets Manager automatically moves the staging label
 * <code>AWSCURRENT</code> to this new
 *
 * version> </li> <li>
 *
 * If this operation moves the staging label <code>AWSCURRENT</code> from another version to this version, then Secrets
 * Manager also automatically moves the staging label <code>AWSPREVIOUS</code> to the version that <code>AWSCURRENT</code>
 * was removed
 *
 * from> </li> <li>
 *
 * This operation is idempotent. If a version with a <code>VersionId</code> with the same value as the
 * <code>ClientRequestToken</code> parameter already exists and you specify the same secret data, the operation succeeds
 * but does nothing. However, if the secret data is different, then the operation fails because you cannot modify an
 * existing version; you can only create new
 *
 * ones> </li> </ul> <note> <ul> <li>
 *
 * If you call an operation to encrypt or decrypt the <code>SecretString</code> or <code>SecretBinary</code> for a secret
 * in the same account as the calling user and that secret doesn't specify a AWS KMS encryption key, Secrets Manager uses
 * the account's default AWS managed customer master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
 * doesn't already exist in your account then Secrets Manager creates it for you automatically. All users and roles in the
 * same AWS account automatically have access to use the default CMK. Note that if an Secrets Manager API call results in
 * AWS creating the account's AWS-managed CMK, it can result in a one-time significant delay in returning the
 *
 * result> </li> <li>
 *
 * If the secret resides in a different AWS account from the credentials calling an API that requires encryption or
 * decryption of the secret value then you must create and use a custom AWS KMS CMK because you can't access the default
 * CMK for the account using credentials from a different AWS account. Store the ARN of the CMK in the secret when you
 * create the secret or when you update it by including it in the <code>KMSKeyId</code>. If you call an API that must
 * encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code> using credentials from a different account
 * then the AWS KMS key policy must grant cross-account access to that other account's user or role for both the
 * kms:GenerateDataKey and kms:Decrypt
 *
 * operations> </li> </ul> </note>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:PutSecretValu> </li> <li>
 *
 * kms:GenerateDataKey - needed only if you use a customer-managed AWS KMS key to encrypt the secret. You do not need this
 * permission to use the account's default AWS managed CMK for Secrets
 *
 * Manager> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To retrieve the encrypted value you store in the version of a secret, use
 *
 * <a>GetSecretValue</a>> </li> <li>
 *
 * To create a secret, use
 *
 * <a>CreateSecret</a>> </li> <li>
 *
 * To get the details for a secret, use
 *
 * <a>DescribeSecret</a>> </li> <li>
 *
 * To list the versions attached to a secret, use
 */
PutSecretValueResponse * SecretsManagerClient::putSecretValue(const PutSecretValueRequest &request)
{
    return qobject_cast<PutSecretValueResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * RemoveRegionsFromReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove regions from
 */
RemoveRegionsFromReplicationResponse * SecretsManagerClient::removeRegionsFromReplication(const RemoveRegionsFromReplicationRequest &request)
{
    return qobject_cast<RemoveRegionsFromReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * ReplicateSecretToRegionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Converts an existing secret to a multi-Region secret and begins replication the secret to a list of new regions.
 */
ReplicateSecretToRegionsResponse * SecretsManagerClient::replicateSecretToRegions(const ReplicateSecretToRegionsRequest &request)
{
    return qobject_cast<ReplicateSecretToRegionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * RestoreSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the scheduled deletion of a secret by removing the <code>DeletedDate</code> time stamp. This makes the secret
 * accessible to query once
 *
 * again>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:RestoreSecre> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To delete a secret, use
 */
RestoreSecretResponse * SecretsManagerClient::restoreSecret(const RestoreSecretRequest &request)
{
    return qobject_cast<RestoreSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * RotateSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures and starts the asynchronous process of rotating this secret. If you include the configuration parameters, the
 * operation sets those values for the secret and then immediately starts a rotation. If you do not include the
 * configuration parameters, the operation starts a rotation with the values already stored in the secret. After the
 * rotation completes, the protected service and its clients all use the new version of the secret.
 *
 * </p
 *
 * This required configuration information includes the ARN of an AWS Lambda function and the time between scheduled
 * rotations. The Lambda rotation function creates a new version of the secret and creates or updates the credentials on
 * the protected service to match. After testing the new credentials, the function marks the new secret with the staging
 * label <code>AWSCURRENT</code> so that your clients all immediately begin to use the new version. For more information
 * about rotating secrets and how to configure a Lambda function to rotate the secrets for your protected service, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets.html">Rotating Secrets in AWS Secrets
 * Manager</a> in the <i>AWS Secrets Manager User
 *
 * Guide</i>>
 *
 * Secrets Manager schedules the next rotation when the previous one completes. Secrets Manager schedules the date by
 * adding the rotation interval (number of days) to the actual date of the last rotation. The service chooses the hour
 * within that 24-hour date window randomly. The minute is also chosen somewhat randomly, but weighted towards the top of
 * the hour and influenced by a variety of factors that help distribute
 *
 * load>
 *
 * The rotation function must end with the versions of the secret in one of two
 *
 * states> <ul> <li>
 *
 * The <code>AWSPENDING</code> and <code>AWSCURRENT</code> staging labels are attached to the same version of the secret,
 *
 * o> </li> <li>
 *
 * The <code>AWSPENDING</code> staging label is not attached to any version of the
 *
 * secret> </li> </ul>
 *
 * If the <code>AWSPENDING</code> staging label is present but not attached to the same version as <code>AWSCURRENT</code>
 * then any later invocation of <code>RotateSecret</code> assumes that a previous rotation request is still in progress and
 * returns an
 *
 * error>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:RotateSecre> </li> <li>
 *
 * lambda:InvokeFunction (on the function specified in the secret's
 *
 * metadata> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To list the secrets in your account, use
 *
 * <a>ListSecrets</a>> </li> <li>
 *
 * To get the details for a version of a secret, use
 *
 * <a>DescribeSecret</a>> </li> <li>
 *
 * To create a new version of a secret, use
 *
 * <a>CreateSecret</a>> </li> <li>
 *
 * To attach staging labels to or remove staging labels from a version of a secret, use
 */
RotateSecretResponse * SecretsManagerClient::rotateSecret(const RotateSecretRequest &request)
{
    return qobject_cast<RotateSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * StopReplicationToReplicaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the secret from replication and promotes the secret to a regional secret in the replica
 */
StopReplicationToReplicaResponse * SecretsManagerClient::stopReplicationToReplica(const StopReplicationToReplicaRequest &request)
{
    return qobject_cast<StopReplicationToReplicaResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches one or more tags, each consisting of a key name and a value, to the specified secret. Tags are part of the
 * secret's overall metadata, and are not associated with any specific version of the secret. This operation only appends
 * tags to the existing list of tags. To remove tags, you must use
 *
 * <a>UntagResource</a>>
 *
 * The following basic restrictions apply to
 *
 * tags> <ul> <li>
 *
 * Maximum number of tags per
 *
 * secret—5> </li> <li>
 *
 * Maximum key length—127 Unicode characters in
 *
 * UTF-> </li> <li>
 *
 * Maximum value length—255 Unicode characters in
 *
 * UTF-> </li> <li>
 *
 * Tag keys and values are case
 *
 * sensitive> </li> <li>
 *
 * Do not use the <code>aws:</code> prefix in your tag names or values because AWS reserves it for AWS use. You can't edit
 * or delete tag names or values with this prefix. Tags with this prefix do not count against your tags per secret
 *
 * limit> </li> <li>
 *
 * If you use your tagging schema across multiple services and resources, remember other services might have restrictions
 * on allowed characters. Generally allowed characters: letters, spaces, and numbers representable in UTF-8, plus the
 * following special characters: + - = . _ : /
 *
 * @> </li> </ul> <b>
 *
 * If you use tags as part of your security strategy, then adding or removing a tag can change permissions. If successfully
 * completing this operation would result in you losing your permissions for this secret, then the operation is blocked and
 * returns an Access Denied
 *
 * error> </b>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:TagResourc> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To remove one or more tags from the collection attached to a secret, use
 *
 * <a>UntagResource</a>> </li> <li>
 *
 * To view the list of tags attached to a secret, use
 */
TagResourceResponse * SecretsManagerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified
 *
 * secret>
 *
 * This operation is idempotent. If a requested tag is not attached to the secret, no error is returned and the secret
 * metadata is
 *
 * unchanged> <b>
 *
 * If you use tags as part of your security strategy, then removing a tag can change permissions. If successfully
 * completing this operation would result in you losing your permissions for this secret, then the operation is blocked and
 * returns an Access Denied
 *
 * error> </b>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:UntagResourc> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To add one or more tags to the collection attached to a secret, use
 *
 * <a>TagResource</a>> </li> <li>
 *
 * To view the list of tags attached to a secret, use
 */
UntagResourceResponse * SecretsManagerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * UpdateSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies many of the details of the specified secret. If you include a <code>ClientRequestToken</code> and <i>either</i>
 * <code>SecretString</code> or <code>SecretBinary</code> then it also creates a new version attached to the
 *
 * secret>
 *
 * To modify the rotation configuration of a secret, use <a>RotateSecret</a>
 *
 * instead> <note>
 *
 * The Secrets Manager console uses only the <code>SecretString</code> parameter and therefore limits you to encrypting and
 * storing only a text string. To encrypt and store binary data as part of the version of a secret, you must use either the
 * AWS CLI or one of the AWS
 *
 * SDKs> </note> <ul> <li>
 *
 * If a version with a <code>VersionId</code> with the same value as the <code>ClientRequestToken</code> parameter already
 * exists, the operation results in an error. You cannot modify an existing version, you can only create a new
 *
 * version> </li> <li>
 *
 * If you include <code>SecretString</code> or <code>SecretBinary</code> to create a new secret version, Secrets Manager
 * automatically attaches the staging label <code>AWSCURRENT</code> to the new version.
 *
 * </p </li> </ul> <note> <ul> <li>
 *
 * If you call an operation to encrypt or decrypt the <code>SecretString</code> or <code>SecretBinary</code> for a secret
 * in the same account as the calling user and that secret doesn't specify a AWS KMS encryption key, Secrets Manager uses
 * the account's default AWS managed customer master key (CMK) with the alias <code>aws/secretsmanager</code>. If this key
 * doesn't already exist in your account then Secrets Manager creates it for you automatically. All users and roles in the
 * same AWS account automatically have access to use the default CMK. Note that if an Secrets Manager API call results in
 * AWS creating the account's AWS-managed CMK, it can result in a one-time significant delay in returning the
 *
 * result> </li> <li>
 *
 * If the secret resides in a different AWS account from the credentials calling an API that requires encryption or
 * decryption of the secret value then you must create and use a custom AWS KMS CMK because you can't access the default
 * CMK for the account using credentials from a different AWS account. Store the ARN of the CMK in the secret when you
 * create the secret or when you update it by including it in the <code>KMSKeyId</code>. If you call an API that must
 * encrypt or decrypt <code>SecretString</code> or <code>SecretBinary</code> using credentials from a different account
 * then the AWS KMS key policy must grant cross-account access to that other account's user or role for both the
 * kms:GenerateDataKey and kms:Decrypt
 *
 * operations> </li> </ul> </note>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:UpdateSecre> </li> <li>
 *
 * kms:GenerateDataKey - needed only if you use a custom AWS KMS key to encrypt the secret. You do not need this permission
 * to use the account's AWS managed CMK for Secrets
 *
 * Manager> </li> <li>
 *
 * kms:Decrypt - needed only if you use a custom AWS KMS key to encrypt the secret. You do not need this permission to use
 * the account's AWS managed CMK for Secrets
 *
 * Manager> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To create a new secret, use
 *
 * <a>CreateSecret</a>> </li> <li>
 *
 * To add only a new version to an existing secret, use
 *
 * <a>PutSecretValue</a>> </li> <li>
 *
 * To get the details for a secret, use
 *
 * <a>DescribeSecret</a>> </li> <li>
 *
 * To list the versions contained in a secret, use
 */
UpdateSecretResponse * SecretsManagerClient::updateSecret(const UpdateSecretRequest &request)
{
    return qobject_cast<UpdateSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * UpdateSecretVersionStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the staging labels attached to a version of a secret. Staging labels are used to track a version as it
 * progresses through the secret rotation process. You can attach a staging label to only one version of a secret at a
 * time. If a staging label to be added is already attached to another version, then it is moved--removed from the other
 * version first and then attached to this one. For more information about staging labels, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/terms-concepts.html#term_staging-label">Staging
 * Labels</a> in the <i>AWS Secrets Manager User Guide</i>.
 *
 * </p
 *
 * The staging labels that you specify in the <code>VersionStage</code> parameter are added to the existing list of staging
 * labels--they don't replace
 *
 * it>
 *
 * You can move the <code>AWSCURRENT</code> staging label to this version by including it in this
 *
 * call> <note>
 *
 * Whenever you move <code>AWSCURRENT</code>, Secrets Manager automatically moves the label <code>AWSPREVIOUS</code> to the
 * version that <code>AWSCURRENT</code> was removed
 *
 * from> </note>
 *
 * If this action results in the last label being removed from a version, then the version is considered to be 'deprecated'
 * and can be deleted by Secrets
 *
 * Manager>
 *
 * <b>Minimum permissions</b>
 *
 * </p
 *
 * To run this command, you must have the following
 *
 * permissions> <ul> <li>
 *
 * secretsmanager:UpdateSecretVersionStag> </li> </ul>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * To get the list of staging labels that are currently associated with a version of a secret, use <code>
 * <a>DescribeSecret</a> </code> and examine the <code>SecretVersionsToStages</code> response value.
 */
UpdateSecretVersionStageResponse * SecretsManagerClient::updateSecretVersionStage(const UpdateSecretVersionStageRequest &request)
{
    return qobject_cast<UpdateSecretVersionStageResponse *>(send(request));
}

/*!
 * Sends \a request to the SecretsManagerClient service, and returns a pointer to an
 * ValidateResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Validates that the resource policy does not grant a wide range of IAM principals access to your secret. The JSON request
 * string input and response output displays formatted code with white space and line breaks for better readability. Submit
 * your input as a single line JSON string. A resource-based policy is optional for
 *
 * secrets>
 *
 * The API performs three checks when validating the
 *
 * secret> <ul> <li>
 *
 * Sends a call to <a
 * href="https://aws.amazon.com/blogs/security/protect-sensitive-data-in-the-cloud-with-automated-reasoning-zelkova/">Zelkova</a>,
 * an automated reasoning engine, to ensure your Resource Policy does not allow broad access to your
 *
 * secret> </li> <li>
 *
 * Checks for correct syntax in a
 *
 * policy> </li> <li>
 *
 * Verifies the policy does not lock out a
 *
 * caller> </li> </ul>
 *
 * <b>Minimum Permissions</b>
 *
 * </p
 *
 * You must have the permissions required to access the following
 *
 * APIs> <ul> <li>
 *
 * <code>secretsmanager:PutResourcePolicy</code>
 *
 * </p </li> <li>
 *
 * <code>secretsmanager:ValidateResourcePolicy</code>
 */
ValidateResourcePolicyResponse * SecretsManagerClient::validateResourcePolicy(const ValidateResourcePolicyRequest &request)
{
    return qobject_cast<ValidateResourcePolicyResponse *>(send(request));
}

/*!
 * \class QtAws::SecretsManager::SecretsManagerClientPrivate
 * \brief The SecretsManagerClientPrivate class provides private implementation for SecretsManagerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a SecretsManagerClientPrivate object with public implementation \a q.
 */
SecretsManagerClientPrivate::SecretsManagerClientPrivate(SecretsManagerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SecretsManager
} // namespace QtAws
