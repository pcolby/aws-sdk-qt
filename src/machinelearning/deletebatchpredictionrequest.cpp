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

#include "deletebatchpredictionrequest.h"
#include "deletebatchpredictionrequest_p.h"
#include "deletebatchpredictionresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  DeleteBatchPredictionRequest
 *
 * @brief  Implements MachineLearning DeleteBatchPrediction requests.
 *
 * @see    MachineLearningClient::deleteBatchPrediction
 */

/**
 * @brief  Constructs a new DeleteBatchPredictionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBatchPredictionResponse::DeleteBatchPredictionResponse(

/**
 * @brief  Constructs a new DeleteBatchPredictionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBatchPredictionRequest::DeleteBatchPredictionRequest(const DeleteBatchPredictionRequest &other)
    : MachineLearningRequest(new DeleteBatchPredictionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBatchPredictionRequest object.
 */
DeleteBatchPredictionRequest::DeleteBatchPredictionRequest()
    : MachineLearningRequest(new DeleteBatchPredictionRequestPrivate(MachineLearningRequest::DeleteBatchPredictionAction, this))
{

}

bool DeleteBatchPredictionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBatchPredictionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBatchPredictionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * DeleteBatchPredictionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBatchPredictionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBatchPredictionRequestPrivate
 *
 * @brief  Private implementation for DeleteBatchPredictionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBatchPredictionRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DeleteBatchPredictionRequest instance.
 */
DeleteBatchPredictionRequestPrivate::DeleteBatchPredictionRequestPrivate(
    const MachineLearningRequest::Action action, DeleteBatchPredictionRequest * const q)
    : DeleteBatchPredictionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBatchPredictionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBatchPredictionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBatchPredictionRequest instance.
 */
DeleteBatchPredictionRequestPrivate::DeleteBatchPredictionRequestPrivate(
    const DeleteBatchPredictionRequestPrivate &other, DeleteBatchPredictionRequest * const q)
    : DeleteBatchPredictionPrivate(other, q)
{

}
