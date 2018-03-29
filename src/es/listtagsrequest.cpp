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

#include "listtagsrequest.h"
#include "listtagsrequest_p.h"
#include "listtagsresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/**
 * @class  ListTagsRequest
 *
 * @brief  Implements ElasticsearchService ListTags requests.
 *
 * @see    ElasticsearchServiceClient::listTags
 */

/**
 * @brief  Constructs a new ListTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsRequest::ListTagsRequest(const ListTagsRequest &other)
    : ElasticsearchServiceRequest(new ListTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsRequest object.
 */
ListTagsRequest::ListTagsRequest()
    : ElasticsearchServiceRequest(new ListTagsRequestPrivate(ElasticsearchServiceRequest::ListTagsAction, this))
{

}

bool ListTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsRequestPrivate
 *
 * @brief  Private implementation for ListTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public ListTagsRequest instance.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const ElasticsearchServiceRequest::Action action, ListTagsRequest * const q)
    : ListTagsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsRequest instance.
 */
ListTagsRequestPrivate::ListTagsRequestPrivate(
    const ListTagsRequestPrivate &other, ListTagsRequest * const q)
    : ListTagsPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
