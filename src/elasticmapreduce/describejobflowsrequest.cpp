/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describejobflowsrequest.h"
#include "describejobflowsrequest_p.h"
#include "describejobflowsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DescribeJobFlowsRequest
 * \brief The DescribeJobFlowsRequest class provides an interface for EMR DescribeJobFlows requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::describeJobFlows
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobFlowsRequest::DescribeJobFlowsRequest(const DescribeJobFlowsRequest &other)
    : EMRRequest(new DescribeJobFlowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobFlowsRequest object.
 */
DescribeJobFlowsRequest::DescribeJobFlowsRequest()
    : EMRRequest(new DescribeJobFlowsRequestPrivate(EMRRequest::DescribeJobFlowsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobFlowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobFlowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobFlowsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobFlowsResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::DescribeJobFlowsRequestPrivate
 * \brief The DescribeJobFlowsRequestPrivate class provides private implementation for DescribeJobFlowsRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DescribeJobFlowsRequestPrivate object for EMR \a action,
 * with public implementation \a q.
 */
DescribeJobFlowsRequestPrivate::DescribeJobFlowsRequestPrivate(
    const EMRRequest::Action action, DescribeJobFlowsRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobFlowsRequest
 * class' copy constructor.
 */
DescribeJobFlowsRequestPrivate::DescribeJobFlowsRequestPrivate(
    const DescribeJobFlowsRequestPrivate &other, DescribeJobFlowsRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
