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

#include "listsuitesrequest.h"
#include "listsuitesrequest_p.h"
#include "listsuitesresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListSuitesRequest
 *
 * @brief  Implements DeviceFarm ListSuites requests.
 *
 * @see    DeviceFarmClient::listSuites
 */

/**
 * @brief  Constructs a new ListSuitesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSuitesRequest::ListSuitesRequest(const ListSuitesRequest &other)
    : DeviceFarmRequest(new ListSuitesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSuitesRequest object.
 */
ListSuitesRequest::ListSuitesRequest()
    : DeviceFarmRequest(new ListSuitesRequestPrivate(DeviceFarmRequest::ListSuitesAction, this))
{

}

bool ListSuitesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSuitesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSuitesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ListSuitesRequest::response(QNetworkReply * const reply) const
{
    return new ListSuitesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSuitesRequestPrivate
 *
 * @brief  Private implementation for ListSuitesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSuitesRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListSuitesRequest instance.
 */
ListSuitesRequestPrivate::ListSuitesRequestPrivate(
    const DeviceFarmRequest::Action action, ListSuitesRequest * const q)
    : ListSuitesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSuitesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSuitesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSuitesRequest instance.
 */
ListSuitesRequestPrivate::ListSuitesRequestPrivate(
    const ListSuitesRequestPrivate &other, ListSuitesRequest * const q)
    : ListSuitesPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS
