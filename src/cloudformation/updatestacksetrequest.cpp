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

#include "updatestacksetrequest.h"
#include "updatestacksetrequest_p.h"
#include "updatestacksetresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::UpdateStackSetRequest
 * \brief The UpdateStackSetRequest class provides an interface for CloudFormation UpdateStackSet requests.
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
 * \sa CloudFormationClient::updateStackSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStackSetRequest::UpdateStackSetRequest(const UpdateStackSetRequest &other)
    : CloudFormationRequest(new UpdateStackSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStackSetRequest object.
 */
UpdateStackSetRequest::UpdateStackSetRequest()
    : CloudFormationRequest(new UpdateStackSetRequestPrivate(CloudFormationRequest::UpdateStackSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStackSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStackSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStackSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStackSetResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::UpdateStackSetRequestPrivate
 * \brief The UpdateStackSetRequestPrivate class provides private implementation for UpdateStackSetRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 *
 * Constructs a UpdateStackSetRequestPrivate object for CloudFormation \a action with,
 * public implementation \a q.
 */
UpdateStackSetRequestPrivate::UpdateStackSetRequestPrivate(
    const CloudFormationRequest::Action action, UpdateStackSetRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStackSetRequest
 * class' copy constructor.
 */
UpdateStackSetRequestPrivate::UpdateStackSetRequestPrivate(
    const UpdateStackSetRequestPrivate &other, UpdateStackSetRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
