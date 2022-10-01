// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateenrollmentstatusrequest.h"
#include "updateenrollmentstatusrequest_p.h"
#include "updateenrollmentstatusresponse.h"
#include "computeoptimizerrequest_p.h"

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::UpdateEnrollmentStatusRequest
 * \brief The UpdateEnrollmentStatusRequest class provides an interface for ComputeOptimizer UpdateEnrollmentStatus requests.
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
 * \sa ComputeOptimizerClient::updateEnrollmentStatus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEnrollmentStatusRequest::UpdateEnrollmentStatusRequest(const UpdateEnrollmentStatusRequest &other)
    : ComputeOptimizerRequest(new UpdateEnrollmentStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEnrollmentStatusRequest object.
 */
UpdateEnrollmentStatusRequest::UpdateEnrollmentStatusRequest()
    : ComputeOptimizerRequest(new UpdateEnrollmentStatusRequestPrivate(ComputeOptimizerRequest::UpdateEnrollmentStatusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEnrollmentStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEnrollmentStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEnrollmentStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEnrollmentStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ComputeOptimizer::UpdateEnrollmentStatusRequestPrivate
 * \brief The UpdateEnrollmentStatusRequestPrivate class provides private implementation for UpdateEnrollmentStatusRequest.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a UpdateEnrollmentStatusRequestPrivate object for ComputeOptimizer \a action,
 * with public implementation \a q.
 */
UpdateEnrollmentStatusRequestPrivate::UpdateEnrollmentStatusRequestPrivate(
    const ComputeOptimizerRequest::Action action, UpdateEnrollmentStatusRequest * const q)
    : ComputeOptimizerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEnrollmentStatusRequest
 * class' copy constructor.
 */
UpdateEnrollmentStatusRequestPrivate::UpdateEnrollmentStatusRequestPrivate(
    const UpdateEnrollmentStatusRequestPrivate &other, UpdateEnrollmentStatusRequest * const q)
    : ComputeOptimizerRequestPrivate(other, q)
{

}

} // namespace ComputeOptimizer
} // namespace QtAws
