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

#include "updatehitreviewstatusrequest.h"
#include "updatehitreviewstatusrequest_p.h"
#include "updatehitreviewstatusresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  UpdateHITReviewStatusRequest
 *
 * @brief  Implements MTurk UpdateHITReviewStatus requests.
 *
 * @see    MTurkClient::updateHITReviewStatus
 */

/**
 * @brief  Constructs a new UpdateHITReviewStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateHITReviewStatusResponse::UpdateHITReviewStatusResponse(

/**
 * @brief  Constructs a new UpdateHITReviewStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateHITReviewStatusRequest::UpdateHITReviewStatusRequest(const UpdateHITReviewStatusRequest &other)
    : MTurkRequest(new UpdateHITReviewStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateHITReviewStatusRequest object.
 */
UpdateHITReviewStatusRequest::UpdateHITReviewStatusRequest()
    : MTurkRequest(new UpdateHITReviewStatusRequestPrivate(MTurkRequest::UpdateHITReviewStatusAction, this))
{

}

bool UpdateHITReviewStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateHITReviewStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateHITReviewStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * UpdateHITReviewStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHITReviewStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateHITReviewStatusRequestPrivate
 *
 * @brief  Private implementation for UpdateHITReviewStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateHITReviewStatusRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public UpdateHITReviewStatusRequest instance.
 */
UpdateHITReviewStatusRequestPrivate::UpdateHITReviewStatusRequestPrivate(
    const MTurkRequest::Action action, UpdateHITReviewStatusRequest * const q)
    : UpdateHITReviewStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateHITReviewStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateHITReviewStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateHITReviewStatusRequest instance.
 */
UpdateHITReviewStatusRequestPrivate::UpdateHITReviewStatusRequestPrivate(
    const UpdateHITReviewStatusRequestPrivate &other, UpdateHITReviewStatusRequest * const q)
    : UpdateHITReviewStatusPrivate(other, q)
{

}
