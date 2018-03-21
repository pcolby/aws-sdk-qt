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

#include "listauthorizersrequest.h"
#include "listauthorizersrequest_p.h"
#include "listauthorizersresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListAuthorizersRequest
 *
 * @brief  Implements IoT ListAuthorizers requests.
 *
 * @see    IoTClient::listAuthorizers
 */

/**
 * @brief  Constructs a new ListAuthorizersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAuthorizersRequest::ListAuthorizersRequest(const ListAuthorizersRequest &other)
    : IoTRequest(new ListAuthorizersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAuthorizersRequest object.
 */
ListAuthorizersRequest::ListAuthorizersRequest()
    : IoTRequest(new ListAuthorizersRequestPrivate(IoTRequest::ListAuthorizersAction, this))
{

}

bool ListAuthorizersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAuthorizersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAuthorizersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListAuthorizersRequest::response(QNetworkReply * const reply) const
{
    return new ListAuthorizersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAuthorizersRequestPrivate
 *
 * @brief  Private implementation for ListAuthorizersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAuthorizersRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListAuthorizersRequest instance.
 */
ListAuthorizersRequestPrivate::ListAuthorizersRequestPrivate(
    const IoTRequest::Action action, ListAuthorizersRequest * const q)
    : ListAuthorizersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAuthorizersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAuthorizersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAuthorizersRequest instance.
 */
ListAuthorizersRequestPrivate::ListAuthorizersRequestPrivate(
    const ListAuthorizersRequestPrivate &other, ListAuthorizersRequest * const q)
    : ListAuthorizersPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
