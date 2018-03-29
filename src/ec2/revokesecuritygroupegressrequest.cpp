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

#include "revokesecuritygroupegressrequest.h"
#include "revokesecuritygroupegressrequest_p.h"
#include "revokesecuritygroupegressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  RevokeSecurityGroupEgressRequest
 *
 * @brief  Implements EC2 RevokeSecurityGroupEgress requests.
 *
 * @see    EC2Client::revokeSecurityGroupEgress
 */

/**
 * @brief  Constructs a new RevokeSecurityGroupEgressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RevokeSecurityGroupEgressRequest::RevokeSecurityGroupEgressRequest(const RevokeSecurityGroupEgressRequest &other)
    : EC2Request(new RevokeSecurityGroupEgressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RevokeSecurityGroupEgressRequest object.
 */
RevokeSecurityGroupEgressRequest::RevokeSecurityGroupEgressRequest()
    : EC2Request(new RevokeSecurityGroupEgressRequestPrivate(EC2Request::RevokeSecurityGroupEgressAction, this))
{

}

bool RevokeSecurityGroupEgressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RevokeSecurityGroupEgressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RevokeSecurityGroupEgressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * RevokeSecurityGroupEgressRequest::response(QNetworkReply * const reply) const
{
    return new RevokeSecurityGroupEgressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RevokeSecurityGroupEgressRequestPrivate
 *
 * @brief  Private implementation for RevokeSecurityGroupEgressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeSecurityGroupEgressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public RevokeSecurityGroupEgressRequest instance.
 */
RevokeSecurityGroupEgressRequestPrivate::RevokeSecurityGroupEgressRequestPrivate(
    const EC2Request::Action action, RevokeSecurityGroupEgressRequest * const q)
    : RevokeSecurityGroupEgressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RevokeSecurityGroupEgressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RevokeSecurityGroupEgressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RevokeSecurityGroupEgressRequest instance.
 */
RevokeSecurityGroupEgressRequestPrivate::RevokeSecurityGroupEgressRequestPrivate(
    const RevokeSecurityGroupEgressRequestPrivate &other, RevokeSecurityGroupEgressRequest * const q)
    : RevokeSecurityGroupEgressPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
