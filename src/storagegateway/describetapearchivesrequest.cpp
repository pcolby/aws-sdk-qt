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

#include "describetapearchivesrequest.h"
#include "describetapearchivesrequest_p.h"
#include "describetapearchivesresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeTapeArchivesRequest
 *
 * @brief  Implements StorageGateway DescribeTapeArchives requests.
 *
 * @see    StorageGatewayClient::describeTapeArchives
 */

/**
 * @brief  Constructs a new DescribeTapeArchivesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTapeArchivesRequest::DescribeTapeArchivesRequest(const DescribeTapeArchivesRequest &other)
    : StorageGatewayRequest(new DescribeTapeArchivesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTapeArchivesRequest object.
 */
DescribeTapeArchivesRequest::DescribeTapeArchivesRequest()
    : StorageGatewayRequest(new DescribeTapeArchivesRequestPrivate(StorageGatewayRequest::DescribeTapeArchivesAction, this))
{

}

bool DescribeTapeArchivesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTapeArchivesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTapeArchivesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeTapeArchivesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTapeArchivesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTapeArchivesRequestPrivate
 *
 * @brief  Private implementation for DescribeTapeArchivesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTapeArchivesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeTapeArchivesRequest instance.
 */
DescribeTapeArchivesRequestPrivate::DescribeTapeArchivesRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeTapeArchivesRequest * const q)
    : DescribeTapeArchivesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTapeArchivesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTapeArchivesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTapeArchivesRequest instance.
 */
DescribeTapeArchivesRequestPrivate::DescribeTapeArchivesRequestPrivate(
    const DescribeTapeArchivesRequestPrivate &other, DescribeTapeArchivesRequest * const q)
    : DescribeTapeArchivesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
