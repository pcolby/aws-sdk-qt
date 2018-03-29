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

#include "deletevaultrequest.h"
#include "deletevaultrequest_p.h"
#include "deletevaultresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  DeleteVaultRequest
 *
 * @brief  Implements Glacier DeleteVault requests.
 *
 * @see    GlacierClient::deleteVault
 */

/**
 * @brief  Constructs a new DeleteVaultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVaultRequest::DeleteVaultRequest(const DeleteVaultRequest &other)
    : GlacierRequest(new DeleteVaultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVaultRequest object.
 */
DeleteVaultRequest::DeleteVaultRequest()
    : GlacierRequest(new DeleteVaultRequestPrivate(GlacierRequest::DeleteVaultAction, this))
{

}

bool DeleteVaultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVaultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVaultResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * DeleteVaultRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVaultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVaultRequestPrivate
 *
 * @brief  Private implementation for DeleteVaultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVaultRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public DeleteVaultRequest instance.
 */
DeleteVaultRequestPrivate::DeleteVaultRequestPrivate(
    const GlacierRequest::Action action, DeleteVaultRequest * const q)
    : DeleteVaultPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVaultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVaultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVaultRequest instance.
 */
DeleteVaultRequestPrivate::DeleteVaultRequestPrivate(
    const DeleteVaultRequestPrivate &other, DeleteVaultRequest * const q)
    : DeleteVaultPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
