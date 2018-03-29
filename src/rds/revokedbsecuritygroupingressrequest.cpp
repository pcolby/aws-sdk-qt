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

#include "revokedbsecuritygroupingressrequest.h"
#include "revokedbsecuritygroupingressrequest_p.h"
#include "revokedbsecuritygroupingressresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  RevokeDBSecurityGroupIngressRequest
 *
 * @brief  Implements RDS RevokeDBSecurityGroupIngress requests.
 *
 * @see    RDSClient::revokeDBSecurityGroupIngress
 */

/**
 * @brief  Constructs a new RevokeDBSecurityGroupIngressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RevokeDBSecurityGroupIngressRequest::RevokeDBSecurityGroupIngressRequest(const RevokeDBSecurityGroupIngressRequest &other)
    : RDSRequest(new RevokeDBSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RevokeDBSecurityGroupIngressRequest object.
 */
RevokeDBSecurityGroupIngressRequest::RevokeDBSecurityGroupIngressRequest()
    : RDSRequest(new RevokeDBSecurityGroupIngressRequestPrivate(RDSRequest::RevokeDBSecurityGroupIngressAction, this))
{

}

bool RevokeDBSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RevokeDBSecurityGroupIngressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RevokeDBSecurityGroupIngressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * RevokeDBSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new RevokeDBSecurityGroupIngressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RevokeDBSecurityGroupIngressRequestPrivate
 *
 * @brief  Private implementation for RevokeDBSecurityGroupIngressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeDBSecurityGroupIngressRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RevokeDBSecurityGroupIngressRequest instance.
 */
RevokeDBSecurityGroupIngressRequestPrivate::RevokeDBSecurityGroupIngressRequestPrivate(
    const RDSRequest::Action action, RevokeDBSecurityGroupIngressRequest * const q)
    : RevokeDBSecurityGroupIngressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RevokeDBSecurityGroupIngressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RevokeDBSecurityGroupIngressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RevokeDBSecurityGroupIngressRequest instance.
 */
RevokeDBSecurityGroupIngressRequestPrivate::RevokeDBSecurityGroupIngressRequestPrivate(
    const RevokeDBSecurityGroupIngressRequestPrivate &other, RevokeDBSecurityGroupIngressRequest * const q)
    : RevokeDBSecurityGroupIngressPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
