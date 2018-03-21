/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "registertargetsrequest.h"
#include "registertargetsrequest_p.h"
#include "registertargetsresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  RegisterTargetsRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 RegisterTargets requests.
 *
 * @see    ElasticLoadBalancingv2Client::registerTargets
 */

/**
 * @brief  Constructs a new RegisterTargetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterTargetsResponse::RegisterTargetsResponse(

/**
 * @brief  Constructs a new RegisterTargetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterTargetsRequest::RegisterTargetsRequest(const RegisterTargetsRequest &other)
    : ElasticLoadBalancingv2Request(new RegisterTargetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterTargetsRequest object.
 */
RegisterTargetsRequest::RegisterTargetsRequest()
    : ElasticLoadBalancingv2Request(new RegisterTargetsRequestPrivate(ElasticLoadBalancingv2Request::RegisterTargetsAction, this))
{

}

bool RegisterTargetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterTargetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterTargetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * RegisterTargetsRequest::response(QNetworkReply * const reply) const
{
    return new RegisterTargetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterTargetsRequestPrivate
 *
 * @brief  Private implementation for RegisterTargetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTargetsRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public RegisterTargetsRequest instance.
 */
RegisterTargetsRequestPrivate::RegisterTargetsRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, RegisterTargetsRequest * const q)
    : RegisterTargetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTargetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterTargetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterTargetsRequest instance.
 */
RegisterTargetsRequestPrivate::RegisterTargetsRequestPrivate(
    const RegisterTargetsRequestPrivate &other, RegisterTargetsRequest * const q)
    : RegisterTargetsPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
