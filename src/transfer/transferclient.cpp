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

#include "transferclient.h"
#include "transferclient_p.h"

#include "core/awssignaturev4.h"
#include "createaccessrequest.h"
#include "createaccessresponse.h"
#include "createserverrequest.h"
#include "createserverresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deleteaccessrequest.h"
#include "deleteaccessresponse.h"
#include "deleteserverrequest.h"
#include "deleteserverresponse.h"
#include "deletesshpublickeyrequest.h"
#include "deletesshpublickeyresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "describeaccessrequest.h"
#include "describeaccessresponse.h"
#include "describesecuritypolicyrequest.h"
#include "describesecuritypolicyresponse.h"
#include "describeserverrequest.h"
#include "describeserverresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "importsshpublickeyrequest.h"
#include "importsshpublickeyresponse.h"
#include "listaccessesrequest.h"
#include "listaccessesresponse.h"
#include "listsecuritypoliciesrequest.h"
#include "listsecuritypoliciesresponse.h"
#include "listserversrequest.h"
#include "listserversresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
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
 *  AWS Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3). AWS helps you seamlessly migrate your file transfer workflows to AWS Transfer
 *  Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53 so nothing
 *  changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it with AWS
 *  services for processing, analytics, machine learning, and archiving. Getting started with AWS Transfer Family is easy
 *  since there is no infrastructure to buy and set
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-11-05"),
    QStringLiteral("transfer"),
    QStringLiteral("AWS Transfer Family"),
    QStringLiteral("transfer"),
    parent), d_ptr(new TransferClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-11-05"),
    QStringLiteral("transfer"),
    QStringLiteral("AWS Transfer Family"),
    QStringLiteral("transfer"),
    parent), d_ptr(new TransferClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by administrators to choose which groups in the directory should have access to upload and download files over the
 * enabled protocols using AWS Transfer Family. For example, a Microsoft Active Directory might contain 50,000 users, but
 * only a small fraction might need the ability to transfer files to the server. An administrator can use
 * <code>CreateAccess</code> to limit the access to the correct set of users who need this
 */
CreateAccessResponse * TransferClient::createAccess(const CreateAccessRequest &request)
{
    return qobject_cast<CreateAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Instantiates an auto-scaling virtual server based on the selected file transfer protocol in AWS. When you make updates
 * to your file transfer protocol-enabled server or when you work with users, use the service-generated
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
 * key, and assign the user's AWS Identity and Access Management (IAM) role. You can also optionally add a scope-down
 * policy, and assign metadata with tags that can be used to group and search for
 */
CreateUserResponse * TransferClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
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
 *
 * key>
 *
 * No response is returned from this
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
 * DescribeAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the access that is assigned to the specific file transfer protocol-enabled server, as identified by its
 * <code>ServerId</code> property and its
 *
 * <code>ExternalID</code>>
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
 * Lists the file transfer protocol-enabled servers that are associated with your AWS
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
 * Stopping the server will not reduce or impact your file transfer protocol endpoint billing; you must delete the server
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
TransferClientPrivate::TransferClientPrivate(TransferClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Transfer
} // namespace QtAws
