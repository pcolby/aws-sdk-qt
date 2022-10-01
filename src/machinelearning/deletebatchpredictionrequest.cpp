// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
