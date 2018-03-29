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

#include "deletepermissionpolicyrequest.h"
#include "deletepermissionpolicyrequest_p.h"
#include "deletepermissionpolicyresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  DeletePermissionPolicyRequest
 *
 * @brief  Implements WAF DeletePermissionPolicy requests.
 *
 * @see    WAFClient::deletePermissionPolicy
 */

/**
 * @brief  Constructs a new DeletePermissionPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePermissionPolicyRequest::DeletePermissionPolicyRequest(const DeletePermissionPolicyRequest &other)
    : WAFRequest(new DeletePermissionPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePermissionPolicyRequest object.
 */
DeletePermissionPolicyRequest::DeletePermissionPolicyRequest()
    : WAFRequest(new DeletePermissionPolicyRequestPrivate(WAFRequest::DeletePermissionPolicyAction, this))
{

}

bool DeletePermissionPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePermissionPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePermissionPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePermissionPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePermissionPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePermissionPolicyRequestPrivate
 *
 * @brief  Private implementation for DeletePermissionPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePermissionPolicyRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public DeletePermissionPolicyRequest instance.
 */
DeletePermissionPolicyRequestPrivate::DeletePermissionPolicyRequestPrivate(
    const WAFRequest::Action action, DeletePermissionPolicyRequest * const q)
    : DeletePermissionPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePermissionPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePermissionPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePermissionPolicyRequest instance.
 */
DeletePermissionPolicyRequestPrivate::DeletePermissionPolicyRequestPrivate(
    const DeletePermissionPolicyRequestPrivate &other, DeletePermissionPolicyRequest * const q)
    : DeletePermissionPolicyPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
