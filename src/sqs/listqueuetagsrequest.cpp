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

#include "listqueuetagsrequest.h"
#include "listqueuetagsrequest_p.h"
#include "listqueuetagsresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/**
 * @class  ListQueueTagsRequest
 *
 * @brief  Implements SQS ListQueueTags requests.
 *
 * @see    SQSClient::listQueueTags
 */

/**
 * @brief  Constructs a new ListQueueTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListQueueTagsRequest::ListQueueTagsRequest(const ListQueueTagsRequest &other)
    : SQSRequest(new ListQueueTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListQueueTagsRequest object.
 */
ListQueueTagsRequest::ListQueueTagsRequest()
    : SQSRequest(new ListQueueTagsRequestPrivate(SQSRequest::ListQueueTagsAction, this))
{

}

bool ListQueueTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListQueueTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListQueueTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQueueTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListQueueTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListQueueTagsRequestPrivate
 *
 * @brief  Private implementation for ListQueueTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQueueTagsRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public ListQueueTagsRequest instance.
 */
ListQueueTagsRequestPrivate::ListQueueTagsRequestPrivate(
    const SQSRequest::Action action, ListQueueTagsRequest * const q)
    : SQSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListQueueTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListQueueTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListQueueTagsRequest instance.
 */
ListQueueTagsRequestPrivate::ListQueueTagsRequestPrivate(
    const ListQueueTagsRequestPrivate &other, ListQueueTagsRequest * const q)
    : SQSRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
