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

#include "getvaultlockrequest.h"
#include "getvaultlockrequest_p.h"
#include "getvaultlockresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  GetVaultLockRequest
 *
 * @brief  Implements Glacier GetVaultLock requests.
 *
 * @see    GlacierClient::getVaultLock
 */

/**
 * @brief  Constructs a new GetVaultLockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVaultLockResponse::GetVaultLockResponse(

/**
 * @brief  Constructs a new GetVaultLockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetVaultLockRequest::GetVaultLockRequest(const GetVaultLockRequest &other)
    : GlacierRequest(new GetVaultLockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetVaultLockRequest object.
 */
GetVaultLockRequest::GetVaultLockRequest()
    : GlacierRequest(new GetVaultLockRequestPrivate(GlacierRequest::GetVaultLockAction, this))
{

}

bool GetVaultLockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetVaultLockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetVaultLockResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * GetVaultLockRequest::response(QNetworkReply * const reply) const
{
    return new GetVaultLockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetVaultLockRequestPrivate
 *
 * @brief  Private implementation for GetVaultLockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVaultLockRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public GetVaultLockRequest instance.
 */
GetVaultLockRequestPrivate::GetVaultLockRequestPrivate(
    const GlacierRequest::Action action, GetVaultLockRequest * const q)
    : GetVaultLockPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetVaultLockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetVaultLockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetVaultLockRequest instance.
 */
GetVaultLockRequestPrivate::GetVaultLockRequestPrivate(
    const GetVaultLockRequestPrivate &other, GetVaultLockRequest * const q)
    : GetVaultLockPrivate(other, q)
{

}
