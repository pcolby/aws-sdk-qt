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

#include "iotclient.h"
#include "iotclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace IoT {

/**
 * @class  IoTClient
 *
 * @brief  Client for AWS IoT
 *
 * <fullname>AWS IoT</fullname>
 *
 * AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 * embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 * with, configure rules for data processing and integration with other services, organize resources associated with each
 * thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 *
 * things>
 *
 * For more information about how AWS IoT works, see the <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 */

/**
 * @brief  Constructs a new IoTClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
IoTClient::IoTClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new IoTClientPrivate(this), parent)
{
    Q_D(IoTClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("execute-api");
}

/**
 * @brief  Constructs a new IoTClient object.
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
IoTClient::IoTClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new IoTClientPrivate(this), parent)
{
    Q_D(IoTClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("execute-api");
}

/// @todo override getEndpoint() to use iot.

/**
 * Accepts a pending certificate transfer. The default state of the certificate is
 *
 * INACTIVE>
 *
 * To check for pending certificate transfers, call <a>ListCertificates</a> to enumerate your
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AcceptCertificateTransferResponse * IoTClient::acceptCertificateTransfer(const AcceptCertificateTransferRequest &request)
{

}

/**
 * Adds a thing to a thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddThingToThingGroupResponse * IoTClient::addThingToThingGroup(const AddThingToThingGroupRequest &request)
{

}

/**
 * Associates a group with a continuous job. The following criteria must be met:
 *
 * </p <ul> <li>
 *
 * The job must have been created with the <code>targetSelection</code> field set to
 *
 * "CONTINUOUS"> </li> <li>
 *
 * The job status must currently be
 *
 * "IN_PROGRESS"> </li> <li>
 *
 * The total number of targets associated with a job must not exceed
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateTargetsWithJobResponse * IoTClient::associateTargetsWithJob(const AssociateTargetsWithJobRequest &request)
{

}

/**
 * Attaches a policy to the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachPolicyResponse * IoTClient::attachPolicy(const AttachPolicyRequest &request)
{

}

/**
 * Attaches the specified policy to the specified principal (certificate or other
 *
 * credential)>
 *
 * <b>Note:</b> This API is deprecated. Please use <a>AttachPolicy</a>
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachPrincipalPolicyResponse * IoTClient::attachPrincipalPolicy(const AttachPrincipalPolicyRequest &request)
{

}

/**
 * Attaches the specified principal to the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachThingPrincipalResponse * IoTClient::attachThingPrincipal(const AttachThingPrincipalRequest &request)
{

}

/**
 * Cancels a pending transfer for the specified
 *
 * certificate>
 *
 * <b>Note</b> Only the transfer source account can use this operation to cancel a transfer. (Transfer destinations can use
 * <a>RejectCertificateTransfer</a> instead.) After transfer, AWS IoT returns the certificate to the source account in the
 * INACTIVE state. After the destination account has accepted the transfer, the transfer cannot be
 *
 * cancelled>
 *
 * After a certificate transfer is cancelled, the status of the certificate changes from PENDING_TRANSFER to
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelCertificateTransferResponse * IoTClient::cancelCertificateTransfer(const CancelCertificateTransferRequest &request)
{

}

/**
 * Cancels a
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelJobResponse * IoTClient::cancelJob(const CancelJobRequest &request)
{

}

/**
 * Clears the default
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ClearDefaultAuthorizerResponse * IoTClient::clearDefaultAuthorizer(const ClearDefaultAuthorizerRequest &request)
{

}

/**
 * Creates an
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAuthorizerResponse * IoTClient::createAuthorizer(const CreateAuthorizerRequest &request)
{

}

/**
 * Creates an X.509 certificate using the specified certificate signing
 *
 * request>
 *
 * <b>Note:</b> The CSR must include a public key that is either an RSA key with a length of at least 2048 bits or an ECC
 * key from NIST P-256 or NIST P-384 curves.
 *
 * </p
 *
 * <b>Note:</b> Reusing the same certificate signing request (CSR) results in a distinct
 *
 * certificate>
 *
 * You can create multiple certificates in a batch by creating a directory, copying multiple .csr files into that
 * directory, and then specifying that directory on the command line. The following commands show how to create a batch of
 * certificates given a batch of
 *
 * CSRs>
 *
 * Assuming a set of CSRs are located inside of the directory
 *
 * my-csr-directory>
 *
 * On Linux and OS X, the command
 *
 * is>
 *
 * $ ls my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr --certificate-signing-request
 *
 * file://my-csr-directory/{>
 *
 * This command lists all of the CSRs in my-csr-directory and pipes each CSR file name to the aws iot
 * create-certificate-from-csr AWS CLI command to create a certificate for the corresponding
 *
 * CSR>
 *
 * The aws iot create-certificate-from-csr part of the command can also be run in parallel to speed up the certificate
 * creation
 *
 * process>
 *
 * $ ls my-csr-directory/ | xargs -P 10 -I {} aws iot create-certificate-from-csr --certificate-signing-request
 *
 * file://my-csr-directory/{>
 *
 * On Windows PowerShell, the command to create certificates for all CSRs in my-csr-directory
 *
 * is>
 *
 * &gt; ls -Name my-csr-directory | %{aws iot create-certificate-from-csr --certificate-signing-request
 *
 * file://my-csr-directory/$_>
 *
 * On a Windows command prompt, the command to create certificates for all CSRs in my-csr-directory
 *
 * is>
 *
 * &gt; forfiles /p my-csr-directory /c "cmd /c aws iot create-certificate-from-csr --certificate-signing-request
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCertificateFromCsrResponse * IoTClient::createCertificateFromCsr(const CreateCertificateFromCsrRequest &request)
{

}

/**
 * Creates a
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateJobResponse * IoTClient::createJob(const CreateJobRequest &request)
{

}

/**
 * Creates a 2048-bit RSA key pair and issues an X.509 certificate using the issued public
 *
 * key>
 *
 * <b>Note</b> This is the only time AWS IoT issues the private key for this certificate, so it is important to keep it in
 * a secure
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateKeysAndCertificateResponse * IoTClient::createKeysAndCertificate(const CreateKeysAndCertificateRequest &request)
{

}

/**
 * Creates an AWS IoT OTAUpdate on a target group of things or
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateOTAUpdateResponse * IoTClient::createOTAUpdate(const CreateOTAUpdateRequest &request)
{

}

/**
 * Creates an AWS IoT
 *
 * policy>
 *
 * The created policy is the default version for the policy. This operation creates a policy version with a version
 * identifier of <b>1</b> and sets <b>1</b> as the policy's default
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePolicyResponse * IoTClient::createPolicy(const CreatePolicyRequest &request)
{

}

/**
 * Creates a new version of the specified AWS IoT policy. To update a policy, create a new policy version. A managed policy
 * can have up to five versions. If the policy has five versions, you must use <a>DeletePolicyVersion</a> to delete an
 * existing version before you create a new
 *
 * one>
 *
 * Optionally, you can set the new version as the policy's default version. The default version is the operative version
 * (that is, the version that is in effect for the certificates to which the policy is
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePolicyVersionResponse * IoTClient::createPolicyVersion(const CreatePolicyVersionRequest &request)
{

}

/**
 * Creates a role
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRoleAliasResponse * IoTClient::createRoleAlias(const CreateRoleAliasRequest &request)
{

}

/**
 * Creates a stream for delivering one or more large files in chunks over MQTT. A stream transports data bytes in chunks or
 * blocks packaged as MQTT messages from a source like S3. You can have one or more files associated with a stream. The
 * total size of a file associated with the stream cannot exceed more than 2 MB. The stream will be created with version 0.
 * If a stream is created with the same streamID as a stream that existed and was deleted within last 90 days, we will
 * resurrect that old stream by incrementing the version by
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStreamResponse * IoTClient::createStream(const CreateStreamRequest &request)
{

}

/**
 * Creates a thing record in the thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateThingResponse * IoTClient::createThing(const CreateThingRequest &request)
{

}

/**
 * Create a thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateThingGroupResponse * IoTClient::createThingGroup(const CreateThingGroupRequest &request)
{

}

/**
 * Creates a new thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateThingTypeResponse * IoTClient::createThingType(const CreateThingTypeRequest &request)
{

}

/**
 * Creates a rule. Creating rules is an administrator-level action. Any user who has permission to create rules will be
 * able to access data processed by the
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTopicRuleResponse * IoTClient::createTopicRule(const CreateTopicRuleRequest &request)
{

}

/**
 * Deletes an
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAuthorizerResponse * IoTClient::deleteAuthorizer(const DeleteAuthorizerRequest &request)
{

}

/**
 * Deletes a registered CA
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCACertificateResponse * IoTClient::deleteCACertificate(const DeleteCACertificateRequest &request)
{

}

/**
 * Deletes the specified
 *
 * certificate>
 *
 * A certificate cannot be deleted if it has a policy attached to it or if its status is set to ACTIVE. To delete a
 * certificate, first use the <a>DetachPrincipalPolicy</a> API to detach all policies. Next, use the
 * <a>UpdateCertificate</a> API to set the certificate to the INACTIVE
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCertificateResponse * IoTClient::deleteCertificate(const DeleteCertificateRequest &request)
{

}

/**
 * Delete an OTA
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteOTAUpdateResponse * IoTClient::deleteOTAUpdate(const DeleteOTAUpdateRequest &request)
{

}

/**
 * Deletes the specified
 *
 * policy>
 *
 * A policy cannot be deleted if it has non-default versions or it is attached to any
 *
 * certificate>
 *
 * To delete a policy, use the DeletePolicyVersion API to delete all non-default versions of the policy; use the
 * DetachPrincipalPolicy API to detach the policy from any certificate; and then use the DeletePolicy API to delete the
 *
 * policy>
 *
 * When a policy is deleted using DeletePolicy, its default version is deleted with
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePolicyResponse * IoTClient::deletePolicy(const DeletePolicyRequest &request)
{

}

/**
 * Deletes the specified version of the specified policy. You cannot delete the default version of a policy using this API.
 * To delete the default version of a policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked as
 * the default version, use
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePolicyVersionResponse * IoTClient::deletePolicyVersion(const DeletePolicyVersionRequest &request)
{

}

/**
 * Deletes a CA certificate registration
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRegistrationCodeResponse * IoTClient::deleteRegistrationCode(const DeleteRegistrationCodeRequest &request)
{

}

/**
 * Deletes a role
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRoleAliasResponse * IoTClient::deleteRoleAlias(const DeleteRoleAliasRequest &request)
{

}

/**
 * Deletes a
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteStreamResponse * IoTClient::deleteStream(const DeleteStreamRequest &request)
{

}

/**
 * Deletes the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteThingResponse * IoTClient::deleteThing(const DeleteThingRequest &request)
{

}

/**
 * Deletes a thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteThingGroupResponse * IoTClient::deleteThingGroup(const DeleteThingGroupRequest &request)
{

}

/**
 * Deletes the specified thing type . You cannot delete a thing type if it has things associated with it. To delete a thing
 * type, first mark it as deprecated by calling <a>DeprecateThingType</a>, then remove any associated things by calling
 * <a>UpdateThing</a> to change the thing type on any associated thing, and finally use <a>DeleteThingType</a> to delete
 * the thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteThingTypeResponse * IoTClient::deleteThingType(const DeleteThingTypeRequest &request)
{

}

/**
 * Deletes the
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTopicRuleResponse * IoTClient::deleteTopicRule(const DeleteTopicRuleRequest &request)
{

}

/**
 * Deletes a logging
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteV2LoggingLevelResponse * IoTClient::deleteV2LoggingLevel(const DeleteV2LoggingLevelRequest &request)
{

}

/**
 * Deprecates a thing type. You can not associate new things with deprecated thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeprecateThingTypeResponse * IoTClient::deprecateThingType(const DeprecateThingTypeRequest &request)
{

}

/**
 * Describes an
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAuthorizerResponse * IoTClient::describeAuthorizer(const DescribeAuthorizerRequest &request)
{

}

/**
 * Describes a registered CA
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCACertificateResponse * IoTClient::describeCACertificate(const DescribeCACertificateRequest &request)
{

}

/**
 * Gets information about the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCertificateResponse * IoTClient::describeCertificate(const DescribeCertificateRequest &request)
{

}

/**
 * Describes the default
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDefaultAuthorizerResponse * IoTClient::describeDefaultAuthorizer(const DescribeDefaultAuthorizerRequest &request)
{

}

/**
 * Returns a unique endpoint specific to the AWS account making the
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEndpointResponse * IoTClient::describeEndpoint(const DescribeEndpointRequest &request)
{

}

/**
 * Describes event
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventConfigurationsResponse * IoTClient::describeEventConfigurations(const DescribeEventConfigurationsRequest &request)
{

}

/**
 * Describes a search
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeIndexResponse * IoTClient::describeIndex(const DescribeIndexRequest &request)
{

}

/**
 * Describes a
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeJobResponse * IoTClient::describeJob(const DescribeJobRequest &request)
{

}

/**
 * Describes a job
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeJobExecutionResponse * IoTClient::describeJobExecution(const DescribeJobExecutionRequest &request)
{

}

/**
 * Describes a role
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeRoleAliasResponse * IoTClient::describeRoleAlias(const DescribeRoleAliasRequest &request)
{

}

/**
 * Gets information about a
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStreamResponse * IoTClient::describeStream(const DescribeStreamRequest &request)
{

}

/**
 * Gets information about the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeThingResponse * IoTClient::describeThing(const DescribeThingRequest &request)
{

}

/**
 * Describe a thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeThingGroupResponse * IoTClient::describeThingGroup(const DescribeThingGroupRequest &request)
{

}

/**
 * Describes a bulk thing provisioning
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeThingRegistrationTaskResponse * IoTClient::describeThingRegistrationTask(const DescribeThingRegistrationTaskRequest &request)
{

}

/**
 * Gets information about the specified thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeThingTypeResponse * IoTClient::describeThingType(const DescribeThingTypeRequest &request)
{

}

/**
 * Detaches a policy from the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachPolicyResponse * IoTClient::detachPolicy(const DetachPolicyRequest &request)
{

}

/**
 * Removes the specified policy from the specified
 *
 * certificate>
 *
 * <b>Note:</b> This API is deprecated. Please use <a>DetachPolicy</a>
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachPrincipalPolicyResponse * IoTClient::detachPrincipalPolicy(const DetachPrincipalPolicyRequest &request)
{

}

/**
 * Detaches the specified principal from the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachThingPrincipalResponse * IoTClient::detachThingPrincipal(const DetachThingPrincipalRequest &request)
{

}

/**
 * Disables the
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableTopicRuleResponse * IoTClient::disableTopicRule(const DisableTopicRuleRequest &request)
{

}

/**
 * Enables the
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableTopicRuleResponse * IoTClient::enableTopicRule(const EnableTopicRuleRequest &request)
{

}

/**
 * Gets effective
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetEffectivePoliciesResponse * IoTClient::getEffectivePolicies(const GetEffectivePoliciesRequest &request)
{

}

/**
 * Gets the search
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIndexingConfigurationResponse * IoTClient::getIndexingConfiguration(const GetIndexingConfigurationRequest &request)
{

}

/**
 * Gets a job
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobDocumentResponse * IoTClient::getJobDocument(const GetJobDocumentRequest &request)
{

}

/**
 * Gets the logging
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoggingOptionsResponse * IoTClient::getLoggingOptions(const GetLoggingOptionsRequest &request)
{

}

/**
 * Gets an OTA
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetOTAUpdateResponse * IoTClient::getOTAUpdate(const GetOTAUpdateRequest &request)
{

}

/**
 * Gets information about the specified policy with the policy document of the default
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPolicyResponse * IoTClient::getPolicy(const GetPolicyRequest &request)
{

}

/**
 * Gets information about the specified policy
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPolicyVersionResponse * IoTClient::getPolicyVersion(const GetPolicyVersionRequest &request)
{

}

/**
 * Gets a registration code used to register a CA certificate with AWS
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRegistrationCodeResponse * IoTClient::getRegistrationCode(const GetRegistrationCodeRequest &request)
{

}

/**
 * Gets information about the
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTopicRuleResponse * IoTClient::getTopicRule(const GetTopicRuleRequest &request)
{

}

/**
 * Gets the fine grained logging
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetV2LoggingOptionsResponse * IoTClient::getV2LoggingOptions(const GetV2LoggingOptionsRequest &request)
{

}

/**
 * Lists the policies attached to the specified thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAttachedPoliciesResponse * IoTClient::listAttachedPolicies(const ListAttachedPoliciesRequest &request)
{

}

/**
 * Lists the authorizers registered in your
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAuthorizersResponse * IoTClient::listAuthorizers(const ListAuthorizersRequest &request)
{

}

/**
 * Lists the CA certificates registered for your AWS
 *
 * account>
 *
 * The results are paginated with a default page size of 25. You can use the returned marker to retrieve additional
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCACertificatesResponse * IoTClient::listCACertificates(const ListCACertificatesRequest &request)
{

}

/**
 * Lists the certificates registered in your AWS
 *
 * account>
 *
 * The results are paginated with a default page size of 25. You can use the returned marker to retrieve additional
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCertificatesResponse * IoTClient::listCertificates(const ListCertificatesRequest &request)
{

}

/**
 * List the device certificates signed by the specified CA
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCertificatesByCAResponse * IoTClient::listCertificatesByCA(const ListCertificatesByCARequest &request)
{

}

/**
 * Lists the search
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIndicesResponse * IoTClient::listIndices(const ListIndicesRequest &request)
{

}

/**
 * Lists the job executions for a
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobExecutionsForJobResponse * IoTClient::listJobExecutionsForJob(const ListJobExecutionsForJobRequest &request)
{

}

/**
 * Lists the job executions for the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobExecutionsForThingResponse * IoTClient::listJobExecutionsForThing(const ListJobExecutionsForThingRequest &request)
{

}

/**
 * Lists
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobsResponse * IoTClient::listJobs(const ListJobsRequest &request)
{

}

/**
 * Lists OTA
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOTAUpdatesResponse * IoTClient::listOTAUpdates(const ListOTAUpdatesRequest &request)
{

}

/**
 * Lists certificates that are being transferred but not yet
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOutgoingCertificatesResponse * IoTClient::listOutgoingCertificates(const ListOutgoingCertificatesRequest &request)
{

}

/**
 * Lists your
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPoliciesResponse * IoTClient::listPolicies(const ListPoliciesRequest &request)
{

}

/**
 * Lists the principals associated with the specified
 *
 * policy>
 *
 * <b>Note:</b> This API is deprecated. Please use <a>ListTargetsForPolicy</a>
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPolicyPrincipalsResponse * IoTClient::listPolicyPrincipals(const ListPolicyPrincipalsRequest &request)
{

}

/**
 * Lists the versions of the specified policy and identifies the default
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPolicyVersionsResponse * IoTClient::listPolicyVersions(const ListPolicyVersionsRequest &request)
{

}

/**
 * Lists the policies attached to the specified principal. If you use an Cognito identity, the ID must be in <a
 * href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_GetCredentialsForIdentity.html#API_GetCredentialsForIdentity_RequestSyntax">AmazonCognito
 * Identity
 *
 * format</a>>
 *
 * <b>Note:</b> This API is deprecated. Please use <a>ListAttachedPolicies</a>
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPrincipalPoliciesResponse * IoTClient::listPrincipalPolicies(const ListPrincipalPoliciesRequest &request)
{

}

/**
 * Lists the things associated with the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPrincipalThingsResponse * IoTClient::listPrincipalThings(const ListPrincipalThingsRequest &request)
{

}

/**
 * Lists the role aliases registered in your
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRoleAliasesResponse * IoTClient::listRoleAliases(const ListRoleAliasesRequest &request)
{

}

/**
 * Lists all of the streams in your AWS
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStreamsResponse * IoTClient::listStreams(const ListStreamsRequest &request)
{

}

/**
 * List targets for the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTargetsForPolicyResponse * IoTClient::listTargetsForPolicy(const ListTargetsForPolicyRequest &request)
{

}

/**
 * List the thing groups in your
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThingGroupsResponse * IoTClient::listThingGroups(const ListThingGroupsRequest &request)
{

}

/**
 * List the thing groups to which the specified thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThingGroupsForThingResponse * IoTClient::listThingGroupsForThing(const ListThingGroupsForThingRequest &request)
{

}

/**
 * Lists the principals associated with the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThingPrincipalsResponse * IoTClient::listThingPrincipals(const ListThingPrincipalsRequest &request)
{

}

/**
 * Information about the thing registration
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThingRegistrationTaskReportsResponse * IoTClient::listThingRegistrationTaskReports(const ListThingRegistrationTaskReportsRequest &request)
{

}

/**
 * List bulk thing provisioning
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThingRegistrationTasksResponse * IoTClient::listThingRegistrationTasks(const ListThingRegistrationTasksRequest &request)
{

}

/**
 * Lists the existing thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThingTypesResponse * IoTClient::listThingTypes(const ListThingTypesRequest &request)
{

}

/**
 * Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b> parameters to filter your things. For example,
 * calling <code>ListThings</code> with attributeName=Color and attributeValue=Red retrieves all things in the registry
 * that contain an attribute <b>Color</b> with the value <b>Red</b>.
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThingsResponse * IoTClient::listThings(const ListThingsRequest &request)
{

}

/**
 * Lists the things in the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListThingsInThingGroupResponse * IoTClient::listThingsInThingGroup(const ListThingsInThingGroupRequest &request)
{

}

/**
 * Lists the rules for the specific
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTopicRulesResponse * IoTClient::listTopicRules(const ListTopicRulesRequest &request)
{

}

/**
 * Lists logging
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListV2LoggingLevelsResponse * IoTClient::listV2LoggingLevels(const ListV2LoggingLevelsRequest &request)
{

}

/**
 * Registers a CA certificate with AWS IoT. This CA certificate can then be used to sign device certificates, which can be
 * then registered with AWS IoT. You can register up to 10 CA certificates per AWS account that have the same subject
 * field. This enables you to have up to 10 certificate authorities sign your device certificates. If you have more than
 * one CA certificate registered, make sure you pass the CA certificate when you register your device certificates with the
 * RegisterCertificate
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterCACertificateResponse * IoTClient::registerCACertificate(const RegisterCACertificateRequest &request)
{

}

/**
 * Registers a device certificate with AWS IoT. If you have more than one CA certificate that has the same subject field,
 * you must specify the CA certificate that was used to sign the device certificate being
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterCertificateResponse * IoTClient::registerCertificate(const RegisterCertificateRequest &request)
{

}

/**
 * Provisions a
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterThingResponse * IoTClient::registerThing(const RegisterThingRequest &request)
{

}

/**
 * Rejects a pending certificate transfer. After AWS IoT rejects a certificate transfer, the certificate status changes
 * from <b>PENDING_TRANSFER</b> to
 *
 * <b>INACTIVE</b>>
 *
 * To check for pending certificate transfers, call <a>ListCertificates</a> to enumerate your
 *
 * certificates>
 *
 * This operation can only be called by the transfer destination. After it is called, the certificate will be returned to
 * the source's account in the INACTIVE
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RejectCertificateTransferResponse * IoTClient::rejectCertificateTransfer(const RejectCertificateTransferRequest &request)
{

}

/**
 * Remove the specified thing from the specified
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveThingFromThingGroupResponse * IoTClient::removeThingFromThingGroup(const RemoveThingFromThingGroupRequest &request)
{

}

/**
 * Replaces the rule. You must specify all parameters for the new rule. Creating rules is an administrator-level action.
 * Any user who has permission to create rules will be able to access data processed by the
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReplaceTopicRuleResponse * IoTClient::replaceTopicRule(const ReplaceTopicRuleRequest &request)
{

}

/**
 * The query search
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchIndexResponse * IoTClient::searchIndex(const SearchIndexRequest &request)
{

}

/**
 * Sets the default authorizer. This will be used if a websocket connection is made without specifying an
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetDefaultAuthorizerResponse * IoTClient::setDefaultAuthorizer(const SetDefaultAuthorizerRequest &request)
{

}

/**
 * Sets the specified version of the specified policy as the policy's default (operative) version. This action affects all
 * certificates to which the policy is attached. To list the principals the policy is attached to, use the
 * ListPrincipalPolicy
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetDefaultPolicyVersionResponse * IoTClient::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request)
{

}

/**
 * Sets the logging
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetLoggingOptionsResponse * IoTClient::setLoggingOptions(const SetLoggingOptionsRequest &request)
{

}

/**
 * Sets the logging
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetV2LoggingLevelResponse * IoTClient::setV2LoggingLevel(const SetV2LoggingLevelRequest &request)
{

}

/**
 * Sets the logging options for the V2 logging
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetV2LoggingOptionsResponse * IoTClient::setV2LoggingOptions(const SetV2LoggingOptionsRequest &request)
{

}

/**
 * Creates a bulk thing provisioning
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartThingRegistrationTaskResponse * IoTClient::startThingRegistrationTask(const StartThingRegistrationTaskRequest &request)
{

}

/**
 * Cancels a bulk thing provisioning
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopThingRegistrationTaskResponse * IoTClient::stopThingRegistrationTask(const StopThingRegistrationTaskRequest &request)
{

}

/**
 * Test custom
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestAuthorizationResponse * IoTClient::testAuthorization(const TestAuthorizationRequest &request)
{

}

/**
 * Invoke the specified custom authorizer for testing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestInvokeAuthorizerResponse * IoTClient::testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request)
{

}

/**
 * Transfers the specified certificate to the specified AWS
 *
 * account>
 *
 * You can cancel the transfer until it is acknowledged by the
 *
 * recipient>
 *
 * No notification is sent to the transfer destination's account. It is up to the caller to notify the transfer
 *
 * target>
 *
 * The certificate being transferred must not be in the ACTIVE state. You can use the UpdateCertificate API to deactivate
 *
 * it>
 *
 * The certificate must not have any policies attached to it. You can use the DetachPrincipalPolicy API to detach
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TransferCertificateResponse * IoTClient::transferCertificate(const TransferCertificateRequest &request)
{

}

/**
 * Updates an
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAuthorizerResponse * IoTClient::updateAuthorizer(const UpdateAuthorizerRequest &request)
{

}

/**
 * Updates a registered CA
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCACertificateResponse * IoTClient::updateCACertificate(const UpdateCACertificateRequest &request)
{

}

/**
 * Updates the status of the specified certificate. This operation is
 *
 * idempotent>
 *
 * Moving a certificate from the ACTIVE state (including REVOKED) will not disconnect currently connected devices, but
 * these devices will be unable to
 *
 * reconnect>
 *
 * The ACTIVE state is required to authenticate devices connecting to AWS IoT using a
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCertificateResponse * IoTClient::updateCertificate(const UpdateCertificateRequest &request)
{

}

/**
 * Updates the event
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEventConfigurationsResponse * IoTClient::updateEventConfigurations(const UpdateEventConfigurationsRequest &request)
{

}

/**
 * Updates the search
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateIndexingConfigurationResponse * IoTClient::updateIndexingConfiguration(const UpdateIndexingConfigurationRequest &request)
{

}

/**
 * Updates a role
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRoleAliasResponse * IoTClient::updateRoleAlias(const UpdateRoleAliasRequest &request)
{

}

/**
 * Updates an existing stream. The stream version will be incremented by
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateStreamResponse * IoTClient::updateStream(const UpdateStreamRequest &request)
{

}

/**
 * Updates the data for a
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateThingResponse * IoTClient::updateThing(const UpdateThingRequest &request)
{

}

/**
 * Update a thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateThingGroupResponse * IoTClient::updateThingGroup(const UpdateThingGroupRequest &request)
{

}

/**
 * Updates the groups to which the thing
 *
 * @param  request Request to send to AWS IoT.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateThingGroupsForThingResponse * IoTClient::updateThingGroupsForThing(const UpdateThingGroupsForThingRequest &request)
{

}

/**
 * @internal
 *
 * @class  IoTClientPrivate
 *
 * @brief  Private implementation for IoTClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IoTClientPrivate object.
 *
 * @param  q  Pointer to this object's public IoTClient instance.
 */
IoTClientPrivate::IoTClientPrivate(IoTClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace IoT
} // namespace AWS
