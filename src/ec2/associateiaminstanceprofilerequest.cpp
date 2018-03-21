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

#include "associateiaminstanceprofilerequest.h"
#include "associateiaminstanceprofilerequest_p.h"
#include "associateiaminstanceprofileresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AssociateIamInstanceProfileRequest
 *
 * @brief  Implements EC2 AssociateIamInstanceProfile requests.
 *
 * @see    EC2Client::associateIamInstanceProfile
 */

/**
 * @brief  Constructs a new AssociateIamInstanceProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateIamInstanceProfileRequest::AssociateIamInstanceProfileRequest(const AssociateIamInstanceProfileRequest &other)
    : EC2Request(new AssociateIamInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateIamInstanceProfileRequest object.
 */
AssociateIamInstanceProfileRequest::AssociateIamInstanceProfileRequest()
    : EC2Request(new AssociateIamInstanceProfileRequestPrivate(EC2Request::AssociateIamInstanceProfileAction, this))
{

}

bool AssociateIamInstanceProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateIamInstanceProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateIamInstanceProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AssociateIamInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new AssociateIamInstanceProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateIamInstanceProfileRequestPrivate
 *
 * @brief  Private implementation for AssociateIamInstanceProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateIamInstanceProfileRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AssociateIamInstanceProfileRequest instance.
 */
AssociateIamInstanceProfileRequestPrivate::AssociateIamInstanceProfileRequestPrivate(
    const EC2Request::Action action, AssociateIamInstanceProfileRequest * const q)
    : AssociateIamInstanceProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateIamInstanceProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateIamInstanceProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateIamInstanceProfileRequest instance.
 */
AssociateIamInstanceProfileRequestPrivate::AssociateIamInstanceProfileRequestPrivate(
    const AssociateIamInstanceProfileRequestPrivate &other, AssociateIamInstanceProfileRequest * const q)
    : AssociateIamInstanceProfilePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
