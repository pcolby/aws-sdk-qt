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

#include "deletelistenerrequest.h"
#include "deletelistenerrequest_p.h"
#include "deletelistenerresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeleteListenerRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DeleteListener requests.
 *
 * @see    ElasticLoadBalancingv2Client::deleteListener
 */

/**
 * @brief  Constructs a new DeleteListenerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteListenerRequest::DeleteListenerRequest(const DeleteListenerRequest &other)
    : ElasticLoadBalancingv2Request(new DeleteListenerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteListenerRequest object.
 */
DeleteListenerRequest::DeleteListenerRequest()
    : ElasticLoadBalancingv2Request(new DeleteListenerRequestPrivate(ElasticLoadBalancingv2Request::DeleteListenerAction, this))
{

}

bool DeleteListenerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteListenerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteListenerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteListenerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteListenerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteListenerRequestPrivate
 *
 * @brief  Private implementation for DeleteListenerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteListenerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DeleteListenerRequest instance.
 */
DeleteListenerRequestPrivate::DeleteListenerRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DeleteListenerRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteListenerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteListenerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteListenerRequest instance.
 */
DeleteListenerRequestPrivate::DeleteListenerRequestPrivate(
    const DeleteListenerRequestPrivate &other, DeleteListenerRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
