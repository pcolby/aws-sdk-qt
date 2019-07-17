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
