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

#include "listtagsforresourcerequest.h"
#include "listtagsforresourcerequest_p.h"
#include "listtagsforresourceresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  ListTagsForResourceRequest
 *
 * @brief  Implements RDS ListTagsForResource requests.
 *
 * @see    RDSClient::listTagsForResource
 */

/**
 * @brief  Constructs a new ListTagsForResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest(const ListTagsForResourceRequest &other)
    : RDSRequest(new ListTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsForResourceRequest object.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest()
    : RDSRequest(new ListTagsForResourceRequestPrivate(RDSRequest::ListTagsForResourceAction, this))
{

}

bool ListTagsForResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsForResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsForResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsForResourceRequestPrivate
 *
 * @brief  Private implementation for ListTagsForResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForResourceRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ListTagsForResourceRequest instance.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const RDSRequest::Action action, ListTagsForResourceRequest * const q)
    : ListTagsForResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsForResourceRequest instance.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const ListTagsForResourceRequestPrivate &other, ListTagsForResourceRequest * const q)
    : ListTagsForResourcePrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
