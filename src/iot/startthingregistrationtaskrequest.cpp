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

#include "startthingregistrationtaskrequest.h"
#include "startthingregistrationtaskrequest_p.h"
#include "startthingregistrationtaskresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  StartThingRegistrationTaskRequest
 *
 * @brief  Implements IoT StartThingRegistrationTask requests.
 *
 * @see    IoTClient::startThingRegistrationTask
 */

/**
 * @brief  Constructs a new StartThingRegistrationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartThingRegistrationTaskResponse::StartThingRegistrationTaskResponse(

/**
 * @brief  Constructs a new StartThingRegistrationTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartThingRegistrationTaskRequest::StartThingRegistrationTaskRequest(const StartThingRegistrationTaskRequest &other)
    : IoTRequest(new StartThingRegistrationTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartThingRegistrationTaskRequest object.
 */
StartThingRegistrationTaskRequest::StartThingRegistrationTaskRequest()
    : IoTRequest(new StartThingRegistrationTaskRequestPrivate(IoTRequest::StartThingRegistrationTaskAction, this))
{

}

bool StartThingRegistrationTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartThingRegistrationTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartThingRegistrationTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * StartThingRegistrationTaskRequest::response(QNetworkReply * const reply) const
{
    return new StartThingRegistrationTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartThingRegistrationTaskRequestPrivate
 *
 * @brief  Private implementation for StartThingRegistrationTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartThingRegistrationTaskRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public StartThingRegistrationTaskRequest instance.
 */
StartThingRegistrationTaskRequestPrivate::StartThingRegistrationTaskRequestPrivate(
    const IoTRequest::Action action, StartThingRegistrationTaskRequest * const q)
    : StartThingRegistrationTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartThingRegistrationTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartThingRegistrationTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartThingRegistrationTaskRequest instance.
 */
StartThingRegistrationTaskRequestPrivate::StartThingRegistrationTaskRequestPrivate(
    const StartThingRegistrationTaskRequestPrivate &other, StartThingRegistrationTaskRequest * const q)
    : StartThingRegistrationTaskPrivate(other, q)
{

}
