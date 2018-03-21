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

#include "updatetrafficpolicycommentrequest.h"
#include "updatetrafficpolicycommentrequest_p.h"
#include "updatetrafficpolicycommentresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  UpdateTrafficPolicyCommentRequest
 *
 * @brief  Implements Route53 UpdateTrafficPolicyComment requests.
 *
 * @see    Route53Client::updateTrafficPolicyComment
 */

/**
 * @brief  Constructs a new UpdateTrafficPolicyCommentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTrafficPolicyCommentResponse::UpdateTrafficPolicyCommentResponse(

/**
 * @brief  Constructs a new UpdateTrafficPolicyCommentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTrafficPolicyCommentRequest::UpdateTrafficPolicyCommentRequest(const UpdateTrafficPolicyCommentRequest &other)
    : Route53Request(new UpdateTrafficPolicyCommentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTrafficPolicyCommentRequest object.
 */
UpdateTrafficPolicyCommentRequest::UpdateTrafficPolicyCommentRequest()
    : Route53Request(new UpdateTrafficPolicyCommentRequestPrivate(Route53Request::UpdateTrafficPolicyCommentAction, this))
{

}

bool UpdateTrafficPolicyCommentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTrafficPolicyCommentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTrafficPolicyCommentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * UpdateTrafficPolicyCommentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrafficPolicyCommentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTrafficPolicyCommentRequestPrivate
 *
 * @brief  Private implementation for UpdateTrafficPolicyCommentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTrafficPolicyCommentRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public UpdateTrafficPolicyCommentRequest instance.
 */
UpdateTrafficPolicyCommentRequestPrivate::UpdateTrafficPolicyCommentRequestPrivate(
    const Route53Request::Action action, UpdateTrafficPolicyCommentRequest * const q)
    : UpdateTrafficPolicyCommentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTrafficPolicyCommentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrafficPolicyCommentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTrafficPolicyCommentRequest instance.
 */
UpdateTrafficPolicyCommentRequestPrivate::UpdateTrafficPolicyCommentRequestPrivate(
    const UpdateTrafficPolicyCommentRequestPrivate &other, UpdateTrafficPolicyCommentRequest * const q)
    : UpdateTrafficPolicyCommentPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
