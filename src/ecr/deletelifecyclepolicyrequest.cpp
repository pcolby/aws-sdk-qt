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

#include "deletelifecyclepolicyrequest.h"
#include "deletelifecyclepolicyrequest_p.h"
#include "deletelifecyclepolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/**
 * @class  DeleteLifecyclePolicyRequest
 *
 * @brief  Implements ECR DeleteLifecyclePolicy requests.
 *
 * @see    ECRClient::deleteLifecyclePolicy
 */

/**
 * @brief  Constructs a new DeleteLifecyclePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest(const DeleteLifecyclePolicyRequest &other)
    : ECRRequest(new DeleteLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLifecyclePolicyRequest object.
 */
DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest()
    : ECRRequest(new DeleteLifecyclePolicyRequestPrivate(ECRRequest::DeleteLifecyclePolicyAction, this))
{

}

bool DeleteLifecyclePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLifecyclePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLifecyclePolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * DeleteLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLifecyclePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLifecyclePolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteLifecyclePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLifecyclePolicyRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public DeleteLifecyclePolicyRequest instance.
 */
DeleteLifecyclePolicyRequestPrivate::DeleteLifecyclePolicyRequestPrivate(
    const ECRRequest::Action action, DeleteLifecyclePolicyRequest * const q)
    : DeleteLifecyclePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLifecyclePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLifecyclePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLifecyclePolicyRequest instance.
 */
DeleteLifecyclePolicyRequestPrivate::DeleteLifecyclePolicyRequestPrivate(
    const DeleteLifecyclePolicyRequestPrivate &other, DeleteLifecyclePolicyRequest * const q)
    : DeleteLifecyclePolicyPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
