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

#include "startassessmentrunrequest.h"
#include "startassessmentrunrequest_p.h"
#include "startassessmentrunresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  StartAssessmentRunRequest
 *
 * @brief  Implements Inspector StartAssessmentRun requests.
 *
 * @see    InspectorClient::startAssessmentRun
 */

/**
 * @brief  Constructs a new StartAssessmentRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartAssessmentRunRequest::StartAssessmentRunRequest(const StartAssessmentRunRequest &other)
    : InspectorRequest(new StartAssessmentRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartAssessmentRunRequest object.
 */
StartAssessmentRunRequest::StartAssessmentRunRequest()
    : InspectorRequest(new StartAssessmentRunRequestPrivate(InspectorRequest::StartAssessmentRunAction, this))
{

}

bool StartAssessmentRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartAssessmentRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartAssessmentRunResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * StartAssessmentRunRequest::response(QNetworkReply * const reply) const
{
    return new StartAssessmentRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartAssessmentRunRequestPrivate
 *
 * @brief  Private implementation for StartAssessmentRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartAssessmentRunRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public StartAssessmentRunRequest instance.
 */
StartAssessmentRunRequestPrivate::StartAssessmentRunRequestPrivate(
    const InspectorRequest::Action action, StartAssessmentRunRequest * const q)
    : StartAssessmentRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartAssessmentRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartAssessmentRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartAssessmentRunRequest instance.
 */
StartAssessmentRunRequestPrivate::StartAssessmentRunRequestPrivate(
    const StartAssessmentRunRequestPrivate &other, StartAssessmentRunRequest * const q)
    : StartAssessmentRunPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
