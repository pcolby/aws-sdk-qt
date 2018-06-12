/*
    Copyright 2013-2018 Paul Colby

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

#include "describedbsubnetgroupsrequest.h"
#include "describedbsubnetgroupsrequest_p.h"
#include "describedbsubnetgroupsresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::DescribeDBSubnetGroupsRequest
 * \brief The DescribeDBSubnetGroupsRequest class provides an interface for Neptune DescribeDBSubnetGroups requests.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 * 
 *  </p
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network security.
 * 
 *  </p
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 * 
 *  guide>
 * 
 *  <b>Amazon Neptune API Reference</b>
 *
 * \sa NeptuneClient::describeDBSubnetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest(const DescribeDBSubnetGroupsRequest &other)
    : NeptuneRequest(new DescribeDBSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBSubnetGroupsRequest object.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest()
    : NeptuneRequest(new DescribeDBSubnetGroupsRequestPrivate(NeptuneRequest::DescribeDBSubnetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBSubnetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBSubnetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBSubnetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::DescribeDBSubnetGroupsRequestPrivate
 * \brief The DescribeDBSubnetGroupsRequestPrivate class provides private implementation for DescribeDBSubnetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a DescribeDBSubnetGroupsRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
DescribeDBSubnetGroupsRequestPrivate::DescribeDBSubnetGroupsRequestPrivate(
    const NeptuneRequest::Action action, DescribeDBSubnetGroupsRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBSubnetGroupsRequest
 * class' copy constructor.
 */
DescribeDBSubnetGroupsRequestPrivate::DescribeDBSubnetGroupsRequestPrivate(
    const DescribeDBSubnetGroupsRequestPrivate &other, DescribeDBSubnetGroupsRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
