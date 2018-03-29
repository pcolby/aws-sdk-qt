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

#include "getotaupdaterequest.h"
#include "getotaupdaterequest_p.h"
#include "getotaupdateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  GetOTAUpdateRequest
 *
 * @brief  Implements IoT GetOTAUpdate requests.
 *
 * @see    IoTClient::getOTAUpdate
 */

/**
 * @brief  Constructs a new GetOTAUpdateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOTAUpdateRequest::GetOTAUpdateRequest(const GetOTAUpdateRequest &other)
    : IoTRequest(new GetOTAUpdateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetOTAUpdateRequest object.
 */
GetOTAUpdateRequest::GetOTAUpdateRequest()
    : IoTRequest(new GetOTAUpdateRequestPrivate(IoTRequest::GetOTAUpdateAction, this))
{

}

bool GetOTAUpdateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetOTAUpdateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOTAUpdateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOTAUpdateRequest::response(QNetworkReply * const reply) const
{
    return new GetOTAUpdateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetOTAUpdateRequestPrivate
 *
 * @brief  Private implementation for GetOTAUpdateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOTAUpdateRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public GetOTAUpdateRequest instance.
 */
GetOTAUpdateRequestPrivate::GetOTAUpdateRequestPrivate(
    const IoTRequest::Action action, GetOTAUpdateRequest * const q)
    : GetOTAUpdatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetOTAUpdateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOTAUpdateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOTAUpdateRequest instance.
 */
GetOTAUpdateRequestPrivate::GetOTAUpdateRequestPrivate(
    const GetOTAUpdateRequestPrivate &other, GetOTAUpdateRequest * const q)
    : GetOTAUpdatePrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
