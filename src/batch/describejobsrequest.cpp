// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobsrequest.h"
#include "describejobsrequest_p.h"
#include "describejobsresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeJobsRequest
 * \brief The DescribeJobsRequest class provides an interface for Batch DescribeJobs requests.
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
 * \sa BatchClient::describeJobs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobsRequest::DescribeJobsRequest(const DescribeJobsRequest &other)
    : BatchRequest(new DescribeJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobsRequest object.
 */
DescribeJobsRequest::DescribeJobsRequest()
    : BatchRequest(new DescribeJobsRequestPrivate(BatchRequest::DescribeJobsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::DescribeJobsRequestPrivate
 * \brief The DescribeJobsRequestPrivate class provides private implementation for DescribeJobsRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DescribeJobsRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
DescribeJobsRequestPrivate::DescribeJobsRequestPrivate(
    const BatchRequest::Action action, DescribeJobsRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobsRequest
 * class' copy constructor.
 */
DescribeJobsRequestPrivate::DescribeJobsRequestPrivate(
    const DescribeJobsRequestPrivate &other, DescribeJobsRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
