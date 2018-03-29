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

#include "getregistrationcoderequest.h"
#include "getregistrationcoderequest_p.h"
#include "getregistrationcoderesponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  GetRegistrationCodeRequest
 *
 * @brief  Implements IoT GetRegistrationCode requests.
 *
 * @see    IoTClient::getRegistrationCode
 */

/**
 * @brief  Constructs a new GetRegistrationCodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRegistrationCodeRequest::GetRegistrationCodeRequest(const GetRegistrationCodeRequest &other)
    : IoTRequest(new GetRegistrationCodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRegistrationCodeRequest object.
 */
GetRegistrationCodeRequest::GetRegistrationCodeRequest()
    : IoTRequest(new GetRegistrationCodeRequestPrivate(IoTRequest::GetRegistrationCodeAction, this))
{

}

bool GetRegistrationCodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRegistrationCodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRegistrationCodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * GetRegistrationCodeRequest::response(QNetworkReply * const reply) const
{
    return new GetRegistrationCodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRegistrationCodeRequestPrivate
 *
 * @brief  Private implementation for GetRegistrationCodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegistrationCodeRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public GetRegistrationCodeRequest instance.
 */
GetRegistrationCodeRequestPrivate::GetRegistrationCodeRequestPrivate(
    const IoTRequest::Action action, GetRegistrationCodeRequest * const q)
    : GetRegistrationCodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRegistrationCodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRegistrationCodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRegistrationCodeRequest instance.
 */
GetRegistrationCodeRequestPrivate::GetRegistrationCodeRequestPrivate(
    const GetRegistrationCodeRequestPrivate &other, GetRegistrationCodeRequest * const q)
    : GetRegistrationCodePrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
