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

#include "putgrouppolicyrequest.h"
#include "putgrouppolicyrequest_p.h"
#include "putgrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  PutGroupPolicyRequest
 *
 * @brief  Implements IAM PutGroupPolicy requests.
 *
 * @see    IAMClient::putGroupPolicy
 */

/**
 * @brief  Constructs a new PutGroupPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutGroupPolicyResponse::PutGroupPolicyResponse(

/**
 * @brief  Constructs a new PutGroupPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutGroupPolicyRequest::PutGroupPolicyRequest(const PutGroupPolicyRequest &other)
    : IAMRequest(new PutGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutGroupPolicyRequest object.
 */
PutGroupPolicyRequest::PutGroupPolicyRequest()
    : IAMRequest(new PutGroupPolicyRequestPrivate(IAMRequest::PutGroupPolicyAction, this))
{

}

bool PutGroupPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutGroupPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutGroupPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * PutGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutGroupPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutGroupPolicyRequestPrivate
 *
 * @brief  Private implementation for PutGroupPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutGroupPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public PutGroupPolicyRequest instance.
 */
PutGroupPolicyRequestPrivate::PutGroupPolicyRequestPrivate(
    const IAMRequest::Action action, PutGroupPolicyRequest * const q)
    : PutGroupPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutGroupPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutGroupPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutGroupPolicyRequest instance.
 */
PutGroupPolicyRequestPrivate::PutGroupPolicyRequestPrivate(
    const PutGroupPolicyRequestPrivate &other, PutGroupPolicyRequest * const q)
    : PutGroupPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
