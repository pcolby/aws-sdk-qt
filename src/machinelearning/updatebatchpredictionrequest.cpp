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

#include "updatebatchpredictionrequest.h"
#include "updatebatchpredictionrequest_p.h"
#include "updatebatchpredictionresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::UpdateBatchPredictionRequest
 *
 * \brief The UpdateBatchPredictionRequest class provides an interface for MachineLearning UpdateBatchPrediction requests.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::updateBatchPrediction
 */

/*!
 * @brief  Constructs a new UpdateBatchPredictionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateBatchPredictionRequest::UpdateBatchPredictionRequest(const UpdateBatchPredictionRequest &other)
    : MachineLearningRequest(new UpdateBatchPredictionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateBatchPredictionRequest object.
 */
UpdateBatchPredictionRequest::UpdateBatchPredictionRequest()
    : MachineLearningRequest(new UpdateBatchPredictionRequestPrivate(MachineLearningRequest::UpdateBatchPredictionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBatchPredictionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateBatchPredictionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateBatchPredictionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBatchPredictionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBatchPredictionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateBatchPredictionRequestPrivate
 *
 * @brief  Private implementation for UpdateBatchPredictionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateBatchPredictionRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public UpdateBatchPredictionRequest instance.
 */
UpdateBatchPredictionRequestPrivate::UpdateBatchPredictionRequestPrivate(
    const MachineLearningRequest::Action action, UpdateBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateBatchPredictionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateBatchPredictionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateBatchPredictionRequest instance.
 */
UpdateBatchPredictionRequestPrivate::UpdateBatchPredictionRequestPrivate(
    const UpdateBatchPredictionRequestPrivate &other, UpdateBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
