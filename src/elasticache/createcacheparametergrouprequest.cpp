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

#include "createcacheparametergrouprequest.h"
#include "createcacheparametergrouprequest_p.h"
#include "createcacheparametergroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateCacheParameterGroupRequest
 *
 * \brief The CreateCacheParameterGroupRequest class encapsulates ElastiCache CreateCacheParameterGroup requests.
 *
 * \ingroup ElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::createCacheParameterGroup
 */

/*!
 * @brief  Constructs a new CreateCacheParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCacheParameterGroupRequest::CreateCacheParameterGroupRequest(const CreateCacheParameterGroupRequest &other)
    : ElastiCacheRequest(new CreateCacheParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateCacheParameterGroupRequest object.
 */
CreateCacheParameterGroupRequest::CreateCacheParameterGroupRequest()
    : ElastiCacheRequest(new CreateCacheParameterGroupRequestPrivate(ElastiCacheRequest::CreateCacheParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCacheParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateCacheParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCacheParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCacheParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateCacheParameterGroupResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateCacheParameterGroupRequestPrivate
 *
 * @brief  Private implementation for CreateCacheParameterGroupRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCacheParameterGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public CreateCacheParameterGroupRequest instance.
 */
CreateCacheParameterGroupRequestPrivate::CreateCacheParameterGroupRequestPrivate(
    const ElastiCacheRequest::Action action, CreateCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCacheParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCacheParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCacheParameterGroupRequest instance.
 */
CreateCacheParameterGroupRequestPrivate::CreateCacheParameterGroupRequestPrivate(
    const CreateCacheParameterGroupRequestPrivate &other, CreateCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
