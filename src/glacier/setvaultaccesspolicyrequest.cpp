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

#include "setvaultaccesspolicyrequest.h"
#include "setvaultaccesspolicyrequest_p.h"
#include "setvaultaccesspolicyresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  SetVaultAccessPolicyRequest
 *
 * @brief  Implements Glacier SetVaultAccessPolicy requests.
 *
 * @see    GlacierClient::setVaultAccessPolicy
 */

/**
 * @brief  Constructs a new SetVaultAccessPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetVaultAccessPolicyRequest::SetVaultAccessPolicyRequest(const SetVaultAccessPolicyRequest &other)
    : GlacierRequest(new SetVaultAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetVaultAccessPolicyRequest object.
 */
SetVaultAccessPolicyRequest::SetVaultAccessPolicyRequest()
    : GlacierRequest(new SetVaultAccessPolicyRequestPrivate(GlacierRequest::SetVaultAccessPolicyAction, this))
{

}

bool SetVaultAccessPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetVaultAccessPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetVaultAccessPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * SetVaultAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new SetVaultAccessPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetVaultAccessPolicyRequestPrivate
 *
 * @brief  Private implementation for SetVaultAccessPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetVaultAccessPolicyRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public SetVaultAccessPolicyRequest instance.
 */
SetVaultAccessPolicyRequestPrivate::SetVaultAccessPolicyRequestPrivate(
    const GlacierRequest::Action action, SetVaultAccessPolicyRequest * const q)
    : SetVaultAccessPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetVaultAccessPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetVaultAccessPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetVaultAccessPolicyRequest instance.
 */
SetVaultAccessPolicyRequestPrivate::SetVaultAccessPolicyRequestPrivate(
    const SetVaultAccessPolicyRequestPrivate &other, SetVaultAccessPolicyRequest * const q)
    : SetVaultAccessPolicyPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
