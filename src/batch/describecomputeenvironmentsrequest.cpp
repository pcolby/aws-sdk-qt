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

#include "describecomputeenvironmentsrequest.h"
#include "describecomputeenvironmentsrequest_p.h"
#include "describecomputeenvironmentsresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeComputeEnvironmentsRequest
 * \brief The DescribeComputeEnvironmentsRequest class provides an interface for Batch DescribeComputeEnvironments requests.
 *
 * \inmodule QtAwsBatch
 *
 *  <fullname>Batch</fullname>
 * 
 *  Using Batch, you can run batch computing workloads on the Amazon Web Services Cloud. Batch computing is a common means
 *  for developers, scientists, and engineers to access large amounts of compute resources. Batch uses the advantages of
 *  this computing workload to remove the undifferentiated heavy lifting of configuring and managing required
 *  infrastructure. At the same time, it also adopts a familiar batch computing software approach. Given these advantages,
 *  Batch can help you to efficiently provision resources in response to jobs submitted, thus effectively helping you to
 *  eliminate capacity constraints, reduce compute costs, and deliver your results more
 * 
 *  quickly>
 * 
 *  As a fully managed service, Batch can run batch computing workloads of any scale. Batch automatically provisions compute
 *  resources and optimizes workload distribution based on the quantity and scale of your specific workloads. With Batch,
 *  there's no need to install or manage batch computing software. This means that you can focus your time and energy on
 *  analyzing results and solving your specific
 *
 * \sa BatchClient::describeComputeEnvironments
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeComputeEnvironmentsRequest::DescribeComputeEnvironmentsRequest(const DescribeComputeEnvironmentsRequest &other)
    : BatchRequest(new DescribeComputeEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeComputeEnvironmentsRequest object.
 */
DescribeComputeEnvironmentsRequest::DescribeComputeEnvironmentsRequest()
    : BatchRequest(new DescribeComputeEnvironmentsRequestPrivate(BatchRequest::DescribeComputeEnvironmentsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeComputeEnvironmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeComputeEnvironmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeComputeEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeComputeEnvironmentsResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::DescribeComputeEnvironmentsRequestPrivate
 * \brief The DescribeComputeEnvironmentsRequestPrivate class provides private implementation for DescribeComputeEnvironmentsRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DescribeComputeEnvironmentsRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
DescribeComputeEnvironmentsRequestPrivate::DescribeComputeEnvironmentsRequestPrivate(
    const BatchRequest::Action action, DescribeComputeEnvironmentsRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeComputeEnvironmentsRequest
 * class' copy constructor.
 */
DescribeComputeEnvironmentsRequestPrivate::DescribeComputeEnvironmentsRequestPrivate(
    const DescribeComputeEnvironmentsRequestPrivate &other, DescribeComputeEnvironmentsRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
