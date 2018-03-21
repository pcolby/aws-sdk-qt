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

#include "updatebandwidthratelimitrequest.h"
#include "updatebandwidthratelimitrequest_p.h"
#include "updatebandwidthratelimitresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateBandwidthRateLimitRequest
 *
 * @brief  Implements StorageGateway UpdateBandwidthRateLimit requests.
 *
 * @see    StorageGatewayClient::updateBandwidthRateLimit
 */

/**
 * @brief  Constructs a new UpdateBandwidthRateLimitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBandwidthRateLimitResponse::UpdateBandwidthRateLimitResponse(

/**
 * @brief  Constructs a new UpdateBandwidthRateLimitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateBandwidthRateLimitRequest::UpdateBandwidthRateLimitRequest(const UpdateBandwidthRateLimitRequest &other)
    : StorageGatewayRequest(new UpdateBandwidthRateLimitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateBandwidthRateLimitRequest object.
 */
UpdateBandwidthRateLimitRequest::UpdateBandwidthRateLimitRequest()
    : StorageGatewayRequest(new UpdateBandwidthRateLimitRequestPrivate(StorageGatewayRequest::UpdateBandwidthRateLimitAction, this))
{

}

bool UpdateBandwidthRateLimitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateBandwidthRateLimitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateBandwidthRateLimitResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * UpdateBandwidthRateLimitRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBandwidthRateLimitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateBandwidthRateLimitRequestPrivate
 *
 * @brief  Private implementation for UpdateBandwidthRateLimitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBandwidthRateLimitRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public UpdateBandwidthRateLimitRequest instance.
 */
UpdateBandwidthRateLimitRequestPrivate::UpdateBandwidthRateLimitRequestPrivate(
    const StorageGatewayRequest::Action action, UpdateBandwidthRateLimitRequest * const q)
    : UpdateBandwidthRateLimitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBandwidthRateLimitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateBandwidthRateLimitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateBandwidthRateLimitRequest instance.
 */
UpdateBandwidthRateLimitRequestPrivate::UpdateBandwidthRateLimitRequestPrivate(
    const UpdateBandwidthRateLimitRequestPrivate &other, UpdateBandwidthRateLimitRequest * const q)
    : UpdateBandwidthRateLimitPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
