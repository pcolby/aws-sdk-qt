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

#include "revokesecuritygroupingressrequest.h"
#include "revokesecuritygroupingressrequest_p.h"
#include "revokesecuritygroupingressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  RevokeSecurityGroupIngressRequest
 *
 * @brief  Implements EC2 RevokeSecurityGroupIngress requests.
 *
 * @see    EC2Client::revokeSecurityGroupIngress
 */

/**
 * @brief  Constructs a new RevokeSecurityGroupIngressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RevokeSecurityGroupIngressRequest::RevokeSecurityGroupIngressRequest(const RevokeSecurityGroupIngressRequest &other)
    : EC2Request(new RevokeSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RevokeSecurityGroupIngressRequest object.
 */
RevokeSecurityGroupIngressRequest::RevokeSecurityGroupIngressRequest()
    : EC2Request(new RevokeSecurityGroupIngressRequestPrivate(EC2Request::RevokeSecurityGroupIngressAction, this))
{

}

bool RevokeSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RevokeSecurityGroupIngressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RevokeSecurityGroupIngressResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * RevokeSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new RevokeSecurityGroupIngressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RevokeSecurityGroupIngressRequestPrivate
 *
 * @brief  Private implementation for RevokeSecurityGroupIngressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeSecurityGroupIngressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public RevokeSecurityGroupIngressRequest instance.
 */
RevokeSecurityGroupIngressRequestPrivate::RevokeSecurityGroupIngressRequestPrivate(
    const EC2Request::Action action, RevokeSecurityGroupIngressRequest * const q)
    : RevokeSecurityGroupIngressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RevokeSecurityGroupIngressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RevokeSecurityGroupIngressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RevokeSecurityGroupIngressRequest instance.
 */
RevokeSecurityGroupIngressRequestPrivate::RevokeSecurityGroupIngressRequestPrivate(
    const RevokeSecurityGroupIngressRequestPrivate &other, RevokeSecurityGroupIngressRequest * const q)
    : RevokeSecurityGroupIngressPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
