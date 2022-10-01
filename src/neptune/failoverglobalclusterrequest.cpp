// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "failoverglobalclusterrequest.h"
#include "failoverglobalclusterrequest_p.h"
#include "failoverglobalclusterresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::FailoverGlobalClusterRequest
 * \brief The FailoverGlobalClusterRequest class provides an interface for Neptune FailoverGlobalCluster requests.
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
 * \sa NeptuneClient::failoverGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
FailoverGlobalClusterRequest::FailoverGlobalClusterRequest(const FailoverGlobalClusterRequest &other)
    : NeptuneRequest(new FailoverGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FailoverGlobalClusterRequest object.
 */
FailoverGlobalClusterRequest::FailoverGlobalClusterRequest()
    : NeptuneRequest(new FailoverGlobalClusterRequestPrivate(NeptuneRequest::FailoverGlobalClusterAction, this))
{

}

/*!
 * \reimp
 */
bool FailoverGlobalClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FailoverGlobalClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FailoverGlobalClusterRequest::response(QNetworkReply * const reply) const
{
    return new FailoverGlobalClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::FailoverGlobalClusterRequestPrivate
 * \brief The FailoverGlobalClusterRequestPrivate class provides private implementation for FailoverGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a FailoverGlobalClusterRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
FailoverGlobalClusterRequestPrivate::FailoverGlobalClusterRequestPrivate(
    const NeptuneRequest::Action action, FailoverGlobalClusterRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FailoverGlobalClusterRequest
 * class' copy constructor.
 */
FailoverGlobalClusterRequestPrivate::FailoverGlobalClusterRequestPrivate(
    const FailoverGlobalClusterRequestPrivate &other, FailoverGlobalClusterRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
