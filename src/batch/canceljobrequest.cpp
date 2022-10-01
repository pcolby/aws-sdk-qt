// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljobrequest.h"
#include "canceljobrequest_p.h"
#include "canceljobresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::CancelJobRequest
 * \brief The CancelJobRequest class provides an interface for Batch CancelJob requests.
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
 * \sa BatchClient::cancelJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelJobRequest::CancelJobRequest(const CancelJobRequest &other)
    : BatchRequest(new CancelJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelJobRequest object.
 */
CancelJobRequest::CancelJobRequest()
    : BatchRequest(new CancelJobRequestPrivate(BatchRequest::CancelJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelJobResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::CancelJobRequestPrivate
 * \brief The CancelJobRequestPrivate class provides private implementation for CancelJobRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a CancelJobRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const BatchRequest::Action action, CancelJobRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelJobRequest
 * class' copy constructor.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const CancelJobRequestPrivate &other, CancelJobRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
