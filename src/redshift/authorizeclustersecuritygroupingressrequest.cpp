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

#include "authorizeclustersecuritygroupingressrequest.h"
#include "authorizeclustersecuritygroupingressrequest_p.h"
#include "authorizeclustersecuritygroupingressresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  AuthorizeClusterSecurityGroupIngressRequest
 *
 * @brief  Implements Redshift AuthorizeClusterSecurityGroupIngress requests.
 *
 * @see    RedshiftClient::authorizeClusterSecurityGroupIngress
 */

/**
 * @brief  Constructs a new AuthorizeClusterSecurityGroupIngressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AuthorizeClusterSecurityGroupIngressRequest::AuthorizeClusterSecurityGroupIngressRequest(const AuthorizeClusterSecurityGroupIngressRequest &other)
    : RedshiftRequest(new AuthorizeClusterSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AuthorizeClusterSecurityGroupIngressRequest object.
 */
AuthorizeClusterSecurityGroupIngressRequest::AuthorizeClusterSecurityGroupIngressRequest()
    : RedshiftRequest(new AuthorizeClusterSecurityGroupIngressRequestPrivate(RedshiftRequest::AuthorizeClusterSecurityGroupIngressAction, this))
{

}

bool AuthorizeClusterSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AuthorizeClusterSecurityGroupIngressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AuthorizeClusterSecurityGroupIngressResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * AuthorizeClusterSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeClusterSecurityGroupIngressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AuthorizeClusterSecurityGroupIngressRequestPrivate
 *
 * @brief  Private implementation for AuthorizeClusterSecurityGroupIngressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeClusterSecurityGroupIngressRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public AuthorizeClusterSecurityGroupIngressRequest instance.
 */
AuthorizeClusterSecurityGroupIngressRequestPrivate::AuthorizeClusterSecurityGroupIngressRequestPrivate(
    const RedshiftRequest::Action action, AuthorizeClusterSecurityGroupIngressRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeClusterSecurityGroupIngressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeClusterSecurityGroupIngressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AuthorizeClusterSecurityGroupIngressRequest instance.
 */
AuthorizeClusterSecurityGroupIngressRequestPrivate::AuthorizeClusterSecurityGroupIngressRequestPrivate(
    const AuthorizeClusterSecurityGroupIngressRequestPrivate &other, AuthorizeClusterSecurityGroupIngressRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
