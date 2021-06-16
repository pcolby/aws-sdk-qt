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
 *  With AWS Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications
 *  run in. When an instance becomes available, you can call the AWS Cloud Map API to register the instance with AWS Cloud
 *  Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health check.
 *  Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up
 *  to eight healthy records.
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
