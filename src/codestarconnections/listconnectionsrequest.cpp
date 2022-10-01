// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectionsrequest.h"
#include "listconnectionsrequest_p.h"
#include "listconnectionsresponse.h"
#include "codestarconnectionsrequest_p.h"

namespace QtAws {
namespace CodeStarconnections {

/*!
 * \class QtAws::CodeStarconnections::ListConnectionsRequest
 * \brief The ListConnectionsRequest class provides an interface for CodeStarconnections ListConnections requests.
 *
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
 *
 * \sa CodeStarconnectionsClient::listConnections
 */

/*!
 * Constructs a copy of \a other.
 */
ListConnectionsRequest::ListConnectionsRequest(const ListConnectionsRequest &other)
    : CodeStarconnectionsRequest(new ListConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConnectionsRequest object.
 */
ListConnectionsRequest::ListConnectionsRequest()
    : CodeStarconnectionsRequest(new ListConnectionsRequestPrivate(CodeStarconnectionsRequest::ListConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeStarconnections::ListConnectionsRequestPrivate
 * \brief The ListConnectionsRequestPrivate class provides private implementation for ListConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeStarconnections
 */

/*!
 * Constructs a ListConnectionsRequestPrivate object for CodeStarconnections \a action,
 * with public implementation \a q.
 */
ListConnectionsRequestPrivate::ListConnectionsRequestPrivate(
    const CodeStarconnectionsRequest::Action action, ListConnectionsRequest * const q)
    : CodeStarconnectionsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConnectionsRequest
 * class' copy constructor.
 */
ListConnectionsRequestPrivate::ListConnectionsRequestPrivate(
    const ListConnectionsRequestPrivate &other, ListConnectionsRequest * const q)
    : CodeStarconnectionsRequestPrivate(other, q)
{

}

} // namespace CodeStarconnections
} // namespace QtAws
