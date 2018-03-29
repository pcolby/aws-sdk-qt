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

#include "replaceiaminstanceprofileassociationrequest.h"
#include "replaceiaminstanceprofileassociationrequest_p.h"
#include "replaceiaminstanceprofileassociationresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ReplaceIamInstanceProfileAssociationRequest
 *
 * @brief  Implements EC2 ReplaceIamInstanceProfileAssociation requests.
 *
 * @see    EC2Client::replaceIamInstanceProfileAssociation
 */

/**
 * @brief  Constructs a new ReplaceIamInstanceProfileAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReplaceIamInstanceProfileAssociationRequest::ReplaceIamInstanceProfileAssociationRequest(const ReplaceIamInstanceProfileAssociationRequest &other)
    : EC2Request(new ReplaceIamInstanceProfileAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReplaceIamInstanceProfileAssociationRequest object.
 */
ReplaceIamInstanceProfileAssociationRequest::ReplaceIamInstanceProfileAssociationRequest()
    : EC2Request(new ReplaceIamInstanceProfileAssociationRequestPrivate(EC2Request::ReplaceIamInstanceProfileAssociationAction, this))
{

}

bool ReplaceIamInstanceProfileAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReplaceIamInstanceProfileAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReplaceIamInstanceProfileAssociationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ReplaceIamInstanceProfileAssociationRequest::response(QNetworkReply * const reply) const
{
    return new ReplaceIamInstanceProfileAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReplaceIamInstanceProfileAssociationRequestPrivate
 *
 * @brief  Private implementation for ReplaceIamInstanceProfileAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceIamInstanceProfileAssociationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ReplaceIamInstanceProfileAssociationRequest instance.
 */
ReplaceIamInstanceProfileAssociationRequestPrivate::ReplaceIamInstanceProfileAssociationRequestPrivate(
    const EC2Request::Action action, ReplaceIamInstanceProfileAssociationRequest * const q)
    : ReplaceIamInstanceProfileAssociationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceIamInstanceProfileAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReplaceIamInstanceProfileAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReplaceIamInstanceProfileAssociationRequest instance.
 */
ReplaceIamInstanceProfileAssociationRequestPrivate::ReplaceIamInstanceProfileAssociationRequestPrivate(
    const ReplaceIamInstanceProfileAssociationRequestPrivate &other, ReplaceIamInstanceProfileAssociationRequest * const q)
    : ReplaceIamInstanceProfileAssociationPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
