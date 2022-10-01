// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecomputeenvironmentrequest.h"
#include "updatecomputeenvironmentrequest_p.h"
#include "updatecomputeenvironmentresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::UpdateComputeEnvironmentRequest
 * \brief The UpdateComputeEnvironmentRequest class provides an interface for Batch UpdateComputeEnvironment requests.
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
 * \sa BatchClient::updateComputeEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateComputeEnvironmentRequest::UpdateComputeEnvironmentRequest(const UpdateComputeEnvironmentRequest &other)
    : BatchRequest(new UpdateComputeEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateComputeEnvironmentRequest object.
 */
UpdateComputeEnvironmentRequest::UpdateComputeEnvironmentRequest()
    : BatchRequest(new UpdateComputeEnvironmentRequestPrivate(BatchRequest::UpdateComputeEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateComputeEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateComputeEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateComputeEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateComputeEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::UpdateComputeEnvironmentRequestPrivate
 * \brief The UpdateComputeEnvironmentRequestPrivate class provides private implementation for UpdateComputeEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a UpdateComputeEnvironmentRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
UpdateComputeEnvironmentRequestPrivate::UpdateComputeEnvironmentRequestPrivate(
    const BatchRequest::Action action, UpdateComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateComputeEnvironmentRequest
 * class' copy constructor.
 */
UpdateComputeEnvironmentRequestPrivate::UpdateComputeEnvironmentRequestPrivate(
    const UpdateComputeEnvironmentRequestPrivate &other, UpdateComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
