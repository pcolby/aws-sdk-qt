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

#include "listcommandsrequest.h"
#include "listcommandsrequest_p.h"
#include "listcommandsresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  ListCommandsRequest
 *
 * @brief  Implements SSM ListCommands requests.
 *
 * @see    SSMClient::listCommands
 */

/**
 * @brief  Constructs a new ListCommandsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCommandsRequest::ListCommandsRequest(const ListCommandsRequest &other)
    : SSMRequest(new ListCommandsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCommandsRequest object.
 */
ListCommandsRequest::ListCommandsRequest()
    : SSMRequest(new ListCommandsRequestPrivate(SSMRequest::ListCommandsAction, this))
{

}

bool ListCommandsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCommandsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCommandsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * ListCommandsRequest::response(QNetworkReply * const reply) const
{
    return new ListCommandsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCommandsRequestPrivate
 *
 * @brief  Private implementation for ListCommandsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCommandsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListCommandsRequest instance.
 */
ListCommandsRequestPrivate::ListCommandsRequestPrivate(
    const SSMRequest::Action action, ListCommandsRequest * const q)
    : ListCommandsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCommandsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCommandsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCommandsRequest instance.
 */
ListCommandsRequestPrivate::ListCommandsRequestPrivate(
    const ListCommandsRequestPrivate &other, ListCommandsRequest * const q)
    : ListCommandsPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
