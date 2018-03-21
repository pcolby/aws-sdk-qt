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

#include "listrunsrequest.h"
#include "listrunsrequest_p.h"
#include "listrunsresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListRunsRequest
 *
 * @brief  Implements DeviceFarm ListRuns requests.
 *
 * @see    DeviceFarmClient::listRuns
 */

/**
 * @brief  Constructs a new ListRunsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRunsRequest::ListRunsRequest(const ListRunsRequest &other)
    : DeviceFarmRequest(new ListRunsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRunsRequest object.
 */
ListRunsRequest::ListRunsRequest()
    : DeviceFarmRequest(new ListRunsRequestPrivate(DeviceFarmRequest::ListRunsAction, this))
{

}

bool ListRunsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRunsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRunsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ListRunsRequest::response(QNetworkReply * const reply) const
{
    return new ListRunsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRunsRequestPrivate
 *
 * @brief  Private implementation for ListRunsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRunsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListRunsRequest instance.
 */
ListRunsRequestPrivate::ListRunsRequestPrivate(
    const DeviceFarmRequest::Action action, ListRunsRequest * const q)
    : ListRunsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRunsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRunsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRunsRequest instance.
 */
ListRunsRequestPrivate::ListRunsRequestPrivate(
    const ListRunsRequestPrivate &other, ListRunsRequest * const q)
    : ListRunsPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS
