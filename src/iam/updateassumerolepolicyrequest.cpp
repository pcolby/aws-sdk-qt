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

#include "updateassumerolepolicyrequest.h"
#include "updateassumerolepolicyrequest_p.h"
#include "updateassumerolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateAssumeRolePolicyRequest
 *
 * @brief  Implements IAM UpdateAssumeRolePolicy requests.
 *
 * @see    IAMClient::updateAssumeRolePolicy
 */

/**
 * @brief  Constructs a new UpdateAssumeRolePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAssumeRolePolicyRequest::UpdateAssumeRolePolicyRequest(const UpdateAssumeRolePolicyRequest &other)
    : IAMRequest(new UpdateAssumeRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAssumeRolePolicyRequest object.
 */
UpdateAssumeRolePolicyRequest::UpdateAssumeRolePolicyRequest()
    : IAMRequest(new UpdateAssumeRolePolicyRequestPrivate(IAMRequest::UpdateAssumeRolePolicyAction, this))
{

}

bool UpdateAssumeRolePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAssumeRolePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAssumeRolePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssumeRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssumeRolePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAssumeRolePolicyRequestPrivate
 *
 * @brief  Private implementation for UpdateAssumeRolePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssumeRolePolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateAssumeRolePolicyRequest instance.
 */
UpdateAssumeRolePolicyRequestPrivate::UpdateAssumeRolePolicyRequestPrivate(
    const IAMRequest::Action action, UpdateAssumeRolePolicyRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssumeRolePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssumeRolePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAssumeRolePolicyRequest instance.
 */
UpdateAssumeRolePolicyRequestPrivate::UpdateAssumeRolePolicyRequestPrivate(
    const UpdateAssumeRolePolicyRequestPrivate &other, UpdateAssumeRolePolicyRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
