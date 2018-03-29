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

#include "associatevpccidrblockrequest.h"
#include "associatevpccidrblockrequest_p.h"
#include "associatevpccidrblockresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  AssociateVpcCidrBlockRequest
 *
 * @brief  Implements EC2 AssociateVpcCidrBlock requests.
 *
 * @see    EC2Client::associateVpcCidrBlock
 */

/**
 * @brief  Constructs a new AssociateVpcCidrBlockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateVpcCidrBlockRequest::AssociateVpcCidrBlockRequest(const AssociateVpcCidrBlockRequest &other)
    : EC2Request(new AssociateVpcCidrBlockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateVpcCidrBlockRequest object.
 */
AssociateVpcCidrBlockRequest::AssociateVpcCidrBlockRequest()
    : EC2Request(new AssociateVpcCidrBlockRequestPrivate(EC2Request::AssociateVpcCidrBlockAction, this))
{

}

bool AssociateVpcCidrBlockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateVpcCidrBlockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateVpcCidrBlockResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * AssociateVpcCidrBlockRequest::response(QNetworkReply * const reply) const
{
    return new AssociateVpcCidrBlockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateVpcCidrBlockRequestPrivate
 *
 * @brief  Private implementation for AssociateVpcCidrBlockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateVpcCidrBlockRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AssociateVpcCidrBlockRequest instance.
 */
AssociateVpcCidrBlockRequestPrivate::AssociateVpcCidrBlockRequestPrivate(
    const EC2Request::Action action, AssociateVpcCidrBlockRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateVpcCidrBlockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateVpcCidrBlockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateVpcCidrBlockRequest instance.
 */
AssociateVpcCidrBlockRequestPrivate::AssociateVpcCidrBlockRequestPrivate(
    const AssociateVpcCidrBlockRequestPrivate &other, AssociateVpcCidrBlockRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
