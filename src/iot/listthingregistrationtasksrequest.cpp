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

#include "listthingregistrationtasksrequest.h"
#include "listthingregistrationtasksrequest_p.h"
#include "listthingregistrationtasksresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListThingRegistrationTasksRequest
 *
 * @brief  Implements IoT ListThingRegistrationTasks requests.
 *
 * @see    IoTClient::listThingRegistrationTasks
 */

/**
 * @brief  Constructs a new ListThingRegistrationTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListThingRegistrationTasksRequest::ListThingRegistrationTasksRequest(const ListThingRegistrationTasksRequest &other)
    : IoTRequest(new ListThingRegistrationTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListThingRegistrationTasksRequest object.
 */
ListThingRegistrationTasksRequest::ListThingRegistrationTasksRequest()
    : IoTRequest(new ListThingRegistrationTasksRequestPrivate(IoTRequest::ListThingRegistrationTasksAction, this))
{

}

bool ListThingRegistrationTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListThingRegistrationTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListThingRegistrationTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListThingRegistrationTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListThingRegistrationTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListThingRegistrationTasksRequestPrivate
 *
 * @brief  Private implementation for ListThingRegistrationTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingRegistrationTasksRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListThingRegistrationTasksRequest instance.
 */
ListThingRegistrationTasksRequestPrivate::ListThingRegistrationTasksRequestPrivate(
    const IoTRequest::Action action, ListThingRegistrationTasksRequest * const q)
    : ListThingRegistrationTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListThingRegistrationTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListThingRegistrationTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListThingRegistrationTasksRequest instance.
 */
ListThingRegistrationTasksRequestPrivate::ListThingRegistrationTasksRequestPrivate(
    const ListThingRegistrationTasksRequestPrivate &other, ListThingRegistrationTasksRequest * const q)
    : ListThingRegistrationTasksPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
