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

#include "replacerouterequest.h"
#include "replacerouterequest_p.h"
#include "replacerouteresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ReplaceRouteRequest
 *
 * @brief  Implements EC2 ReplaceRoute requests.
 *
 * @see    EC2Client::replaceRoute
 */

/**
 * @brief  Constructs a new ReplaceRouteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReplaceRouteRequest::ReplaceRouteRequest(const ReplaceRouteRequest &other)
    : EC2Request(new ReplaceRouteRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReplaceRouteRequest object.
 */
ReplaceRouteRequest::ReplaceRouteRequest()
    : EC2Request(new ReplaceRouteRequestPrivate(EC2Request::ReplaceRouteAction, this))
{

}

bool ReplaceRouteRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReplaceRouteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReplaceRouteResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ReplaceRouteRequest::response(QNetworkReply * const reply) const
{
    return new ReplaceRouteResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReplaceRouteRequestPrivate
 *
 * @brief  Private implementation for ReplaceRouteRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceRouteRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ReplaceRouteRequest instance.
 */
ReplaceRouteRequestPrivate::ReplaceRouteRequestPrivate(
    const EC2Request::Action action, ReplaceRouteRequest * const q)
    : ReplaceRoutePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceRouteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReplaceRouteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReplaceRouteRequest instance.
 */
ReplaceRouteRequestPrivate::ReplaceRouteRequestPrivate(
    const ReplaceRouteRequestPrivate &other, ReplaceRouteRequest * const q)
    : ReplaceRoutePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
