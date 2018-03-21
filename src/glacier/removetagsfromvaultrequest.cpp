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

#include "removetagsfromvaultrequest.h"
#include "removetagsfromvaultrequest_p.h"
#include "removetagsfromvaultresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  RemoveTagsFromVaultRequest
 *
 * @brief  Implements Glacier RemoveTagsFromVault requests.
 *
 * @see    GlacierClient::removeTagsFromVault
 */

/**
 * @brief  Constructs a new RemoveTagsFromVaultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTagsFromVaultResponse::RemoveTagsFromVaultResponse(

/**
 * @brief  Constructs a new RemoveTagsFromVaultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsFromVaultRequest::RemoveTagsFromVaultRequest(const RemoveTagsFromVaultRequest &other)
    : GlacierRequest(new RemoveTagsFromVaultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveTagsFromVaultRequest object.
 */
RemoveTagsFromVaultRequest::RemoveTagsFromVaultRequest()
    : GlacierRequest(new RemoveTagsFromVaultRequestPrivate(GlacierRequest::RemoveTagsFromVaultAction, this))
{

}

bool RemoveTagsFromVaultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveTagsFromVaultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsFromVaultResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * RemoveTagsFromVaultRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromVaultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveTagsFromVaultRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsFromVaultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromVaultRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public RemoveTagsFromVaultRequest instance.
 */
RemoveTagsFromVaultRequestPrivate::RemoveTagsFromVaultRequestPrivate(
    const GlacierRequest::Action action, RemoveTagsFromVaultRequest * const q)
    : RemoveTagsFromVaultPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromVaultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromVaultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsFromVaultRequest instance.
 */
RemoveTagsFromVaultRequestPrivate::RemoveTagsFromVaultRequestPrivate(
    const RemoveTagsFromVaultRequestPrivate &other, RemoveTagsFromVaultRequest * const q)
    : RemoveTagsFromVaultPrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
