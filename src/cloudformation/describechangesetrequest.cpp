/*
    Copyright 2013-2018 Paul Colby

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

#include "describechangesetrequest.h"
#include "describechangesetrequest_p.h"
#include "describechangesetresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::DescribeChangeSetRequest
 * \brief The DescribeChangeSetRequest class provides an interface for CloudFormation DescribeChangeSet requests.
 *
 * \inmodule QtAwsCloudFormation
 *
 *  <fullname>AWS CloudFormation</fullname>
 * 
 *  AWS CloudFormation allows you to create and manage AWS infrastructure deployments predictably and repeatedly. You can
 *  use AWS CloudFormation to leverage AWS products, such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store,
 *  Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly scalable,
 *  cost-effective applications without creating or configuring the underlying AWS
 * 
 *  infrastructure>
 * 
 *  With AWS CloudFormation, you declare all of your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. AWS CloudFormation creates and deletes all member resources of
 *  the stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
 *  CloudFormation Product
 * 
 *  Page</a>>
 * 
 *  Amazon CloudFormation makes use of other AWS products. If you need additional technical information about a specific AWS
 *  product, you can find the product's technical documentation at <a
 *
 * \sa CloudFormationClient::describeChangeSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChangeSetRequest::DescribeChangeSetRequest(const DescribeChangeSetRequest &other)
    : CloudFormationRequest(new DescribeChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChangeSetRequest object.
 */
DescribeChangeSetRequest::DescribeChangeSetRequest()
    : CloudFormationRequest(new DescribeChangeSetRequestPrivate(CloudFormationRequest::DescribeChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChangeSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChangeSetResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::DescribeChangeSetRequestPrivate
 * \brief The DescribeChangeSetRequestPrivate class provides private implementation for DescribeChangeSetRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a DescribeChangeSetRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
DescribeChangeSetRequestPrivate::DescribeChangeSetRequestPrivate(
    const CloudFormationRequest::Action action, DescribeChangeSetRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChangeSetRequest
 * class' copy constructor.
 */
DescribeChangeSetRequestPrivate::DescribeChangeSetRequestPrivate(
    const DescribeChangeSetRequestPrivate &other, DescribeChangeSetRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
