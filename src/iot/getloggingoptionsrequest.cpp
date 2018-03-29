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

#include "getloggingoptionsrequest.h"
#include "getloggingoptionsrequest_p.h"
#include "getloggingoptionsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  GetLoggingOptionsRequest
 *
 * @brief  Implements IoT GetLoggingOptions requests.
 *
 * @see    IoTClient::getLoggingOptions
 */

/**
 * @brief  Constructs a new GetLoggingOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLoggingOptionsRequest::GetLoggingOptionsRequest(const GetLoggingOptionsRequest &other)
    : IoTRequest(new GetLoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLoggingOptionsRequest object.
 */
GetLoggingOptionsRequest::GetLoggingOptionsRequest()
    : IoTRequest(new GetLoggingOptionsRequestPrivate(IoTRequest::GetLoggingOptionsAction, this))
{

}

bool GetLoggingOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLoggingOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLoggingOptionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new GetLoggingOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLoggingOptionsRequestPrivate
 *
 * @brief  Private implementation for GetLoggingOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoggingOptionsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public GetLoggingOptionsRequest instance.
 */
GetLoggingOptionsRequestPrivate::GetLoggingOptionsRequestPrivate(
    const IoTRequest::Action action, GetLoggingOptionsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLoggingOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLoggingOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLoggingOptionsRequest instance.
 */
GetLoggingOptionsRequestPrivate::GetLoggingOptionsRequestPrivate(
    const GetLoggingOptionsRequestPrivate &other, GetLoggingOptionsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
