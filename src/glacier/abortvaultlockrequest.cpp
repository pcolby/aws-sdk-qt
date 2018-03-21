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

#include "abortvaultlockrequest.h"
#include "abortvaultlockrequest_p.h"
#include "abortvaultlockresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  AbortVaultLockRequest
 *
 * @brief  Implements Glacier AbortVaultLock requests.
 *
 * @see    GlacierClient::abortVaultLock
 */

/**
 * @brief  Constructs a new AbortVaultLockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AbortVaultLockResponse::AbortVaultLockResponse(

/**
 * @brief  Constructs a new AbortVaultLockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AbortVaultLockRequest::AbortVaultLockRequest(const AbortVaultLockRequest &other)
    : GlacierRequest(new AbortVaultLockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AbortVaultLockRequest object.
 */
AbortVaultLockRequest::AbortVaultLockRequest()
    : GlacierRequest(new AbortVaultLockRequestPrivate(GlacierRequest::AbortVaultLockAction, this))
{

}

bool AbortVaultLockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AbortVaultLockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AbortVaultLockResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * AbortVaultLockRequest::response(QNetworkReply * const reply) const
{
    return new AbortVaultLockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AbortVaultLockRequestPrivate
 *
 * @brief  Private implementation for AbortVaultLockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AbortVaultLockRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public AbortVaultLockRequest instance.
 */
AbortVaultLockRequestPrivate::AbortVaultLockRequestPrivate(
    const GlacierRequest::Action action, AbortVaultLockRequest * const q)
    : AbortVaultLockPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AbortVaultLockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AbortVaultLockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AbortVaultLockRequest instance.
 */
AbortVaultLockRequestPrivate::AbortVaultLockRequestPrivate(
    const AbortVaultLockRequestPrivate &other, AbortVaultLockRequest * const q)
    : AbortVaultLockPrivate(other, q)
{

}
