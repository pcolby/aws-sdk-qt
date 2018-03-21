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

#include "requestspotinstancesrequest.h"
#include "requestspotinstancesrequest_p.h"
#include "requestspotinstancesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  RequestSpotInstancesRequest
 *
 * @brief  Implements EC2 RequestSpotInstances requests.
 *
 * @see    EC2Client::requestSpotInstances
 */

/**
 * @brief  Constructs a new RequestSpotInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RequestSpotInstancesResponse::RequestSpotInstancesResponse(

/**
 * @brief  Constructs a new RequestSpotInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RequestSpotInstancesRequest::RequestSpotInstancesRequest(const RequestSpotInstancesRequest &other)
    : EC2Request(new RequestSpotInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RequestSpotInstancesRequest object.
 */
RequestSpotInstancesRequest::RequestSpotInstancesRequest()
    : EC2Request(new RequestSpotInstancesRequestPrivate(EC2Request::RequestSpotInstancesAction, this))
{

}

bool RequestSpotInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RequestSpotInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RequestSpotInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * RequestSpotInstancesRequest::response(QNetworkReply * const reply) const
{
    return new RequestSpotInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RequestSpotInstancesRequestPrivate
 *
 * @brief  Private implementation for RequestSpotInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestSpotInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public RequestSpotInstancesRequest instance.
 */
RequestSpotInstancesRequestPrivate::RequestSpotInstancesRequestPrivate(
    const EC2Request::Action action, RequestSpotInstancesRequest * const q)
    : RequestSpotInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RequestSpotInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RequestSpotInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RequestSpotInstancesRequest instance.
 */
RequestSpotInstancesRequestPrivate::RequestSpotInstancesRequestPrivate(
    const RequestSpotInstancesRequestPrivate &other, RequestSpotInstancesRequest * const q)
    : RequestSpotInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
