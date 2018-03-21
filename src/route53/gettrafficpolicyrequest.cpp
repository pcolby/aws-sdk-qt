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

#include "gettrafficpolicyrequest.h"
#include "gettrafficpolicyrequest_p.h"
#include "gettrafficpolicyresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  GetTrafficPolicyRequest
 *
 * @brief  Implements Route53 GetTrafficPolicy requests.
 *
 * @see    Route53Client::getTrafficPolicy
 */

/**
 * @brief  Constructs a new GetTrafficPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTrafficPolicyResponse::GetTrafficPolicyResponse(

/**
 * @brief  Constructs a new GetTrafficPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTrafficPolicyRequest::GetTrafficPolicyRequest(const GetTrafficPolicyRequest &other)
    : Route53Request(new GetTrafficPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTrafficPolicyRequest object.
 */
GetTrafficPolicyRequest::GetTrafficPolicyRequest()
    : Route53Request(new GetTrafficPolicyRequestPrivate(Route53Request::GetTrafficPolicyAction, this))
{

}

bool GetTrafficPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTrafficPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTrafficPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetTrafficPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetTrafficPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTrafficPolicyRequestPrivate
 *
 * @brief  Private implementation for GetTrafficPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTrafficPolicyRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetTrafficPolicyRequest instance.
 */
GetTrafficPolicyRequestPrivate::GetTrafficPolicyRequestPrivate(
    const Route53Request::Action action, GetTrafficPolicyRequest * const q)
    : GetTrafficPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTrafficPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTrafficPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTrafficPolicyRequest instance.
 */
GetTrafficPolicyRequestPrivate::GetTrafficPolicyRequestPrivate(
    const GetTrafficPolicyRequestPrivate &other, GetTrafficPolicyRequest * const q)
    : GetTrafficPolicyPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
