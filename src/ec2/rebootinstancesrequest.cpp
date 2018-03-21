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

#include "rebootinstancesrequest.h"
#include "rebootinstancesrequest_p.h"
#include "rebootinstancesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  RebootInstancesRequest
 *
 * @brief  Implements EC2 RebootInstances requests.
 *
 * @see    EC2Client::rebootInstances
 */

/**
 * @brief  Constructs a new RebootInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootInstancesRequest::RebootInstancesRequest(const RebootInstancesRequest &other)
    : EC2Request(new RebootInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebootInstancesRequest object.
 */
RebootInstancesRequest::RebootInstancesRequest()
    : EC2Request(new RebootInstancesRequestPrivate(EC2Request::RebootInstancesAction, this))
{

}

bool RebootInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebootInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * RebootInstancesRequest::response(QNetworkReply * const reply) const
{
    return new RebootInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebootInstancesRequestPrivate
 *
 * @brief  Private implementation for RebootInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public RebootInstancesRequest instance.
 */
RebootInstancesRequestPrivate::RebootInstancesRequestPrivate(
    const EC2Request::Action action, RebootInstancesRequest * const q)
    : RebootInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebootInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootInstancesRequest instance.
 */
RebootInstancesRequestPrivate::RebootInstancesRequestPrivate(
    const RebootInstancesRequestPrivate &other, RebootInstancesRequest * const q)
    : RebootInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
