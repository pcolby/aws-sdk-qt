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

#include "describejobdefinitionsrequest.h"
#include "describejobdefinitionsrequest_p.h"
#include "describejobdefinitionsresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeJobDefinitionsRequest
 * \brief The DescribeJobDefinitionsRequest class provides an interface for Batch DescribeJobDefinitions requests.
 *
 * \inmodule QtAwsBatch
 *
 *  Using AWS Batch, you can run batch computing workloads on the AWS Cloud. Batch computing is a common means for
 *  developers, scientists, and engineers to access large amounts of compute resources. AWS Batch uses the advantages of
 *  this computing workload to remove the undifferentiated heavy lifting of configuring and managing required
 *  infrastructure. At the same time, it also adopts a familiar batch computing software approach. Given these advantages,
 *  AWS Batch can help you to efficiently provision resources in response to jobs submitted, thus effectively helping you to
 *  eliminate capacity constraints, reduce compute costs, and deliver your results more
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch can run batch computing workloads of any scale. AWS Batch automatically provisions
 *  compute resources and optimizes workload distribution based on the quantity and scale of your specific workloads. With
 *  AWS Batch, there's no need to install or manage batch computing software. This means that you can focus your time and
 *  energy on analyzing results and solving your specific
 *
 * \sa BatchClient::describeJobDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobDefinitionsRequest::DescribeJobDefinitionsRequest(const DescribeJobDefinitionsRequest &other)
    : BatchRequest(new DescribeJobDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobDefinitionsRequest object.
 */
DescribeJobDefinitionsRequest::DescribeJobDefinitionsRequest()
    : BatchRequest(new DescribeJobDefinitionsRequestPrivate(BatchRequest::DescribeJobDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::DescribeJobDefinitionsRequestPrivate
 * \brief The DescribeJobDefinitionsRequestPrivate class provides private implementation for DescribeJobDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DescribeJobDefinitionsRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
DescribeJobDefinitionsRequestPrivate::DescribeJobDefinitionsRequestPrivate(
    const BatchRequest::Action action, DescribeJobDefinitionsRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobDefinitionsRequest
 * class' copy constructor.
 */
DescribeJobDefinitionsRequestPrivate::DescribeJobDefinitionsRequestPrivate(
    const DescribeJobDefinitionsRequestPrivate &other, DescribeJobDefinitionsRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
