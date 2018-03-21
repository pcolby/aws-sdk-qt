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

#include "updatehostedzonecommentrequest.h"
#include "updatehostedzonecommentrequest_p.h"
#include "updatehostedzonecommentresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  UpdateHostedZoneCommentRequest
 *
 * @brief  Implements Route53 UpdateHostedZoneComment requests.
 *
 * @see    Route53Client::updateHostedZoneComment
 */

/**
 * @brief  Constructs a new UpdateHostedZoneCommentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateHostedZoneCommentResponse::UpdateHostedZoneCommentResponse(

/**
 * @brief  Constructs a new UpdateHostedZoneCommentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateHostedZoneCommentRequest::UpdateHostedZoneCommentRequest(const UpdateHostedZoneCommentRequest &other)
    : Route53Request(new UpdateHostedZoneCommentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateHostedZoneCommentRequest object.
 */
UpdateHostedZoneCommentRequest::UpdateHostedZoneCommentRequest()
    : Route53Request(new UpdateHostedZoneCommentRequestPrivate(Route53Request::UpdateHostedZoneCommentAction, this))
{

}

bool UpdateHostedZoneCommentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateHostedZoneCommentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateHostedZoneCommentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * UpdateHostedZoneCommentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHostedZoneCommentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateHostedZoneCommentRequestPrivate
 *
 * @brief  Private implementation for UpdateHostedZoneCommentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateHostedZoneCommentRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public UpdateHostedZoneCommentRequest instance.
 */
UpdateHostedZoneCommentRequestPrivate::UpdateHostedZoneCommentRequestPrivate(
    const Route53Request::Action action, UpdateHostedZoneCommentRequest * const q)
    : UpdateHostedZoneCommentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateHostedZoneCommentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateHostedZoneCommentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateHostedZoneCommentRequest instance.
 */
UpdateHostedZoneCommentRequestPrivate::UpdateHostedZoneCommentRequestPrivate(
    const UpdateHostedZoneCommentRequestPrivate &other, UpdateHostedZoneCommentRequest * const q)
    : UpdateHostedZoneCommentPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
