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

#include "getvaultaccesspolicyrequest.h"
#include "getvaultaccesspolicyrequest_p.h"
#include "getvaultaccesspolicyresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  GetVaultAccessPolicyRequest
 *
 * @brief  Implements Glacier GetVaultAccessPolicy requests.
 *
 * @see    GlacierClient::getVaultAccessPolicy
 */

/**
 * @brief  Constructs a new GetVaultAccessPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVaultAccessPolicyResponse::GetVaultAccessPolicyResponse(

/**
 * @brief  Constructs a new GetVaultAccessPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetVaultAccessPolicyRequest::GetVaultAccessPolicyRequest(const GetVaultAccessPolicyRequest &other)
    : GlacierRequest(new GetVaultAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetVaultAccessPolicyRequest object.
 */
GetVaultAccessPolicyRequest::GetVaultAccessPolicyRequest()
    : GlacierRequest(new GetVaultAccessPolicyRequestPrivate(GlacierRequest::GetVaultAccessPolicyAction, this))
{

}

bool GetVaultAccessPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetVaultAccessPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetVaultAccessPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * GetVaultAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetVaultAccessPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetVaultAccessPolicyRequestPrivate
 *
 * @brief  Private implementation for GetVaultAccessPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVaultAccessPolicyRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public GetVaultAccessPolicyRequest instance.
 */
GetVaultAccessPolicyRequestPrivate::GetVaultAccessPolicyRequestPrivate(
    const GlacierRequest::Action action, GetVaultAccessPolicyRequest * const q)
    : GetVaultAccessPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetVaultAccessPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetVaultAccessPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetVaultAccessPolicyRequest instance.
 */
GetVaultAccessPolicyRequestPrivate::GetVaultAccessPolicyRequestPrivate(
    const GetVaultAccessPolicyRequestPrivate &other, GetVaultAccessPolicyRequest * const q)
    : GetVaultAccessPolicyPrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
