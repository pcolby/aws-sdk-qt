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

#include "posttextrequest.h"
#include "posttextrequest_p.h"
#include "posttextresponse.h"
#include "lexruntimeservicerequest_p.h"

namespace QtAws {
namespace LexRuntimeService {

/**
 * @class  PostTextRequest
 *
 * @brief  Implements LexRuntimeService PostText requests.
 *
 * @see    LexRuntimeServiceClient::postText
 */

/**
 * @brief  Constructs a new PostTextRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PostTextRequest::PostTextRequest(const PostTextRequest &other)
    : LexRuntimeServiceRequest(new PostTextRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PostTextRequest object.
 */
PostTextRequest::PostTextRequest()
    : LexRuntimeServiceRequest(new PostTextRequestPrivate(LexRuntimeServiceRequest::PostTextAction, this))
{

}

bool PostTextRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PostTextResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PostTextResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexRuntimeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * PostTextRequest::response(QNetworkReply * const reply) const
{
    return new PostTextResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PostTextRequestPrivate
 *
 * @brief  Private implementation for PostTextRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PostTextRequestPrivate object.
 *
 * @param  action  LexRuntimeService action being performed.
 * @param  q       Pointer to this object's public PostTextRequest instance.
 */
PostTextRequestPrivate::PostTextRequestPrivate(
    const LexRuntimeServiceRequest::Action action, PostTextRequest * const q)
    : LexRuntimeServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PostTextRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PostTextRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PostTextRequest instance.
 */
PostTextRequestPrivate::PostTextRequestPrivate(
    const PostTextRequestPrivate &other, PostTextRequest * const q)
    : LexRuntimeServiceRequestPrivate(other, q)
{

}

} // namespace LexRuntimeService
} // namespace QtAws
