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

#include "modifylistenerrequest.h"
#include "modifylistenerrequest_p.h"
#include "modifylistenerresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ModifyListenerRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 ModifyListener requests.
 *
 * @see    ElasticLoadBalancingv2Client::modifyListener
 */

/**
 * @brief  Constructs a new ModifyListenerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyListenerRequest::ModifyListenerRequest(const ModifyListenerRequest &other)
    : ElasticLoadBalancingv2Request(new ModifyListenerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyListenerRequest object.
 */
ModifyListenerRequest::ModifyListenerRequest()
    : ElasticLoadBalancingv2Request(new ModifyListenerRequestPrivate(ElasticLoadBalancingv2Request::ModifyListenerAction, this))
{

}

bool ModifyListenerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyListenerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyListenerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * ModifyListenerRequest::response(QNetworkReply * const reply) const
{
    return new ModifyListenerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyListenerRequestPrivate
 *
 * @brief  Private implementation for ModifyListenerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyListenerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public ModifyListenerRequest instance.
 */
ModifyListenerRequestPrivate::ModifyListenerRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, ModifyListenerRequest * const q)
    : ModifyListenerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyListenerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyListenerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyListenerRequest instance.
 */
ModifyListenerRequestPrivate::ModifyListenerRequestPrivate(
    const ModifyListenerRequestPrivate &other, ModifyListenerRequest * const q)
    : ModifyListenerPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
