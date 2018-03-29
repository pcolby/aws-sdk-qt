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

#include "listbrokersrequest.h"
#include "listbrokersrequest_p.h"
#include "listbrokersresponse.h"
#include "mqrequest_p.h"

namespace AWS {
namespace MQ {

/**
 * @class  ListBrokersRequest
 *
 * @brief  Implements MQ ListBrokers requests.
 *
 * @see    MQClient::listBrokers
 */

/**
 * @brief  Constructs a new ListBrokersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBrokersRequest::ListBrokersRequest(const ListBrokersRequest &other)
    : MQRequest(new ListBrokersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBrokersRequest object.
 */
ListBrokersRequest::ListBrokersRequest()
    : MQRequest(new ListBrokersRequestPrivate(MQRequest::ListBrokersAction, this))
{

}

bool ListBrokersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBrokersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBrokersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MQClient::send
 */
AwsAbstractResponse * ListBrokersRequest::response(QNetworkReply * const reply) const
{
    return new ListBrokersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBrokersRequestPrivate
 *
 * @brief  Private implementation for ListBrokersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBrokersRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public ListBrokersRequest instance.
 */
ListBrokersRequestPrivate::ListBrokersRequestPrivate(
    const MQRequest::Action action, ListBrokersRequest * const q)
    : ListBrokersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBrokersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBrokersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBrokersRequest instance.
 */
ListBrokersRequestPrivate::ListBrokersRequestPrivate(
    const ListBrokersRequestPrivate &other, ListBrokersRequest * const q)
    : ListBrokersPrivate(other, q)
{

}

} // namespace MQ
} // namespace AWS
