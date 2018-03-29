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

#include "registerdevicerequest.h"
#include "registerdevicerequest_p.h"
#include "registerdeviceresponse.h"
#include "cognitosyncrequest_p.h"

namespace AWS {
namespace CognitoSync {

/**
 * @class  RegisterDeviceRequest
 *
 * @brief  Implements CognitoSync RegisterDevice requests.
 *
 * @see    CognitoSyncClient::registerDevice
 */

/**
 * @brief  Constructs a new RegisterDeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterDeviceRequest::RegisterDeviceRequest(const RegisterDeviceRequest &other)
    : CognitoSyncRequest(new RegisterDeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterDeviceRequest object.
 */
RegisterDeviceRequest::RegisterDeviceRequest()
    : CognitoSyncRequest(new RegisterDeviceRequestPrivate(CognitoSyncRequest::RegisterDeviceAction, this))
{

}

bool RegisterDeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterDeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterDeviceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * RegisterDeviceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterDeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterDeviceRequestPrivate
 *
 * @brief  Private implementation for RegisterDeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDeviceRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public RegisterDeviceRequest instance.
 */
RegisterDeviceRequestPrivate::RegisterDeviceRequestPrivate(
    const CognitoSyncRequest::Action action, RegisterDeviceRequest * const q)
    : RegisterDevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterDeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterDeviceRequest instance.
 */
RegisterDeviceRequestPrivate::RegisterDeviceRequestPrivate(
    const RegisterDeviceRequestPrivate &other, RegisterDeviceRequest * const q)
    : RegisterDevicePrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace AWS
