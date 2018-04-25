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

#include "deregisterinstancerequest.h"
#include "deregisterinstancerequest_p.h"
#include "deregisterinstanceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::DeregisterInstanceRequest
 * \brief The DeregisterInstanceRequest class provides an interface for ServiceDiscovery DeregisterInstance requests.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::deregisterInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterInstanceRequest::DeregisterInstanceRequest(const DeregisterInstanceRequest &other)
    : ServiceDiscoveryRequest(new DeregisterInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterInstanceRequest object.
 */
DeregisterInstanceRequest::DeregisterInstanceRequest()
    : ServiceDiscoveryRequest(new DeregisterInstanceRequestPrivate(ServiceDiscoveryRequest::DeregisterInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::DeregisterInstanceRequestPrivate
 * \brief The DeregisterInstanceRequestPrivate class provides private implementation for DeregisterInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a DeregisterInstanceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
DeregisterInstanceRequestPrivate::DeregisterInstanceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, DeregisterInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterInstanceRequest
 * class' copy constructor.
 */
DeregisterInstanceRequestPrivate::DeregisterInstanceRequestPrivate(
    const DeregisterInstanceRequestPrivate &other, DeregisterInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
