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

#include "createlbcookiestickinesspolicyrequest.h"
#include "createlbcookiestickinesspolicyrequest_p.h"
#include "createlbcookiestickinesspolicyresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  CreateLBCookieStickinessPolicyRequest
 *
 * @brief  Implements ElasticLoadBalancing CreateLBCookieStickinessPolicy requests.
 *
 * @see    ElasticLoadBalancingClient::createLBCookieStickinessPolicy
 */

/**
 * @brief  Constructs a new CreateLBCookieStickinessPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLBCookieStickinessPolicyRequest::CreateLBCookieStickinessPolicyRequest(const CreateLBCookieStickinessPolicyRequest &other)
    : ElasticLoadBalancingRequest(new CreateLBCookieStickinessPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLBCookieStickinessPolicyRequest object.
 */
CreateLBCookieStickinessPolicyRequest::CreateLBCookieStickinessPolicyRequest()
    : ElasticLoadBalancingRequest(new CreateLBCookieStickinessPolicyRequestPrivate(ElasticLoadBalancingRequest::CreateLBCookieStickinessPolicyAction, this))
{

}

bool CreateLBCookieStickinessPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLBCookieStickinessPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLBCookieStickinessPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * CreateLBCookieStickinessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateLBCookieStickinessPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLBCookieStickinessPolicyRequestPrivate
 *
 * @brief  Private implementation for CreateLBCookieStickinessPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLBCookieStickinessPolicyRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public CreateLBCookieStickinessPolicyRequest instance.
 */
CreateLBCookieStickinessPolicyRequestPrivate::CreateLBCookieStickinessPolicyRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, CreateLBCookieStickinessPolicyRequest * const q)
    : CreateLBCookieStickinessPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLBCookieStickinessPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLBCookieStickinessPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLBCookieStickinessPolicyRequest instance.
 */
CreateLBCookieStickinessPolicyRequestPrivate::CreateLBCookieStickinessPolicyRequestPrivate(
    const CreateLBCookieStickinessPolicyRequestPrivate &other, CreateLBCookieStickinessPolicyRequest * const q)
    : CreateLBCookieStickinessPolicyPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace AWS
