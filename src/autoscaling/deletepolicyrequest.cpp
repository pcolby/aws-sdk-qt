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

#include "deletepolicyrequest.h"
#include "deletepolicyrequest_p.h"
#include "deletepolicyresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  DeletePolicyRequest
 *
 * @brief  Implements AutoScaling DeletePolicy requests.
 *
 * @see    AutoScalingClient::deletePolicy
 */

/**
 * @brief  Constructs a new DeletePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePolicyResponse::DeletePolicyResponse(

/**
 * @brief  Constructs a new DeletePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePolicyRequest::DeletePolicyRequest(const DeletePolicyRequest &other)
    : AutoScalingRequest(new DeletePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePolicyRequest object.
 */
DeletePolicyRequest::DeletePolicyRequest()
    : AutoScalingRequest(new DeletePolicyRequestPrivate(AutoScalingRequest::DeletePolicyAction, this))
{

}

bool DeletePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DeletePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePolicyRequestPrivate
 *
 * @brief  Private implementation for DeletePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePolicyRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DeletePolicyRequest instance.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const AutoScalingRequest::Action action, DeletePolicyRequest * const q)
    : DeletePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePolicyRequest instance.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const DeletePolicyRequestPrivate &other, DeletePolicyRequest * const q)
    : DeletePolicyPrivate(other, q)
{

}
