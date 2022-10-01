// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebatchpredictionrequest.h"
#include "updatebatchpredictionrequest_p.h"
#include "updatebatchpredictionresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::UpdateBatchPredictionRequest
 * \brief The UpdateBatchPredictionRequest class provides an interface for MachineLearning UpdateBatchPrediction requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::updateBatchPrediction
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBatchPredictionRequest::UpdateBatchPredictionRequest(const UpdateBatchPredictionRequest &other)
    : MachineLearningRequest(new UpdateBatchPredictionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBatchPredictionRequest object.
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
 * Returns a UpdateBatchPredictionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBatchPredictionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBatchPredictionResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::UpdateBatchPredictionRequestPrivate
 * \brief The UpdateBatchPredictionRequestPrivate class provides private implementation for UpdateBatchPredictionRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a UpdateBatchPredictionRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
UpdateBatchPredictionRequestPrivate::UpdateBatchPredictionRequestPrivate(
    const MachineLearningRequest::Action action, UpdateBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBatchPredictionRequest
 * class' copy constructor.
 */
UpdateBatchPredictionRequestPrivate::UpdateBatchPredictionRequestPrivate(
    const UpdateBatchPredictionRequestPrivate &other, UpdateBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
