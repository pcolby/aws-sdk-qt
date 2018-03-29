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

#include "deletetrafficpolicyrequest.h"
#include "deletetrafficpolicyrequest_p.h"
#include "deletetrafficpolicyresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  DeleteTrafficPolicyRequest
 *
 * @brief  Implements Route53 DeleteTrafficPolicy requests.
 *
 * @see    Route53Client::deleteTrafficPolicy
 */

/**
 * @brief  Constructs a new DeleteTrafficPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTrafficPolicyRequest::DeleteTrafficPolicyRequest(const DeleteTrafficPolicyRequest &other)
    : Route53Request(new DeleteTrafficPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTrafficPolicyRequest object.
 */
DeleteTrafficPolicyRequest::DeleteTrafficPolicyRequest()
    : Route53Request(new DeleteTrafficPolicyRequestPrivate(Route53Request::DeleteTrafficPolicyAction, this))
{

}

bool DeleteTrafficPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTrafficPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTrafficPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * DeleteTrafficPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrafficPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTrafficPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteTrafficPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrafficPolicyRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public DeleteTrafficPolicyRequest instance.
 */
DeleteTrafficPolicyRequestPrivate::DeleteTrafficPolicyRequestPrivate(
    const Route53Request::Action action, DeleteTrafficPolicyRequest * const q)
    : DeleteTrafficPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrafficPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrafficPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTrafficPolicyRequest instance.
 */
DeleteTrafficPolicyRequestPrivate::DeleteTrafficPolicyRequestPrivate(
    const DeleteTrafficPolicyRequestPrivate &other, DeleteTrafficPolicyRequest * const q)
    : DeleteTrafficPolicyPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
