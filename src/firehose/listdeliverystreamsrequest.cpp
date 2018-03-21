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

#include "listdeliverystreamsrequest.h"
#include "listdeliverystreamsrequest_p.h"
#include "listdeliverystreamsresponse.h"
#include "firehoserequest_p.h"

namespace AWS {
namespace Firehose {

/**
 * @class  ListDeliveryStreamsRequest
 *
 * @brief  Implements Firehose ListDeliveryStreams requests.
 *
 * @see    FirehoseClient::listDeliveryStreams
 */

/**
 * @brief  Constructs a new ListDeliveryStreamsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeliveryStreamsResponse::ListDeliveryStreamsResponse(

/**
 * @brief  Constructs a new ListDeliveryStreamsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDeliveryStreamsRequest::ListDeliveryStreamsRequest(const ListDeliveryStreamsRequest &other)
    : FirehoseRequest(new ListDeliveryStreamsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDeliveryStreamsRequest object.
 */
ListDeliveryStreamsRequest::ListDeliveryStreamsRequest()
    : FirehoseRequest(new ListDeliveryStreamsRequestPrivate(FirehoseRequest::ListDeliveryStreamsAction, this))
{

}

bool ListDeliveryStreamsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDeliveryStreamsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDeliveryStreamsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  FirehoseClient::send
 */
AwsAbstractResponse * ListDeliveryStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeliveryStreamsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDeliveryStreamsRequestPrivate
 *
 * @brief  Private implementation for ListDeliveryStreamsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeliveryStreamsRequestPrivate object.
 *
 * @param  action  Firehose action being performed.
 * @param  q       Pointer to this object's public ListDeliveryStreamsRequest instance.
 */
ListDeliveryStreamsRequestPrivate::ListDeliveryStreamsRequestPrivate(
    const FirehoseRequest::Action action, ListDeliveryStreamsRequest * const q)
    : ListDeliveryStreamsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDeliveryStreamsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDeliveryStreamsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDeliveryStreamsRequest instance.
 */
ListDeliveryStreamsRequestPrivate::ListDeliveryStreamsRequestPrivate(
    const ListDeliveryStreamsRequestPrivate &other, ListDeliveryStreamsRequest * const q)
    : ListDeliveryStreamsPrivate(other, q)
{

}
