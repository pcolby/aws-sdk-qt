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

#include "completevaultlockrequest.h"
#include "completevaultlockrequest_p.h"
#include "completevaultlockresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  CompleteVaultLockRequest
 *
 * @brief  Implements Glacier CompleteVaultLock requests.
 *
 * @see    GlacierClient::completeVaultLock
 */

/**
 * @brief  Constructs a new CompleteVaultLockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompleteVaultLockResponse::CompleteVaultLockResponse(

/**
 * @brief  Constructs a new CompleteVaultLockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CompleteVaultLockRequest::CompleteVaultLockRequest(const CompleteVaultLockRequest &other)
    : GlacierRequest(new CompleteVaultLockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CompleteVaultLockRequest object.
 */
CompleteVaultLockRequest::CompleteVaultLockRequest()
    : GlacierRequest(new CompleteVaultLockRequestPrivate(GlacierRequest::CompleteVaultLockAction, this))
{

}

bool CompleteVaultLockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CompleteVaultLockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CompleteVaultLockResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * CompleteVaultLockRequest::response(QNetworkReply * const reply) const
{
    return new CompleteVaultLockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CompleteVaultLockRequestPrivate
 *
 * @brief  Private implementation for CompleteVaultLockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompleteVaultLockRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public CompleteVaultLockRequest instance.
 */
CompleteVaultLockRequestPrivate::CompleteVaultLockRequestPrivate(
    const GlacierRequest::Action action, CompleteVaultLockRequest * const q)
    : CompleteVaultLockPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CompleteVaultLockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CompleteVaultLockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CompleteVaultLockRequest instance.
 */
CompleteVaultLockRequestPrivate::CompleteVaultLockRequestPrivate(
    const CompleteVaultLockRequestPrivate &other, CompleteVaultLockRequest * const q)
    : CompleteVaultLockPrivate(other, q)
{

}
