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

#include "deleteassessmentrunrequest.h"
#include "deleteassessmentrunrequest_p.h"
#include "deleteassessmentrunresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/**
 * @class  DeleteAssessmentRunRequest
 *
 * @brief  Implements Inspector DeleteAssessmentRun requests.
 *
 * @see    InspectorClient::deleteAssessmentRun
 */

/**
 * @brief  Constructs a new DeleteAssessmentRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAssessmentRunRequest::DeleteAssessmentRunRequest(const DeleteAssessmentRunRequest &other)
    : InspectorRequest(new DeleteAssessmentRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAssessmentRunRequest object.
 */
DeleteAssessmentRunRequest::DeleteAssessmentRunRequest()
    : InspectorRequest(new DeleteAssessmentRunRequestPrivate(InspectorRequest::DeleteAssessmentRunAction, this))
{

}

bool DeleteAssessmentRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAssessmentRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAssessmentRunResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * DeleteAssessmentRunRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssessmentRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAssessmentRunRequestPrivate
 *
 * @brief  Private implementation for DeleteAssessmentRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAssessmentRunRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DeleteAssessmentRunRequest instance.
 */
DeleteAssessmentRunRequestPrivate::DeleteAssessmentRunRequestPrivate(
    const InspectorRequest::Action action, DeleteAssessmentRunRequest * const q)
    : DeleteAssessmentRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAssessmentRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssessmentRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAssessmentRunRequest instance.
 */
DeleteAssessmentRunRequestPrivate::DeleteAssessmentRunRequestPrivate(
    const DeleteAssessmentRunRequestPrivate &other, DeleteAssessmentRunRequest * const q)
    : DeleteAssessmentRunPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
