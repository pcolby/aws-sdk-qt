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

#include "updateevaluationrequest.h"
#include "updateevaluationrequest_p.h"
#include "updateevaluationresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/**
 * @class  UpdateEvaluationRequest
 *
 * @brief  Implements MachineLearning UpdateEvaluation requests.
 *
 * @see    MachineLearningClient::updateEvaluation
 */

/**
 * @brief  Constructs a new UpdateEvaluationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateEvaluationRequest::UpdateEvaluationRequest(const UpdateEvaluationRequest &other)
    : MachineLearningRequest(new UpdateEvaluationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateEvaluationRequest object.
 */
UpdateEvaluationRequest::UpdateEvaluationRequest()
    : MachineLearningRequest(new UpdateEvaluationRequestPrivate(MachineLearningRequest::UpdateEvaluationAction, this))
{

}

bool UpdateEvaluationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateEvaluationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateEvaluationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEvaluationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateEvaluationRequestPrivate
 *
 * @brief  Private implementation for UpdateEvaluationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEvaluationRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public UpdateEvaluationRequest instance.
 */
UpdateEvaluationRequestPrivate::UpdateEvaluationRequestPrivate(
    const MachineLearningRequest::Action action, UpdateEvaluationRequest * const q)
    : UpdateEvaluationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEvaluationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateEvaluationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateEvaluationRequest instance.
 */
UpdateEvaluationRequestPrivate::UpdateEvaluationRequestPrivate(
    const UpdateEvaluationRequestPrivate &other, UpdateEvaluationRequest * const q)
    : UpdateEvaluationPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
