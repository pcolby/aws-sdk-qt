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

#include "describeevaluationsrequest.h"
#include "describeevaluationsrequest_p.h"
#include "describeevaluationsresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeEvaluationsRequest
 * \brief The DescribeEvaluationsRequest class provides an interface for MachineLearning DescribeEvaluations requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeEvaluations
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEvaluationsRequest::DescribeEvaluationsRequest(const DescribeEvaluationsRequest &other)
    : MachineLearningRequest(new DescribeEvaluationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEvaluationsRequest object.
 */
DescribeEvaluationsRequest::DescribeEvaluationsRequest()
    : MachineLearningRequest(new DescribeEvaluationsRequestPrivate(MachineLearningRequest::DescribeEvaluationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEvaluationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEvaluationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEvaluationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEvaluationsResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DescribeEvaluationsRequestPrivate
 * \brief The DescribeEvaluationsRequestPrivate class provides private implementation for DescribeEvaluationsRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DescribeEvaluationsRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DescribeEvaluationsRequestPrivate::DescribeEvaluationsRequestPrivate(
    const MachineLearningRequest::Action action, DescribeEvaluationsRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEvaluationsRequest
 * class' copy constructor.
 */
DescribeEvaluationsRequestPrivate::DescribeEvaluationsRequestPrivate(
    const DescribeEvaluationsRequestPrivate &other, DescribeEvaluationsRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
