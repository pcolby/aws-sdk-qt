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

#include "listschedulingpoliciesrequest.h"
#include "listschedulingpoliciesrequest_p.h"
#include "listschedulingpoliciesresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::ListSchedulingPoliciesRequest
 * \brief The ListSchedulingPoliciesRequest class provides an interface for Batch ListSchedulingPolicies requests.
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
 * \sa BatchClient::listSchedulingPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListSchedulingPoliciesRequest::ListSchedulingPoliciesRequest(const ListSchedulingPoliciesRequest &other)
    : BatchRequest(new ListSchedulingPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSchedulingPoliciesRequest object.
 */
ListSchedulingPoliciesRequest::ListSchedulingPoliciesRequest()
    : BatchRequest(new ListSchedulingPoliciesRequestPrivate(BatchRequest::ListSchedulingPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSchedulingPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSchedulingPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSchedulingPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListSchedulingPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::ListSchedulingPoliciesRequestPrivate
 * \brief The ListSchedulingPoliciesRequestPrivate class provides private implementation for ListSchedulingPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a ListSchedulingPoliciesRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
ListSchedulingPoliciesRequestPrivate::ListSchedulingPoliciesRequestPrivate(
    const BatchRequest::Action action, ListSchedulingPoliciesRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSchedulingPoliciesRequest
 * class' copy constructor.
 */
ListSchedulingPoliciesRequestPrivate::ListSchedulingPoliciesRequestPrivate(
    const ListSchedulingPoliciesRequestPrivate &other, ListSchedulingPoliciesRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
