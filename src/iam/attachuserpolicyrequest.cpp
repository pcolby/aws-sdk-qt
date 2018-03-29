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

#include "attachuserpolicyrequest.h"
#include "attachuserpolicyrequest_p.h"
#include "attachuserpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  AttachUserPolicyRequest
 *
 * @brief  Implements IAM AttachUserPolicy requests.
 *
 * @see    IAMClient::attachUserPolicy
 */

/**
 * @brief  Constructs a new AttachUserPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachUserPolicyRequest::AttachUserPolicyRequest(const AttachUserPolicyRequest &other)
    : IAMRequest(new AttachUserPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachUserPolicyRequest object.
 */
AttachUserPolicyRequest::AttachUserPolicyRequest()
    : IAMRequest(new AttachUserPolicyRequestPrivate(IAMRequest::AttachUserPolicyAction, this))
{

}

bool AttachUserPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachUserPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachUserPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachUserPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachUserPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachUserPolicyRequestPrivate
 *
 * @brief  Private implementation for AttachUserPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachUserPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public AttachUserPolicyRequest instance.
 */
AttachUserPolicyRequestPrivate::AttachUserPolicyRequestPrivate(
    const IAMRequest::Action action, AttachUserPolicyRequest * const q)
    : AttachUserPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachUserPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachUserPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachUserPolicyRequest instance.
 */
AttachUserPolicyRequestPrivate::AttachUserPolicyRequestPrivate(
    const AttachUserPolicyRequestPrivate &other, AttachUserPolicyRequest * const q)
    : AttachUserPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
