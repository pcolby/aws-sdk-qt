// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
