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

#include "deletedeliverystreamrequest.h"
#include "deletedeliverystreamrequest_p.h"
#include "deletedeliverystreamresponse.h"
#include "firehoserequest_p.h"

namespace AWS {
namespace Firehose {

/**
 * @class  DeleteDeliveryStreamRequest
 *
 * @brief  Implements Firehose DeleteDeliveryStream requests.
 *
 * @see    FirehoseClient::deleteDeliveryStream
 */

/**
 * @brief  Constructs a new DeleteDeliveryStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDeliveryStreamRequest::DeleteDeliveryStreamRequest(const DeleteDeliveryStreamRequest &other)
    : FirehoseRequest(new DeleteDeliveryStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDeliveryStreamRequest object.
 */
DeleteDeliveryStreamRequest::DeleteDeliveryStreamRequest()
    : FirehoseRequest(new DeleteDeliveryStreamRequestPrivate(FirehoseRequest::DeleteDeliveryStreamAction, this))
{

}

bool DeleteDeliveryStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDeliveryStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDeliveryStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  FirehoseClient::send
 */
AwsAbstractResponse * DeleteDeliveryStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeliveryStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDeliveryStreamRequestPrivate
 *
 * @brief  Private implementation for DeleteDeliveryStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeliveryStreamRequestPrivate object.
 *
 * @param  action  Firehose action being performed.
 * @param  q       Pointer to this object's public DeleteDeliveryStreamRequest instance.
 */
DeleteDeliveryStreamRequestPrivate::DeleteDeliveryStreamRequestPrivate(
    const FirehoseRequest::Action action, DeleteDeliveryStreamRequest * const q)
    : DeleteDeliveryStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeliveryStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeliveryStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDeliveryStreamRequest instance.
 */
DeleteDeliveryStreamRequestPrivate::DeleteDeliveryStreamRequestPrivate(
    const DeleteDeliveryStreamRequestPrivate &other, DeleteDeliveryStreamRequest * const q)
    : DeleteDeliveryStreamPrivate(other, q)
{

}

} // namespace Firehose
} // namespace AWS
