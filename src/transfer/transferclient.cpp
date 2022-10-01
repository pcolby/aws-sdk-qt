// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "transferclient.h"
#include "transferclient_p.h"

#include "core/awssignaturev4.h"
#include "createaccessrequest.h"
#include "createaccessresponse.h"
#include "createagreementrequest.h"
#include "createagreementresponse.h"
#include "createconnectorrequest.h"
#include "createconnectorresponse.h"
#include "createprofilerequest.h"
#include "createprofileresponse.h"
#include "createserverrequest.h"
#include "createserverresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "createworkflowrequest.h"
#include "createworkflowresponse.h"
#include "deleteaccessrequest.h"
#include "deleteaccessresponse.h"
#include "deleteagreementrequest.h"
#include "deleteagreementresponse.h"
#include "deletecertificaterequest.h"
#include "deletecertificateresponse.h"
#include "deleteconnectorrequest.h"
#include "deleteconnectorresponse.h"
#include "deletehostkeyrequest.h"
#include "deletehostkeyresponse.h"
#include "deleteprofilerequest.h"
#include "deleteprofileresponse.h"
#include "deleteserverrequest.h"
#include "deleteserverresponse.h"
#include "deletesshpublickeyrequest.h"
#include "deletesshpublickeyresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "deleteworkflowrequest.h"
#include "deleteworkflowresponse.h"
#include "describeaccessrequest.h"
#include "describeaccessresponse.h"
#include "describeagreementrequest.h"
#include "describeagreementresponse.h"
#include "describecertificaterequest.h"
#include "describecertificateresponse.h"
#include "describeconnectorrequest.h"
#include "describeconnectorresponse.h"
#include "describeexecutionrequest.h"
#include "describeexecutionresponse.h"
#include "describehostkeyrequest.h"
#include "describehostkeyresponse.h"
#include "describeprofilerequest.h"
#include "describeprofileresponse.h"
#include "describesecuritypolicyrequest.h"
#include "describesecuritypolicyresponse.h"
#include "describeserverrequest.h"
#include "describeserverresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "describeworkflowrequest.h"
#include "describeworkflowresponse.h"
#include "importcertificaterequest.h"
#include "importcertificateresponse.h"
#include "importhostkeyrequest.h"
#include "importhostkeyresponse.h"
#include "importsshpublickeyrequest.h"
#include "importsshpublickeyresponse.h"
#include "listaccessesrequest.h"
#include "listaccessesresponse.h"
#include "listagreementsrequest.h"
#include "listagreementsresponse.h"
#include "listcertificatesrequest.h"
#include "listcertificatesresponse.h"
#include "listconnectorsrequest.h"
#include "listconnectorsresponse.h"
#include "listexecutionsrequest.h"
#include "listexecutionsresponse.h"
#include "listhostkeysrequest.h"
#include "listhostkeysresponse.h"
#include "listprofilesrequest.h"
#include "listprofilesresponse.h"
#include "listsecuritypoliciesrequest.h"
#include "listsecuritypoliciesresponse.h"
#include "listserversrequest.h"
#include "listserversresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "listworkflowsrequest.h"
#include "listworkflowsresponse.h"
#include "sendworkflowstepstaterequest.h"
#include "sendworkflowstepstateresponse.h"
#include "startfiletransferrequest.h"
#include "startfiletransferresponse.h"
#include "startserverrequest.h"
#include "startserverresponse.h"
#include "stopserverrequest.h"
#include "stopserverresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testidentityproviderrequest.h"
#include "testidentityproviderresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccessrequest.h"
#include "updateaccessresponse.h"
#include "updateagreementrequest.h"
#include "updateagreementresponse.h"
#include "updatecertificaterequest.h"
#include "updatecertificateresponse.h"
#include "updateconnectorrequest.h"
#include "updateconnectorresponse.h"
#include "updatehostkeyrequest.h"
#include "updatehostkeyresponse.h"
#include "updateprofilerequest.h"
#include "updateprofileresponse.h"
#include "updateserverrequest.h"
#include "updateserverresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Transfer
 * \brief Contains classess for accessing AWS Transfer Family.
 *
 * \inmodule QtAwsTransfer
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::TransferClient
 * \brief The TransferClient class provides access to the AWS Transfer Family service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTransfer
 *
 *  Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3) or Amazon EFS. Additionally, you can use Applicability Statement 2 (AS2) to
 *  transfer files into and out of Amazon S3. Amazon Web Services helps you seamlessly migrate your file transfer workflows
 *  to Transfer Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53
 *  so nothing changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it
 *  with Amazon Web Services for processing, analytics, machine learning, and archiving. Getting started with Transfer
 *  Family is easy since there is no infrastructure to buy and set
 */

/*!
 * \brief Constructs a TransferClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TransferClient::TransferClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TransferClientPrivate(this), parent)
{
    Q_D(TransferClient);
    d->apiVersion = QStringLiteral("2018-11-05");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("transfer");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Transfer Family");
    d->serviceName = QStringLiteral("transfer");
}

/*!
 * \overload TransferClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TransferClient::TransferClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TransferClientPrivate(this), parent)
{
    Q_D(TransferClient);
    d->apiVersion = QStringLiteral("2018-11-05");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("transfer");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Transfer Family");
    d->serviceName = QStringLiteral("transfer");
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by administrators to choose which groups in the directory should have access to upload and download files over the
 * enabled protocols using Transfer Family. For example, a Microsoft Active Directory might contain 50,000 users, but only
 * a small fraction might need the ability to transfer files to the server. An administrator can use
 * <code>CreateAccess</code> to limit the access to the correct set of users who need this
 */
CreateAccessResponse * TransferClient::createAccess(const CreateAccessRequest &request)
{
    return qobject_cast<CreateAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateAgreementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an agreement. An agreement is a bilateral trading partner agreement, or partnership, between an Transfer Family
 * server and an AS2 process. The agreement defines the file and message transfer relationship between the server and the
 * AS2 process. To define an agreement, Transfer Family combines a server, local profile, partner profile, certificate, and
 * other
 *
 * attributes>
 *
 * The partner is identified with the <code>PartnerProfileId</code>, and the AS2 process is identified with the
 */
CreateAgreementResponse * TransferClient::createAgreement(const CreateAgreementRequest &request)
{
    return qobject_cast<CreateAgreementResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the connector, which captures the parameters for an outbound connection for the AS2 protocol. The connector is
 * required for sending files from a customer's non Amazon Web Services server.
 */
CreateConnectorResponse * TransferClient::createConnector(const CreateConnectorRequest &request)
{
    return qobject_cast<CreateConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the profile for the AS2 process. The agreement is between the partner and the AS2
 */
CreateProfileResponse * TransferClient::createProfile(const CreateProfileRequest &request)
{
    return qobject_cast<CreateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Instantiates an auto-scaling virtual server based on the selected file transfer protocol in Amazon Web Services. When
 * you make updates to your file transfer protocol-enabled server or when you work with users, use the service-generated
 * <code>ServerId</code> property that is assigned to the newly created
 */
CreateServerResponse * TransferClient::createServer(const CreateServerRequest &request)
{
    return qobject_cast<CreateServerResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a user and associates them with an existing file transfer protocol-enabled server. You can only create and
 * associate users with servers that have the <code>IdentityProviderType</code> set to <code>SERVICE_MANAGED</code>. Using
 * parameters for <code>CreateUser</code>, you can specify the user name, set the home directory, store the user's public
 * key, and assign the user's Identity and Access Management (IAM) role. You can also optionally add a session policy, and
 * assign metadata with tags that can be used to group and search for
 */
CreateUserResponse * TransferClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to create a workflow with specified steps and step details the workflow invokes after file transfer
 * completes. After creating a workflow, you can associate the workflow created with any transfer servers by specifying the
 * <code>workflow-details</code> field in <code>CreateServer</code> and <code>UpdateServer</code> operations.
 */
CreateWorkflowResponse * TransferClient::createWorkflow(const CreateWorkflowRequest &request)
{
    return qobject_cast<CreateWorkflowResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to delete the access specified in the <code>ServerID</code> and <code>ExternalID</code>
 */
DeleteAccessResponse * TransferClient::deleteAccess(const DeleteAccessRequest &request)
{
    return qobject_cast<DeleteAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteAgreementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete the agreement that's specified in the provided
 */
DeleteAgreementResponse * TransferClient::deleteAgreement(const DeleteAgreementRequest &request)
{
    return qobject_cast<DeleteAgreementResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the certificate that's specified in the <code>CertificateId</code>
 */
DeleteCertificateResponse * TransferClient::deleteCertificate(const DeleteCertificateRequest &request)
{
    return qobject_cast<DeleteCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the agreement that's specified in the provided
 */
DeleteConnectorResponse * TransferClient::deleteConnector(const DeleteConnectorRequest &request)
{
    return qobject_cast<DeleteConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteHostKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the host key that's specified in the <code>HoskKeyId</code>
 */
DeleteHostKeyResponse * TransferClient::deleteHostKey(const DeleteHostKeyRequest &request)
{
    return qobject_cast<DeleteHostKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the profile that's specified in the <code>ProfileId</code>
 */
DeleteProfileResponse * TransferClient::deleteProfile(const DeleteProfileRequest &request)
{
    return qobject_cast<DeleteProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the file transfer protocol-enabled server that you
 *
 * specify>
 *
 * No response returns from this
 */
DeleteServerResponse * TransferClient::deleteServer(const DeleteServerRequest &request)
{
    return qobject_cast<DeleteServerResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteSshPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user's Secure Shell (SSH) public
 */
DeleteSshPublicKeyResponse * TransferClient::deleteSshPublicKey(const DeleteSshPublicKeyRequest &request)
{
    return qobject_cast<DeleteSshPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the user belonging to a file transfer protocol-enabled server you
 *
 * specify>
 *
 * No response returns from this
 *
 * operation> <note>
 *
 * When you delete a user from a server, the user's information is
 */
DeleteUserResponse * TransferClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteWorkflowResponse * TransferClient::deleteWorkflow(const DeleteWorkflowRequest &request)
{
    return qobject_cast<DeleteWorkflowResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the access that is assigned to the specific file transfer protocol-enabled server, as identified by its
 * <code>ServerId</code> property and its
 *
 * <code>ExternalId</code>>
 *
 * The response from this call returns the properties of the access that is associated with the <code>ServerId</code> value
 * that was
 */
DescribeAccessResponse * TransferClient::describeAccess(const DescribeAccessRequest &request)
{
    return qobject_cast<DescribeAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeAgreementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the agreement that's identified by the
 */
DescribeAgreementResponse * TransferClient::describeAgreement(const DescribeAgreementRequest &request)
{
    return qobject_cast<DescribeAgreementResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the certificate that's identified by the
 */
DescribeCertificateResponse * TransferClient::describeCertificate(const DescribeCertificateRequest &request)
{
    return qobject_cast<DescribeCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the connector that's identified by the <code>ConnectorId.</code>
 */
DescribeConnectorResponse * TransferClient::describeConnector(const DescribeConnectorRequest &request)
{
    return qobject_cast<DescribeConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can use <code>DescribeExecution</code> to check the details of the execution of the specified
 */
DescribeExecutionResponse * TransferClient::describeExecution(const DescribeExecutionRequest &request)
{
    return qobject_cast<DescribeExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeHostKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of the host key that's specified by the <code>HostKeyId</code> and
 */
DescribeHostKeyResponse * TransferClient::describeHostKey(const DescribeHostKeyRequest &request)
{
    return qobject_cast<DescribeHostKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of the profile that's specified by the
 */
DescribeProfileResponse * TransferClient::describeProfile(const DescribeProfileRequest &request)
{
    return qobject_cast<DescribeProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeSecurityPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the security policy that is attached to your file transfer protocol-enabled server. The response contains a
 * description of the security policy's properties. For more information about security policies, see <a
 * href="https://docs.aws.amazon.com/transfer/latest/userguide/security-policies.html">Working with security
 */
DescribeSecurityPolicyResponse * TransferClient::describeSecurityPolicy(const DescribeSecurityPolicyRequest &request)
{
    return qobject_cast<DescribeSecurityPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a file transfer protocol-enabled server that you specify by passing the <code>ServerId</code>
 *
 * parameter>
 *
 * The response contains a description of a server's properties. When you set <code>EndpointType</code> to VPC, the
 * response will contain the
 */
DescribeServerResponse * TransferClient::describeServer(const DescribeServerRequest &request)
{
    return qobject_cast<DescribeServerResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the user assigned to the specific file transfer protocol-enabled server, as identified by its
 * <code>ServerId</code>
 *
 * property>
 *
 * The response from this call returns the properties of the user associated with the <code>ServerId</code> value that was
 */
DescribeUserResponse * TransferClient::describeUser(const DescribeUserRequest &request)
{
    return qobject_cast<DescribeUserResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeWorkflowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 */
DescribeWorkflowResponse * TransferClient::describeWorkflow(const DescribeWorkflowRequest &request)
{
    return qobject_cast<DescribeWorkflowResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ImportCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports the signing and encryption certificates that you need to create local (AS2) profiles and partner
 */
ImportCertificateResponse * TransferClient::importCertificate(const ImportCertificateRequest &request)
{
    return qobject_cast<ImportCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ImportHostKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a host key to the server specified by the <code>ServerId</code>
 */
ImportHostKeyResponse * TransferClient::importHostKey(const ImportHostKeyRequest &request)
{
    return qobject_cast<ImportHostKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ImportSshPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a Secure Shell (SSH) public key to a user account identified by a <code>UserName</code> value assigned to the
 * specific file transfer protocol-enabled server, identified by
 *
 * <code>ServerId</code>>
 *
 * The response returns the <code>UserName</code> value, the <code>ServerId</code> value, and the name of the
 */
ImportSshPublicKeyResponse * TransferClient::importSshPublicKey(const ImportSshPublicKeyRequest &request)
{
    return qobject_cast<ImportSshPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListAccessesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the details for all the accesses you have on your
 */
ListAccessesResponse * TransferClient::listAccesses(const ListAccessesRequest &request)
{
    return qobject_cast<ListAccessesResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListAgreementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the agreements for the server that's identified by the <code>ServerId</code> that you supply. If you
 * want to limit the results to a certain number, supply a value for the <code>MaxResults</code> parameter. If you ran the
 * command previously and received a value for <code>NextToken</code>, you can supply that value to continue listing
 * agreements from where you left
 */
ListAgreementsResponse * TransferClient::listAgreements(const ListAgreementsRequest &request)
{
    return qobject_cast<ListAgreementsResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the current certificates that have been imported into Transfer Family. If you want to limit the
 * results to a certain number, supply a value for the <code>MaxResults</code> parameter. If you ran the command previously
 * and received a value for the <code>NextToken</code> parameter, you can supply that value to continue listing
 * certificates from where you left
 */
ListCertificatesResponse * TransferClient::listCertificates(const ListCertificatesRequest &request)
{
    return qobject_cast<ListCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListConnectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the connectors for the specified
 */
ListConnectorsResponse * TransferClient::listConnectors(const ListConnectorsRequest &request)
{
    return qobject_cast<ListConnectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all executions for the specified
 */
ListExecutionsResponse * TransferClient::listExecutions(const ListExecutionsRequest &request)
{
    return qobject_cast<ListExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListHostKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of host keys for the server specified by the <code>ServerId</code>
 */
ListHostKeysResponse * TransferClient::listHostKeys(const ListHostKeysRequest &request)
{
    return qobject_cast<ListHostKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the profiles for your system. If you want to limit the results to a certain number, supply a value for
 * the <code>MaxResults</code> parameter. If you ran the command previously and received a value for
 * <code>NextToken</code>, you can supply that value to continue listing profiles from where you left
 */
ListProfilesResponse * TransferClient::listProfiles(const ListProfilesRequest &request)
{
    return qobject_cast<ListProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListSecurityPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the security policies that are attached to your file transfer protocol-enabled
 */
ListSecurityPoliciesResponse * TransferClient::listSecurityPolicies(const ListSecurityPoliciesRequest &request)
{
    return qobject_cast<ListSecurityPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the file transfer protocol-enabled servers that are associated with your Amazon Web Services
 */
ListServersResponse * TransferClient::listServers(const ListServersRequest &request)
{
    return qobject_cast<ListServersResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the tags associated with the Amazon Resource Name (ARN) that you specify. The resource can be a user,
 * server, or
 */
ListTagsForResourceResponse * TransferClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the users for a file transfer protocol-enabled server that you specify by passing the <code>ServerId</code>
 */
ListUsersResponse * TransferClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * ListWorkflowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of your
 */
ListWorkflowsResponse * TransferClient::listWorkflows(const ListWorkflowsRequest &request)
{
    return qobject_cast<ListWorkflowsResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * SendWorkflowStepStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a callback for asynchronous custom
 *
 * steps>
 *
 * The <code>ExecutionId</code>, <code>WorkflowId</code>, and <code>Token</code> are passed to the target resource during
 * execution of a custom step of a workflow. You must include those with their callback as well as providing a status.
 */
SendWorkflowStepStateResponse * TransferClient::sendWorkflowStepState(const SendWorkflowStepStateRequest &request)
{
    return qobject_cast<SendWorkflowStepStateResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * StartFileTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Begins an outbound file transfer. You specify the <code>ConnectorId</code> and the file paths for where to send the
 * files.
 */
StartFileTransferResponse * TransferClient::startFileTransfer(const StartFileTransferRequest &request)
{
    return qobject_cast<StartFileTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * StartServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the state of a file transfer protocol-enabled server from <code>OFFLINE</code> to <code>ONLINE</code>. It has no
 * impact on a server that is already <code>ONLINE</code>. An <code>ONLINE</code> server can accept and process file
 * transfer
 *
 * jobs>
 *
 * The state of <code>STARTING</code> indicates that the server is in an intermediate state, either not fully able to
 * respond, or not fully online. The values of <code>START_FAILED</code> can indicate an error
 *
 * condition>
 *
 * No response is returned from this
 */
StartServerResponse * TransferClient::startServer(const StartServerRequest &request)
{
    return qobject_cast<StartServerResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * StopServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the state of a file transfer protocol-enabled server from <code>ONLINE</code> to <code>OFFLINE</code>. An
 * <code>OFFLINE</code> server cannot accept and process file transfer jobs. Information tied to your server, such as
 * server and user properties, are not affected by stopping your
 *
 * server> <note>
 *
 * Stopping the server does not reduce or impact your file transfer protocol endpoint billing; you must delete the server
 * to stop being
 *
 * billed> </note>
 *
 * The state of <code>STOPPING</code> indicates that the server is in an intermediate state, either not fully able to
 * respond, or not fully offline. The values of <code>STOP_FAILED</code> can indicate an error
 *
 * condition>
 *
 * No response is returned from this
 */
StopServerResponse * TransferClient::stopServer(const StopServerRequest &request)
{
    return qobject_cast<StopServerResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a key-value pair to a resource, as identified by its Amazon Resource Name (ARN). Resources are users, servers,
 * roles, and other
 *
 * entities>
 *
 * There is no response returned from this
 */
TagResourceResponse * TransferClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * TestIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * If the <code>IdentityProviderType</code> of a file transfer protocol-enabled server is
 * <code>AWS_DIRECTORY_SERVICE</code> or <code>API_Gateway</code>, tests whether your identity provider is set up
 * successfully. We highly recommend that you call this operation to test your authentication method as soon as you create
 * your server. By doing so, you can troubleshoot issues with the identity provider integration to ensure that your users
 * can successfully use the
 *
 * service>
 *
 * The <code>ServerId</code> and <code>UserName</code> parameters are required. The <code>ServerProtocol</code>,
 * <code>SourceIp</code>, and <code>UserPassword</code> are all optional.
 *
 * </p <note>
 *
 * You cannot use <code>TestIdentityProvider</code> if the <code>IdentityProviderType</code> of your server is
 * <code>SERVICE_MANAGED</code>.
 *
 * </p </note> <ul> <li>
 *
 * If you provide any incorrect values for any parameters, the <code>Response</code> field is empty.
 *
 * </p </li> <li>
 *
 * If you provide a server ID for a server that uses service-managed users, you get an error:
 *
 * </p
 *
 * <code> An error occurred (InvalidRequestException) when calling the TestIdentityProvider operation: s-<i>server-ID</i>
 * not configured for external auth </code>
 *
 * </p </li> <li>
 *
 * If you enter a Server ID for the <code>--server-id</code> parameter that does not identify an actual Transfer server,
 * you receive the following error:
 *
 * </p
 *
 * <code>An error occurred (ResourceNotFoundException) when calling the TestIdentityProvider operation: Unknown
 * server</code>
 */
TestIdentityProviderResponse * TransferClient::testIdentityProvider(const TestIdentityProviderRequest &request)
{
    return qobject_cast<TestIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a key-value pair from a resource, as identified by its Amazon Resource Name (ARN). Resources are users,
 * servers, roles, and other
 *
 * entities>
 *
 * No response is returned from this
 */
UntagResourceResponse * TransferClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * UpdateAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to update parameters for the access specified in the <code>ServerID</code> and <code>ExternalID</code>
 */
UpdateAccessResponse * TransferClient::updateAccess(const UpdateAccessRequest &request)
{
    return qobject_cast<UpdateAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * UpdateAgreementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates some of the parameters for an existing agreement. Provide the <code>AgreementId</code> and the
 * <code>ServerId</code> for the agreement that you want to update, along with the new values for the parameters to
 */
UpdateAgreementResponse * TransferClient::updateAgreement(const UpdateAgreementRequest &request)
{
    return qobject_cast<UpdateAgreementResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * UpdateCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the active and inactive dates for a
 */
UpdateCertificateResponse * TransferClient::updateCertificate(const UpdateCertificateRequest &request)
{
    return qobject_cast<UpdateCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * UpdateConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates some of the parameters for an existing connector. Provide the <code>ConnectorId</code> for the connector that
 * you want to update, along with the new values for the parameters to
 */
UpdateConnectorResponse * TransferClient::updateConnector(const UpdateConnectorRequest &request)
{
    return qobject_cast<UpdateConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * UpdateHostKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description for the host key specified by the specified by the <code>ServerId</code> and
 * <code>HostKeyId</code>
 */
UpdateHostKeyResponse * TransferClient::updateHostKey(const UpdateHostKeyRequest &request)
{
    return qobject_cast<UpdateHostKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * UpdateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates some of the parameters for an existing profile. Provide the <code>ProfileId</code> for the profile that you want
 * to update, along with the new values for the parameters to
 */
UpdateProfileResponse * TransferClient::updateProfile(const UpdateProfileRequest &request)
{
    return qobject_cast<UpdateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * UpdateServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the file transfer protocol-enabled server's properties after that server has been
 *
 * created>
 *
 * The <code>UpdateServer</code> call returns the <code>ServerId</code> of the server you
 */
UpdateServerResponse * TransferClient::updateServer(const UpdateServerRequest &request)
{
    return qobject_cast<UpdateServerResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns new properties to a user. Parameters you pass modify any or all of the following: the home directory, role, and
 * policy for the <code>UserName</code> and <code>ServerId</code> you
 *
 * specify>
 *
 * The response returns the <code>ServerId</code> and the <code>UserName</code> for the updated
 */
UpdateUserResponse * TransferClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * \class QtAws::Transfer::TransferClientPrivate
 * \brief The TransferClientPrivate class provides private implementation for TransferClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a TransferClientPrivate object with public implementation \a q.
 */
TransferClientPrivate::TransferClientPrivate(TransferClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Transfer
} // namespace QtAws
