// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbclusterendpointrequest.h"
#include "createdbclusterendpointrequest_p.h"
#include "createdbclusterendpointresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::CreateDBClusterEndpointRequest
 * \brief The CreateDBClusterEndpointRequest class provides an interface for Neptune CreateDBClusterEndpoint requests.
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
 * \sa NeptuneClient::createDBClusterEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBClusterEndpointRequest::CreateDBClusterEndpointRequest(const CreateDBClusterEndpointRequest &other)
    : NeptuneRequest(new CreateDBClusterEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBClusterEndpointRequest object.
 */
CreateDBClusterEndpointRequest::CreateDBClusterEndpointRequest()
    : NeptuneRequest(new CreateDBClusterEndpointRequestPrivate(NeptuneRequest::CreateDBClusterEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBClusterEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBClusterEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBClusterEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::CreateDBClusterEndpointRequestPrivate
 * \brief The CreateDBClusterEndpointRequestPrivate class provides private implementation for CreateDBClusterEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a CreateDBClusterEndpointRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
CreateDBClusterEndpointRequestPrivate::CreateDBClusterEndpointRequestPrivate(
    const NeptuneRequest::Action action, CreateDBClusterEndpointRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterEndpointRequest
 * class' copy constructor.
 */
CreateDBClusterEndpointRequestPrivate::CreateDBClusterEndpointRequestPrivate(
    const CreateDBClusterEndpointRequestPrivate &other, CreateDBClusterEndpointRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
