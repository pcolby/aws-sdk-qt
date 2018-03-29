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

#include "describetaperecoverypointsrequest.h"
#include "describetaperecoverypointsrequest_p.h"
#include "describetaperecoverypointsresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeTapeRecoveryPointsRequest
 *
 * @brief  Implements StorageGateway DescribeTapeRecoveryPoints requests.
 *
 * @see    StorageGatewayClient::describeTapeRecoveryPoints
 */

/**
 * @brief  Constructs a new DescribeTapeRecoveryPointsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTapeRecoveryPointsRequest::DescribeTapeRecoveryPointsRequest(const DescribeTapeRecoveryPointsRequest &other)
    : StorageGatewayRequest(new DescribeTapeRecoveryPointsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTapeRecoveryPointsRequest object.
 */
DescribeTapeRecoveryPointsRequest::DescribeTapeRecoveryPointsRequest()
    : StorageGatewayRequest(new DescribeTapeRecoveryPointsRequestPrivate(StorageGatewayRequest::DescribeTapeRecoveryPointsAction, this))
{

}

bool DescribeTapeRecoveryPointsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTapeRecoveryPointsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTapeRecoveryPointsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTapeRecoveryPointsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTapeRecoveryPointsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTapeRecoveryPointsRequestPrivate
 *
 * @brief  Private implementation for DescribeTapeRecoveryPointsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTapeRecoveryPointsRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeTapeRecoveryPointsRequest instance.
 */
DescribeTapeRecoveryPointsRequestPrivate::DescribeTapeRecoveryPointsRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeTapeRecoveryPointsRequest * const q)
    : StorageGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTapeRecoveryPointsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTapeRecoveryPointsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTapeRecoveryPointsRequest instance.
 */
DescribeTapeRecoveryPointsRequestPrivate::DescribeTapeRecoveryPointsRequestPrivate(
    const DescribeTapeRecoveryPointsRequestPrivate &other, DescribeTapeRecoveryPointsRequest * const q)
    : StorageGatewayRequestPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
