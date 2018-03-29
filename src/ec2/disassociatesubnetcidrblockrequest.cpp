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

#include "disassociatesubnetcidrblockrequest.h"
#include "disassociatesubnetcidrblockrequest_p.h"
#include "disassociatesubnetcidrblockresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DisassociateSubnetCidrBlockRequest
 *
 * @brief  Implements EC2 DisassociateSubnetCidrBlock requests.
 *
 * @see    EC2Client::disassociateSubnetCidrBlock
 */

/**
 * @brief  Constructs a new DisassociateSubnetCidrBlockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateSubnetCidrBlockRequest::DisassociateSubnetCidrBlockRequest(const DisassociateSubnetCidrBlockRequest &other)
    : EC2Request(new DisassociateSubnetCidrBlockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateSubnetCidrBlockRequest object.
 */
DisassociateSubnetCidrBlockRequest::DisassociateSubnetCidrBlockRequest()
    : EC2Request(new DisassociateSubnetCidrBlockRequestPrivate(EC2Request::DisassociateSubnetCidrBlockAction, this))
{

}

bool DisassociateSubnetCidrBlockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateSubnetCidrBlockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateSubnetCidrBlockResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DisassociateSubnetCidrBlockRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateSubnetCidrBlockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateSubnetCidrBlockRequestPrivate
 *
 * @brief  Private implementation for DisassociateSubnetCidrBlockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateSubnetCidrBlockRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DisassociateSubnetCidrBlockRequest instance.
 */
DisassociateSubnetCidrBlockRequestPrivate::DisassociateSubnetCidrBlockRequestPrivate(
    const EC2Request::Action action, DisassociateSubnetCidrBlockRequest * const q)
    : DisassociateSubnetCidrBlockPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateSubnetCidrBlockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateSubnetCidrBlockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateSubnetCidrBlockRequest instance.
 */
DisassociateSubnetCidrBlockRequestPrivate::DisassociateSubnetCidrBlockRequestPrivate(
    const DisassociateSubnetCidrBlockRequestPrivate &other, DisassociateSubnetCidrBlockRequest * const q)
    : DisassociateSubnetCidrBlockPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
