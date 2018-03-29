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

#include "listremoteaccesssessionsrequest.h"
#include "listremoteaccesssessionsrequest_p.h"
#include "listremoteaccesssessionsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListRemoteAccessSessionsRequest
 *
 * @brief  Implements DeviceFarm ListRemoteAccessSessions requests.
 *
 * @see    DeviceFarmClient::listRemoteAccessSessions
 */

/**
 * @brief  Constructs a new ListRemoteAccessSessionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRemoteAccessSessionsRequest::ListRemoteAccessSessionsRequest(const ListRemoteAccessSessionsRequest &other)
    : DeviceFarmRequest(new ListRemoteAccessSessionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRemoteAccessSessionsRequest object.
 */
ListRemoteAccessSessionsRequest::ListRemoteAccessSessionsRequest()
    : DeviceFarmRequest(new ListRemoteAccessSessionsRequestPrivate(DeviceFarmRequest::ListRemoteAccessSessionsAction, this))
{

}

bool ListRemoteAccessSessionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRemoteAccessSessionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRemoteAccessSessionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ListRemoteAccessSessionsRequest::response(QNetworkReply * const reply) const
{
    return new ListRemoteAccessSessionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRemoteAccessSessionsRequestPrivate
 *
 * @brief  Private implementation for ListRemoteAccessSessionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRemoteAccessSessionsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListRemoteAccessSessionsRequest instance.
 */
ListRemoteAccessSessionsRequestPrivate::ListRemoteAccessSessionsRequestPrivate(
    const DeviceFarmRequest::Action action, ListRemoteAccessSessionsRequest * const q)
    : ListRemoteAccessSessionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRemoteAccessSessionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRemoteAccessSessionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRemoteAccessSessionsRequest instance.
 */
ListRemoteAccessSessionsRequestPrivate::ListRemoteAccessSessionsRequestPrivate(
    const ListRemoteAccessSessionsRequestPrivate &other, ListRemoteAccessSessionsRequest * const q)
    : ListRemoteAccessSessionsPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
