// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbatchpredictionrequest.h"
#include "getbatchpredictionrequest_p.h"
#include "getbatchpredictionresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetBatchPredictionRequest
 * \brief The GetBatchPredictionRequest class provides an interface for MachineLearning GetBatchPrediction requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getBatchPrediction
 */

/*!
 * Constructs a copy of \a other.
 */
GetBatchPredictionRequest::GetBatchPredictionRequest(const GetBatchPredictionRequest &other)
    : MachineLearningRequest(new GetBatchPredictionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBatchPredictionRequest object.
 */
GetBatchPredictionRequest::GetBatchPredictionRequest()
    : MachineLearningRequest(new GetBatchPredictionRequestPrivate(MachineLearningRequest::GetBatchPredictionAction, this))
{

}

/*!
 * \reimp
 */
bool GetBatchPredictionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBatchPredictionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBatchPredictionRequest::response(QNetworkReply * const reply) const
{
    return new GetBatchPredictionResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::GetBatchPredictionRequestPrivate
 * \brief The GetBatchPredictionRequestPrivate class provides private implementation for GetBatchPredictionRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetBatchPredictionRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
GetBatchPredictionRequestPrivate::GetBatchPredictionRequestPrivate(
    const MachineLearningRequest::Action action, GetBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBatchPredictionRequest
 * class' copy constructor.
 */
GetBatchPredictionRequestPrivate::GetBatchPredictionRequestPrivate(
    const GetBatchPredictionRequestPrivate &other, GetBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
