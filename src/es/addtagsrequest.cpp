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

#include "addtagsrequest.h"
#include "addtagsrequest_p.h"
#include "addtagsresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/**
 * @class  AddTagsRequest
 *
 * @brief  Implements ElasticsearchService AddTags requests.
 *
 * @see    ElasticsearchServiceClient::addTags
 */

/**
 * @brief  Constructs a new AddTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddTagsRequest::AddTagsRequest(const AddTagsRequest &other)
    : ElasticsearchServiceRequest(new AddTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddTagsRequest object.
 */
AddTagsRequest::AddTagsRequest()
    : ElasticsearchServiceRequest(new AddTagsRequestPrivate(ElasticsearchServiceRequest::AddTagsAction, this))
{

}

bool AddTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddTagsRequestPrivate
 *
 * @brief  Private implementation for AddTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public AddTagsRequest instance.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const ElasticsearchServiceRequest::Action action, AddTagsRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddTagsRequest instance.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const AddTagsRequestPrivate &other, AddTagsRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
