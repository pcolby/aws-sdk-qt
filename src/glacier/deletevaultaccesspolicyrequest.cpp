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

#include "deletevaultaccesspolicyrequest.h"
#include "deletevaultaccesspolicyrequest_p.h"
#include "deletevaultaccesspolicyresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  DeleteVaultAccessPolicyRequest
 *
 * @brief  Implements Glacier DeleteVaultAccessPolicy requests.
 *
 * @see    GlacierClient::deleteVaultAccessPolicy
 */

/**
 * @brief  Constructs a new DeleteVaultAccessPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVaultAccessPolicyRequest::DeleteVaultAccessPolicyRequest(const DeleteVaultAccessPolicyRequest &other)
    : GlacierRequest(new DeleteVaultAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVaultAccessPolicyRequest object.
 */
DeleteVaultAccessPolicyRequest::DeleteVaultAccessPolicyRequest()
    : GlacierRequest(new DeleteVaultAccessPolicyRequestPrivate(GlacierRequest::DeleteVaultAccessPolicyAction, this))
{

}

bool DeleteVaultAccessPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVaultAccessPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVaultAccessPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVaultAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVaultAccessPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVaultAccessPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteVaultAccessPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVaultAccessPolicyRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public DeleteVaultAccessPolicyRequest instance.
 */
DeleteVaultAccessPolicyRequestPrivate::DeleteVaultAccessPolicyRequestPrivate(
    const GlacierRequest::Action action, DeleteVaultAccessPolicyRequest * const q)
    : GlacierRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVaultAccessPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVaultAccessPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVaultAccessPolicyRequest instance.
 */
DeleteVaultAccessPolicyRequestPrivate::DeleteVaultAccessPolicyRequestPrivate(
    const DeleteVaultAccessPolicyRequestPrivate &other, DeleteVaultAccessPolicyRequest * const q)
    : GlacierRequestPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
