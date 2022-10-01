/*
    Copyright 2013-2021 Paul Colby

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

#include "deleterecommendationpreferencesrequest.h"
#include "deleterecommendationpreferencesrequest_p.h"
#include "deleterecommendationpreferencesresponse.h"
#include "computeoptimizerrequest_p.h"

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::DeleteRecommendationPreferencesRequest
 * \brief The DeleteRecommendationPreferencesRequest class provides an interface for ComputeOptimizer DeleteRecommendationPreferences requests.
 *
 * \inmodule QtAwsComputeOptimizer
 *
 *  Compute Optimizer is a service that analyzes the configuration and utilization metrics of your Amazon Web Services
 *  compute resources, such as Amazon EC2 instances, Amazon EC2 Auto Scaling groups, Lambda functions, and Amazon EBS
 *  volumes. It reports whether your resources are optimal, and generates optimization recommendations to reduce the cost
 *  and improve the performance of your workloads. Compute Optimizer also provides recent utilization metric data, in
 *  addition to projected utilization metric data for the recommendations, which you can use to evaluate which
 *  recommendation provides the best price-performance trade-off. The analysis of your usage patterns can help you decide
 *  when to move or resize your running resources, and still meet your performance and capacity requirements. For more
 *  information about Compute Optimizer, including the required permissions to use the service, see the <a
 *  href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">Compute Optimizer User
 *
 * \sa ComputeOptimizerClient::deleteRecommendationPreferences
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecommendationPreferencesRequest::DeleteRecommendationPreferencesRequest(const DeleteRecommendationPreferencesRequest &other)
    : ComputeOptimizerRequest(new DeleteRecommendationPreferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecommendationPreferencesRequest object.
 */
DeleteRecommendationPreferencesRequest::DeleteRecommendationPreferencesRequest()
    : ComputeOptimizerRequest(new DeleteRecommendationPreferencesRequestPrivate(ComputeOptimizerRequest::DeleteRecommendationPreferencesAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRecommendationPreferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRecommendationPreferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRecommendationPreferencesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRecommendationPreferencesResponse(*this, reply);
}

/*!
 * \class QtAws::ComputeOptimizer::DeleteRecommendationPreferencesRequestPrivate
 * \brief The DeleteRecommendationPreferencesRequestPrivate class provides private implementation for DeleteRecommendationPreferencesRequest.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a DeleteRecommendationPreferencesRequestPrivate object for ComputeOptimizer \a action,
 * with public implementation \a q.
 */
DeleteRecommendationPreferencesRequestPrivate::DeleteRecommendationPreferencesRequestPrivate(
    const ComputeOptimizerRequest::Action action, DeleteRecommendationPreferencesRequest * const q)
    : ComputeOptimizerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRecommendationPreferencesRequest
 * class' copy constructor.
 */
DeleteRecommendationPreferencesRequestPrivate::DeleteRecommendationPreferencesRequestPrivate(
    const DeleteRecommendationPreferencesRequestPrivate &other, DeleteRecommendationPreferencesRequest * const q)
    : ComputeOptimizerRequestPrivate(other, q)
{

}

} // namespace ComputeOptimizer
} // namespace QtAws
