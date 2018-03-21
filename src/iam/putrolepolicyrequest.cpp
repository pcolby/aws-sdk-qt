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

#include "putrolepolicyrequest.h"
#include "putrolepolicyrequest_p.h"
#include "putrolepolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  PutRolePolicyRequest
 *
 * @brief  Implements IAM PutRolePolicy requests.
 *
 * @see    IAMClient::putRolePolicy
 */

/**
 * @brief  Constructs a new PutRolePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRolePolicyResponse::PutRolePolicyResponse(

/**
 * @brief  Constructs a new PutRolePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRolePolicyRequest::PutRolePolicyRequest(const PutRolePolicyRequest &other)
    : IAMRequest(new PutRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutRolePolicyRequest object.
 */
PutRolePolicyRequest::PutRolePolicyRequest()
    : IAMRequest(new PutRolePolicyRequestPrivate(IAMRequest::PutRolePolicyAction, this))
{

}

bool PutRolePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutRolePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRolePolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * PutRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutRolePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutRolePolicyRequestPrivate
 *
 * @brief  Private implementation for PutRolePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRolePolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public PutRolePolicyRequest instance.
 */
PutRolePolicyRequestPrivate::PutRolePolicyRequestPrivate(
    const IAMRequest::Action action, PutRolePolicyRequest * const q)
    : PutRolePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutRolePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRolePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRolePolicyRequest instance.
 */
PutRolePolicyRequestPrivate::PutRolePolicyRequestPrivate(
    const PutRolePolicyRequestPrivate &other, PutRolePolicyRequest * const q)
    : PutRolePolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
