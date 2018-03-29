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

#include "listtestsrequest.h"
#include "listtestsrequest_p.h"
#include "listtestsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListTestsRequest
 *
 * @brief  Implements DeviceFarm ListTests requests.
 *
 * @see    DeviceFarmClient::listTests
 */

/**
 * @brief  Constructs a new ListTestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTestsRequest::ListTestsRequest(const ListTestsRequest &other)
    : DeviceFarmRequest(new ListTestsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTestsRequest object.
 */
ListTestsRequest::ListTestsRequest()
    : DeviceFarmRequest(new ListTestsRequestPrivate(DeviceFarmRequest::ListTestsAction, this))
{

}

bool ListTestsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTestsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTestsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ListTestsRequest::response(QNetworkReply * const reply) const
{
    return new ListTestsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTestsRequestPrivate
 *
 * @brief  Private implementation for ListTestsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTestsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListTestsRequest instance.
 */
ListTestsRequestPrivate::ListTestsRequestPrivate(
    const DeviceFarmRequest::Action action, ListTestsRequest * const q)
    : ListTestsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTestsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTestsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTestsRequest instance.
 */
ListTestsRequestPrivate::ListTestsRequestPrivate(
    const ListTestsRequestPrivate &other, ListTestsRequest * const q)
    : ListTestsPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
