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

#include "revokeclustersecuritygroupingressrequest.h"
#include "revokeclustersecuritygroupingressrequest_p.h"
#include "revokeclustersecuritygroupingressresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  RevokeClusterSecurityGroupIngressRequest
 *
 * @brief  Implements Redshift RevokeClusterSecurityGroupIngress requests.
 *
 * @see    RedshiftClient::revokeClusterSecurityGroupIngress
 */

/**
 * @brief  Constructs a new RevokeClusterSecurityGroupIngressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RevokeClusterSecurityGroupIngressRequest::RevokeClusterSecurityGroupIngressRequest(const RevokeClusterSecurityGroupIngressRequest &other)
    : RedshiftRequest(new RevokeClusterSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RevokeClusterSecurityGroupIngressRequest object.
 */
RevokeClusterSecurityGroupIngressRequest::RevokeClusterSecurityGroupIngressRequest()
    : RedshiftRequest(new RevokeClusterSecurityGroupIngressRequestPrivate(RedshiftRequest::RevokeClusterSecurityGroupIngressAction, this))
{

}

bool RevokeClusterSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RevokeClusterSecurityGroupIngressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RevokeClusterSecurityGroupIngressResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeClusterSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new RevokeClusterSecurityGroupIngressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RevokeClusterSecurityGroupIngressRequestPrivate
 *
 * @brief  Private implementation for RevokeClusterSecurityGroupIngressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeClusterSecurityGroupIngressRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public RevokeClusterSecurityGroupIngressRequest instance.
 */
RevokeClusterSecurityGroupIngressRequestPrivate::RevokeClusterSecurityGroupIngressRequestPrivate(
    const RedshiftRequest::Action action, RevokeClusterSecurityGroupIngressRequest * const q)
    : RevokeClusterSecurityGroupIngressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RevokeClusterSecurityGroupIngressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RevokeClusterSecurityGroupIngressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RevokeClusterSecurityGroupIngressRequest instance.
 */
RevokeClusterSecurityGroupIngressRequestPrivate::RevokeClusterSecurityGroupIngressRequestPrivate(
    const RevokeClusterSecurityGroupIngressRequestPrivate &other, RevokeClusterSecurityGroupIngressRequest * const q)
    : RevokeClusterSecurityGroupIngressPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
