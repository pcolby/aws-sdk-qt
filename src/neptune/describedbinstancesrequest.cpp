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

#include "describedbinstancesrequest.h"
#include "describedbinstancesrequest_p.h"
#include "describedbinstancesresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::DescribeDBInstancesRequest
 * \brief The DescribeDBInstancesRequest class provides an interface for Neptune DescribeDBInstances requests.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network
 * 
 *  security>
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 *
 * \sa NeptuneClient::describeDBInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBInstancesRequest::DescribeDBInstancesRequest(const DescribeDBInstancesRequest &other)
    : NeptuneRequest(new DescribeDBInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBInstancesRequest object.
 */
DescribeDBInstancesRequest::DescribeDBInstancesRequest()
    : NeptuneRequest(new DescribeDBInstancesRequestPrivate(NeptuneRequest::DescribeDBInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::DescribeDBInstancesRequestPrivate
 * \brief The DescribeDBInstancesRequestPrivate class provides private implementation for DescribeDBInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a DescribeDBInstancesRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
DescribeDBInstancesRequestPrivate::DescribeDBInstancesRequestPrivate(
    const NeptuneRequest::Action action, DescribeDBInstancesRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBInstancesRequest
 * class' copy constructor.
 */
DescribeDBInstancesRequestPrivate::DescribeDBInstancesRequestPrivate(
    const DescribeDBInstancesRequestPrivate &other, DescribeDBInstancesRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
