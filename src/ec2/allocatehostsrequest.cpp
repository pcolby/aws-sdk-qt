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

#include "allocatehostsrequest.h"
#include "allocatehostsrequest_p.h"
#include "allocatehostsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AllocateHostsRequest
 *
 * @brief  Implements EC2 AllocateHosts requests.
 *
 * @see    EC2Client::allocateHosts
 */

/**
 * @brief  Constructs a new AllocateHostsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AllocateHostsResponse::AllocateHostsResponse(

/**
 * @brief  Constructs a new AllocateHostsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AllocateHostsRequest::AllocateHostsRequest(const AllocateHostsRequest &other)
    : EC2Request(new AllocateHostsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AllocateHostsRequest object.
 */
AllocateHostsRequest::AllocateHostsRequest()
    : EC2Request(new AllocateHostsRequestPrivate(EC2Request::AllocateHostsAction, this))
{

}

bool AllocateHostsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AllocateHostsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AllocateHostsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AllocateHostsRequest::response(QNetworkReply * const reply) const
{
    return new AllocateHostsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AllocateHostsRequestPrivate
 *
 * @brief  Private implementation for AllocateHostsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateHostsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AllocateHostsRequest instance.
 */
AllocateHostsRequestPrivate::AllocateHostsRequestPrivate(
    const EC2Request::Action action, AllocateHostsRequest * const q)
    : AllocateHostsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AllocateHostsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AllocateHostsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AllocateHostsRequest instance.
 */
AllocateHostsRequestPrivate::AllocateHostsRequestPrivate(
    const AllocateHostsRequestPrivate &other, AllocateHostsRequest * const q)
    : AllocateHostsPrivate(other, q)
{

}
