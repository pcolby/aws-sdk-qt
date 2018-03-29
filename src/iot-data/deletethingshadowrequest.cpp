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

#include "deletethingshadowrequest.h"
#include "deletethingshadowrequest_p.h"
#include "deletethingshadowresponse.h"
#include "iotdataplanerequest_p.h"

namespace AWS {
namespace IoTDataPlane {

/**
 * @class  DeleteThingShadowRequest
 *
 * @brief  Implements IoTDataPlane DeleteThingShadow requests.
 *
 * @see    IoTDataPlaneClient::deleteThingShadow
 */

/**
 * @brief  Constructs a new DeleteThingShadowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteThingShadowRequest::DeleteThingShadowRequest(const DeleteThingShadowRequest &other)
    : IoTDataPlaneRequest(new DeleteThingShadowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteThingShadowRequest object.
 */
DeleteThingShadowRequest::DeleteThingShadowRequest()
    : IoTDataPlaneRequest(new DeleteThingShadowRequestPrivate(IoTDataPlaneRequest::DeleteThingShadowAction, this))
{

}

bool DeleteThingShadowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteThingShadowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteThingShadowResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTDataPlaneClient::send
 */
AwsAbstractResponse * DeleteThingShadowRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThingShadowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteThingShadowRequestPrivate
 *
 * @brief  Private implementation for DeleteThingShadowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingShadowRequestPrivate object.
 *
 * @param  action  IoTDataPlane action being performed.
 * @param  q       Pointer to this object's public DeleteThingShadowRequest instance.
 */
DeleteThingShadowRequestPrivate::DeleteThingShadowRequestPrivate(
    const IoTDataPlaneRequest::Action action, DeleteThingShadowRequest * const q)
    : DeleteThingShadowPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingShadowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteThingShadowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteThingShadowRequest instance.
 */
DeleteThingShadowRequestPrivate::DeleteThingShadowRequestPrivate(
    const DeleteThingShadowRequestPrivate &other, DeleteThingShadowRequest * const q)
    : DeleteThingShadowPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace AWS
