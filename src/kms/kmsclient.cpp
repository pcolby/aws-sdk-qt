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

#include "kmsclient.h"
#include "kmsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace KMS {

/**
 * @class  KmsClient
 *
 * @brief  Client for AWS Key Management Service (KMS)
 *
 * <fullname>AWS Key Management Service</fullname>
 *
 * AWS Key Management Service (AWS KMS) is an encryption and key management web service. This guide describes the AWS KMS
 * operations that you can call programmatically. For general information about AWS KMS, see the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/">AWS Key Management Service Developer
 *
 * Guide</a>> <note>
 *
 * AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 * .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS KMS and other AWS
 * services. For example, the SDKs take care of tasks such as signing requests (see below), managing errors, and retrying
 * requests automatically. For more information about the AWS SDKs, including how to download and install them, see <a
 * href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * Services</a>> </note>
 *
 * We recommend that you use the AWS SDKs to make programmatic API calls to AWS
 *
 * KMS>
 *
 * Clients must support TLS (Transport Layer Security) 1.0. We recommend TLS 1.2. Clients must also support cipher suites
 * with Perfect Forward Secrecy (PFS) such as Ephemeral Diffie-Hellman (DHE) or Elliptic Curve Ephemeral Diffie-Hellman
 * (ECDHE). Most modern systems such as Java 7 and later support these
 *
 * modes>
 *
 * <b>Signing Requests</b>
 *
 * </p
 *
 * Requests must be signed by using an access key ID and a secret access key. We strongly recommend that you <i>do not</i>
 * use your AWS account (root) access key ID and secret key for everyday work with AWS KMS. Instead, use the access key ID
 * and secret access key for an IAM user, or you can use the AWS Security Token Service to generate temporary security
 * credentials that you can use to sign
 *
 * requests>
 *
 * All AWS KMS operations require <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version
 *
 * 4</a>>
 *
 * <b>Logging API Requests</b>
 *
 * </p
 *
 * AWS KMS supports AWS CloudTrail, a service that logs AWS API calls and related events for your AWS account and delivers
 * them to an Amazon S3 bucket that you specify. By using the information collected by CloudTrail, you can determine what
 * requests were made to AWS KMS, who made the request, when it was made, and so on. To learn more about CloudTrail,
 * including how to turn it on and find your log files, see the <a
 * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/">AWS CloudTrail User
 *
 * Guide</a>>
 *
 * <b>Additional Resources</b>
 *
 * </p
 *
 * For more information about credentials and request signing, see the
 *
 * following> <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS Security Credentials</a> - This
 * topic provides general information about the types of credentials used for accessing
 *
 * AWS> </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security Credentials</a> -
 * This section of the <i>IAM User Guide</i> describes how to create and use temporary security
 *
 * credentials> </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>
 * - This set of topics walks you through the process of signing a request using an access key ID and a secret access
 *
 * key> </li> </ul>
 *
 * <b>Commonly Used APIs</b>
 *
 * </p
 *
 * Of the APIs discussed in this guide, the following will prove the most useful for most applications. You will likely
 * perform actions other than these, such as creating keys and assigning policies, by using the
 *
 * console> <ul> <li>
 *
 * <a>Encrypt</a>
 *
 * </p </li> <li>
 *
 * <a>Decrypt</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKey</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyWithoutPlaintext</a>
 */

/**
 * @brief  Constructs a new KmsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
KmsClient::KmsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new KmsClientPrivate(this), parent)
{
    Q_D(KmsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("kms");
}

/**
 * @brief  Constructs a new KmsClient object.
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
KmsClient::KmsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new KmsClientPrivate(this), parent)
{
    Q_D(KmsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("kms");
}

/// @todo override getEndpoint() to use kms.

/**
 * Cancels the deletion of a customer master key (CMK). When this operation is successful, the CMK is set to the
 * <code>Disabled</code> state. To enable a CMK, use <a>EnableKey</a>. You cannot perform this operation on a CMK in a
 * different AWS
 *
 * account>
 *
 * For more information about scheduling and canceling deletion of a CMK, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting Customer Master Keys</a> in the
 * <i>AWS Key Management Service Developer
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelKeyDeletionResponse * KmsClient::cancelKeyDeletion(const CancelKeyDeletionRequest &request)
{

}

/**
 * Creates a display name for a customer master key (CMK). You can use an alias to identify a CMK in selected operations,
 * such as <a>Encrypt</a> and <a>GenerateDataKey</a>.
 *
 * </p
 *
 * Each CMK can have multiple aliases, but each alias points to only one CMK. The alias name must be unique in the AWS
 * account and region. To simplify code that runs in multiple regions, use the same alias name, but point it to a different
 * CMK in each region.
 *
 * </p
 *
 * Because an alias is not a property of a CMK, you can delete and change the aliases of a CMK without affecting the CMK.
 * Also, aliases do not appear in the response from the <a>DescribeKey</a> operation. To get the aliases of all CMKs, use
 * the <a>ListAliases</a>
 *
 * operation>
 *
 * An alias must start with the word <code>alias</code> followed by a forward slash (<code>alias/</code>). The alias name
 * can contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). Alias names cannot begin
 * with <code>aws</code>; that alias name prefix is reserved by Amazon Web Services
 *
 * (AWS)>
 *
 * The alias and the CMK it is mapped to must be in the same AWS account and the same region. You cannot perform this
 * operation on an alias in a different AWS
 *
 * account>
 *
 * To map an existing alias to a different CMK, call
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAliasResponse * KmsClient::createAlias(const CreateAliasRequest &request)
{

}

/**
 * Adds a grant to a customer master key (CMK). The grant specifies who can use the CMK and under what conditions. When
 * setting permissions, grants are an alternative to key policies.
 *
 * </p
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN in the value of the KeyId parameter.
 * For more information about grants, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants</a> in the <i>AWS Key Management Service
 * Developer
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGrantResponse * KmsClient::createGrant(const CreateGrantRequest &request)
{

}

/**
 * Creates a customer master key (CMK) in the caller's AWS
 *
 * account>
 *
 * You can use a CMK to encrypt small amounts of data (4 KiB or less) directly, but CMKs are more commonly used to encrypt
 * data encryption keys (DEKs), which are used to encrypt raw data. For more information about DEKs and the difference
 * between CMKs and DEKs, see the
 *
 * following> <ul> <li>
 *
 * The <a>GenerateDataKey</a>
 *
 * operatio> </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS Key Management Service Concepts</a> in
 * the <i>AWS Key Management Service Developer Guide</i>
 *
 * </p </li> </ul>
 *
 * You cannot use this operation to create a CMK in a different AWS
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateKeyResponse * KmsClient::createKey(const CreateKeyRequest &request)
{

}

/**
 * Decrypts ciphertext. Ciphertext is plaintext that has been previously encrypted by using any of the following
 *
 * operations> <ul> <li>
 *
 * <a>GenerateDataKey</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyWithoutPlaintext</a>
 *
 * </p </li> <li>
 *
 * <a>Encrypt</a>
 *
 * </p </li> </ul>
 *
 * Note that if a caller has been granted access permissions to all keys (through, for example, IAM user policies that
 * grant <code>Decrypt</code> permission on all resources), then ciphertext encrypted by using keys in other accounts where
 * the key grants access to the caller can be decrypted. To remedy this, we recommend that you do not grant
 * <code>Decrypt</code> access in an IAM user policy. Instead grant <code>Decrypt</code> access only in key policies. If
 * you must grant <code>Decrypt</code> access in an IAM user policy, you should scope the resource to specific keys or to
 * specific trusted
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DecryptResponse * KmsClient::decrypt(const DecryptRequest &request)
{

}

/**
 * Deletes the specified alias. You cannot perform this operation on an alias in a different AWS account.
 *
 * </p
 *
 * Because an alias is not a property of a CMK, you can delete and change the aliases of a CMK without affecting the CMK.
 * Also, aliases do not appear in the response from the <a>DescribeKey</a> operation. To get the aliases of all CMKs, use
 * the <a>ListAliases</a> operation.
 *
 * </p
 *
 * Each CMK can have multiple aliases. To change the alias of a CMK, use <a>DeleteAlias</a> to delete the current alias and
 * <a>CreateAlias</a> to create a new alias. To associate an existing alias with a different customer master key (CMK),
 * call
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAliasResponse * KmsClient::deleteAlias(const DeleteAliasRequest &request)
{

}

/**
 * Deletes key material that you previously imported. This operation makes the specified customer master key (CMK)
 * unusable. For more information about importing key material into AWS KMS, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing Key Material</a> in the <i>AWS
 * Key Management Service Developer Guide</i>. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * When the specified CMK is in the <code>PendingDeletion</code> state, this operation does not change the CMK's state.
 * Otherwise, it changes the CMK's state to
 *
 * <code>PendingImport</code>>
 *
 * After you delete key material, you can use <a>ImportKeyMaterial</a> to reimport the same key material into the
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteImportedKeyMaterialResponse * KmsClient::deleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest &request)
{

}

/**
 * Provides detailed information about the specified customer master key
 *
 * (CMK)>
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN or alias ARN in the value of the
 * KeyId
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeKeyResponse * KmsClient::describeKey(const DescribeKeyRequest &request)
{

}

/**
 * Sets the state of a customer master key (CMK) to disabled, thereby preventing its use for cryptographic operations. You
 * cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * For more information about how key state affects the use of a CMK, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects the Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableKeyResponse * KmsClient::disableKey(const DisableKeyRequest &request)
{

}

/**
 * Disables automatic rotation of the key material for the specified customer master key (CMK). You cannot perform this
 * operation on a CMK in a different AWS
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableKeyRotationResponse * KmsClient::disableKeyRotation(const DisableKeyRotationRequest &request)
{

}

/**
 * Sets the state of a customer master key (CMK) to enabled, thereby permitting its use for cryptographic operations. You
 * cannot perform this operation on a CMK in a different AWS
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableKeyResponse * KmsClient::enableKey(const EnableKeyRequest &request)
{

}

/**
 * Enables automatic rotation of the key material for the specified customer master key (CMK). You cannot perform this
 * operation on a CMK in a different AWS
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableKeyRotationResponse * KmsClient::enableKeyRotation(const EnableKeyRotationRequest &request)
{

}

/**
 * Encrypts plaintext into ciphertext by using a customer master key (CMK). The <code>Encrypt</code> operation has two
 * primary use
 *
 * cases> <ul> <li>
 *
 * You can encrypt up to 4 kilobytes (4096 bytes) of arbitrary data such as an RSA key, a database password, or other
 * sensitive
 *
 * information> </li> <li>
 *
 * To move encrypted data from one AWS region to another, you can use this operation to encrypt in the new region the
 * plaintext data key that was used to encrypt the data in the original region. This provides you with an encrypted copy of
 * the data key that can be decrypted in the new region and used there to decrypt the encrypted
 *
 * data> </li> </ul>
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN or alias ARN in the value of the
 * KeyId
 *
 * parameter>
 *
 * Unless you are moving encrypted data from one region to another, you don't use this operation to encrypt a generated
 * data key within a region. To get data keys that are already encrypted, call the <a>GenerateDataKey</a> or
 * <a>GenerateDataKeyWithoutPlaintext</a> operation. Data keys don't need to be encrypted again by calling
 *
 * <code>Encrypt</code>>
 *
 * To encrypt data locally in your application, use the <a>GenerateDataKey</a> operation to return a plaintext data
 * encryption key and a copy of the key encrypted under the CMK of your
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EncryptResponse * KmsClient::encrypt(const EncryptRequest &request)
{

}

/**
 * Returns a data encryption key that you can use in your application to encrypt data locally.
 *
 * </p
 *
 * You must specify the customer master key (CMK) under which to generate the data key. You must also specify the length of
 * the data key using either the <code>KeySpec</code> or <code>NumberOfBytes</code> field. You must specify one field or
 * the other, but not both. For common key lengths (128-bit and 256-bit symmetric keys), we recommend that you use
 * <code>KeySpec</code>. To perform this operation on a CMK in a different AWS account, specify the key ARN or alias ARN in
 * the value of the KeyId
 *
 * parameter>
 *
 * This operation returns a plaintext copy of the data key in the <code>Plaintext</code> field of the response, and an
 * encrypted copy of the data key in the <code>CiphertextBlob</code> field. The data key is encrypted under the CMK
 * specified in the <code>KeyId</code> field of the request.
 *
 * </p
 *
 * We recommend that you use the following pattern to encrypt data locally in your
 *
 * application> <ol> <li>
 *
 * Use this operation (<code>GenerateDataKey</code>) to get a data encryption
 *
 * key> </li> <li>
 *
 * Use the plaintext data encryption key (returned in the <code>Plaintext</code> field of the response) to encrypt data
 * locally, then erase the plaintext data key from
 *
 * memory> </li> <li>
 *
 * Store the encrypted data key (returned in the <code>CiphertextBlob</code> field of the response) alongside the locally
 * encrypted
 *
 * data> </li> </ol>
 *
 * To decrypt data
 *
 * locally> <ol> <li>
 *
 * Use the <a>Decrypt</a> operation to decrypt the encrypted data key into a plaintext copy of the data
 *
 * key> </li> <li>
 *
 * Use the plaintext data key to decrypt data locally, then erase the plaintext data key from
 *
 * memory> </li> </ol>
 *
 * To return only an encrypted copy of the data key, use <a>GenerateDataKeyWithoutPlaintext</a>. To return a random byte
 * string that is cryptographically secure, use
 *
 * <a>GenerateRandom</a>>
 *
 * If you use the optional <code>EncryptionContext</code> field, you must store at least enough information to be able to
 * reconstruct the full encryption context when you later send the ciphertext to the <a>Decrypt</a> operation. It is a good
 * practice to choose an encryption context that you can reconstruct on the fly to better secure the ciphertext. For more
 * information, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
 * Context</a> in the <i>AWS Key Management Service Developer
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GenerateDataKeyResponse * KmsClient::generateDataKey(const GenerateDataKeyRequest &request)
{

}

/**
 * Returns a data encryption key encrypted under a customer master key (CMK). This operation is identical to
 * <a>GenerateDataKey</a> but returns only the encrypted copy of the data key.
 *
 * </p
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN or alias ARN in the value of the
 * KeyId
 *
 * parameter>
 *
 * This operation is useful in a system that has multiple components with different degrees of trust. For example, consider
 * a system that stores encrypted data in containers. Each container stores the encrypted data and an encrypted copy of the
 * data key. One component of the system, called the <i>control plane</i>, creates new containers. When it creates a new
 * container, it uses this operation (<code>GenerateDataKeyWithoutPlaintext</code>) to get an encrypted data key and then
 * stores it in the container. Later, a different component of the system, called the <i>data plane</i>, puts encrypted
 * data into the containers. To do this, it passes the encrypted data key to the <a>Decrypt</a> operation, then uses the
 * returned plaintext data key to encrypt data, and finally stores the encrypted data in the container. In this system, the
 * control plane never sees the plaintext data
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GenerateDataKeyWithoutPlaintextResponse * KmsClient::generateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest &request)
{

}

/**
 * Returns a random byte string that is cryptographically
 *
 * secure>
 *
 * For more information about entropy and random number generation, see the <a
 * href="https://d0.awsstatic.com/whitepapers/KMS-Cryptographic-Details.pdf">AWS Key Management Service Cryptographic
 * Details</a>
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GenerateRandomResponse * KmsClient::generateRandom(const GenerateRandomRequest &request)
{

}

/**
 * Gets a key policy attached to the specified customer master key (CMK). You cannot perform this operation on a CMK in a
 * different AWS
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetKeyPolicyResponse * KmsClient::getKeyPolicy(const GetKeyPolicyRequest &request)
{

}

/**
 * Gets a Boolean value that indicates whether automatic rotation of the key material is enabled for the specified customer
 * master key
 *
 * (CMK)>
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN in the value of the KeyId
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetKeyRotationStatusResponse * KmsClient::getKeyRotationStatus(const GetKeyRotationStatusRequest &request)
{

}

/**
 * Returns the items you need in order to import key material into AWS KMS from your existing key management
 * infrastructure. For more information about importing key material into AWS KMS, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing Key Material</a> in the <i>AWS
 * Key Management Service Developer
 *
 * Guide</i>>
 *
 * You must specify the key ID of the customer master key (CMK) into which you will import key material. This CMK's
 * <code>Origin</code> must be <code>EXTERNAL</code>. You must also specify the wrapping algorithm and type of wrapping key
 * (public key) that you will use to encrypt the key material. You cannot perform this operation on a CMK in a different
 * AWS
 *
 * account>
 *
 * This operation returns a public key and an import token. Use the public key to encrypt the key material. Store the
 * import token to send with a subsequent <a>ImportKeyMaterial</a> request. The public key and import token from the same
 * response must be used together. These items are valid for 24 hours. When they expire, they cannot be used for a
 * subsequent <a>ImportKeyMaterial</a> request. To get new ones, send another <code>GetParametersForImport</code>
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetParametersForImportResponse * KmsClient::getParametersForImport(const GetParametersForImportRequest &request)
{

}

/**
 * Imports key material into an existing AWS KMS customer master key (CMK) that was created without key material. You
 * cannot perform this operation on a CMK in a different AWS account. For more information about creating CMKs with no key
 * material and then importing key material, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing Key Material</a> in the <i>AWS
 * Key Management Service Developer
 *
 * Guide</i>>
 *
 * Before using this operation, call <a>GetParametersForImport</a>. Its response includes a public key and an import token.
 * Use the public key to encrypt the key material. Then, submit the import token from the same
 * <code>GetParametersForImport</code>
 *
 * response>
 *
 * When calling this operation, you must specify the following
 *
 * values> <ul> <li>
 *
 * The key ID or key ARN of a CMK with no key material. Its <code>Origin</code> must be
 *
 * <code>EXTERNAL</code>>
 *
 * To create a CMK with no key material, call <a>CreateKey</a> and set the value of its <code>Origin</code> parameter to
 * <code>EXTERNAL</code>. To get the <code>Origin</code> of a CMK, call
 *
 * <a>DescribeKey</a>.> </li> <li>
 *
 * The encrypted key material. To get the public key to encrypt the key material, call
 *
 * <a>GetParametersForImport</a>> </li> <li>
 *
 * The import token that <a>GetParametersForImport</a> returned. This token and the public key used to encrypt the key
 * material must have come from the same
 *
 * response> </li> <li>
 *
 * Whether the key material expires and if so, when. If you set an expiration date, you can change it only by reimporting
 * the same key material and specifying a new expiration date. If the key material expires, AWS KMS deletes the key
 * material and the CMK becomes unusable. To use the CMK again, you must reimport the same key
 *
 * material> </li> </ul>
 *
 * When this operation is successful, the CMK's key state changes from <code>PendingImport</code> to <code>Enabled</code>,
 * and you can use the CMK. After you successfully import key material into a CMK, you can reimport the same key material
 * into that CMK, but you cannot import different key
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportKeyMaterialResponse * KmsClient::importKeyMaterial(const ImportKeyMaterialRequest &request)
{

}

/**
 * Gets a list of all aliases in the caller's AWS account and region. You cannot list aliases in other accounts. For more
 * information about aliases, see
 *
 * <a>CreateAlias</a>>
 *
 * The response might include several aliases that do not have a <code>TargetKeyId</code> field because they are not
 * associated with a CMK. These are predefined aliases that are reserved for CMKs managed by AWS services. If an alias is
 * not associated with a CMK, the alias does not count against the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/limits.html#aliases-limit">alias limit</a> for your
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAliasesResponse * KmsClient::listAliases(const ListAliasesRequest &request)
{

}

/**
 * Gets a list of all grants for the specified customer master key
 *
 * (CMK)>
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN in the value of the KeyId
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGrantsResponse * KmsClient::listGrants(const ListGrantsRequest &request)
{

}

/**
 * Gets the names of the key policies that are attached to a customer master key (CMK). This operation is designed to get
 * policy names that you can use in a <a>GetKeyPolicy</a> operation. However, the only valid policy name is
 * <code>default</code>. You cannot perform this operation on a CMK in a different AWS
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListKeyPoliciesResponse * KmsClient::listKeyPolicies(const ListKeyPoliciesRequest &request)
{

}

/**
 * Gets a list of all customer master keys (CMKs) in the caller's AWS account and
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListKeysResponse * KmsClient::listKeys(const ListKeysRequest &request)
{

}

/**
 * Returns a list of all tags for the specified customer master key
 *
 * (CMK)>
 *
 * You cannot perform this operation on a CMK in a different AWS
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourceTagsResponse * KmsClient::listResourceTags(const ListResourceTagsRequest &request)
{

}

/**
 * Returns a list of all grants for which the grant's <code>RetiringPrincipal</code> matches the one
 *
 * specified>
 *
 * A typical use is to list all grants that you are able to retire. To retire a grant, use
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRetirableGrantsResponse * KmsClient::listRetirableGrants(const ListRetirableGrantsRequest &request)
{

}

/**
 * Attaches a key policy to the specified customer master key (CMK). You cannot perform this operation on a CMK in a
 * different AWS
 *
 * account>
 *
 * For more information about key policies, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key Policies</a> in the <i>AWS Key
 * Management Service Developer
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutKeyPolicyResponse * KmsClient::putKeyPolicy(const PutKeyPolicyRequest &request)
{

}

/**
 * Encrypts data on the server side with a new customer master key (CMK) without exposing the plaintext of the data on the
 * client side. The data is first decrypted and then reencrypted. You can also use this operation to change the encryption
 * context of a ciphertext.
 *
 * </p
 *
 * You can reencrypt data using CMKs in different AWS
 *
 * accounts>
 *
 * Unlike other operations, <code>ReEncrypt</code> is authorized twice, once as <code>ReEncryptFrom</code> on the source
 * CMK and once as <code>ReEncryptTo</code> on the destination CMK. We recommend that you include the
 * <code>"kms:ReEncrypt*"</code> permission in your <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">key policies</a> to permit reencryption
 * from or to the CMK. This permission is automatically included in the key policy when you create a CMK through the
 * console, but you must include it manually when you create a CMK programmatically or when you set a key policy with the
 * <a>PutKeyPolicy</a>
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReEncryptResponse * KmsClient::reEncrypt(const ReEncryptRequest &request)
{

}

/**
 * Retires a grant. To clean up, you can retire a grant when you're done using it. You should revoke a grant when you
 * intend to actively deny operations that depend on it. The following are permitted to call this
 *
 * API> <ul> <li>
 *
 * The AWS account (root user) under which the grant was
 *
 * create> </li> <li>
 *
 * The <code>RetiringPrincipal</code>, if present in the
 *
 * gran> </li> <li>
 *
 * The <code>GranteePrincipal</code>, if <code>RetireGrant</code> is an operation specified in the
 *
 * gran> </li> </ul>
 *
 * You must identify the grant to retire by its grant token or by a combination of the grant ID and the Amazon Resource
 * Name (ARN) of the customer master key (CMK). A grant token is a unique variable-length base64-encoded string. A grant ID
 * is a 64 character unique identifier of a grant. The <a>CreateGrant</a> operation returns
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RetireGrantResponse * KmsClient::retireGrant(const RetireGrantRequest &request)
{

}

/**
 * Revokes the specified grant for the specified customer master key (CMK). You can revoke a grant to actively deny
 * operations that depend on
 *
 * it>
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN in the value of the KeyId
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RevokeGrantResponse * KmsClient::revokeGrant(const RevokeGrantRequest &request)
{

}

/**
 * Schedules the deletion of a customer master key (CMK). You may provide a waiting period, specified in days, before
 * deletion occurs. If you do not provide a waiting period, the default period of 30 days is used. When this operation is
 * successful, the state of the CMK changes to <code>PendingDeletion</code>. Before the waiting period ends, you can use
 * <a>CancelKeyDeletion</a> to cancel the deletion of the CMK. After the waiting period ends, AWS KMS deletes the CMK and
 * all AWS KMS data associated with it, including all aliases that refer to
 *
 * it>
 *
 * You cannot perform this operation on a CMK in a different AWS
 *
 * account> <b>
 *
 * Deleting a CMK is a destructive and potentially dangerous operation. When a CMK is deleted, all data that was encrypted
 * under the CMK is rendered unrecoverable. To restrict the use of a CMK without deleting it, use
 *
 * <a>DisableKey</a>> </b>
 *
 * For more information about scheduling a CMK for deletion, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting Customer Master Keys</a> in the
 * <i>AWS Key Management Service Developer
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ScheduleKeyDeletionResponse * KmsClient::scheduleKeyDeletion(const ScheduleKeyDeletionRequest &request)
{

}

/**
 * Adds or overwrites one or more tags for the specified customer master key (CMK). You cannot perform this operation on a
 * CMK in a different AWS
 *
 * account>
 *
 * Each tag consists of a tag key and a tag value. Tag keys and tag values are both required, but tag values can be empty
 * (null)
 *
 * strings>
 *
 * You cannot use the same tag key more than once per CMK. For example, consider a CMK with one tag whose tag key is
 * <code>Purpose</code> and tag value is <code>Test</code>. If you send a <code>TagResource</code> request for this CMK
 * with a tag key of <code>Purpose</code> and a tag value of <code>Prod</code>, it does not create a second tag. Instead,
 * the original tag is overwritten with the new tag
 *
 * value>
 *
 * For information about the rules that apply to tag keys and tag values, see <a
 * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined Tag
 * Restrictions</a> in the <i>AWS Billing and Cost Management User
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * KmsClient::tagResource(const TagResourceRequest &request)
{

}

/**
 * Removes the specified tag or tags from the specified customer master key (CMK). You cannot perform this operation on a
 * CMK in a different AWS
 *
 * account>
 *
 * To remove a tag, you specify the tag key for each tag to remove. You do not specify the tag value. To overwrite the tag
 * value for an existing tag, use
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * KmsClient::untagResource(const UntagResourceRequest &request)
{

}

/**
 * Associates an existing alias with a different customer master key (CMK). Each CMK can have multiple aliases, but the
 * aliases must be unique within the account and region. You cannot perform this operation on an alias in a different AWS
 *
 * account>
 *
 * This operation works only on existing aliases. To change the alias of a CMK to a new value, use <a>CreateAlias</a> to
 * create a new alias and <a>DeleteAlias</a> to delete the old
 *
 * alias>
 *
 * Because an alias is not a property of a CMK, you can create, update, and delete the aliases of a CMK without affecting
 * the CMK. Also, aliases do not appear in the response from the <a>DescribeKey</a> operation. To get the aliases of all
 * CMKs in the account, use the <a>ListAliases</a> operation.
 *
 * </p
 *
 * An alias name can contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). An alias
 * must start with the word <code>alias</code> followed by a forward slash (<code>alias/</code>). The alias name can
 * contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). Alias names cannot begin
 * with <code>aws</code>; that alias name prefix is reserved by Amazon Web Services
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAliasResponse * KmsClient::updateAlias(const UpdateAliasRequest &request)
{

}

/**
 * Updates the description of a customer master key (CMK). To see the decription of a CMK, use <a>DescribeKey</a>.
 *
 * </p
 *
 * You cannot perform this operation on a CMK in a different AWS
 *
 * @param  request Request to send to AWS Key Management Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateKeyDescriptionResponse * KmsClient::updateKeyDescription(const UpdateKeyDescriptionRequest &request)
{

}

/**
 * @internal
 *
 * @class  KmsClientPrivate
 *
 * @brief  Private implementation for KmsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KmsClientPrivate object.
 *
 * @param  q  Pointer to this object's public KmsClient instance.
 */
KmsClientPrivate::KmsClientPrivate(KmsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace KMS
} // namespace AWS
