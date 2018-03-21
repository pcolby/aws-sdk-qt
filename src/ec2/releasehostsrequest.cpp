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

#include "releasehostsrequest.h"
#include "releasehostsrequest_p.h"
#include "releasehostsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ReleaseHostsRequest
 *
 * @brief  Implements EC2 ReleaseHosts requests.
 *
 * @see    EC2Client::releaseHosts
 */

/**
 * @brief  Constructs a new ReleaseHostsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReleaseHostsRequest::ReleaseHostsRequest(const ReleaseHostsRequest &other)
    : EC2Request(new ReleaseHostsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReleaseHostsRequest object.
 */
ReleaseHostsRequest::ReleaseHostsRequest()
    : EC2Request(new ReleaseHostsRequestPrivate(EC2Request::ReleaseHostsAction, this))
{

}

bool ReleaseHostsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReleaseHostsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReleaseHostsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ReleaseHostsRequest::response(QNetworkReply * const reply) const
{
    return new ReleaseHostsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReleaseHostsRequestPrivate
 *
 * @brief  Private implementation for ReleaseHostsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReleaseHostsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ReleaseHostsRequest instance.
 */
ReleaseHostsRequestPrivate::ReleaseHostsRequestPrivate(
    const EC2Request::Action action, ReleaseHostsRequest * const q)
    : ReleaseHostsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReleaseHostsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReleaseHostsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReleaseHostsRequest instance.
 */
ReleaseHostsRequestPrivate::ReleaseHostsRequestPrivate(
    const ReleaseHostsRequestPrivate &other, ReleaseHostsRequest * const q)
    : ReleaseHostsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
