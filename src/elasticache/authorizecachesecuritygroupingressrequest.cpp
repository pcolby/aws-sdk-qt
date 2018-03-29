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

#include "authorizecachesecuritygroupingressrequest.h"
#include "authorizecachesecuritygroupingressrequest_p.h"
#include "authorizecachesecuritygroupingressresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/**
 * @class  AuthorizeCacheSecurityGroupIngressRequest
 *
 * @brief  Implements ElastiCache AuthorizeCacheSecurityGroupIngress requests.
 *
 * @see    ElastiCacheClient::authorizeCacheSecurityGroupIngress
 */

/**
 * @brief  Constructs a new AuthorizeCacheSecurityGroupIngressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AuthorizeCacheSecurityGroupIngressRequest::AuthorizeCacheSecurityGroupIngressRequest(const AuthorizeCacheSecurityGroupIngressRequest &other)
    : ElastiCacheRequest(new AuthorizeCacheSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AuthorizeCacheSecurityGroupIngressRequest object.
 */
AuthorizeCacheSecurityGroupIngressRequest::AuthorizeCacheSecurityGroupIngressRequest()
    : ElastiCacheRequest(new AuthorizeCacheSecurityGroupIngressRequestPrivate(ElastiCacheRequest::AuthorizeCacheSecurityGroupIngressAction, this))
{

}

bool AuthorizeCacheSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AuthorizeCacheSecurityGroupIngressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AuthorizeCacheSecurityGroupIngressResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * AuthorizeCacheSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeCacheSecurityGroupIngressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AuthorizeCacheSecurityGroupIngressRequestPrivate
 *
 * @brief  Private implementation for AuthorizeCacheSecurityGroupIngressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeCacheSecurityGroupIngressRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public AuthorizeCacheSecurityGroupIngressRequest instance.
 */
AuthorizeCacheSecurityGroupIngressRequestPrivate::AuthorizeCacheSecurityGroupIngressRequestPrivate(
    const ElastiCacheRequest::Action action, AuthorizeCacheSecurityGroupIngressRequest * const q)
    : AuthorizeCacheSecurityGroupIngressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeCacheSecurityGroupIngressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeCacheSecurityGroupIngressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AuthorizeCacheSecurityGroupIngressRequest instance.
 */
AuthorizeCacheSecurityGroupIngressRequestPrivate::AuthorizeCacheSecurityGroupIngressRequestPrivate(
    const AuthorizeCacheSecurityGroupIngressRequestPrivate &other, AuthorizeCacheSecurityGroupIngressRequest * const q)
    : AuthorizeCacheSecurityGroupIngressPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
