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

#include "putlifecyclepolicyrequest.h"
#include "putlifecyclepolicyrequest_p.h"
#include "putlifecyclepolicyresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  PutLifecyclePolicyRequest
 *
 * @brief  Implements ECR PutLifecyclePolicy requests.
 *
 * @see    ECRClient::putLifecyclePolicy
 */

/**
 * @brief  Constructs a new PutLifecyclePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutLifecyclePolicyRequest::PutLifecyclePolicyRequest(const PutLifecyclePolicyRequest &other)
    : ECRRequest(new PutLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutLifecyclePolicyRequest object.
 */
PutLifecyclePolicyRequest::PutLifecyclePolicyRequest()
    : ECRRequest(new PutLifecyclePolicyRequestPrivate(ECRRequest::PutLifecyclePolicyAction, this))
{

}

bool PutLifecyclePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutLifecyclePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutLifecyclePolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * PutLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutLifecyclePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutLifecyclePolicyRequestPrivate
 *
 * @brief  Private implementation for PutLifecyclePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutLifecyclePolicyRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public PutLifecyclePolicyRequest instance.
 */
PutLifecyclePolicyRequestPrivate::PutLifecyclePolicyRequestPrivate(
    const ECRRequest::Action action, PutLifecyclePolicyRequest * const q)
    : PutLifecyclePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutLifecyclePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutLifecyclePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutLifecyclePolicyRequest instance.
 */
PutLifecyclePolicyRequestPrivate::PutLifecyclePolicyRequestPrivate(
    const PutLifecyclePolicyRequestPrivate &other, PutLifecyclePolicyRequest * const q)
    : PutLifecyclePolicyPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS
