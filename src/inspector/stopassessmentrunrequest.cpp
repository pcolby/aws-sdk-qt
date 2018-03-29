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

#include "stopassessmentrunrequest.h"
#include "stopassessmentrunrequest_p.h"
#include "stopassessmentrunresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  StopAssessmentRunRequest
 *
 * @brief  Implements Inspector StopAssessmentRun requests.
 *
 * @see    InspectorClient::stopAssessmentRun
 */

/**
 * @brief  Constructs a new StopAssessmentRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopAssessmentRunRequest::StopAssessmentRunRequest(const StopAssessmentRunRequest &other)
    : InspectorRequest(new StopAssessmentRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopAssessmentRunRequest object.
 */
StopAssessmentRunRequest::StopAssessmentRunRequest()
    : InspectorRequest(new StopAssessmentRunRequestPrivate(InspectorRequest::StopAssessmentRunAction, this))
{

}

bool StopAssessmentRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopAssessmentRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopAssessmentRunResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * StopAssessmentRunRequest::response(QNetworkReply * const reply) const
{
    return new StopAssessmentRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopAssessmentRunRequestPrivate
 *
 * @brief  Private implementation for StopAssessmentRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopAssessmentRunRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public StopAssessmentRunRequest instance.
 */
StopAssessmentRunRequestPrivate::StopAssessmentRunRequestPrivate(
    const InspectorRequest::Action action, StopAssessmentRunRequest * const q)
    : StopAssessmentRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopAssessmentRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopAssessmentRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopAssessmentRunRequest instance.
 */
StopAssessmentRunRequestPrivate::StopAssessmentRunRequestPrivate(
    const StopAssessmentRunRequestPrivate &other, StopAssessmentRunRequest * const q)
    : StopAssessmentRunPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
