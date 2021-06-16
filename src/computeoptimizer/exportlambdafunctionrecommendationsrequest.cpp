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

#include "exportlambdafunctionrecommendationsrequest.h"
#include "exportlambdafunctionrecommendationsrequest_p.h"
#include "exportlambdafunctionrecommendationsresponse.h"
#include "computeoptimizerrequest_p.h"

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::ExportLambdaFunctionRecommendationsRequest
 * \brief The ExportLambdaFunctionRecommendationsRequest class provides an interface for ComputeOptimizer ExportLambdaFunctionRecommendations requests.
 *
 * \inmodule QtAwsComputeOptimizer
 *
 *  AWS Compute Optimizer is a service that analyzes the configuration and utilization metrics of your AWS compute
 *  resources, such as EC2 instances, Auto Scaling groups, AWS Lambda functions, and Amazon EBS volumes. It reports whether
 *  your resources are optimal, and generates optimization recommendations to reduce the cost and improve the performance of
 *  your workloads. Compute Optimizer also provides recent utilization metric data, as well as projected utilization metric
 *  data for the recommendations, which you can use to evaluate which recommendation provides the best price-performance
 *  trade-off. The analysis of your usage patterns can help you decide when to move or resize your running resources, and
 *  still meet your performance and capacity requirements. For more information about Compute Optimizer, including the
 *  required permissions to use the service, see the <a href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/">AWS
 *  Compute Optimizer User
 *
 * \sa ComputeOptimizerClient::exportLambdaFunctionRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ExportLambdaFunctionRecommendationsRequest::ExportLambdaFunctionRecommendationsRequest(const ExportLambdaFunctionRecommendationsRequest &other)
    : ComputeOptimizerRequest(new ExportLambdaFunctionRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportLambdaFunctionRecommendationsRequest object.
 */
ExportLambdaFunctionRecommendationsRequest::ExportLambdaFunctionRecommendationsRequest()
    : ComputeOptimizerRequest(new ExportLambdaFunctionRecommendationsRequestPrivate(ComputeOptimizerRequest::ExportLambdaFunctionRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ExportLambdaFunctionRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportLambdaFunctionRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportLambdaFunctionRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ExportLambdaFunctionRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::ComputeOptimizer::ExportLambdaFunctionRecommendationsRequestPrivate
 * \brief The ExportLambdaFunctionRecommendationsRequestPrivate class provides private implementation for ExportLambdaFunctionRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ExportLambdaFunctionRecommendationsRequestPrivate object for ComputeOptimizer \a action,
 * with public implementation \a q.
 */
ExportLambdaFunctionRecommendationsRequestPrivate::ExportLambdaFunctionRecommendationsRequestPrivate(
    const ComputeOptimizerRequest::Action action, ExportLambdaFunctionRecommendationsRequest * const q)
    : ComputeOptimizerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportLambdaFunctionRecommendationsRequest
 * class' copy constructor.
 */
ExportLambdaFunctionRecommendationsRequestPrivate::ExportLambdaFunctionRecommendationsRequestPrivate(
    const ExportLambdaFunctionRecommendationsRequestPrivate &other, ExportLambdaFunctionRecommendationsRequest * const q)
    : ComputeOptimizerRequestPrivate(other, q)
{

}

} // namespace ComputeOptimizer
} // namespace QtAws
