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

#include "putuserpolicyrequest.h"
#include "putuserpolicyrequest_p.h"
#include "putuserpolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  PutUserPolicyRequest
 *
 * @brief  Implements IAM PutUserPolicy requests.
 *
 * @see    IAMClient::putUserPolicy
 */

/**
 * @brief  Constructs a new PutUserPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutUserPolicyResponse::PutUserPolicyResponse(

/**
 * @brief  Constructs a new PutUserPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutUserPolicyRequest::PutUserPolicyRequest(const PutUserPolicyRequest &other)
    : IAMRequest(new PutUserPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutUserPolicyRequest object.
 */
PutUserPolicyRequest::PutUserPolicyRequest()
    : IAMRequest(new PutUserPolicyRequestPrivate(IAMRequest::PutUserPolicyAction, this))
{

}

bool PutUserPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutUserPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutUserPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * PutUserPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutUserPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutUserPolicyRequestPrivate
 *
 * @brief  Private implementation for PutUserPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutUserPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public PutUserPolicyRequest instance.
 */
PutUserPolicyRequestPrivate::PutUserPolicyRequestPrivate(
    const IAMRequest::Action action, PutUserPolicyRequest * const q)
    : PutUserPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutUserPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutUserPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutUserPolicyRequest instance.
 */
PutUserPolicyRequestPrivate::PutUserPolicyRequestPrivate(
    const PutUserPolicyRequestPrivate &other, PutUserPolicyRequest * const q)
    : PutUserPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
