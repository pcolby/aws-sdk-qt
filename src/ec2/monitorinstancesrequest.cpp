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

#include "monitorinstancesrequest.h"
#include "monitorinstancesrequest_p.h"
#include "monitorinstancesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  MonitorInstancesRequest
 *
 * @brief  Implements EC2 MonitorInstances requests.
 *
 * @see    EC2Client::monitorInstances
 */

/**
 * @brief  Constructs a new MonitorInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MonitorInstancesRequest::MonitorInstancesRequest(const MonitorInstancesRequest &other)
    : EC2Request(new MonitorInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new MonitorInstancesRequest object.
 */
MonitorInstancesRequest::MonitorInstancesRequest()
    : EC2Request(new MonitorInstancesRequestPrivate(EC2Request::MonitorInstancesAction, this))
{

}

bool MonitorInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an MonitorInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An MonitorInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * MonitorInstancesRequest::response(QNetworkReply * const reply) const
{
    return new MonitorInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  MonitorInstancesRequestPrivate
 *
 * @brief  Private implementation for MonitorInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MonitorInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public MonitorInstancesRequest instance.
 */
MonitorInstancesRequestPrivate::MonitorInstancesRequestPrivate(
    const EC2Request::Action action, MonitorInstancesRequest * const q)
    : MonitorInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MonitorInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the MonitorInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MonitorInstancesRequest instance.
 */
MonitorInstancesRequestPrivate::MonitorInstancesRequestPrivate(
    const MonitorInstancesRequestPrivate &other, MonitorInstancesRequest * const q)
    : MonitorInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
