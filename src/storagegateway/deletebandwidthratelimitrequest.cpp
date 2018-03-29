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

#include "deletebandwidthratelimitrequest.h"
#include "deletebandwidthratelimitrequest_p.h"
#include "deletebandwidthratelimitresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DeleteBandwidthRateLimitRequest
 *
 * @brief  Implements StorageGateway DeleteBandwidthRateLimit requests.
 *
 * @see    StorageGatewayClient::deleteBandwidthRateLimit
 */

/**
 * @brief  Constructs a new DeleteBandwidthRateLimitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBandwidthRateLimitRequest::DeleteBandwidthRateLimitRequest(const DeleteBandwidthRateLimitRequest &other)
    : StorageGatewayRequest(new DeleteBandwidthRateLimitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBandwidthRateLimitRequest object.
 */
DeleteBandwidthRateLimitRequest::DeleteBandwidthRateLimitRequest()
    : StorageGatewayRequest(new DeleteBandwidthRateLimitRequestPrivate(StorageGatewayRequest::DeleteBandwidthRateLimitAction, this))
{

}

bool DeleteBandwidthRateLimitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBandwidthRateLimitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBandwidthRateLimitResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBandwidthRateLimitRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBandwidthRateLimitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBandwidthRateLimitRequestPrivate
 *
 * @brief  Private implementation for DeleteBandwidthRateLimitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBandwidthRateLimitRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DeleteBandwidthRateLimitRequest instance.
 */
DeleteBandwidthRateLimitRequestPrivate::DeleteBandwidthRateLimitRequestPrivate(
    const StorageGatewayRequest::Action action, DeleteBandwidthRateLimitRequest * const q)
    : DeleteBandwidthRateLimitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBandwidthRateLimitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBandwidthRateLimitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBandwidthRateLimitRequest instance.
 */
DeleteBandwidthRateLimitRequestPrivate::DeleteBandwidthRateLimitRequestPrivate(
    const DeleteBandwidthRateLimitRequestPrivate &other, DeleteBandwidthRateLimitRequest * const q)
    : DeleteBandwidthRateLimitPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
