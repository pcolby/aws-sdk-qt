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

#include "listthingregistrationtaskreportsrequest.h"
#include "listthingregistrationtaskreportsrequest_p.h"
#include "listthingregistrationtaskreportsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListThingRegistrationTaskReportsRequest
 *
 * @brief  Implements IoT ListThingRegistrationTaskReports requests.
 *
 * @see    IoTClient::listThingRegistrationTaskReports
 */

/**
 * @brief  Constructs a new ListThingRegistrationTaskReportsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingRegistrationTaskReportsResponse::ListThingRegistrationTaskReportsResponse(

/**
 * @brief  Constructs a new ListThingRegistrationTaskReportsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListThingRegistrationTaskReportsRequest::ListThingRegistrationTaskReportsRequest(const ListThingRegistrationTaskReportsRequest &other)
    : IoTRequest(new ListThingRegistrationTaskReportsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListThingRegistrationTaskReportsRequest object.
 */
ListThingRegistrationTaskReportsRequest::ListThingRegistrationTaskReportsRequest()
    : IoTRequest(new ListThingRegistrationTaskReportsRequestPrivate(IoTRequest::ListThingRegistrationTaskReportsAction, this))
{

}

bool ListThingRegistrationTaskReportsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListThingRegistrationTaskReportsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListThingRegistrationTaskReportsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListThingRegistrationTaskReportsRequest::response(QNetworkReply * const reply) const
{
    return new ListThingRegistrationTaskReportsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListThingRegistrationTaskReportsRequestPrivate
 *
 * @brief  Private implementation for ListThingRegistrationTaskReportsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingRegistrationTaskReportsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListThingRegistrationTaskReportsRequest instance.
 */
ListThingRegistrationTaskReportsRequestPrivate::ListThingRegistrationTaskReportsRequestPrivate(
    const IoTRequest::Action action, ListThingRegistrationTaskReportsRequest * const q)
    : ListThingRegistrationTaskReportsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListThingRegistrationTaskReportsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListThingRegistrationTaskReportsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListThingRegistrationTaskReportsRequest instance.
 */
ListThingRegistrationTaskReportsRequestPrivate::ListThingRegistrationTaskReportsRequestPrivate(
    const ListThingRegistrationTaskReportsRequestPrivate &other, ListThingRegistrationTaskReportsRequest * const q)
    : ListThingRegistrationTaskReportsPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
