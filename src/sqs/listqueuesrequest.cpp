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

#include "listqueuesrequest.h"
#include "listqueuesrequest_p.h"
#include "listqueuesresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/**
 * @class  ListQueuesRequest
 *
 * @brief  Implements SQS ListQueues requests.
 *
 * @see    SQSClient::listQueues
 */

/**
 * @brief  Constructs a new ListQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListQueuesRequest::ListQueuesRequest(const ListQueuesRequest &other)
    : SQSRequest(new ListQueuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListQueuesRequest object.
 */
ListQueuesRequest::ListQueuesRequest()
    : SQSRequest(new ListQueuesRequestPrivate(SQSRequest::ListQueuesAction, this))
{

}

bool ListQueuesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListQueuesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQueuesRequest::response(QNetworkReply * const reply) const
{
    return new ListQueuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListQueuesRequestPrivate
 *
 * @brief  Private implementation for ListQueuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQueuesRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public ListQueuesRequest instance.
 */
ListQueuesRequestPrivate::ListQueuesRequestPrivate(
    const SQSRequest::Action action, ListQueuesRequest * const q)
    : SQSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListQueuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListQueuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListQueuesRequest instance.
 */
ListQueuesRequestPrivate::ListQueuesRequestPrivate(
    const ListQueuesRequestPrivate &other, ListQueuesRequest * const q)
    : SQSRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
