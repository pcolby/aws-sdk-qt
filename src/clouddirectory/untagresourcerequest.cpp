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

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  UntagResourceRequest
 *
 * @brief  Implements CloudDirectory UntagResource requests.
 *
 * @see    CloudDirectoryClient::untagResource
 */

/**
 * @brief  Constructs a new UntagResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagResourceResponse::UntagResourceResponse(

/**
 * @brief  Constructs a new UntagResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : CloudDirectoryRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : CloudDirectoryRequest(new UntagResourceRequestPrivate(CloudDirectoryRequest::UntagResourceAction, this))
{

}

bool UntagResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UntagResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UntagResourceRequestPrivate
 *
 * @brief  Private implementation for UntagResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourceRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public UntagResourceRequest instance.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const CloudDirectoryRequest::Action action, UntagResourceRequest * const q)
    : UntagResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagResourceRequest instance.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : UntagResourcePrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
