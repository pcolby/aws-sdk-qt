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

#include "disassociateiaminstanceprofilerequest.h"
#include "disassociateiaminstanceprofilerequest_p.h"
#include "disassociateiaminstanceprofileresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DisassociateIamInstanceProfileRequest
 *
 * @brief  Implements EC2 DisassociateIamInstanceProfile requests.
 *
 * @see    EC2Client::disassociateIamInstanceProfile
 */

/**
 * @brief  Constructs a new DisassociateIamInstanceProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateIamInstanceProfileRequest::DisassociateIamInstanceProfileRequest(const DisassociateIamInstanceProfileRequest &other)
    : EC2Request(new DisassociateIamInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateIamInstanceProfileRequest object.
 */
DisassociateIamInstanceProfileRequest::DisassociateIamInstanceProfileRequest()
    : EC2Request(new DisassociateIamInstanceProfileRequestPrivate(EC2Request::DisassociateIamInstanceProfileAction, this))
{

}

bool DisassociateIamInstanceProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateIamInstanceProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateIamInstanceProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateIamInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateIamInstanceProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateIamInstanceProfileRequestPrivate
 *
 * @brief  Private implementation for DisassociateIamInstanceProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateIamInstanceProfileRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DisassociateIamInstanceProfileRequest instance.
 */
DisassociateIamInstanceProfileRequestPrivate::DisassociateIamInstanceProfileRequestPrivate(
    const EC2Request::Action action, DisassociateIamInstanceProfileRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateIamInstanceProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateIamInstanceProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateIamInstanceProfileRequest instance.
 */
DisassociateIamInstanceProfileRequestPrivate::DisassociateIamInstanceProfileRequestPrivate(
    const DisassociateIamInstanceProfileRequestPrivate &other, DisassociateIamInstanceProfileRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
