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

#include "listattributesrequest.h"
#include "listattributesrequest_p.h"
#include "listattributesresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  ListAttributesRequest
 *
 * @brief  Implements ECS ListAttributes requests.
 *
 * @see    ECSClient::listAttributes
 */

/**
 * @brief  Constructs a new ListAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttributesResponse::ListAttributesResponse(

/**
 * @brief  Constructs a new ListAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAttributesRequest::ListAttributesRequest(const ListAttributesRequest &other)
    : ECSRequest(new ListAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAttributesRequest object.
 */
ListAttributesRequest::ListAttributesRequest()
    : ECSRequest(new ListAttributesRequestPrivate(ECSRequest::ListAttributesAction, this))
{

}

bool ListAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * ListAttributesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAttributesRequestPrivate
 *
 * @brief  Private implementation for ListAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttributesRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public ListAttributesRequest instance.
 */
ListAttributesRequestPrivate::ListAttributesRequestPrivate(
    const ECSRequest::Action action, ListAttributesRequest * const q)
    : ListAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAttributesRequest instance.
 */
ListAttributesRequestPrivate::ListAttributesRequestPrivate(
    const ListAttributesRequestPrivate &other, ListAttributesRequest * const q)
    : ListAttributesPrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS
