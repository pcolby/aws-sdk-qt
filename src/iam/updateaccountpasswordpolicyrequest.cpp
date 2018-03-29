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

#include "updateaccountpasswordpolicyrequest.h"
#include "updateaccountpasswordpolicyrequest_p.h"
#include "updateaccountpasswordpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateAccountPasswordPolicyRequest
 *
 * @brief  Implements IAM UpdateAccountPasswordPolicy requests.
 *
 * @see    IAMClient::updateAccountPasswordPolicy
 */

/**
 * @brief  Constructs a new UpdateAccountPasswordPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAccountPasswordPolicyRequest::UpdateAccountPasswordPolicyRequest(const UpdateAccountPasswordPolicyRequest &other)
    : IAMRequest(new UpdateAccountPasswordPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAccountPasswordPolicyRequest object.
 */
UpdateAccountPasswordPolicyRequest::UpdateAccountPasswordPolicyRequest()
    : IAMRequest(new UpdateAccountPasswordPolicyRequestPrivate(IAMRequest::UpdateAccountPasswordPolicyAction, this))
{

}

bool UpdateAccountPasswordPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAccountPasswordPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAccountPasswordPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateAccountPasswordPolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccountPasswordPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAccountPasswordPolicyRequestPrivate
 *
 * @brief  Private implementation for UpdateAccountPasswordPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountPasswordPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateAccountPasswordPolicyRequest instance.
 */
UpdateAccountPasswordPolicyRequestPrivate::UpdateAccountPasswordPolicyRequestPrivate(
    const IAMRequest::Action action, UpdateAccountPasswordPolicyRequest * const q)
    : UpdateAccountPasswordPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountPasswordPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccountPasswordPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAccountPasswordPolicyRequest instance.
 */
UpdateAccountPasswordPolicyRequestPrivate::UpdateAccountPasswordPolicyRequestPrivate(
    const UpdateAccountPasswordPolicyRequestPrivate &other, UpdateAccountPasswordPolicyRequest * const q)
    : UpdateAccountPasswordPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
