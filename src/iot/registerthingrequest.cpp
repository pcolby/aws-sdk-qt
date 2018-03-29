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

#include "registerthingrequest.h"
#include "registerthingrequest_p.h"
#include "registerthingresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  RegisterThingRequest
 *
 * @brief  Implements IoT RegisterThing requests.
 *
 * @see    IoTClient::registerThing
 */

/**
 * @brief  Constructs a new RegisterThingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterThingRequest::RegisterThingRequest(const RegisterThingRequest &other)
    : IoTRequest(new RegisterThingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterThingRequest object.
 */
RegisterThingRequest::RegisterThingRequest()
    : IoTRequest(new RegisterThingRequestPrivate(IoTRequest::RegisterThingAction, this))
{

}

bool RegisterThingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterThingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterThingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterThingRequest::response(QNetworkReply * const reply) const
{
    return new RegisterThingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterThingRequestPrivate
 *
 * @brief  Private implementation for RegisterThingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterThingRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public RegisterThingRequest instance.
 */
RegisterThingRequestPrivate::RegisterThingRequestPrivate(
    const IoTRequest::Action action, RegisterThingRequest * const q)
    : RegisterThingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterThingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterThingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterThingRequest instance.
 */
RegisterThingRequestPrivate::RegisterThingRequestPrivate(
    const RegisterThingRequestPrivate &other, RegisterThingRequest * const q)
    : RegisterThingPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
