// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebatchpredictionsrequest.h"
#include "describebatchpredictionsrequest_p.h"
#include "describebatchpredictionsresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeBatchPredictionsRequest
 * \brief The DescribeBatchPredictionsRequest class provides an interface for MachineLearning DescribeBatchPredictions requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeBatchPredictions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBatchPredictionsRequest::DescribeBatchPredictionsRequest(const DescribeBatchPredictionsRequest &other)
    : MachineLearningRequest(new DescribeBatchPredictionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBatchPredictionsRequest object.
 */
DescribeBatchPredictionsRequest::DescribeBatchPredictionsRequest()
    : MachineLearningRequest(new DescribeBatchPredictionsRequestPrivate(MachineLearningRequest::DescribeBatchPredictionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBatchPredictionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBatchPredictionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBatchPredictionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBatchPredictionsResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DescribeBatchPredictionsRequestPrivate
 * \brief The DescribeBatchPredictionsRequestPrivate class provides private implementation for DescribeBatchPredictionsRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DescribeBatchPredictionsRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DescribeBatchPredictionsRequestPrivate::DescribeBatchPredictionsRequestPrivate(
    const MachineLearningRequest::Action action, DescribeBatchPredictionsRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBatchPredictionsRequest
 * class' copy constructor.
 */
DescribeBatchPredictionsRequestPrivate::DescribeBatchPredictionsRequestPrivate(
    const DescribeBatchPredictionsRequestPrivate &other, DescribeBatchPredictionsRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
