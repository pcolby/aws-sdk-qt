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

#include "deleteroutetablerequest.h"
#include "deleteroutetablerequest_p.h"
#include "deleteroutetableresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteRouteTableRequest
 *
 * @brief  Implements EC2 DeleteRouteTable requests.
 *
 * @see    EC2Client::deleteRouteTable
 */

/**
 * @brief  Constructs a new DeleteRouteTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRouteTableRequest::DeleteRouteTableRequest(const DeleteRouteTableRequest &other)
    : EC2Request(new DeleteRouteTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRouteTableRequest object.
 */
DeleteRouteTableRequest::DeleteRouteTableRequest()
    : EC2Request(new DeleteRouteTableRequestPrivate(EC2Request::DeleteRouteTableAction, this))
{

}

bool DeleteRouteTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRouteTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRouteTableResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteRouteTableRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRouteTableRequestPrivate
 *
 * @brief  Private implementation for DeleteRouteTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRouteTableRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteRouteTableRequest instance.
 */
DeleteRouteTableRequestPrivate::DeleteRouteTableRequestPrivate(
    const EC2Request::Action action, DeleteRouteTableRequest * const q)
    : DeleteRouteTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRouteTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRouteTableRequest instance.
 */
DeleteRouteTableRequestPrivate::DeleteRouteTableRequestPrivate(
    const DeleteRouteTableRequestPrivate &other, DeleteRouteTableRequest * const q)
    : DeleteRouteTablePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
