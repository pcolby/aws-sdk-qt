// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbclusterrequest.h"
#include "deletedbclusterrequest_p.h"
#include "deletedbclusterresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::DeleteDBClusterRequest
 * \brief The DeleteDBClusterRequest class provides an interface for Neptune DeleteDBCluster requests.
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
 * \sa NeptuneClient::deleteDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBClusterRequest::DeleteDBClusterRequest(const DeleteDBClusterRequest &other)
    : NeptuneRequest(new DeleteDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBClusterRequest object.
 */
DeleteDBClusterRequest::DeleteDBClusterRequest()
    : NeptuneRequest(new DeleteDBClusterRequestPrivate(NeptuneRequest::DeleteDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::DeleteDBClusterRequestPrivate
 * \brief The DeleteDBClusterRequestPrivate class provides private implementation for DeleteDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a DeleteDBClusterRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
DeleteDBClusterRequestPrivate::DeleteDBClusterRequestPrivate(
    const NeptuneRequest::Action action, DeleteDBClusterRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBClusterRequest
 * class' copy constructor.
 */
DeleteDBClusterRequestPrivate::DeleteDBClusterRequestPrivate(
    const DeleteDBClusterRequestPrivate &other, DeleteDBClusterRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
