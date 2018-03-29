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

#include "getnamespacerequest.h"
#include "getnamespacerequest_p.h"
#include "getnamespaceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  GetNamespaceRequest
 *
 * @brief  Implements ServiceDiscovery GetNamespace requests.
 *
 * @see    ServiceDiscoveryClient::getNamespace
 */

/**
 * @brief  Constructs a new GetNamespaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetNamespaceRequest::GetNamespaceRequest(const GetNamespaceRequest &other)
    : ServiceDiscoveryRequest(new GetNamespaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetNamespaceRequest object.
 */
GetNamespaceRequest::GetNamespaceRequest()
    : ServiceDiscoveryRequest(new GetNamespaceRequestPrivate(ServiceDiscoveryRequest::GetNamespaceAction, this))
{

}

bool GetNamespaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetNamespaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetNamespaceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new GetNamespaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetNamespaceRequestPrivate
 *
 * @brief  Private implementation for GetNamespaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetNamespaceRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public GetNamespaceRequest instance.
 */
GetNamespaceRequestPrivate::GetNamespaceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetNamespaceRequest * const q)
    : GetNamespacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetNamespaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetNamespaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetNamespaceRequest instance.
 */
GetNamespaceRequestPrivate::GetNamespaceRequestPrivate(
    const GetNamespaceRequestPrivate &other, GetNamespaceRequest * const q)
    : GetNamespacePrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
