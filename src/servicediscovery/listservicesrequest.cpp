/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listservicesrequest.h"
#include "listservicesrequest_p.h"
#include "listservicesresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ListServicesRequest
 *
 * \brief The ListServicesRequest class provides an interface for ServiceDiscovery ListServices requests.
 *
 * \ingroup ServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::listServices
 */

/*!
 * @brief  Constructs a new ListServicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListServicesRequest::ListServicesRequest(const ListServicesRequest &other)
    : ServiceDiscoveryRequest(new ListServicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListServicesRequest object.
 */
ListServicesRequest::ListServicesRequest()
    : ServiceDiscoveryRequest(new ListServicesRequestPrivate(ServiceDiscoveryRequest::ListServicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListServicesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListServicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListServicesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServicesRequest::response(QNetworkReply * const reply) const
{
    return new ListServicesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListServicesRequestPrivate
 *
 * @brief  Private implementation for ListServicesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListServicesRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public ListServicesRequest instance.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ServiceDiscoveryRequest::Action action, ListServicesRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListServicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListServicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListServicesRequest instance.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ListServicesRequestPrivate &other, ListServicesRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
