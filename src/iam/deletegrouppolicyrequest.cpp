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

#include "deletegrouppolicyrequest.h"
#include "deletegrouppolicyrequest_p.h"
#include "deletegrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteGroupPolicyRequest
 *
 * @brief  Implements IAM DeleteGroupPolicy requests.
 *
 * @see    IAMClient::deleteGroupPolicy
 */

/**
 * @brief  Constructs a new DeleteGroupPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGroupPolicyResponse::DeleteGroupPolicyResponse(

/**
 * @brief  Constructs a new DeleteGroupPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGroupPolicyRequest::DeleteGroupPolicyRequest(const DeleteGroupPolicyRequest &other)
    : IAMRequest(new DeleteGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGroupPolicyRequest object.
 */
DeleteGroupPolicyRequest::DeleteGroupPolicyRequest()
    : IAMRequest(new DeleteGroupPolicyRequestPrivate(IAMRequest::DeleteGroupPolicyAction, this))
{

}

bool DeleteGroupPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteGroupPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGroupPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteGroupPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteGroupPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGroupPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteGroupPolicyRequest instance.
 */
DeleteGroupPolicyRequestPrivate::DeleteGroupPolicyRequestPrivate(
    const IAMRequest::Action action, DeleteGroupPolicyRequest * const q)
    : DeleteGroupPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGroupPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGroupPolicyRequest instance.
 */
DeleteGroupPolicyRequestPrivate::DeleteGroupPolicyRequestPrivate(
    const DeleteGroupPolicyRequestPrivate &other, DeleteGroupPolicyRequest * const q)
    : DeleteGroupPolicyPrivate(other, q)
{

}
