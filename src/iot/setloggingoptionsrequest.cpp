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

#include "setloggingoptionsrequest.h"
#include "setloggingoptionsrequest_p.h"
#include "setloggingoptionsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  SetLoggingOptionsRequest
 *
 * @brief  Implements IoT SetLoggingOptions requests.
 *
 * @see    IoTClient::setLoggingOptions
 */

/**
 * @brief  Constructs a new SetLoggingOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetLoggingOptionsRequest::SetLoggingOptionsRequest(const SetLoggingOptionsRequest &other)
    : IoTRequest(new SetLoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetLoggingOptionsRequest object.
 */
SetLoggingOptionsRequest::SetLoggingOptionsRequest()
    : IoTRequest(new SetLoggingOptionsRequestPrivate(IoTRequest::SetLoggingOptionsAction, this))
{

}

bool SetLoggingOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetLoggingOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetLoggingOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * SetLoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new SetLoggingOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetLoggingOptionsRequestPrivate
 *
 * @brief  Private implementation for SetLoggingOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLoggingOptionsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public SetLoggingOptionsRequest instance.
 */
SetLoggingOptionsRequestPrivate::SetLoggingOptionsRequestPrivate(
    const IoTRequest::Action action, SetLoggingOptionsRequest * const q)
    : SetLoggingOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetLoggingOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetLoggingOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetLoggingOptionsRequest instance.
 */
SetLoggingOptionsRequestPrivate::SetLoggingOptionsRequestPrivate(
    const SetLoggingOptionsRequestPrivate &other, SetLoggingOptionsRequest * const q)
    : SetLoggingOptionsPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
