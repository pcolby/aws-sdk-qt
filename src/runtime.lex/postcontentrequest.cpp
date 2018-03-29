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

#include "postcontentrequest.h"
#include "postcontentrequest_p.h"
#include "postcontentresponse.h"
#include "lexruntimeservicerequest_p.h"

namespace QtAws {
namespace LexRuntimeService {

/**
 * @class  PostContentRequest
 *
 * @brief  Implements LexRuntimeService PostContent requests.
 *
 * @see    LexRuntimeServiceClient::postContent
 */

/**
 * @brief  Constructs a new PostContentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PostContentRequest::PostContentRequest(const PostContentRequest &other)
    : LexRuntimeServiceRequest(new PostContentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PostContentRequest object.
 */
PostContentRequest::PostContentRequest()
    : LexRuntimeServiceRequest(new PostContentRequestPrivate(LexRuntimeServiceRequest::PostContentAction, this))
{

}

bool PostContentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PostContentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PostContentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexRuntimeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * PostContentRequest::response(QNetworkReply * const reply) const
{
    return new PostContentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PostContentRequestPrivate
 *
 * @brief  Private implementation for PostContentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PostContentRequestPrivate object.
 *
 * @param  action  LexRuntimeService action being performed.
 * @param  q       Pointer to this object's public PostContentRequest instance.
 */
PostContentRequestPrivate::PostContentRequestPrivate(
    const LexRuntimeServiceRequest::Action action, PostContentRequest * const q)
    : PostContentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PostContentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PostContentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PostContentRequest instance.
 */
PostContentRequestPrivate::PostContentRequestPrivate(
    const PostContentRequestPrivate &other, PostContentRequest * const q)
    : PostContentPrivate(other, q)
{

}

} // namespace LexRuntimeService
} // namespace QtAws
