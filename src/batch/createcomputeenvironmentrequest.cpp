// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcomputeenvironmentrequest.h"
#include "createcomputeenvironmentrequest_p.h"
#include "createcomputeenvironmentresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::CreateComputeEnvironmentRequest
 * \brief The CreateComputeEnvironmentRequest class provides an interface for Batch CreateComputeEnvironment requests.
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
 * \sa BatchClient::createComputeEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateComputeEnvironmentRequest::CreateComputeEnvironmentRequest(const CreateComputeEnvironmentRequest &other)
    : BatchRequest(new CreateComputeEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateComputeEnvironmentRequest object.
 */
CreateComputeEnvironmentRequest::CreateComputeEnvironmentRequest()
    : BatchRequest(new CreateComputeEnvironmentRequestPrivate(BatchRequest::CreateComputeEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateComputeEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateComputeEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateComputeEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateComputeEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::CreateComputeEnvironmentRequestPrivate
 * \brief The CreateComputeEnvironmentRequestPrivate class provides private implementation for CreateComputeEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a CreateComputeEnvironmentRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
CreateComputeEnvironmentRequestPrivate::CreateComputeEnvironmentRequestPrivate(
    const BatchRequest::Action action, CreateComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateComputeEnvironmentRequest
 * class' copy constructor.
 */
CreateComputeEnvironmentRequestPrivate::CreateComputeEnvironmentRequestPrivate(
    const CreateComputeEnvironmentRequestPrivate &other, CreateComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
