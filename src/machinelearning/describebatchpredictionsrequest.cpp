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

#include "describebatchpredictionsrequest.h"
#include "describebatchpredictionsrequest_p.h"
#include "describebatchpredictionsresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  DescribeBatchPredictionsRequest
 *
 * @brief  Implements MachineLearning DescribeBatchPredictions requests.
 *
 * @see    MachineLearningClient::describeBatchPredictions
 */

/**
 * @brief  Constructs a new DescribeBatchPredictionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBatchPredictionsRequest::DescribeBatchPredictionsRequest(const DescribeBatchPredictionsRequest &other)
    : MachineLearningRequest(new DescribeBatchPredictionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeBatchPredictionsRequest object.
 */
DescribeBatchPredictionsRequest::DescribeBatchPredictionsRequest()
    : MachineLearningRequest(new DescribeBatchPredictionsRequestPrivate(MachineLearningRequest::DescribeBatchPredictionsAction, this))
{

}

bool DescribeBatchPredictionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeBatchPredictionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBatchPredictionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * DescribeBatchPredictionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBatchPredictionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeBatchPredictionsRequestPrivate
 *
 * @brief  Private implementation for DescribeBatchPredictionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBatchPredictionsRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DescribeBatchPredictionsRequest instance.
 */
DescribeBatchPredictionsRequestPrivate::DescribeBatchPredictionsRequestPrivate(
    const MachineLearningRequest::Action action, DescribeBatchPredictionsRequest * const q)
    : DescribeBatchPredictionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBatchPredictionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBatchPredictionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBatchPredictionsRequest instance.
 */
DescribeBatchPredictionsRequestPrivate::DescribeBatchPredictionsRequestPrivate(
    const DescribeBatchPredictionsRequestPrivate &other, DescribeBatchPredictionsRequest * const q)
    : DescribeBatchPredictionsPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace AWS
