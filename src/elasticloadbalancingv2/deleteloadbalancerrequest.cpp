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
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeleteLoadBalancerRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DeleteLoadBalancer requests.
 *
 * @see    ElasticLoadBalancingv2Client::deleteLoadBalancer
 */

/**
 * @brief  Constructs a new DeleteLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLoadBalancerRequest::DeleteLoadBalancerRequest(const DeleteLoadBalancerRequest &other)
    : ElasticLoadBalancingv2Request(new DeleteLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLoadBalancerRequest object.
 */
DeleteLoadBalancerRequest::DeleteLoadBalancerRequest()
    : ElasticLoadBalancingv2Request(new DeleteLoadBalancerRequestPrivate(ElasticLoadBalancingv2Request::DeleteLoadBalancerAction, this))
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
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DeleteLoadBalancerRequest::response(QNetworkReply * const reply) const
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
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DeleteLoadBalancerRequest instance.
 */
DeleteLoadBalancerRequestPrivate::DeleteLoadBalancerRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DeleteLoadBalancerRequest * const q)
    : DeleteLoadBalancerPrivate(action, q)
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
    : DeleteLoadBalancerPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
