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

#include "stopdbclusterrequest.h"
#include "stopdbclusterrequest_p.h"
#include "stopdbclusterresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::StopDBClusterRequest
 * \brief The StopDBClusterRequest class provides an interface for Neptune StopDBCluster requests.
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
 * \sa NeptuneClient::stopDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
StopDBClusterRequest::StopDBClusterRequest(const StopDBClusterRequest &other)
    : NeptuneRequest(new StopDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopDBClusterRequest object.
 */
StopDBClusterRequest::StopDBClusterRequest()
    : NeptuneRequest(new StopDBClusterRequestPrivate(NeptuneRequest::StopDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool StopDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new StopDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::StopDBClusterRequestPrivate
 * \brief The StopDBClusterRequestPrivate class provides private implementation for StopDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a StopDBClusterRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
StopDBClusterRequestPrivate::StopDBClusterRequestPrivate(
    const NeptuneRequest::Action action, StopDBClusterRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopDBClusterRequest
 * class' copy constructor.
 */
StopDBClusterRequestPrivate::StopDBClusterRequestPrivate(
    const StopDBClusterRequestPrivate &other, StopDBClusterRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
