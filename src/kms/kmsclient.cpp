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

#include "kmsclient.h"
#include "kmsclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelkeydeletionrequest.h"
#include "cancelkeydeletionresponse.h"
#include "connectcustomkeystorerequest.h"
#include "connectcustomkeystoreresponse.h"
#include "createaliasrequest.h"
#include "createaliasresponse.h"
#include "createcustomkeystorerequest.h"
#include "createcustomkeystoreresponse.h"
#include "creategrantrequest.h"
#include "creategrantresponse.h"
#include "createkeyrequest.h"
#include "createkeyresponse.h"
#include "decryptrequest.h"
#include "decryptresponse.h"
#include "deletealiasrequest.h"
#include "deletealiasresponse.h"
#include "deletecustomkeystorerequest.h"
#include "deletecustomkeystoreresponse.h"
#include "deleteimportedkeymaterialrequest.h"
#include "deleteimportedkeymaterialresponse.h"
#include "describecustomkeystoresrequest.h"
#include "describecustomkeystoresresponse.h"
#include "describekeyrequest.h"
#include "describekeyresponse.h"
#include "disablekeyrequest.h"
#include "disablekeyresponse.h"
#include "disablekeyrotationrequest.h"
#include "disablekeyrotationresponse.h"
#include "disconnectcustomkeystorerequest.h"
#include "disconnectcustomkeystoreresponse.h"
#include "enablekeyrequest.h"
#include "enablekeyresponse.h"
#include "enablekeyrotationrequest.h"
#include "enablekeyrotationresponse.h"
#include "encryptrequest.h"
#include "encryptresponse.h"
#include "generatedatakeyrequest.h"
#include "generatedatakeyresponse.h"
#include "generatedatakeywithoutplaintextrequest.h"
#include "generatedatakeywithoutplaintextresponse.h"
#include "generaterandomrequest.h"
#include "generaterandomresponse.h"
#include "getkeypolicyrequest.h"
#include "getkeypolicyresponse.h"
#include "getkeyrotationstatusrequest.h"
#include "getkeyrotationstatusresponse.h"
#include "getparametersforimportrequest.h"
#include "getparametersforimportresponse.h"
#include "importkeymaterialrequest.h"
#include "importkeymaterialresponse.h"
#include "listaliasesrequest.h"
#include "listaliasesresponse.h"
#include "listgrantsrequest.h"
#include "listgrantsresponse.h"
#include "listkeypoliciesrequest.h"
#include "listkeypoliciesresponse.h"
#include "listkeysrequest.h"
#include "listkeysresponse.h"
#include "listresourcetagsrequest.h"
#include "listresourcetagsresponse.h"
#include "listretirablegrantsrequest.h"
#include "listretirablegrantsresponse.h"
#include "putkeypolicyrequest.h"
#include "putkeypolicyresponse.h"
#include "reencryptrequest.h"
#include "reencryptresponse.h"
#include "retiregrantrequest.h"
#include "retiregrantresponse.h"
#include "revokegrantrequest.h"
#include "revokegrantresponse.h"
#include "schedulekeydeletionrequest.h"
#include "schedulekeydeletionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatealiasrequest.h"
#include "updatealiasresponse.h"
#include "updatecustomkeystorerequest.h"
#include "updatecustomkeystoreresponse.h"
#include "updatekeydescriptionrequest.h"
#include "updatekeydescriptionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KMS
 * \brief Contains classess for accessing AWS Key Management Service (KMS).
 *
 * \inmodule QtAwsKms
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KMS {

/*!
 * \class QtAws::KMS::KmsClient
 * \brief The KmsClient class provides access to the AWS Key Management Service (KMS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKMS
 *
 *  <fullname>AWS Key Management Service</fullname>
 * 
 *  AWS Key Management Service (AWS KMS) is an encryption and key management web service. This guide describes the AWS KMS
 *  operations that you can call programmatically. For general information about AWS KMS, see the <a
 *  href="http://docs.aws.amazon.com/kms/latest/developerguide/"> <i>AWS Key Management Service Developer Guide</i>
 * 
 *  </a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, macOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS KMS and other AWS
 *  services. For example, the SDKs take care of tasks such as signing requests (see below), managing errors, and retrying
 *  requests automatically. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to AWS
 * 
 *  KMS>
 * 
 *  Clients must support TLS (Transport Layer Security) 1.0. We recommend TLS 1.2. Clients must also support cipher suites
 *  with Perfect Forward Secrecy (PFS) such as Ephemeral Diffie-Hellman (DHE) or Elliptic Curve Ephemeral Diffie-Hellman
 *  (ECDHE). Most modern systems such as Java 7 and later support these
 * 
 *  modes>
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  Requests must be signed by using an access key ID and a secret access key. We strongly recommend that you <i>do not</i>
 *  use your AWS account (root) access key ID and secret key for everyday work with AWS KMS. Instead, use the access key ID
 *  and secret access key for an IAM user, or you can use the AWS Security Token Service to generate temporary security
 *  credentials that you can use to sign
 * 
 *  requests>
 * 
 *  All AWS KMS operations require <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 *  Version
 * 
 *  4</a>>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  AWS KMS supports AWS CloudTrail, a service that logs AWS API calls and related events for your AWS account and delivers
 *  them to an Amazon S3 bucket that you specify. By using the information collected by CloudTrail, you can determine what
 *  requests were made to AWS KMS, who made the request, when it was made, and so on. To learn more about CloudTrail,
 *  including how to turn it on and find your log files, see the <a
 *  href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/">AWS CloudTrail User
 * 
 *  Guide</a>>
 * 
 *  <b>Additional Resources</b>
 * 
 *  </p
 * 
 *  For more information about credentials and request signing, see the
 * 
 *  following> <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS Security Credentials</a> - This
 *  topic provides general information about the of credentials used for accessing
 * 
 *  AWS> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security Credentials</a> -
 *  This section of the <i>IAM User Guide</i> describes how to create and use temporary security
 * 
 *  credentials> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>
 *  - This set of topics walks you through the process of signing a request using an access key ID and a secret access
 * 
 *  key> </li> </ul>
 * 
 *  <b>Commonly Used APIs</b>
 * 
 *  </p
 * 
 *  Of the APIs discussed in this guide, the following will prove the most useful for most applications. You will likely
 *  perform actions other than these, such as creating keys and assigning policies, by using the
 * 
 *  console> <ul> <li>
 * 
 *  <a>Encrypt</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>Decrypt</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>GenerateDataKey</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>GenerateDataKeyWithoutPlaintext</a>
 */

/*!
 * \brief Constructs a KmsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KmsClient::KmsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KmsClientPrivate(this), parent)
{
    Q_D(KmsClient);
    d->apiVersion = QStringLiteral("2014-11-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kms");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Key Management Service");
    d->serviceName = QStringLiteral("kms");
}

/*!
 * \overload KmsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KmsClient::KmsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KmsClientPrivate(this), parent)
{
    Q_D(KmsClient);
    d->apiVersion = QStringLiteral("2014-11-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kms");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Key Management Service");
    d->serviceName = QStringLiteral("kms");
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CancelKeyDeletionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * Guide</i>>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
CancelKeyDeletionResponse * KmsClient::cancelKeyDeletion(const CancelKeyDeletionRequest &request)
{
    return qobject_cast<CancelKeyDeletionResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ConnectCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Connects or reconnects a <a href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom
 * key store</a> to its associated AWS CloudHSM
 *
 * cluster>
 *
 * The custom key store must be connected before you can create customer master keys (CMKs) in the key store or use the
 * CMKs it contains. You can disconnect and reconnect a custom key store at any
 *
 * time>
 *
 * To connect a custom key store, its associated AWS CloudHSM cluster must have at least one active HSM. To get the number
 * of active HSMs in a cluster, use the <a
 * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters">DescribeClusters</a> operation. To
 * add HSMs to the cluster, use the <a
 * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_CreateHsm">CreateHsm</a>
 *
 * operation>
 *
 * The connection process can take an extended amount of time to complete; up to 20 minutes. This operation starts the
 * connection process, but it does not wait for it to complete. When it succeeds, this operation quickly returns an HTTP
 * 200 response and a JSON object with no properties. However, this response does not indicate that the custom key store is
 * connected. To get the connection state of the custom key store, use the <a>DescribeCustomKeyStores</a>
 *
 * operation>
 *
 * During the connection process, AWS KMS finds the AWS CloudHSM cluster that is associated with the custom key store,
 * creates the connection infrastructure, connects to the cluster, logs into the AWS CloudHSM client as the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
 * <code>kmsuser</code> crypto user</a> (CU), and rotates its
 *
 * password>
 *
 * The <code>ConnectCustomKeyStore</code> operation might fail for various reasons. To find the reason, use the
 * <a>DescribeCustomKeyStores</a> operation and see the <code>ConnectionErrorCode</code> in the response. For help
 * interpreting the <code>ConnectionErrorCode</code>, see
 *
 * <a>CustomKeyStoresListEntry</a>>
 *
 * To fix the failure, use the <a>DisconnectCustomKeyStore</a> operation to disconnect the custom key store, correct the
 * error, use the <a>UpdateCustomKeyStore</a> operation if necessary, and then use <code>ConnectCustomKeyStore</code>
 *
 * again>
 *
 * If you are having trouble connecting or disconnecting a custom key store, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting a Custom Key Store</a> in
 * the <i>AWS Key Management Service Developer
 */
ConnectCustomKeyStoreResponse * KmsClient::connectCustomKeyStore(const ConnectCustomKeyStoreRequest &request)
{
    return qobject_cast<ConnectCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CreateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * <a>UpdateAlias</a>>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
CreateAliasResponse * KmsClient::createAlias(const CreateAliasRequest &request)
{
    return qobject_cast<CreateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CreateCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom key store</a>
 * that is associated with an <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/clusters.html">AWS CloudHSM
 * cluster</a> that you own and
 *
 * manage>
 *
 * This operation is part of the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 *
 * store>
 *
 * When the operation completes successfully, it returns the ID of the new custom key store. Before you can use your new
 * custom key store, you need to use the <a>ConnectCustomKeyStore</a> operation to connect the new key store to its AWS
 * CloudHSM
 *
 * cluster>
 *
 * The <code>CreateCustomKeyStore</code> operation requires the following
 *
 * elements> <ul> <li>
 *
 * You must specify an active AWS CloudHSM cluster in the same account and AWS Region as the custom key store. You can use
 * an existing cluster or <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/create-cluster.html">create and
 * activate a new AWS CloudHSM cluster</a> for the key store. AWS KMS does not require exclusive use of the
 *
 * cluster> </li> <li>
 *
 * You must include the content of the <i>trust anchor certificate</i> for the cluster. You created this certificate, and
 * saved it in the <code>customerCA.crt</code> file, when you <a
 * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialized the
 *
 * cluster</a>> </li> <li>
 *
 * You must provide the password of the dedicated <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
 * <code>kmsuser</code> crypto user</a> (CU) account in the
 *
 * cluster>
 *
 * Before you create the custom key store, use the <a
 * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/cloudhsm_mgmt_util-createUser.html">createUser</a> command in
 * <code>cloudhsm_mgmt_util</code> to create <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">a crypto user (CU)
 * named <code>kmsuser</code> </a>in specified AWS CloudHSM cluster. AWS KMS uses the <code>kmsuser</code> CU account to
 * create and manage key material on your behalf. For instructions, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">Create the kmsuser
 * Crypto User</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>> </li> </ul>
 *
 * The AWS CloudHSM cluster that you specify must meet the following
 *
 * requirements> <ul> <li>
 *
 * The cluster must be active and be in the same AWS account and Region as the custom key
 *
 * store> </li> <li>
 *
 * Each custom key store must be associated with a different AWS CloudHSM cluster. The cluster cannot be associated with
 * another custom key store or have the same cluster certificate as a cluster that is associated with another custom key
 * store. To view the cluster certificate, use the AWS CloudHSM <a
 * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a> operation.
 * Clusters that share a backup history have the same cluster
 *
 * certificate> </li> <li>
 *
 * The cluster must be configured with subnets in at least two different Availability Zones in the Region. Because AWS
 * CloudHSM is not supported in all Availability Zones, we recommend that the cluster have subnets in all Availability
 * Zones in the
 *
 * Region> </li> <li>
 *
 * The cluster must contain at least two active HSMs, each in a different Availability
 *
 * Zone> </li> </ul>
 *
 * New custom key stores are not automatically connected. After you create your custom key store, use the
 * <a>ConnectCustomKeyStore</a> operation to connect the custom key store to its associated AWS CloudHSM cluster. Even if
 * you are not going to use your custom key store immediately, you might want to connect it to verify that all settings are
 * correct and then disconnect it until you are ready to use
 *
 * it>
 *
 * If this operation succeeds, it returns the ID of the new custom key store. For help with failures, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshoot a Custom Key Store</a> in the
 * <i>AWS KMS Developer
 */
CreateCustomKeyStoreResponse * KmsClient::createCustomKeyStore(const CreateCustomKeyStoreRequest &request)
{
    return qobject_cast<CreateCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CreateGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a grant to a customer master key (CMK). The grant specifies who can use the CMK and under what conditions. When
 * setting permissions, grants are an alternative to key policies.
 *
 * </p
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN in the value of the
 * <code>KeyId</code> parameter. For more information about grants, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants</a> in the <i>AWS Key Management Service
 * Developer
 *
 * Guide</i>>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
CreateGrantResponse * KmsClient::createGrant(const CreateGrantRequest &request)
{
    return qobject_cast<CreateGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CreateKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a customer master key (CMK) in the caller's AWS
 *
 * account>
 *
 * You can use a CMK to encrypt small amounts of data (4 KiB or less) directly, but CMKs are more commonly used to encrypt
 * data keys, which are used to encrypt raw data. For more information about data keys and the difference between CMKs and
 * data keys, see the
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
 * If you plan to <a href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">import key
 * material</a>, use the <code>Origin</code> parameter with a value of <code>EXTERNAL</code> to create a CMK with no key
 *
 * material>
 *
 * To create a CMK in a <a href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom key
 * store</a>, use <code>CustomKeyStoreId</code> parameter to specify the custom key store. You must also use the
 * <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS CloudHSM cluster that is associated
 * with the custom key store must have at least two active HSMs, each in a different Availability Zone in the
 *
 * Region>
 *
 * You cannot use this operation to create a CMK in a different AWS
 */
CreateKeyResponse * KmsClient::createKey(const CreateKeyRequest &request)
{
    return qobject_cast<CreateKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DecryptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * accounts>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
DecryptResponse * KmsClient::decrypt(const DecryptRequest &request)
{
    return qobject_cast<DecryptResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DeleteAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DeleteAliasResponse * KmsClient::deleteAlias(const DeleteAliasRequest &request)
{
    return qobject_cast<DeleteAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DeleteCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <a href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom key store</a>.
 * This operation does not delete the AWS CloudHSM cluster that is associated with the custom key store, or affect any
 * users or keys in the
 *
 * cluster>
 *
 * The custom key store that you delete cannot contain any AWS KMS <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">customer master keys (CMKs)</a>.
 * Before deleting the key store, verify that you will never need to use any of the CMKs in the key store for any
 * cryptographic operations. Then, use <a>ScheduleKeyDeletion</a> to delete the AWS KMS customer master keys (CMKs) from
 * the key store. When the scheduled waiting period expires, the <code>ScheduleKeyDeletion</code> operation deletes the
 * CMKs. Then it makes a best effort to delete the key material from the associated cluster. However, you might need to
 * manually <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-orphaned-key">delete the
 * orphaned key material</a> from the cluster and its
 *
 * backups>
 *
 * After all CMKs are deleted from AWS KMS, use <a>DisconnectCustomKeyStore</a> to disconnect the key store from AWS KMS.
 * Then, you can delete the custom key
 *
 * store>
 *
 * Instead of deleting the custom key store, consider using <a>DisconnectCustomKeyStore</a> to disconnect it from AWS KMS.
 * While the key store is disconnected, you cannot create or use the CMKs in the key store. But, you do not need to delete
 * CMKs and you can reconnect a disconnected custom key store at any
 *
 * time>
 *
 * If the operation succeeds, it returns a JSON object with no
 *
 * properties>
 *
 * This operation is part of the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 */
DeleteCustomKeyStoreResponse * KmsClient::deleteCustomKeyStore(const DeleteCustomKeyStoreRequest &request)
{
    return qobject_cast<DeleteCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DeleteImportedKeyMaterialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * CMK>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
DeleteImportedKeyMaterialResponse * KmsClient::deleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest &request)
{
    return qobject_cast<DeleteImportedKeyMaterialResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DescribeCustomKeyStoresResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about <a href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom key
 * stores</a> in the account and
 *
 * region>
 *
 * This operation is part of the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 *
 * store>
 *
 * By default, this operation returns information about all custom key stores in the account and region. To get only
 * information about a particular custom key store, use either the <code>CustomKeyStoreName</code> or
 * <code>CustomKeyStoreId</code> parameter (but not
 *
 * both)>
 *
 * To determine whether the custom key store is connected to its AWS CloudHSM cluster, use the <code>ConnectionState</code>
 * element in the response. If an attempt to connect the custom key store failed, the <code>ConnectionState</code> value is
 * <code>FAILED</code> and the <code>ConnectionErrorCode</code> element in the response indicates the cause of the failure.
 * For help interpreting the <code>ConnectionErrorCode</code>, see
 *
 * <a>CustomKeyStoresListEntry</a>>
 *
 * Custom key stores have a <code>DISCONNECTED</code> connection state if the key store has never been connected or you use
 * the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If your custom key store state is <code>CONNECTED</code>
 * but you are having trouble using it, make sure that its associated AWS CloudHSM cluster is active and contains the
 * minimum number of HSMs required for the operation, if
 *
 * any>
 *
 * For help repairing your custom key store, see the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore-html">Troubleshooting Custom Key Stores</a>
 * topic in the <i>AWS Key Management Service Developer
 */
DescribeCustomKeyStoresResponse * KmsClient::describeCustomKeyStores(const DescribeCustomKeyStoresRequest &request)
{
    return qobject_cast<DescribeCustomKeyStoresResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DescribeKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides detailed information about the specified customer master key
 *
 * (CMK)>
 *
 * If you use <code>DescribeKey</code> on a predefined AWS alias, that is, an AWS alias with no key ID, AWS KMS associates
 * the alias with an <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">AWS managed
 * CMK</a> and returns its <code>KeyId</code> and <code>Arn</code> in the
 *
 * response>
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN or alias ARN in the value of the
 * KeyId
 */
DescribeKeyResponse * KmsClient::describeKey(const DescribeKeyRequest &request)
{
    return qobject_cast<DescribeKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DisableKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the state of a customer master key (CMK) to disabled, thereby preventing its use for cryptographic operations. You
 * cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * For more information about how key state affects the use of a CMK, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects the Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
DisableKeyResponse * KmsClient::disableKey(const DisableKeyRequest &request)
{
    return qobject_cast<DisableKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DisableKeyRotationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables <a href="http://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic rotation of the key
 * material</a> for the specified customer master key (CMK). You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
DisableKeyRotationResponse * KmsClient::disableKeyRotation(const DisableKeyRotationRequest &request)
{
    return qobject_cast<DisableKeyRotationResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DisconnectCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disconnects the <a href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom key
 * store</a> from its associated AWS CloudHSM cluster. While a custom key store is disconnected, you can manage the custom
 * key store and its customer master keys (CMKs), but you cannot create or use CMKs in the custom key store. You can
 * reconnect the custom key store at any
 *
 * time> <note>
 *
 * While a custom key store is disconnected, all attempts to create customer master keys (CMKs) in the custom key store or
 * to use existing CMKs in cryptographic operations will fail. This action can prevent users from storing and accessing
 * sensitive
 *
 * data> </note> <p/>
 *
 * To find the connection state of a custom key store, use the <a>DescribeCustomKeyStores</a> operation. To reconnect a
 * custom key store, use the <a>ConnectCustomKeyStore</a>
 *
 * operation>
 *
 * If the operation succeeds, it returns a JSON object with no
 *
 * properties>
 *
 * This operation is part of the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 */
DisconnectCustomKeyStoreResponse * KmsClient::disconnectCustomKeyStore(const DisconnectCustomKeyStoreRequest &request)
{
    return qobject_cast<DisconnectCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * EnableKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the key state of a customer master key (CMK) to enabled. This allows you to use the CMK for cryptographic
 * operations. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
EnableKeyResponse * KmsClient::enableKey(const EnableKeyRequest &request)
{
    return qobject_cast<EnableKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * EnableKeyRotationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables <a href="http://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic rotation of the key
 * material</a> for the specified customer master key (CMK). You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * You cannot enable automatic rotation of CMKs with imported key material or CMKs in a <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom key
 *
 * store</a>>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
EnableKeyRotationResponse * KmsClient::enableKeyRotation(const EnableKeyRotationRequest &request)
{
    return qobject_cast<EnableKeyRotationResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * EncryptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * choosing>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
EncryptResponse * KmsClient::encrypt(const EncryptRequest &request)
{
    return qobject_cast<EncryptResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GenerateDataKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * Guide</i>>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
GenerateDataKeyResponse * KmsClient::generateDataKey(const GenerateDataKeyRequest &request)
{
    return qobject_cast<GenerateDataKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GenerateDataKeyWithoutPlaintextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * key>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
GenerateDataKeyWithoutPlaintextResponse * KmsClient::generateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest &request)
{
    return qobject_cast<GenerateDataKeyWithoutPlaintextResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GenerateRandomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a random byte string that is cryptographically
 *
 * secure>
 *
 * By default, the random byte string is generated in AWS KMS. To generate the byte string in the AWS CloudHSM cluster that
 * is associated with a <a href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom key
 * store</a>, specify the custom key store
 *
 * ID>
 *
 * For more information about entropy and random number generation, see the <a
 * href="https://d0.awsstatic.com/whitepapers/KMS-Cryptographic-Details.pdf">AWS Key Management Service Cryptographic
 * Details</a>
 */
GenerateRandomResponse * KmsClient::generateRandom(const GenerateRandomRequest &request)
{
    return qobject_cast<GenerateRandomResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GetKeyPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a key policy attached to the specified customer master key (CMK). You cannot perform this operation on a CMK in a
 * different AWS
 */
GetKeyPolicyResponse * KmsClient::getKeyPolicy(const GetKeyPolicyRequest &request)
{
    return qobject_cast<GetKeyPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GetKeyRotationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a Boolean value that indicates whether <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic rotation of the key material</a>
 * is enabled for the specified customer master key
 *
 * (CMK)>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>> <ul> <li>
 *
 * Disabled: The key rotation status does not change when you disable a CMK. However, while the CMK is disabled, AWS KMS
 * does not rotate the backing
 *
 * key> </li> <li>
 *
 * Pending deletion: While a CMK is pending deletion, its key rotation status is <code>false</code> and AWS KMS does not
 * rotate the backing key. If you cancel the deletion, the original key rotation status is
 *
 * restored> </li> </ul>
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN in the value of the
 * <code>KeyId</code>
 */
GetKeyRotationStatusResponse * KmsClient::getKeyRotationStatus(const GetKeyRotationStatusRequest &request)
{
    return qobject_cast<GetKeyRotationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GetParametersForImportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * request>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
GetParametersForImportResponse * KmsClient::getParametersForImport(const GetParametersForImportRequest &request)
{
    return qobject_cast<GetParametersForImportResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ImportKeyMaterialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * When this operation is successful, the key state of the CMK changes from <code>PendingImport</code> to
 * <code>Enabled</code>, and you can use the CMK. After you successfully import key material into a CMK, you can reimport
 * the same key material into that CMK, but you cannot import different key
 *
 * material>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
ImportKeyMaterialResponse * KmsClient::importKeyMaterial(const ImportKeyMaterialRequest &request)
{
    return qobject_cast<ImportKeyMaterialResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all aliases in the caller's AWS account and region. You cannot list aliases in other accounts. For more
 * information about aliases, see
 *
 * <a>CreateAlias</a>>
 *
 * By default, the <code>ListAliases</code> command returns all aliases in the account and region. To get only the aliases
 * that point to a particular customer master key (CMK), use the <code>KeyId</code>
 *
 * parameter>
 *
 * The <code>ListAliases</code> response might include several aliases have no <code>TargetKeyId</code> field. These are
 * predefined aliases that AWS has created but has not yet associated with a CMK. Aliases that AWS creates in your account,
 * including predefined aliases, do not count against your <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/limits.html#aliases-limit">AWS KMS aliases
 */
ListAliasesResponse * KmsClient::listAliases(const ListAliasesRequest &request)
{
    return qobject_cast<ListAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListGrantsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all grants for the specified customer master key
 *
 * (CMK)>
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN in the value of the
 * <code>KeyId</code>
 */
ListGrantsResponse * KmsClient::listGrants(const ListGrantsRequest &request)
{
    return qobject_cast<ListGrantsResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListKeyPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the names of the key policies that are attached to a customer master key (CMK). This operation is designed to get
 * policy names that you can use in a <a>GetKeyPolicy</a> operation. However, the only valid policy name is
 * <code>default</code>. You cannot perform this operation on a CMK in a different AWS
 */
ListKeyPoliciesResponse * KmsClient::listKeyPolicies(const ListKeyPoliciesRequest &request)
{
    return qobject_cast<ListKeyPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all customer master keys (CMKs) in the caller's AWS account and
 */
ListKeysResponse * KmsClient::listKeys(const ListKeysRequest &request)
{
    return qobject_cast<ListKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListResourceTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all tags for the specified customer master key
 *
 * (CMK)>
 *
 * You cannot perform this operation on a CMK in a different AWS
 */
ListResourceTagsResponse * KmsClient::listResourceTags(const ListResourceTagsRequest &request)
{
    return qobject_cast<ListResourceTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListRetirableGrantsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all grants for which the grant's <code>RetiringPrincipal</code> matches the one
 *
 * specified>
 *
 * A typical use is to list all grants that you are able to retire. To retire a grant, use
 */
ListRetirableGrantsResponse * KmsClient::listRetirableGrants(const ListRetirableGrantsRequest &request)
{
    return qobject_cast<ListRetirableGrantsResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * PutKeyPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a key policy to the specified customer master key (CMK). You cannot perform this operation on a CMK in a
 * different AWS
 *
 * account>
 *
 * For more information about key policies, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key Policies</a> in the <i>AWS Key
 * Management Service Developer
 */
PutKeyPolicyResponse * KmsClient::putKeyPolicy(const PutKeyPolicyRequest &request)
{
    return qobject_cast<PutKeyPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ReEncryptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * operation>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
ReEncryptResponse * KmsClient::reEncrypt(const ReEncryptRequest &request)
{
    return qobject_cast<ReEncryptResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * RetireGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
RetireGrantResponse * KmsClient::retireGrant(const RetireGrantRequest &request)
{
    return qobject_cast<RetireGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * RevokeGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes the specified grant for the specified customer master key (CMK). You can revoke a grant to actively deny
 * operations that depend on
 *
 * it>
 *
 * To perform this operation on a CMK in a different AWS account, specify the key ARN in the value of the
 * <code>KeyId</code>
 */
RevokeGrantResponse * KmsClient::revokeGrant(const RevokeGrantRequest &request)
{
    return qobject_cast<RevokeGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ScheduleKeyDeletionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Schedules the deletion of a customer master key (CMK). You may provide a waiting period, specified in days, before
 * deletion occurs. If you do not provide a waiting period, the default period of 30 days is used. When this operation is
 * successful, the key state of the CMK changes to <code>PendingDeletion</code>. Before the waiting period ends, you can
 * use <a>CancelKeyDeletion</a> to cancel the deletion of the CMK. After the waiting period ends, AWS KMS deletes the CMK
 * and all AWS KMS data associated with it, including all aliases that refer to
 *
 * it> <b>
 *
 * Deleting a CMK is a destructive and potentially dangerous operation. When a CMK is deleted, all data that was encrypted
 * under the CMK is unrecoverable. To prevent the use of a CMK without deleting it, use
 *
 * <a>DisableKey</a>> </b>
 *
 * If you schedule deletion of a CMK from a <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom key store</a>, when the
 * waiting period expires, <code>ScheduleKeyDeletion</code> deletes the CMK from AWS KMS. Then AWS KMS makes a best effort
 * to delete the key material from the associated AWS CloudHSM cluster. However, you might need to manually <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-orphaned-key">delete the
 * orphaned key material</a> from the cluster and its
 *
 * backups>
 *
 * You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * For more information about scheduling a CMK for deletion, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting Customer Master Keys</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
ScheduleKeyDeletionResponse * KmsClient::scheduleKeyDeletion(const ScheduleKeyDeletionRequest &request)
{
    return qobject_cast<ScheduleKeyDeletionResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or edits tags for a customer master key (CMK). You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * Each tag consists of a tag key and a tag value. Tag keys and tag values are both required, but tag values can be empty
 * (null)
 *
 * strings>
 *
 * You can only use a tag key once for each CMK. If you use the tag key again, AWS KMS replaces the current tag value with
 * the specified
 *
 * value>
 *
 * For information about the rules that apply to tag keys and tag values, see <a
 * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined Tag
 * Restrictions</a> in the <i>AWS Billing and Cost Management User
 *
 * Guide</i>>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
TagResourceResponse * KmsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified customer master key (CMK). You cannot perform this operation on a CMK in a
 * different AWS
 *
 * account>
 *
 * To remove a tag, specify the tag key. To change the tag value of an existing tag key, use
 *
 * <a>TagResource</a>>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
UntagResourceResponse * KmsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * UpdateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * (AWS)>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
UpdateAliasResponse * KmsClient::updateAlias(const UpdateAliasRequest &request)
{
    return qobject_cast<UpdateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * UpdateCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the properties of a custom key store. Use the <code>CustomKeyStoreId</code> parameter to identify the custom key
 * store you want to edit. Use the remaining parameters to change the properties of the custom key
 *
 * store>
 *
 * You can only update a custom key store that is disconnected. To disconnect the custom key store, use
 * <a>DisconnectCustomKeyStore</a>. To reconnect the custom key store after the update completes, use
 * <a>ConnectCustomKeyStore</a>. To find the connection state of a custom key store, use the <a>DescribeCustomKeyStores</a>
 *
 * operation>
 *
 * Use the <code>NewCustomKeyStoreName</code> parameter to change the friendly name of the custom key store to the value
 * that you
 *
 * specify>
 *
 * Use the <code>KeyStorePassword</code> parameter tell AWS KMS the current password of the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
 * <code>kmsuser</code> crypto user (CU)</a> in the associated AWS CloudHSM cluster. You can use this parameter to fix
 * connection failures that occur when AWS KMS cannot log into the associated cluster because the <code>kmsuser</code>
 * password has changed. This value does not change the password in the AWS CloudHSM
 *
 * cluster>
 *
 * Use the <code>CloudHsmClusterId</code> parameter to associate the custom key store with a related AWS CloudHSM cluster,
 * that is, a cluster that shares a backup history with the original cluster. You can use this parameter to repair a custom
 * key store if its AWS CloudHSM cluster becomes corrupted or is deleted, or when you need to create or restore a cluster
 * from a
 *
 * backup>
 *
 * The cluster ID must identify a AWS CloudHSM cluster with the following
 *
 * requirements> <ul> <li>
 *
 * The cluster must be active and be in the same AWS account and Region as the custom key
 *
 * store> </li> <li>
 *
 * The cluster must have the same cluster certificate as the original cluster. You cannot use this parameter to associate
 * the custom key store with an unrelated cluster. To view the cluster certificate, use the AWS CloudHSM <a
 * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a> operation.
 * Clusters that share a backup history have the same cluster
 *
 * certificate> </li> <li>
 *
 * The cluster must be configured with subnets in at least two different Availability Zones in the Region. Because AWS
 * CloudHSM is not supported in all Availability Zones, we recommend that the cluster have subnets in all Availability
 * Zones in the
 *
 * Region> </li> <li>
 *
 * The cluster must contain at least two active HSMs, each in a different Availability
 *
 * Zone> </li> </ul>
 *
 * If the operation succeeds, it returns a JSON object with no
 *
 * properties>
 *
 * This operation is part of the <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 */
UpdateCustomKeyStoreResponse * KmsClient::updateCustomKeyStore(const UpdateCustomKeyStoreRequest &request)
{
    return qobject_cast<UpdateCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * UpdateKeyDescriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description of a customer master key (CMK). To see the decription of a CMK, use <a>DescribeKey</a>.
 *
 * </p
 *
 * You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * The result of this operation varies with the key state of the CMK. For details, see <a
 * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 */
UpdateKeyDescriptionResponse * KmsClient::updateKeyDescription(const UpdateKeyDescriptionRequest &request)
{
    return qobject_cast<UpdateKeyDescriptionResponse *>(send(request));
}

/*!
 * \class QtAws::KMS::KmsClientPrivate
 * \brief The KmsClientPrivate class provides private implementation for KmsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKMS
 */

/*!
 * Constructs a KmsClientPrivate object with public implementation \a q.
 */
KmsClientPrivate::KmsClientPrivate(KmsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KMS
} // namespace QtAws
