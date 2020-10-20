/*
    Copyright 2013-2020 Paul Colby

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
#include "createserverrequest.h"
#include "createserverresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deleteserverrequest.h"
#include "deleteserverresponse.h"
#include "deletesshpublickeyrequest.h"
#include "deletesshpublickeyresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "describeserverrequest.h"
#include "describeserverresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "importsshpublickeyrequest.h"
#include "importsshpublickeyresponse.h"
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
#include "updateserverrequest.h"
#include "updateserverresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Transfer
 * \brief Contains classess for accessing AWS Transfer for SFTP.
 *
 * \inmodule QtAwsTransfer
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::TransferClient
 * \brief The TransferClient class provides access to the AWS Transfer for SFTP service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTransfer
 *
 *  AWS Transfer for SFTP is a fully managed service that enables the transfer of files directly into and out of Amazon S3
 *  using the Secure File Transfer Protocol (SFTP)—also known as Secure Shell (SSH) File Transfer Protocol. AWS helps you
 *  seamlessly migrate your file transfer workflows to AWS Transfer for SFTP—by integrating with existing authentication
 *  systems, and providing DNS routing with Amazon Route 53—so nothing changes for your customers and partners, or their
 *  applications. With your data in S3, you can use it with AWS services for processing, analytics, machine learning, and
 *  archiving. Getting started with AWS Transfer for SFTP (AWS SFTP) is easy; there is no infrastructure to buy and setup.
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
    d->serviceFullName = QStringLiteral("AWS Transfer for SFTP");
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
    d->serviceFullName = QStringLiteral("AWS Transfer for SFTP");
    d->serviceName = QStringLiteral("transfer");
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * CreateServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Instantiates an autoscaling virtual server based on Secure File Transfer Protocol (SFTP) in AWS. The call returns the
 * <code>ServerId</code> property assigned by the service to the newly created server. Reference this <code>ServerId</code>
 * property when you make updates to your server, or work with
 *
 * users>
 *
 * The response returns the <code>ServerId</code> value for the newly created
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
 * Adds a user and associate them with an existing Secure File Transfer Protocol (SFTP) server. Using parameters for
 * <code>CreateUser</code>, you can specify the user name, set the home directory, store the user's public key, and assign
 * the user's AWS Identity and Access Management (IAM) role. You can also optionally add a scope-down policy, and assign
 * metadata with tags that can be used to group and search for
 *
 * users>
 *
 * The response returns the <code>UserName</code> and <code>ServerId</code> values of the new user for that
 */
CreateUserResponse * TransferClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DeleteServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Secure File Transfer Protocol (SFTP) server that you specify. If you used <code>SERVICE_MANAGED</code> as
 * your <code>IdentityProviderType</code>, you need to delete all users associated with this server before deleting the
 * server
 *
 * itsel>
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
 * Deletes the user belonging to the server you
 *
 * specify>
 *
 * No response returns from this
 *
 * call> <note>
 *
 * When you delete a user from a server, the user's information is
 */
DeleteUserResponse * TransferClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the TransferClient service, and returns a pointer to an
 * DescribeServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the server that you specify by passing the <code>ServerId</code>
 *
 * parameter>
 *
 * The response contains a description of the server's
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
 * Describes the user assigned to a specific server, as identified by its <code>ServerId</code>
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
 * Adds a Secure Shell (SSH) public key to a user account identified by a <code>UserName</code> value assigned to a
 * specific server, identified by
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
 * ListServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Secure File Transfer Protocol (SFTP) servers that are associated with your AWS
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
 * Lists all of the tags associated with the Amazon Resource Number (ARN) you specify. The resource can be a user, server,
 * or
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
 * Lists the users for the server that you specify by passing the <code>ServerId</code>
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
 * Changes the state of a Secure File Transfer Protocol (SFTP) server from <code>OFFLINE</code> to <code>ONLINE</code>. It
 * has no impact on an SFTP server that is already <code>ONLINE</code>. An <code>ONLINE</code> server can accept and
 * process file transfer
 *
 * jobs>
 *
 * The state of <code>STARTING</code> indicates that the server is in an intermediate state, either not fully able to
 * respond, or not fully online. The values of <code>START_FAILED</code> can indicate an error condition.
 *
 * </p
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
 * Changes the state of an SFTP server from <code>ONLINE</code> to <code>OFFLINE</code>. An <code>OFFLINE</code> server
 * cannot accept and process file transfer jobs. Information tied to your server such as server and user properties are not
 * affected by stopping your server. Stopping a server will not reduce or impact your Secure File Transfer Protocol (SFTP)
 * endpoint
 *
 * billing>
 *
 * The states of <code>STOPPING</code> indicates that the server is in an intermediate state, either not fully able to
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
 * If the <code>IdentityProviderType</code> of the server is <code>API_Gateway</code>, tests whether your API Gateway is
 * set up successfully. We highly recommend that you call this method to test your authentication method as soon as you
 * create your server. By doing so, you can troubleshoot issues with the API Gateway integration to ensure that your users
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
 * UpdateServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the server properties after that server has been
 *
 * created>
 *
 * The <code>UpdateServer</code> call returns the <code>ServerId</code> of the Secure File Transfer Protocol (SFTP) server
 * you
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
