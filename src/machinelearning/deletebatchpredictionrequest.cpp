/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletebatchpredictionrequest.h"
#include "deletebatchpredictionrequest_p.h"
#include "deletebatchpredictionresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteBatchPredictionRequest
 * \brief The DeleteBatchPredictionRequest class provides an interface for MachineLearning DeleteBatchPrediction requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteBatchPrediction
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBatchPredictionRequest::DeleteBatchPredictionRequest(const DeleteBatchPredictionRequest &other)
    : MachineLearningRequest(new DeleteBatchPredictionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBatchPredictionRequest object.
 */
DeleteBatchPredictionRequest::DeleteBatchPredictionRequest()
    : MachineLearningRequest(new DeleteBatchPredictionRequestPrivate(MachineLearningRequest::DeleteBatchPredictionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBatchPredictionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBatchPredictionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBatchPredictionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBatchPredictionResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DeleteBatchPredictionRequestPrivate
 * \brief The DeleteBatchPredictionRequestPrivate class provides private implementation for DeleteBatchPredictionRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteBatchPredictionRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DeleteBatchPredictionRequestPrivate::DeleteBatchPredictionRequestPrivate(
    const MachineLearningRequest::Action action, DeleteBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBatchPredictionRequest
 * class' copy constructor.
 */
DeleteBatchPredictionRequestPrivate::DeleteBatchPredictionRequestPrivate(
    const DeleteBatchPredictionRequestPrivate &other, DeleteBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
