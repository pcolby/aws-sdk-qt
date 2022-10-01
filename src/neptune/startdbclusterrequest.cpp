// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdbclusterrequest.h"
#include "startdbclusterrequest_p.h"
#include "startdbclusterresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::StartDBClusterRequest
 * \brief The StartDBClusterRequest class provides an interface for Neptune StartDBCluster requests.
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
 * \sa NeptuneClient::startDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
StartDBClusterRequest::StartDBClusterRequest(const StartDBClusterRequest &other)
    : NeptuneRequest(new StartDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDBClusterRequest object.
 */
StartDBClusterRequest::StartDBClusterRequest()
    : NeptuneRequest(new StartDBClusterRequestPrivate(NeptuneRequest::StartDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool StartDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new StartDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::StartDBClusterRequestPrivate
 * \brief The StartDBClusterRequestPrivate class provides private implementation for StartDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a StartDBClusterRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
StartDBClusterRequestPrivate::StartDBClusterRequestPrivate(
    const NeptuneRequest::Action action, StartDBClusterRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDBClusterRequest
 * class' copy constructor.
 */
StartDBClusterRequestPrivate::StartDBClusterRequestPrivate(
    const StartDBClusterRequestPrivate &other, StartDBClusterRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
