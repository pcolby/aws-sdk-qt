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

#include "listdeadlettersourcequeuesrequest.h"
#include "listdeadlettersourcequeuesrequest_p.h"
#include "listdeadlettersourcequeuesresponse.h"
#include "sqsrequest_p.h"

namespace AWS {
namespace SQS {

/**
 * @class  ListDeadLetterSourceQueuesRequest
 *
 * @brief  Implements SQS ListDeadLetterSourceQueues requests.
 *
 * @see    SQSClient::listDeadLetterSourceQueues
 */

/**
 * @brief  Constructs a new ListDeadLetterSourceQueuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeadLetterSourceQueuesResponse::ListDeadLetterSourceQueuesResponse(

/**
 * @brief  Constructs a new ListDeadLetterSourceQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDeadLetterSourceQueuesRequest::ListDeadLetterSourceQueuesRequest(const ListDeadLetterSourceQueuesRequest &other)
    : SQSRequest(new ListDeadLetterSourceQueuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDeadLetterSourceQueuesRequest object.
 */
ListDeadLetterSourceQueuesRequest::ListDeadLetterSourceQueuesRequest()
    : SQSRequest(new ListDeadLetterSourceQueuesRequestPrivate(SQSRequest::ListDeadLetterSourceQueuesAction, this))
{

}

bool ListDeadLetterSourceQueuesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDeadLetterSourceQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDeadLetterSourceQueuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SQSClient::send
 */
AwsAbstractResponse * ListDeadLetterSourceQueuesRequest::response(QNetworkReply * const reply) const
{
    return new ListDeadLetterSourceQueuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDeadLetterSourceQueuesRequestPrivate
 *
 * @brief  Private implementation for ListDeadLetterSourceQueuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeadLetterSourceQueuesRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public ListDeadLetterSourceQueuesRequest instance.
 */
ListDeadLetterSourceQueuesRequestPrivate::ListDeadLetterSourceQueuesRequestPrivate(
    const SQSRequest::Action action, ListDeadLetterSourceQueuesRequest * const q)
    : ListDeadLetterSourceQueuesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDeadLetterSourceQueuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDeadLetterSourceQueuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDeadLetterSourceQueuesRequest instance.
 */
ListDeadLetterSourceQueuesRequestPrivate::ListDeadLetterSourceQueuesRequestPrivate(
    const ListDeadLetterSourceQueuesRequestPrivate &other, ListDeadLetterSourceQueuesRequest * const q)
    : ListDeadLetterSourceQueuesPrivate(other, q)
{

}
