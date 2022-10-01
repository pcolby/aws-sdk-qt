// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobqueuesrequest.h"
#include "describejobqueuesrequest_p.h"
#include "describejobqueuesresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeJobQueuesRequest
 * \brief The DescribeJobQueuesRequest class provides an interface for Batch DescribeJobQueues requests.
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
 * \sa BatchClient::describeJobQueues
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobQueuesRequest::DescribeJobQueuesRequest(const DescribeJobQueuesRequest &other)
    : BatchRequest(new DescribeJobQueuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobQueuesRequest object.
 */
DescribeJobQueuesRequest::DescribeJobQueuesRequest()
    : BatchRequest(new DescribeJobQueuesRequestPrivate(BatchRequest::DescribeJobQueuesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobQueuesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobQueuesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobQueuesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobQueuesResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::DescribeJobQueuesRequestPrivate
 * \brief The DescribeJobQueuesRequestPrivate class provides private implementation for DescribeJobQueuesRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DescribeJobQueuesRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
DescribeJobQueuesRequestPrivate::DescribeJobQueuesRequestPrivate(
    const BatchRequest::Action action, DescribeJobQueuesRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobQueuesRequest
 * class' copy constructor.
 */
DescribeJobQueuesRequestPrivate::DescribeJobQueuesRequestPrivate(
    const DescribeJobQueuesRequestPrivate &other, DescribeJobQueuesRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
