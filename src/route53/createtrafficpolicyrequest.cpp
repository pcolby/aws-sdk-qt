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

#include "createtrafficpolicyrequest.h"
#include "createtrafficpolicyrequest_p.h"
#include "createtrafficpolicyresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  CreateTrafficPolicyRequest
 *
 * @brief  Implements Route53 CreateTrafficPolicy requests.
 *
 * @see    Route53Client::createTrafficPolicy
 */

/**
 * @brief  Constructs a new CreateTrafficPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTrafficPolicyResponse::CreateTrafficPolicyResponse(

/**
 * @brief  Constructs a new CreateTrafficPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTrafficPolicyRequest::CreateTrafficPolicyRequest(const CreateTrafficPolicyRequest &other)
    : Route53Request(new CreateTrafficPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTrafficPolicyRequest object.
 */
CreateTrafficPolicyRequest::CreateTrafficPolicyRequest()
    : Route53Request(new CreateTrafficPolicyRequestPrivate(Route53Request::CreateTrafficPolicyAction, this))
{

}

bool CreateTrafficPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTrafficPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTrafficPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * CreateTrafficPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrafficPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTrafficPolicyRequestPrivate
 *
 * @brief  Private implementation for CreateTrafficPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public CreateTrafficPolicyRequest instance.
 */
CreateTrafficPolicyRequestPrivate::CreateTrafficPolicyRequestPrivate(
    const Route53Request::Action action, CreateTrafficPolicyRequest * const q)
    : CreateTrafficPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTrafficPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTrafficPolicyRequest instance.
 */
CreateTrafficPolicyRequestPrivate::CreateTrafficPolicyRequestPrivate(
    const CreateTrafficPolicyRequestPrivate &other, CreateTrafficPolicyRequest * const q)
    : CreateTrafficPolicyPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
