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

#include "removetagsrequest.h"
#include "removetagsrequest_p.h"
#include "removetagsresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/**
 * @class  RemoveTagsRequest
 *
 * @brief  Implements CloudTrail RemoveTags requests.
 *
 * @see    CloudTrailClient::removeTags
 */

/**
 * @brief  Constructs a new RemoveTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsRequest::RemoveTagsRequest(const RemoveTagsRequest &other)
    : CloudTrailRequest(new RemoveTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveTagsRequest object.
 */
RemoveTagsRequest::RemoveTagsRequest()
    : CloudTrailRequest(new RemoveTagsRequestPrivate(CloudTrailRequest::RemoveTagsAction, this))
{

}

bool RemoveTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveTagsRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public RemoveTagsRequest instance.
 */
RemoveTagsRequestPrivate::RemoveTagsRequestPrivate(
    const CloudTrailRequest::Action action, RemoveTagsRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsRequest instance.
 */
RemoveTagsRequestPrivate::RemoveTagsRequestPrivate(
    const RemoveTagsRequestPrivate &other, RemoveTagsRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
