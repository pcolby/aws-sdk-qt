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

#include "createdeliverystreamrequest.h"
#include "createdeliverystreamrequest_p.h"
#include "createdeliverystreamresponse.h"
#include "firehoserequest_p.h"

namespace AWS {
namespace Firehose {

/**
 * @class  CreateDeliveryStreamRequest
 *
 * @brief  Implements Firehose CreateDeliveryStream requests.
 *
 * @see    FirehoseClient::createDeliveryStream
 */

/**
 * @brief  Constructs a new CreateDeliveryStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDeliveryStreamResponse::CreateDeliveryStreamResponse(

/**
 * @brief  Constructs a new CreateDeliveryStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDeliveryStreamRequest::CreateDeliveryStreamRequest(const CreateDeliveryStreamRequest &other)
    : FirehoseRequest(new CreateDeliveryStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDeliveryStreamRequest object.
 */
CreateDeliveryStreamRequest::CreateDeliveryStreamRequest()
    : FirehoseRequest(new CreateDeliveryStreamRequestPrivate(FirehoseRequest::CreateDeliveryStreamAction, this))
{

}

bool CreateDeliveryStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDeliveryStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDeliveryStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  FirehoseClient::send
 */
AwsAbstractResponse * CreateDeliveryStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeliveryStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDeliveryStreamRequestPrivate
 *
 * @brief  Private implementation for CreateDeliveryStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeliveryStreamRequestPrivate object.
 *
 * @param  action  Firehose action being performed.
 * @param  q       Pointer to this object's public CreateDeliveryStreamRequest instance.
 */
CreateDeliveryStreamRequestPrivate::CreateDeliveryStreamRequestPrivate(
    const FirehoseRequest::Action action, CreateDeliveryStreamRequest * const q)
    : CreateDeliveryStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeliveryStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDeliveryStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDeliveryStreamRequest instance.
 */
CreateDeliveryStreamRequestPrivate::CreateDeliveryStreamRequestPrivate(
    const CreateDeliveryStreamRequestPrivate &other, CreateDeliveryStreamRequest * const q)
    : CreateDeliveryStreamPrivate(other, q)
{

}
