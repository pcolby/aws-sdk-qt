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

#include "cancelspotinstancerequestsrequest.h"
#include "cancelspotinstancerequestsrequest_p.h"
#include "cancelspotinstancerequestsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CancelSpotInstanceRequestsRequest
 *
 * @brief  Implements EC2 CancelSpotInstanceRequests requests.
 *
 * @see    EC2Client::cancelSpotInstanceRequests
 */

/**
 * @brief  Constructs a new CancelSpotInstanceRequestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelSpotInstanceRequestsRequest::CancelSpotInstanceRequestsRequest(const CancelSpotInstanceRequestsRequest &other)
    : EC2Request(new CancelSpotInstanceRequestsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelSpotInstanceRequestsRequest object.
 */
CancelSpotInstanceRequestsRequest::CancelSpotInstanceRequestsRequest()
    : EC2Request(new CancelSpotInstanceRequestsRequestPrivate(EC2Request::CancelSpotInstanceRequestsAction, this))
{

}

bool CancelSpotInstanceRequestsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelSpotInstanceRequestsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelSpotInstanceRequestsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CancelSpotInstanceRequestsRequest::response(QNetworkReply * const reply) const
{
    return new CancelSpotInstanceRequestsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelSpotInstanceRequestsRequestPrivate
 *
 * @brief  Private implementation for CancelSpotInstanceRequestsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelSpotInstanceRequestsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CancelSpotInstanceRequestsRequest instance.
 */
CancelSpotInstanceRequestsRequestPrivate::CancelSpotInstanceRequestsRequestPrivate(
    const EC2Request::Action action, CancelSpotInstanceRequestsRequest * const q)
    : CancelSpotInstanceRequestsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelSpotInstanceRequestsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelSpotInstanceRequestsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelSpotInstanceRequestsRequest instance.
 */
CancelSpotInstanceRequestsRequestPrivate::CancelSpotInstanceRequestsRequestPrivate(
    const CancelSpotInstanceRequestsRequestPrivate &other, CancelSpotInstanceRequestsRequest * const q)
    : CancelSpotInstanceRequestsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
