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

#include "listtapesrequest.h"
#include "listtapesrequest_p.h"
#include "listtapesresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  ListTapesRequest
 *
 * @brief  Implements StorageGateway ListTapes requests.
 *
 * @see    StorageGatewayClient::listTapes
 */

/**
 * @brief  Constructs a new ListTapesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTapesRequest::ListTapesRequest(const ListTapesRequest &other)
    : StorageGatewayRequest(new ListTapesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTapesRequest object.
 */
ListTapesRequest::ListTapesRequest()
    : StorageGatewayRequest(new ListTapesRequestPrivate(StorageGatewayRequest::ListTapesAction, this))
{

}

bool ListTapesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTapesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTapesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * ListTapesRequest::response(QNetworkReply * const reply) const
{
    return new ListTapesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTapesRequestPrivate
 *
 * @brief  Private implementation for ListTapesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTapesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ListTapesRequest instance.
 */
ListTapesRequestPrivate::ListTapesRequestPrivate(
    const StorageGatewayRequest::Action action, ListTapesRequest * const q)
    : ListTapesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTapesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTapesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTapesRequest instance.
 */
ListTapesRequestPrivate::ListTapesRequestPrivate(
    const ListTapesRequestPrivate &other, ListTapesRequest * const q)
    : ListTapesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
