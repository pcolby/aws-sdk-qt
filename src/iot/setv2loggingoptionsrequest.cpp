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

#include "setv2loggingoptionsrequest.h"
#include "setv2loggingoptionsrequest_p.h"
#include "setv2loggingoptionsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  SetV2LoggingOptionsRequest
 *
 * @brief  Implements IoT SetV2LoggingOptions requests.
 *
 * @see    IoTClient::setV2LoggingOptions
 */

/**
 * @brief  Constructs a new SetV2LoggingOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetV2LoggingOptionsResponse::SetV2LoggingOptionsResponse(

/**
 * @brief  Constructs a new SetV2LoggingOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetV2LoggingOptionsRequest::SetV2LoggingOptionsRequest(const SetV2LoggingOptionsRequest &other)
    : IoTRequest(new SetV2LoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetV2LoggingOptionsRequest object.
 */
SetV2LoggingOptionsRequest::SetV2LoggingOptionsRequest()
    : IoTRequest(new SetV2LoggingOptionsRequestPrivate(IoTRequest::SetV2LoggingOptionsAction, this))
{

}

bool SetV2LoggingOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetV2LoggingOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetV2LoggingOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * SetV2LoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new SetV2LoggingOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetV2LoggingOptionsRequestPrivate
 *
 * @brief  Private implementation for SetV2LoggingOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetV2LoggingOptionsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public SetV2LoggingOptionsRequest instance.
 */
SetV2LoggingOptionsRequestPrivate::SetV2LoggingOptionsRequestPrivate(
    const IoTRequest::Action action, SetV2LoggingOptionsRequest * const q)
    : SetV2LoggingOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetV2LoggingOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetV2LoggingOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetV2LoggingOptionsRequest instance.
 */
SetV2LoggingOptionsRequestPrivate::SetV2LoggingOptionsRequestPrivate(
    const SetV2LoggingOptionsRequestPrivate &other, SetV2LoggingOptionsRequest * const q)
    : SetV2LoggingOptionsPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
