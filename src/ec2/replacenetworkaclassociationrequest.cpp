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

#include "replacenetworkaclassociationrequest.h"
#include "replacenetworkaclassociationrequest_p.h"
#include "replacenetworkaclassociationresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ReplaceNetworkAclAssociationRequest
 *
 * @brief  Implements EC2 ReplaceNetworkAclAssociation requests.
 *
 * @see    EC2Client::replaceNetworkAclAssociation
 */

/**
 * @brief  Constructs a new ReplaceNetworkAclAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReplaceNetworkAclAssociationRequest::ReplaceNetworkAclAssociationRequest(const ReplaceNetworkAclAssociationRequest &other)
    : EC2Request(new ReplaceNetworkAclAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReplaceNetworkAclAssociationRequest object.
 */
ReplaceNetworkAclAssociationRequest::ReplaceNetworkAclAssociationRequest()
    : EC2Request(new ReplaceNetworkAclAssociationRequestPrivate(EC2Request::ReplaceNetworkAclAssociationAction, this))
{

}

bool ReplaceNetworkAclAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReplaceNetworkAclAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReplaceNetworkAclAssociationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ReplaceNetworkAclAssociationRequest::response(QNetworkReply * const reply) const
{
    return new ReplaceNetworkAclAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReplaceNetworkAclAssociationRequestPrivate
 *
 * @brief  Private implementation for ReplaceNetworkAclAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceNetworkAclAssociationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ReplaceNetworkAclAssociationRequest instance.
 */
ReplaceNetworkAclAssociationRequestPrivate::ReplaceNetworkAclAssociationRequestPrivate(
    const EC2Request::Action action, ReplaceNetworkAclAssociationRequest * const q)
    : ReplaceNetworkAclAssociationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceNetworkAclAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReplaceNetworkAclAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReplaceNetworkAclAssociationRequest instance.
 */
ReplaceNetworkAclAssociationRequestPrivate::ReplaceNetworkAclAssociationRequestPrivate(
    const ReplaceNetworkAclAssociationRequestPrivate &other, ReplaceNetworkAclAssociationRequest * const q)
    : ReplaceNetworkAclAssociationPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
