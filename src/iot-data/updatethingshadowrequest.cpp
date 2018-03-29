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

#include "updatethingshadowrequest.h"
#include "updatethingshadowrequest_p.h"
#include "updatethingshadowresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/**
 * @class  UpdateThingShadowRequest
 *
 * @brief  Implements IoTDataPlane UpdateThingShadow requests.
 *
 * @see    IoTDataPlaneClient::updateThingShadow
 */

/**
 * @brief  Constructs a new UpdateThingShadowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateThingShadowRequest::UpdateThingShadowRequest(const UpdateThingShadowRequest &other)
    : IoTDataPlaneRequest(new UpdateThingShadowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateThingShadowRequest object.
 */
UpdateThingShadowRequest::UpdateThingShadowRequest()
    : IoTDataPlaneRequest(new UpdateThingShadowRequestPrivate(IoTDataPlaneRequest::UpdateThingShadowAction, this))
{

}

bool UpdateThingShadowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateThingShadowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateThingShadowResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTDataPlaneClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThingShadowRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThingShadowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateThingShadowRequestPrivate
 *
 * @brief  Private implementation for UpdateThingShadowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingShadowRequestPrivate object.
 *
 * @param  action  IoTDataPlane action being performed.
 * @param  q       Pointer to this object's public UpdateThingShadowRequest instance.
 */
UpdateThingShadowRequestPrivate::UpdateThingShadowRequestPrivate(
    const IoTDataPlaneRequest::Action action, UpdateThingShadowRequest * const q)
    : UpdateThingShadowPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingShadowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateThingShadowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateThingShadowRequest instance.
 */
UpdateThingShadowRequestPrivate::UpdateThingShadowRequestPrivate(
    const UpdateThingShadowRequestPrivate &other, UpdateThingShadowRequest * const q)
    : UpdateThingShadowPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
