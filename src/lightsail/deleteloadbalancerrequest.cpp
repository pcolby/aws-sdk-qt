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

#include "deleteloadbalancerrequest.h"
#include "deleteloadbalancerrequest_p.h"
#include "deleteloadbalancerresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  DeleteLoadBalancerRequest
 *
 * @brief  Implements Lightsail DeleteLoadBalancer requests.
 *
 * @see    LightsailClient::deleteLoadBalancer
 */

/**
 * @brief  Constructs a new DeleteLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLoadBalancerRequest::DeleteLoadBalancerRequest(const DeleteLoadBalancerRequest &other)
    : LightsailRequest(new DeleteLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLoadBalancerRequest object.
 */
DeleteLoadBalancerRequest::DeleteLoadBalancerRequest()
    : LightsailRequest(new DeleteLoadBalancerRequestPrivate(LightsailRequest::DeleteLoadBalancerAction, this))
{

}

bool DeleteLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLoadBalancerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for DeleteLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DeleteLoadBalancerRequest instance.
 */
DeleteLoadBalancerRequestPrivate::DeleteLoadBalancerRequestPrivate(
    const LightsailRequest::Action action, DeleteLoadBalancerRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLoadBalancerRequest instance.
 */
DeleteLoadBalancerRequestPrivate::DeleteLoadBalancerRequestPrivate(
    const DeleteLoadBalancerRequestPrivate &other, DeleteLoadBalancerRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
