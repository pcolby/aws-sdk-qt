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

#include "updateassessmenttargetrequest.h"
#include "updateassessmenttargetrequest_p.h"
#include "updateassessmenttargetresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  UpdateAssessmentTargetRequest
 *
 * @brief  Implements Inspector UpdateAssessmentTarget requests.
 *
 * @see    InspectorClient::updateAssessmentTarget
 */

/**
 * @brief  Constructs a new UpdateAssessmentTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAssessmentTargetRequest::UpdateAssessmentTargetRequest(const UpdateAssessmentTargetRequest &other)
    : InspectorRequest(new UpdateAssessmentTargetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAssessmentTargetRequest object.
 */
UpdateAssessmentTargetRequest::UpdateAssessmentTargetRequest()
    : InspectorRequest(new UpdateAssessmentTargetRequestPrivate(InspectorRequest::UpdateAssessmentTargetAction, this))
{

}

bool UpdateAssessmentTargetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAssessmentTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAssessmentTargetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssessmentTargetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssessmentTargetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAssessmentTargetRequestPrivate
 *
 * @brief  Private implementation for UpdateAssessmentTargetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssessmentTargetRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public UpdateAssessmentTargetRequest instance.
 */
UpdateAssessmentTargetRequestPrivate::UpdateAssessmentTargetRequestPrivate(
    const InspectorRequest::Action action, UpdateAssessmentTargetRequest * const q)
    : UpdateAssessmentTargetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssessmentTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssessmentTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAssessmentTargetRequest instance.
 */
UpdateAssessmentTargetRequestPrivate::UpdateAssessmentTargetRequestPrivate(
    const UpdateAssessmentTargetRequestPrivate &other, UpdateAssessmentTargetRequest * const q)
    : UpdateAssessmentTargetPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
