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

#include "disassociatevpccidrblockrequest.h"
#include "disassociatevpccidrblockrequest_p.h"
#include "disassociatevpccidrblockresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DisassociateVpcCidrBlockRequest
 *
 * @brief  Implements EC2 DisassociateVpcCidrBlock requests.
 *
 * @see    EC2Client::disassociateVpcCidrBlock
 */

/**
 * @brief  Constructs a new DisassociateVpcCidrBlockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateVpcCidrBlockRequest::DisassociateVpcCidrBlockRequest(const DisassociateVpcCidrBlockRequest &other)
    : EC2Request(new DisassociateVpcCidrBlockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateVpcCidrBlockRequest object.
 */
DisassociateVpcCidrBlockRequest::DisassociateVpcCidrBlockRequest()
    : EC2Request(new DisassociateVpcCidrBlockRequestPrivate(EC2Request::DisassociateVpcCidrBlockAction, this))
{

}

bool DisassociateVpcCidrBlockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateVpcCidrBlockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateVpcCidrBlockResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DisassociateVpcCidrBlockRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateVpcCidrBlockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateVpcCidrBlockRequestPrivate
 *
 * @brief  Private implementation for DisassociateVpcCidrBlockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateVpcCidrBlockRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DisassociateVpcCidrBlockRequest instance.
 */
DisassociateVpcCidrBlockRequestPrivate::DisassociateVpcCidrBlockRequestPrivate(
    const EC2Request::Action action, DisassociateVpcCidrBlockRequest * const q)
    : DisassociateVpcCidrBlockPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateVpcCidrBlockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateVpcCidrBlockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateVpcCidrBlockRequest instance.
 */
DisassociateVpcCidrBlockRequestPrivate::DisassociateVpcCidrBlockRequestPrivate(
    const DisassociateVpcCidrBlockRequestPrivate &other, DisassociateVpcCidrBlockRequest * const q)
    : DisassociateVpcCidrBlockPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
