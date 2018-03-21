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

#include "deletepermissionpolicyrequest.h"
#include "deletepermissionpolicyrequest_p.h"
#include "deletepermissionpolicyresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeletePermissionPolicyRequest
 *
 * @brief  Implements WAFRegional DeletePermissionPolicy requests.
 *
 * @see    WAFRegionalClient::deletePermissionPolicy
 */

/**
 * @brief  Constructs a new DeletePermissionPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePermissionPolicyResponse::DeletePermissionPolicyResponse(

/**
 * @brief  Constructs a new DeletePermissionPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePermissionPolicyRequest::DeletePermissionPolicyRequest(const DeletePermissionPolicyRequest &other)
    : WAFRegionalRequest(new DeletePermissionPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePermissionPolicyRequest object.
 */
DeletePermissionPolicyRequest::DeletePermissionPolicyRequest()
    : WAFRegionalRequest(new DeletePermissionPolicyRequestPrivate(WAFRegionalRequest::DeletePermissionPolicyAction, this))
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
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * DeletePermissionPolicyRequest::response(QNetworkReply * const reply) const
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
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public DeletePermissionPolicyRequest instance.
 */
DeletePermissionPolicyRequestPrivate::DeletePermissionPolicyRequestPrivate(
    const WAFRegionalRequest::Action action, DeletePermissionPolicyRequest * const q)
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

} // namespace WAFRegional
} // namespace AWS
