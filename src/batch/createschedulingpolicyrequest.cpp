// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createschedulingpolicyrequest.h"
#include "createschedulingpolicyrequest_p.h"
#include "createschedulingpolicyresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::CreateSchedulingPolicyRequest
 * \brief The CreateSchedulingPolicyRequest class provides an interface for Batch CreateSchedulingPolicy requests.
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
 * \sa BatchClient::createSchedulingPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSchedulingPolicyRequest::CreateSchedulingPolicyRequest(const CreateSchedulingPolicyRequest &other)
    : BatchRequest(new CreateSchedulingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSchedulingPolicyRequest object.
 */
CreateSchedulingPolicyRequest::CreateSchedulingPolicyRequest()
    : BatchRequest(new CreateSchedulingPolicyRequestPrivate(BatchRequest::CreateSchedulingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSchedulingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSchedulingPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSchedulingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateSchedulingPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::CreateSchedulingPolicyRequestPrivate
 * \brief The CreateSchedulingPolicyRequestPrivate class provides private implementation for CreateSchedulingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a CreateSchedulingPolicyRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
CreateSchedulingPolicyRequestPrivate::CreateSchedulingPolicyRequestPrivate(
    const BatchRequest::Action action, CreateSchedulingPolicyRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSchedulingPolicyRequest
 * class' copy constructor.
 */
CreateSchedulingPolicyRequestPrivate::CreateSchedulingPolicyRequestPrivate(
    const CreateSchedulingPolicyRequestPrivate &other, CreateSchedulingPolicyRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
