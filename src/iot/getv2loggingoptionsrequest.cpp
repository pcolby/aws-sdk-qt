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

#include "getv2loggingoptionsrequest.h"
#include "getv2loggingoptionsrequest_p.h"
#include "getv2loggingoptionsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  GetV2LoggingOptionsRequest
 *
 * @brief  Implements IoT GetV2LoggingOptions requests.
 *
 * @see    IoTClient::getV2LoggingOptions
 */

/**
 * @brief  Constructs a new GetV2LoggingOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetV2LoggingOptionsRequest::GetV2LoggingOptionsRequest(const GetV2LoggingOptionsRequest &other)
    : IoTRequest(new GetV2LoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetV2LoggingOptionsRequest object.
 */
GetV2LoggingOptionsRequest::GetV2LoggingOptionsRequest()
    : IoTRequest(new GetV2LoggingOptionsRequestPrivate(IoTRequest::GetV2LoggingOptionsAction, this))
{

}

bool GetV2LoggingOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetV2LoggingOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetV2LoggingOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * GetV2LoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new GetV2LoggingOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetV2LoggingOptionsRequestPrivate
 *
 * @brief  Private implementation for GetV2LoggingOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetV2LoggingOptionsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public GetV2LoggingOptionsRequest instance.
 */
GetV2LoggingOptionsRequestPrivate::GetV2LoggingOptionsRequestPrivate(
    const IoTRequest::Action action, GetV2LoggingOptionsRequest * const q)
    : GetV2LoggingOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetV2LoggingOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetV2LoggingOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetV2LoggingOptionsRequest instance.
 */
GetV2LoggingOptionsRequestPrivate::GetV2LoggingOptionsRequestPrivate(
    const GetV2LoggingOptionsRequestPrivate &other, GetV2LoggingOptionsRequest * const q)
    : GetV2LoggingOptionsPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
