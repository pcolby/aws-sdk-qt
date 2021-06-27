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

#include "codestarconnectionsclient.h"
#include "codestarconnectionsclient_p.h"

#include "core/awssignaturev4.h"
#include "createconnectionrequest.h"
#include "createconnectionresponse.h"
#include "createhostrequest.h"
#include "createhostresponse.h"
#include "deleteconnectionrequest.h"
#include "deleteconnectionresponse.h"
#include "deletehostrequest.h"
#include "deletehostresponse.h"
#include "getconnectionrequest.h"
#include "getconnectionresponse.h"
#include "gethostrequest.h"
#include "gethostresponse.h"
#include "listconnectionsrequest.h"
#include "listconnectionsresponse.h"
#include "listhostsrequest.h"
#include "listhostsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatehostrequest.h"
#include "updatehostresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CodeStarconnections
 * \brief Contains classess for accessing AWS CodeStar connections.
 *
 * \inmodule QtAwsCodeStarconnections
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CodeStarconnections {

/*!
 * \class QtAws::CodeStarconnections::CodeStarconnectionsClient
 * \brief The CodeStarconnectionsClient class provides access to the AWS CodeStar connections service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeStarconnections
 *
 *  <fullname>AWS CodeStar Connections</fullname>
 * 
 *  This AWS CodeStar Connections API Reference provides descriptions and usage examples of the operations and data types
 *  for the AWS CodeStar Connections API. You can use the connections API to work with connections and
 * 
 *  installations>
 * 
 *  <i>Connections</i> are configurations that you use to connect AWS resources to external code repositories. Each
 *  connection is a resource that can be given to services such as CodePipeline to connect to a third-party repository such
 *  as Bitbucket. For example, you can add the connection in CodePipeline so that it triggers your pipeline when a code
 *  change is made to your third-party code repository. Each connection is named and associated with a unique ARN that is
 *  used to reference the
 * 
 *  connection>
 * 
 *  When you create a connection, the console initiates a third-party connection handshake. <i>Installations</i> are the
 *  apps that are used to conduct this handshake. For example, the installation for the Bitbucket provider type is the
 *  Bitbucket app. When you create a connection, you can choose an existing installation or create
 * 
 *  one>
 * 
 *  When you want to create a connection to an installed provider type such as GitHub Enterprise Server, you create a
 *  <i>host</i> for your
 * 
 *  connections>
 * 
 *  You can work with connections by
 * 
 *  calling> <ul> <li>
 * 
 *  <a>CreateConnection</a>, which creates a uniquely named connection that can be referenced by services such as
 * 
 *  CodePipeline> </li> <li>
 * 
 *  <a>DeleteConnection</a>, which deletes the specified
 * 
 *  connection> </li> <li>
 * 
 *  <a>GetConnection</a>, which returns information about the connection, including the connection
 * 
 *  status> </li> <li>
 * 
 *  <a>ListConnections</a>, which lists the connections associated with your
 * 
 *  account> </li> </ul>
 * 
 *  You can work with hosts by
 * 
 *  calling> <ul> <li>
 * 
 *  <a>CreateHost</a>, which creates a host that represents the infrastructure where your provider is
 * 
 *  installed> </li> <li>
 * 
 *  <a>DeleteHost</a>, which deletes the specified
 * 
 *  host> </li> <li>
 * 
 *  <a>GetHost</a>, which returns information about the host, including the setup
 * 
 *  status> </li> <li>
 * 
 *  <a>ListHosts</a>, which lists the hosts associated with your
 * 
 *  account> </li> </ul>
 * 
 *  You can work with tags in AWS CodeStar Connections by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <a>ListTagsForResource</a>, which gets information about AWS tags for a specified Amazon Resource Name (ARN) in AWS
 *  CodeStar
 * 
 *  Connections> </li> <li>
 * 
 *  <a>TagResource</a>, which adds or updates tags for a resource in AWS CodeStar
 * 
 *  Connections> </li> <li>
 * 
 *  <a>UntagResource</a>, which removes tags for a resource in AWS CodeStar
 * 
 *  Connections> </li> </ul>
 * 
 *  For information about how to use AWS CodeStar Connections, see the <a
 *  href="https://docs.aws.amazon.com/dtconsole/latest/userguide/welcome-connections.html">Developer Tools User
 */

/*!
 * \brief Constructs a CodeStarconnectionsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CodeStarconnectionsClient::CodeStarconnectionsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-01"),
    QStringLiteral("codestar-connections"),
    QStringLiteral("AWS CodeStar connections"),
    QStringLiteral("codestar-connections"),
    parent), d_ptr(new CodeStarconnectionsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload CodeStarconnectionsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CodeStarconnectionsClient::CodeStarconnectionsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-01"),
    QStringLiteral("codestar-connections"),
    QStringLiteral("AWS CodeStar connections"),
    QStringLiteral("codestar-connections"),
    parent), d_ptr(new CodeStarconnectionsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * CreateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a connection that can then be given to other AWS services like CodePipeline so that it can access third-party
 * code repositories. The connection is in pending status until the third-party connection handshake is completed from the
 */
CreateConnectionResponse * CodeStarconnectionsClient::createConnection(const CreateConnectionRequest &request)
{
    return qobject_cast<CreateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * CreateHostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a resource that represents the infrastructure where a third-party provider is installed. The host is used when
 * you create connections to an installed third-party provider type, such as GitHub Enterprise Server. You create one host
 * for all connections to that
 *
 * provider> <note>
 *
 * A host created through the CLI or the SDK is in `PENDING` status by default. You can make its status `AVAILABLE` by
 * setting up the host in the
 */
CreateHostResponse * CodeStarconnectionsClient::createHost(const CreateHostRequest &request)
{
    return qobject_cast<CreateHostResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * DeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The connection to be
 */
DeleteConnectionResponse * CodeStarconnectionsClient::deleteConnection(const DeleteConnectionRequest &request)
{
    return qobject_cast<DeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * DeleteHostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The host to be deleted. Before you delete a host, all connections associated to the host must be
 *
 * deleted> <note>
 *
 * A host cannot be deleted if it is in the VPC_CONFIG_INITIALIZING or VPC_CONFIG_DELETING
 */
DeleteHostResponse * CodeStarconnectionsClient::deleteHost(const DeleteHostRequest &request)
{
    return qobject_cast<DeleteHostResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * GetConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the connection ARN and details such as status, owner, and provider
 */
GetConnectionResponse * CodeStarconnectionsClient::getConnection(const GetConnectionRequest &request)
{
    return qobject_cast<GetConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * GetHostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the host ARN and details such as status, provider type, endpoint, and, if applicable, the VPC
 */
GetHostResponse * CodeStarconnectionsClient::getHost(const GetHostRequest &request)
{
    return qobject_cast<GetHostResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * ListConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the connections associated with your
 */
ListConnectionsResponse * CodeStarconnectionsClient::listConnections(const ListConnectionsRequest &request)
{
    return qobject_cast<ListConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * ListHostsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the hosts associated with your
 */
ListHostsResponse * CodeStarconnectionsClient::listHosts(const ListHostsRequest &request)
{
    return qobject_cast<ListHostsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the set of key-value pairs (metadata) that are used to manage the
 */
ListTagsForResourceResponse * CodeStarconnectionsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds to or modifies the tags of the given resource. Tags are metadata that can be used to manage a
 */
TagResourceResponse * CodeStarconnectionsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from an AWS
 */
UntagResourceResponse * CodeStarconnectionsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeStarconnectionsClient service, and returns a pointer to an
 * UpdateHostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a specified host with the provided
 */
UpdateHostResponse * CodeStarconnectionsClient::updateHost(const UpdateHostRequest &request)
{
    return qobject_cast<UpdateHostResponse *>(send(request));
}

/*!
 * \class QtAws::CodeStarconnections::CodeStarconnectionsClientPrivate
 * \brief The CodeStarconnectionsClientPrivate class provides private implementation for CodeStarconnectionsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeStarconnections
 */

/*!
 * Constructs a CodeStarconnectionsClientPrivate object with public implementation \a q.
 */
CodeStarconnectionsClientPrivate::CodeStarconnectionsClientPrivate(CodeStarconnectionsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace CodeStarconnections
} // namespace QtAws
