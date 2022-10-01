// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getenrollmentstatusrequest.h"
#include "getenrollmentstatusrequest_p.h"
#include "getenrollmentstatusresponse.h"
#include "computeoptimizerrequest_p.h"

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::GetEnrollmentStatusRequest
 * \brief The GetEnrollmentStatusRequest class provides an interface for ComputeOptimizer GetEnrollmentStatus requests.
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
 * \sa ComputeOptimizerClient::getEnrollmentStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetEnrollmentStatusRequest::GetEnrollmentStatusRequest(const GetEnrollmentStatusRequest &other)
    : ComputeOptimizerRequest(new GetEnrollmentStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEnrollmentStatusRequest object.
 */
GetEnrollmentStatusRequest::GetEnrollmentStatusRequest()
    : ComputeOptimizerRequest(new GetEnrollmentStatusRequestPrivate(ComputeOptimizerRequest::GetEnrollmentStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetEnrollmentStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEnrollmentStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEnrollmentStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetEnrollmentStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ComputeOptimizer::GetEnrollmentStatusRequestPrivate
 * \brief The GetEnrollmentStatusRequestPrivate class provides private implementation for GetEnrollmentStatusRequest.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a GetEnrollmentStatusRequestPrivate object for ComputeOptimizer \a action,
 * with public implementation \a q.
 */
GetEnrollmentStatusRequestPrivate::GetEnrollmentStatusRequestPrivate(
    const ComputeOptimizerRequest::Action action, GetEnrollmentStatusRequest * const q)
    : ComputeOptimizerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEnrollmentStatusRequest
 * class' copy constructor.
 */
GetEnrollmentStatusRequestPrivate::GetEnrollmentStatusRequestPrivate(
    const GetEnrollmentStatusRequestPrivate &other, GetEnrollmentStatusRequest * const q)
    : ComputeOptimizerRequestPrivate(other, q)
{

}

} // namespace ComputeOptimizer
} // namespace QtAws
