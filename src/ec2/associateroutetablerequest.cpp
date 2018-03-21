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

#include "associateroutetablerequest.h"
#include "associateroutetablerequest_p.h"
#include "associateroutetableresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AssociateRouteTableRequest
 *
 * @brief  Implements EC2 AssociateRouteTable requests.
 *
 * @see    EC2Client::associateRouteTable
 */

/**
 * @brief  Constructs a new AssociateRouteTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateRouteTableResponse::AssociateRouteTableResponse(

/**
 * @brief  Constructs a new AssociateRouteTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateRouteTableRequest::AssociateRouteTableRequest(const AssociateRouteTableRequest &other)
    : EC2Request(new AssociateRouteTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateRouteTableRequest object.
 */
AssociateRouteTableRequest::AssociateRouteTableRequest()
    : EC2Request(new AssociateRouteTableRequestPrivate(EC2Request::AssociateRouteTableAction, this))
{

}

bool AssociateRouteTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateRouteTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateRouteTableResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AssociateRouteTableRequest::response(QNetworkReply * const reply) const
{
    return new AssociateRouteTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateRouteTableRequestPrivate
 *
 * @brief  Private implementation for AssociateRouteTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateRouteTableRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AssociateRouteTableRequest instance.
 */
AssociateRouteTableRequestPrivate::AssociateRouteTableRequestPrivate(
    const EC2Request::Action action, AssociateRouteTableRequest * const q)
    : AssociateRouteTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateRouteTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateRouteTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateRouteTableRequest instance.
 */
AssociateRouteTableRequestPrivate::AssociateRouteTableRequestPrivate(
    const AssociateRouteTableRequestPrivate &other, AssociateRouteTableRequest * const q)
    : AssociateRouteTablePrivate(other, q)
{

}
