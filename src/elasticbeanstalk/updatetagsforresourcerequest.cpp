/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatetagsforresourcerequest.h"
#include "updatetagsforresourcerequest_p.h"
#include "updatetagsforresourceresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  UpdateTagsForResourceRequest
 *
 * @brief  Implements ElasticBeanstalk UpdateTagsForResource requests.
 *
 * @see    ElasticBeanstalkClient::updateTagsForResource
 */

/**
 * @brief  Constructs a new UpdateTagsForResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTagsForResourceResponse::UpdateTagsForResourceResponse(

/**
 * @brief  Constructs a new UpdateTagsForResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTagsForResourceRequest::UpdateTagsForResourceRequest(const UpdateTagsForResourceRequest &other)
    : ElasticBeanstalkRequest(new UpdateTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTagsForResourceRequest object.
 */
UpdateTagsForResourceRequest::UpdateTagsForResourceRequest()
    : ElasticBeanstalkRequest(new UpdateTagsForResourceRequestPrivate(ElasticBeanstalkRequest::UpdateTagsForResourceAction, this))
{

}

bool UpdateTagsForResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTagsForResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTagsForResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * UpdateTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTagsForResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTagsForResourceRequestPrivate
 *
 * @brief  Private implementation for UpdateTagsForResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTagsForResourceRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public UpdateTagsForResourceRequest instance.
 */
UpdateTagsForResourceRequestPrivate::UpdateTagsForResourceRequestPrivate(
    const ElasticBeanstalkRequest::Action action, UpdateTagsForResourceRequest * const q)
    : UpdateTagsForResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTagsForResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTagsForResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTagsForResourceRequest instance.
 */
UpdateTagsForResourceRequestPrivate::UpdateTagsForResourceRequestPrivate(
    const UpdateTagsForResourceRequestPrivate &other, UpdateTagsForResourceRequest * const q)
    : UpdateTagsForResourcePrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
