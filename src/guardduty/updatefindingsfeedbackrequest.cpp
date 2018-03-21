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

#include "updatefindingsfeedbackrequest.h"
#include "updatefindingsfeedbackrequest_p.h"
#include "updatefindingsfeedbackresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  UpdateFindingsFeedbackRequest
 *
 * @brief  Implements GuardDuty UpdateFindingsFeedback requests.
 *
 * @see    GuardDutyClient::updateFindingsFeedback
 */

/**
 * @brief  Constructs a new UpdateFindingsFeedbackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFindingsFeedbackResponse::UpdateFindingsFeedbackResponse(

/**
 * @brief  Constructs a new UpdateFindingsFeedbackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFindingsFeedbackRequest::UpdateFindingsFeedbackRequest(const UpdateFindingsFeedbackRequest &other)
    : GuardDutyRequest(new UpdateFindingsFeedbackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateFindingsFeedbackRequest object.
 */
UpdateFindingsFeedbackRequest::UpdateFindingsFeedbackRequest()
    : GuardDutyRequest(new UpdateFindingsFeedbackRequestPrivate(GuardDutyRequest::UpdateFindingsFeedbackAction, this))
{

}

bool UpdateFindingsFeedbackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateFindingsFeedbackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFindingsFeedbackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * UpdateFindingsFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFindingsFeedbackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateFindingsFeedbackRequestPrivate
 *
 * @brief  Private implementation for UpdateFindingsFeedbackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFindingsFeedbackRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public UpdateFindingsFeedbackRequest instance.
 */
UpdateFindingsFeedbackRequestPrivate::UpdateFindingsFeedbackRequestPrivate(
    const GuardDutyRequest::Action action, UpdateFindingsFeedbackRequest * const q)
    : UpdateFindingsFeedbackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFindingsFeedbackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFindingsFeedbackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFindingsFeedbackRequest instance.
 */
UpdateFindingsFeedbackRequestPrivate::UpdateFindingsFeedbackRequestPrivate(
    const UpdateFindingsFeedbackRequestPrivate &other, UpdateFindingsFeedbackRequest * const q)
    : UpdateFindingsFeedbackPrivate(other, q)
{

}
