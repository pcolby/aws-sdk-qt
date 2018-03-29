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

#include "updateendpointsbatchrequest.h"
#include "updateendpointsbatchrequest_p.h"
#include "updateendpointsbatchresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  UpdateEndpointsBatchRequest
 *
 * @brief  Implements Pinpoint UpdateEndpointsBatch requests.
 *
 * @see    PinpointClient::updateEndpointsBatch
 */

/**
 * @brief  Constructs a new UpdateEndpointsBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateEndpointsBatchRequest::UpdateEndpointsBatchRequest(const UpdateEndpointsBatchRequest &other)
    : PinpointRequest(new UpdateEndpointsBatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateEndpointsBatchRequest object.
 */
UpdateEndpointsBatchRequest::UpdateEndpointsBatchRequest()
    : PinpointRequest(new UpdateEndpointsBatchRequestPrivate(PinpointRequest::UpdateEndpointsBatchAction, this))
{

}

bool UpdateEndpointsBatchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateEndpointsBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateEndpointsBatchResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * UpdateEndpointsBatchRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointsBatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateEndpointsBatchRequestPrivate
 *
 * @brief  Private implementation for UpdateEndpointsBatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEndpointsBatchRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateEndpointsBatchRequest instance.
 */
UpdateEndpointsBatchRequestPrivate::UpdateEndpointsBatchRequestPrivate(
    const PinpointRequest::Action action, UpdateEndpointsBatchRequest * const q)
    : UpdateEndpointsBatchPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEndpointsBatchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointsBatchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateEndpointsBatchRequest instance.
 */
UpdateEndpointsBatchRequestPrivate::UpdateEndpointsBatchRequestPrivate(
    const UpdateEndpointsBatchRequestPrivate &other, UpdateEndpointsBatchRequest * const q)
    : UpdateEndpointsBatchPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
