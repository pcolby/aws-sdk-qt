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

#include "createevaluationrequest.h"
#include "createevaluationrequest_p.h"
#include "createevaluationresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  CreateEvaluationRequest
 *
 * @brief  Implements MachineLearning CreateEvaluation requests.
 *
 * @see    MachineLearningClient::createEvaluation
 */

/**
 * @brief  Constructs a new CreateEvaluationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEvaluationResponse::CreateEvaluationResponse(

/**
 * @brief  Constructs a new CreateEvaluationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateEvaluationRequest::CreateEvaluationRequest(const CreateEvaluationRequest &other)
    : MachineLearningRequest(new CreateEvaluationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateEvaluationRequest object.
 */
CreateEvaluationRequest::CreateEvaluationRequest()
    : MachineLearningRequest(new CreateEvaluationRequestPrivate(MachineLearningRequest::CreateEvaluationAction, this))
{

}

bool CreateEvaluationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateEvaluationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateEvaluationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * CreateEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new CreateEvaluationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateEvaluationRequestPrivate
 *
 * @brief  Private implementation for CreateEvaluationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEvaluationRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public CreateEvaluationRequest instance.
 */
CreateEvaluationRequestPrivate::CreateEvaluationRequestPrivate(
    const MachineLearningRequest::Action action, CreateEvaluationRequest * const q)
    : CreateEvaluationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateEvaluationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateEvaluationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateEvaluationRequest instance.
 */
CreateEvaluationRequestPrivate::CreateEvaluationRequestPrivate(
    const CreateEvaluationRequestPrivate &other, CreateEvaluationRequest * const q)
    : CreateEvaluationPrivate(other, q)
{

}
