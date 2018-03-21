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

#include "createappcookiestickinesspolicyrequest.h"
#include "createappcookiestickinesspolicyrequest_p.h"
#include "createappcookiestickinesspolicyresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  CreateAppCookieStickinessPolicyRequest
 *
 * @brief  Implements ElasticLoadBalancing CreateAppCookieStickinessPolicy requests.
 *
 * @see    ElasticLoadBalancingClient::createAppCookieStickinessPolicy
 */

/**
 * @brief  Constructs a new CreateAppCookieStickinessPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAppCookieStickinessPolicyResponse::CreateAppCookieStickinessPolicyResponse(

/**
 * @brief  Constructs a new CreateAppCookieStickinessPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAppCookieStickinessPolicyRequest::CreateAppCookieStickinessPolicyRequest(const CreateAppCookieStickinessPolicyRequest &other)
    : ElasticLoadBalancingRequest(new CreateAppCookieStickinessPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAppCookieStickinessPolicyRequest object.
 */
CreateAppCookieStickinessPolicyRequest::CreateAppCookieStickinessPolicyRequest()
    : ElasticLoadBalancingRequest(new CreateAppCookieStickinessPolicyRequestPrivate(ElasticLoadBalancingRequest::CreateAppCookieStickinessPolicyAction, this))
{

}

bool CreateAppCookieStickinessPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAppCookieStickinessPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAppCookieStickinessPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * CreateAppCookieStickinessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppCookieStickinessPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAppCookieStickinessPolicyRequestPrivate
 *
 * @brief  Private implementation for CreateAppCookieStickinessPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAppCookieStickinessPolicyRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public CreateAppCookieStickinessPolicyRequest instance.
 */
CreateAppCookieStickinessPolicyRequestPrivate::CreateAppCookieStickinessPolicyRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, CreateAppCookieStickinessPolicyRequest * const q)
    : CreateAppCookieStickinessPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAppCookieStickinessPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAppCookieStickinessPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAppCookieStickinessPolicyRequest instance.
 */
CreateAppCookieStickinessPolicyRequestPrivate::CreateAppCookieStickinessPolicyRequestPrivate(
    const CreateAppCookieStickinessPolicyRequestPrivate &other, CreateAppCookieStickinessPolicyRequest * const q)
    : CreateAppCookieStickinessPolicyPrivate(other, q)
{

}
