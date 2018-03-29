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

#include "replaceroutetableassociationrequest.h"
#include "replaceroutetableassociationrequest_p.h"
#include "replaceroutetableassociationresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ReplaceRouteTableAssociationRequest
 *
 * @brief  Implements EC2 ReplaceRouteTableAssociation requests.
 *
 * @see    EC2Client::replaceRouteTableAssociation
 */

/**
 * @brief  Constructs a new ReplaceRouteTableAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReplaceRouteTableAssociationRequest::ReplaceRouteTableAssociationRequest(const ReplaceRouteTableAssociationRequest &other)
    : EC2Request(new ReplaceRouteTableAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReplaceRouteTableAssociationRequest object.
 */
ReplaceRouteTableAssociationRequest::ReplaceRouteTableAssociationRequest()
    : EC2Request(new ReplaceRouteTableAssociationRequestPrivate(EC2Request::ReplaceRouteTableAssociationAction, this))
{

}

bool ReplaceRouteTableAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReplaceRouteTableAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReplaceRouteTableAssociationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ReplaceRouteTableAssociationRequest::response(QNetworkReply * const reply) const
{
    return new ReplaceRouteTableAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReplaceRouteTableAssociationRequestPrivate
 *
 * @brief  Private implementation for ReplaceRouteTableAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceRouteTableAssociationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ReplaceRouteTableAssociationRequest instance.
 */
ReplaceRouteTableAssociationRequestPrivate::ReplaceRouteTableAssociationRequestPrivate(
    const EC2Request::Action action, ReplaceRouteTableAssociationRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceRouteTableAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReplaceRouteTableAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReplaceRouteTableAssociationRequest instance.
 */
ReplaceRouteTableAssociationRequestPrivate::ReplaceRouteTableAssociationRequestPrivate(
    const ReplaceRouteTableAssociationRequestPrivate &other, ReplaceRouteTableAssociationRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
