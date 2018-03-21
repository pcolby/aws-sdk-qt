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

#include "listenvironmentsrequest.h"
#include "listenvironmentsrequest_p.h"
#include "listenvironmentsresponse.h"
#include "cloud9request_p.h"

namespace AWS {
namespace Cloud9 {

/**
 * @class  ListEnvironmentsRequest
 *
 * @brief  Implements Cloud9 ListEnvironments requests.
 *
 * @see    Cloud9Client::listEnvironments
 */

/**
 * @brief  Constructs a new ListEnvironmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest(const ListEnvironmentsRequest &other)
    : Cloud9Request(new ListEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListEnvironmentsRequest object.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest()
    : Cloud9Request(new ListEnvironmentsRequestPrivate(Cloud9Request::ListEnvironmentsAction, this))
{

}

bool ListEnvironmentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListEnvironmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListEnvironmentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
AwsAbstractResponse * ListEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListEnvironmentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListEnvironmentsRequestPrivate
 *
 * @brief  Private implementation for ListEnvironmentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEnvironmentsRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public ListEnvironmentsRequest instance.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const Cloud9Request::Action action, ListEnvironmentsRequest * const q)
    : ListEnvironmentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListEnvironmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListEnvironmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListEnvironmentsRequest instance.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const ListEnvironmentsRequestPrivate &other, ListEnvironmentsRequest * const q)
    : ListEnvironmentsPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace AWS
