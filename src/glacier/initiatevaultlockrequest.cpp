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

#include "initiatevaultlockrequest.h"
#include "initiatevaultlockrequest_p.h"
#include "initiatevaultlockresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  InitiateVaultLockRequest
 *
 * @brief  Implements Glacier InitiateVaultLock requests.
 *
 * @see    GlacierClient::initiateVaultLock
 */

/**
 * @brief  Constructs a new InitiateVaultLockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InitiateVaultLockRequest::InitiateVaultLockRequest(const InitiateVaultLockRequest &other)
    : GlacierRequest(new InitiateVaultLockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InitiateVaultLockRequest object.
 */
InitiateVaultLockRequest::InitiateVaultLockRequest()
    : GlacierRequest(new InitiateVaultLockRequestPrivate(GlacierRequest::InitiateVaultLockAction, this))
{

}

bool InitiateVaultLockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InitiateVaultLockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InitiateVaultLockResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateVaultLockRequest::response(QNetworkReply * const reply) const
{
    return new InitiateVaultLockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InitiateVaultLockRequestPrivate
 *
 * @brief  Private implementation for InitiateVaultLockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateVaultLockRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public InitiateVaultLockRequest instance.
 */
InitiateVaultLockRequestPrivate::InitiateVaultLockRequestPrivate(
    const GlacierRequest::Action action, InitiateVaultLockRequest * const q)
    : InitiateVaultLockPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InitiateVaultLockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InitiateVaultLockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InitiateVaultLockRequest instance.
 */
InitiateVaultLockRequestPrivate::InitiateVaultLockRequestPrivate(
    const InitiateVaultLockRequestPrivate &other, InitiateVaultLockRequest * const q)
    : InitiateVaultLockPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
