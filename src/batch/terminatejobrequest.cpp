// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminatejobrequest.h"
#include "terminatejobrequest_p.h"
#include "terminatejobresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::TerminateJobRequest
 * \brief The TerminateJobRequest class provides an interface for Batch TerminateJob requests.
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
 * \sa BatchClient::terminateJob
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateJobRequest::TerminateJobRequest(const TerminateJobRequest &other)
    : BatchRequest(new TerminateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateJobRequest object.
 */
TerminateJobRequest::TerminateJobRequest()
    : BatchRequest(new TerminateJobRequestPrivate(BatchRequest::TerminateJobAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateJobRequest::response(QNetworkReply * const reply) const
{
    return new TerminateJobResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::TerminateJobRequestPrivate
 * \brief The TerminateJobRequestPrivate class provides private implementation for TerminateJobRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a TerminateJobRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
TerminateJobRequestPrivate::TerminateJobRequestPrivate(
    const BatchRequest::Action action, TerminateJobRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateJobRequest
 * class' copy constructor.
 */
TerminateJobRequestPrivate::TerminateJobRequestPrivate(
    const TerminateJobRequestPrivate &other, TerminateJobRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
