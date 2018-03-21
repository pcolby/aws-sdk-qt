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

#include "deletevpcendpointsrequest.h"
#include "deletevpcendpointsrequest_p.h"
#include "deletevpcendpointsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteVpcEndpointsRequest
 *
 * @brief  Implements EC2 DeleteVpcEndpoints requests.
 *
 * @see    EC2Client::deleteVpcEndpoints
 */

/**
 * @brief  Constructs a new DeleteVpcEndpointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcEndpointsResponse::DeleteVpcEndpointsResponse(

/**
 * @brief  Constructs a new DeleteVpcEndpointsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVpcEndpointsRequest::DeleteVpcEndpointsRequest(const DeleteVpcEndpointsRequest &other)
    : EC2Request(new DeleteVpcEndpointsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVpcEndpointsRequest object.
 */
DeleteVpcEndpointsRequest::DeleteVpcEndpointsRequest()
    : EC2Request(new DeleteVpcEndpointsRequestPrivate(EC2Request::DeleteVpcEndpointsAction, this))
{

}

bool DeleteVpcEndpointsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVpcEndpointsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVpcEndpointsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteVpcEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcEndpointsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVpcEndpointsRequestPrivate
 *
 * @brief  Private implementation for DeleteVpcEndpointsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteVpcEndpointsRequest instance.
 */
DeleteVpcEndpointsRequestPrivate::DeleteVpcEndpointsRequestPrivate(
    const EC2Request::Action action, DeleteVpcEndpointsRequest * const q)
    : DeleteVpcEndpointsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcEndpointsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVpcEndpointsRequest instance.
 */
DeleteVpcEndpointsRequestPrivate::DeleteVpcEndpointsRequestPrivate(
    const DeleteVpcEndpointsRequestPrivate &other, DeleteVpcEndpointsRequest * const q)
    : DeleteVpcEndpointsPrivate(other, q)
{

}
