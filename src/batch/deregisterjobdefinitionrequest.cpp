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

#include "deregisterjobdefinitionrequest.h"
#include "deregisterjobdefinitionrequest_p.h"
#include "deregisterjobdefinitionresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DeregisterJobDefinitionRequest
 * \brief The DeregisterJobDefinitionRequest class provides an interface for Batch DeregisterJobDefinition requests.
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
 * \sa BatchClient::deregisterJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterJobDefinitionRequest::DeregisterJobDefinitionRequest(const DeregisterJobDefinitionRequest &other)
    : BatchRequest(new DeregisterJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterJobDefinitionRequest object.
 */
DeregisterJobDefinitionRequest::DeregisterJobDefinitionRequest()
    : BatchRequest(new DeregisterJobDefinitionRequestPrivate(BatchRequest::DeregisterJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::DeregisterJobDefinitionRequestPrivate
 * \brief The DeregisterJobDefinitionRequestPrivate class provides private implementation for DeregisterJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DeregisterJobDefinitionRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
DeregisterJobDefinitionRequestPrivate::DeregisterJobDefinitionRequestPrivate(
    const BatchRequest::Action action, DeregisterJobDefinitionRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterJobDefinitionRequest
 * class' copy constructor.
 */
DeregisterJobDefinitionRequestPrivate::DeregisterJobDefinitionRequestPrivate(
    const DeregisterJobDefinitionRequestPrivate &other, DeregisterJobDefinitionRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
