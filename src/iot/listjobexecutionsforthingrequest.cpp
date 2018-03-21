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

#include "listjobexecutionsforthingrequest.h"
#include "listjobexecutionsforthingrequest_p.h"
#include "listjobexecutionsforthingresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListJobExecutionsForThingRequest
 *
 * @brief  Implements IoT ListJobExecutionsForThing requests.
 *
 * @see    IoTClient::listJobExecutionsForThing
 */

/**
 * @brief  Constructs a new ListJobExecutionsForThingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListJobExecutionsForThingResponse::ListJobExecutionsForThingResponse(

/**
 * @brief  Constructs a new ListJobExecutionsForThingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListJobExecutionsForThingRequest::ListJobExecutionsForThingRequest(const ListJobExecutionsForThingRequest &other)
    : IoTRequest(new ListJobExecutionsForThingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListJobExecutionsForThingRequest object.
 */
ListJobExecutionsForThingRequest::ListJobExecutionsForThingRequest()
    : IoTRequest(new ListJobExecutionsForThingRequestPrivate(IoTRequest::ListJobExecutionsForThingAction, this))
{

}

bool ListJobExecutionsForThingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListJobExecutionsForThingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListJobExecutionsForThingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListJobExecutionsForThingRequest::response(QNetworkReply * const reply) const
{
    return new ListJobExecutionsForThingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListJobExecutionsForThingRequestPrivate
 *
 * @brief  Private implementation for ListJobExecutionsForThingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobExecutionsForThingRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListJobExecutionsForThingRequest instance.
 */
ListJobExecutionsForThingRequestPrivate::ListJobExecutionsForThingRequestPrivate(
    const IoTRequest::Action action, ListJobExecutionsForThingRequest * const q)
    : ListJobExecutionsForThingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListJobExecutionsForThingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListJobExecutionsForThingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListJobExecutionsForThingRequest instance.
 */
ListJobExecutionsForThingRequestPrivate::ListJobExecutionsForThingRequestPrivate(
    const ListJobExecutionsForThingRequestPrivate &other, ListJobExecutionsForThingRequest * const q)
    : ListJobExecutionsForThingPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
