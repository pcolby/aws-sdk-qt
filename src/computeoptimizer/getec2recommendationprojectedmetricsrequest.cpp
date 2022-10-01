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

#include "getec2recommendationprojectedmetricsrequest.h"
#include "getec2recommendationprojectedmetricsrequest_p.h"
#include "getec2recommendationprojectedmetricsresponse.h"
#include "computeoptimizerrequest_p.h"

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetEC2RecommendationProjectedMetricsRequest
 * \brief The GetEC2RecommendationProjectedMetricsRequest class provides an interface for ComputeOptimizer GetEC2RecommendationProjectedMetrics requests.
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
 * \sa ComputeOptimizerClient::getEC2RecommendationProjectedMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
GetEC2RecommendationProjectedMetricsRequest::GetEC2RecommendationProjectedMetricsRequest(const GetEC2RecommendationProjectedMetricsRequest &other)
    : ComputeOptimizerRequest(new GetEC2RecommendationProjectedMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEC2RecommendationProjectedMetricsRequest object.
 */
GetEC2RecommendationProjectedMetricsRequest::GetEC2RecommendationProjectedMetricsRequest()
    : ComputeOptimizerRequest(new GetEC2RecommendationProjectedMetricsRequestPrivate(ComputeOptimizerRequest::GetEC2RecommendationProjectedMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetEC2RecommendationProjectedMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEC2RecommendationProjectedMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEC2RecommendationProjectedMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetEC2RecommendationProjectedMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::ComputeOptimizer::GetEC2RecommendationProjectedMetricsRequestPrivate
 * \brief The GetEC2RecommendationProjectedMetricsRequestPrivate class provides private implementation for GetEC2RecommendationProjectedMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetEC2RecommendationProjectedMetricsRequestPrivate object for ComputeOptimizer \a action,
 * with public implementation \a q.
 */
GetEC2RecommendationProjectedMetricsRequestPrivate::GetEC2RecommendationProjectedMetricsRequestPrivate(
    const ComputeOptimizerRequest::Action action, GetEC2RecommendationProjectedMetricsRequest * const q)
    : ComputeOptimizerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEC2RecommendationProjectedMetricsRequest
 * class' copy constructor.
 */
GetEC2RecommendationProjectedMetricsRequestPrivate::GetEC2RecommendationProjectedMetricsRequestPrivate(
    const GetEC2RecommendationProjectedMetricsRequestPrivate &other, GetEC2RecommendationProjectedMetricsRequest * const q)
    : ComputeOptimizerRequestPrivate(other, q)
{

}

} // namespace ComputeOptimizer
} // namespace QtAws
