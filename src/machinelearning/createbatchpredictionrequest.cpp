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

#include "createbatchpredictionrequest.h"
#include "createbatchpredictionrequest_p.h"
#include "createbatchpredictionresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  CreateBatchPredictionRequest
 *
 * @brief  Implements MachineLearning CreateBatchPrediction requests.
 *
 * @see    MachineLearningClient::createBatchPrediction
 */

/**
 * @brief  Constructs a new CreateBatchPredictionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBatchPredictionResponse::CreateBatchPredictionResponse(

/**
 * @brief  Constructs a new CreateBatchPredictionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBatchPredictionRequest::CreateBatchPredictionRequest(const CreateBatchPredictionRequest &other)
    : MachineLearningRequest(new CreateBatchPredictionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBatchPredictionRequest object.
 */
CreateBatchPredictionRequest::CreateBatchPredictionRequest()
    : MachineLearningRequest(new CreateBatchPredictionRequestPrivate(MachineLearningRequest::CreateBatchPredictionAction, this))
{

}

bool CreateBatchPredictionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBatchPredictionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBatchPredictionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * CreateBatchPredictionRequest::response(QNetworkReply * const reply) const
{
    return new CreateBatchPredictionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBatchPredictionRequestPrivate
 *
 * @brief  Private implementation for CreateBatchPredictionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBatchPredictionRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public CreateBatchPredictionRequest instance.
 */
CreateBatchPredictionRequestPrivate::CreateBatchPredictionRequestPrivate(
    const MachineLearningRequest::Action action, CreateBatchPredictionRequest * const q)
    : CreateBatchPredictionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBatchPredictionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBatchPredictionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBatchPredictionRequest instance.
 */
CreateBatchPredictionRequestPrivate::CreateBatchPredictionRequestPrivate(
    const CreateBatchPredictionRequestPrivate &other, CreateBatchPredictionRequest * const q)
    : CreateBatchPredictionPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace AWS
