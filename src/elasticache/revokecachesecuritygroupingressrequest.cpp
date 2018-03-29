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

#include "revokecachesecuritygroupingressrequest.h"
#include "revokecachesecuritygroupingressrequest_p.h"
#include "revokecachesecuritygroupingressresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/**
 * @class  RevokeCacheSecurityGroupIngressRequest
 *
 * @brief  Implements ElastiCache RevokeCacheSecurityGroupIngress requests.
 *
 * @see    ElastiCacheClient::revokeCacheSecurityGroupIngress
 */

/**
 * @brief  Constructs a new RevokeCacheSecurityGroupIngressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RevokeCacheSecurityGroupIngressRequest::RevokeCacheSecurityGroupIngressRequest(const RevokeCacheSecurityGroupIngressRequest &other)
    : ElastiCacheRequest(new RevokeCacheSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RevokeCacheSecurityGroupIngressRequest object.
 */
RevokeCacheSecurityGroupIngressRequest::RevokeCacheSecurityGroupIngressRequest()
    : ElastiCacheRequest(new RevokeCacheSecurityGroupIngressRequestPrivate(ElastiCacheRequest::RevokeCacheSecurityGroupIngressAction, this))
{

}

bool RevokeCacheSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RevokeCacheSecurityGroupIngressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RevokeCacheSecurityGroupIngressResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeCacheSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new RevokeCacheSecurityGroupIngressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RevokeCacheSecurityGroupIngressRequestPrivate
 *
 * @brief  Private implementation for RevokeCacheSecurityGroupIngressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeCacheSecurityGroupIngressRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public RevokeCacheSecurityGroupIngressRequest instance.
 */
RevokeCacheSecurityGroupIngressRequestPrivate::RevokeCacheSecurityGroupIngressRequestPrivate(
    const ElastiCacheRequest::Action action, RevokeCacheSecurityGroupIngressRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RevokeCacheSecurityGroupIngressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RevokeCacheSecurityGroupIngressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RevokeCacheSecurityGroupIngressRequest instance.
 */
RevokeCacheSecurityGroupIngressRequestPrivate::RevokeCacheSecurityGroupIngressRequestPrivate(
    const RevokeCacheSecurityGroupIngressRequestPrivate &other, RevokeCacheSecurityGroupIngressRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
