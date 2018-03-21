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

#include "listtagsforvaultrequest.h"
#include "listtagsforvaultrequest_p.h"
#include "listtagsforvaultresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  ListTagsForVaultRequest
 *
 * @brief  Implements Glacier ListTagsForVault requests.
 *
 * @see    GlacierClient::listTagsForVault
 */

/**
 * @brief  Constructs a new ListTagsForVaultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsForVaultResponse::ListTagsForVaultResponse(

/**
 * @brief  Constructs a new ListTagsForVaultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsForVaultRequest::ListTagsForVaultRequest(const ListTagsForVaultRequest &other)
    : GlacierRequest(new ListTagsForVaultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsForVaultRequest object.
 */
ListTagsForVaultRequest::ListTagsForVaultRequest()
    : GlacierRequest(new ListTagsForVaultRequestPrivate(GlacierRequest::ListTagsForVaultAction, this))
{

}

bool ListTagsForVaultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsForVaultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsForVaultResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * ListTagsForVaultRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForVaultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsForVaultRequestPrivate
 *
 * @brief  Private implementation for ListTagsForVaultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForVaultRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public ListTagsForVaultRequest instance.
 */
ListTagsForVaultRequestPrivate::ListTagsForVaultRequestPrivate(
    const GlacierRequest::Action action, ListTagsForVaultRequest * const q)
    : ListTagsForVaultPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForVaultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForVaultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsForVaultRequest instance.
 */
ListTagsForVaultRequestPrivate::ListTagsForVaultRequestPrivate(
    const ListTagsForVaultRequestPrivate &other, ListTagsForVaultRequest * const q)
    : ListTagsForVaultPrivate(other, q)
{

}
