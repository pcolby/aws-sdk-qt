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

#include "describetapesrequest.h"
#include "describetapesrequest_p.h"
#include "describetapesresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeTapesRequest
 *
 * @brief  Implements StorageGateway DescribeTapes requests.
 *
 * @see    StorageGatewayClient::describeTapes
 */

/**
 * @brief  Constructs a new DescribeTapesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTapesRequest::DescribeTapesRequest(const DescribeTapesRequest &other)
    : StorageGatewayRequest(new DescribeTapesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTapesRequest object.
 */
DescribeTapesRequest::DescribeTapesRequest()
    : StorageGatewayRequest(new DescribeTapesRequestPrivate(StorageGatewayRequest::DescribeTapesAction, this))
{

}

bool DescribeTapesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTapesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTapesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeTapesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTapesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTapesRequestPrivate
 *
 * @brief  Private implementation for DescribeTapesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTapesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeTapesRequest instance.
 */
DescribeTapesRequestPrivate::DescribeTapesRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeTapesRequest * const q)
    : DescribeTapesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTapesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTapesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTapesRequest instance.
 */
DescribeTapesRequestPrivate::DescribeTapesRequestPrivate(
    const DescribeTapesRequestPrivate &other, DescribeTapesRequest * const q)
    : DescribeTapesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
