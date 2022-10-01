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

#include "cancelupdatestackrequest.h"
#include "cancelupdatestackrequest_p.h"
#include "cancelupdatestackresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::CancelUpdateStackRequest
 * \brief The CancelUpdateStackRequest class provides an interface for CloudFormation CancelUpdateStack requests.
 *
 * \inmodule QtAwsCloudFormation
 *
 *  <fullname>CloudFormation</fullname>
 * 
 *  CloudFormation allows you to create and manage Amazon Web Services infrastructure deployments predictably and
 *  repeatedly. You can use CloudFormation to leverage Amazon Web Services products, such as Amazon Elastic Compute Cloud,
 *  Amazon Elastic Block Store, Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly
 *  reliable, highly scalable, cost-effective applications without creating or configuring the underlying Amazon Web
 *  Services
 * 
 *  infrastructure>
 * 
 *  With CloudFormation, you declare all your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. CloudFormation creates and deletes all member resources of the
 *  stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">CloudFormation
 *  product
 * 
 *  page</a>>
 * 
 *  CloudFormation makes use of other Amazon Web Services products. If you need additional technical information about a
 *  specific Amazon Web Services product, you can find the product's technical documentation at <a
 *  href="https://docs.aws.amazon.com/"> <code>docs.aws.amazon.com</code>
 *
 * \sa CloudFormationClient::cancelUpdateStack
 */

/*!
 * Constructs a copy of \a other.
 */
CancelUpdateStackRequest::CancelUpdateStackRequest(const CancelUpdateStackRequest &other)
    : CloudFormationRequest(new CancelUpdateStackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelUpdateStackRequest object.
 */
CancelUpdateStackRequest::CancelUpdateStackRequest()
    : CloudFormationRequest(new CancelUpdateStackRequestPrivate(CloudFormationRequest::CancelUpdateStackAction, this))
{

}

/*!
 * \reimp
 */
bool CancelUpdateStackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelUpdateStackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelUpdateStackRequest::response(QNetworkReply * const reply) const
{
    return new CancelUpdateStackResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::CancelUpdateStackRequestPrivate
 * \brief The CancelUpdateStackRequestPrivate class provides private implementation for CancelUpdateStackRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a CancelUpdateStackRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
CancelUpdateStackRequestPrivate::CancelUpdateStackRequestPrivate(
    const CloudFormationRequest::Action action, CancelUpdateStackRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelUpdateStackRequest
 * class' copy constructor.
 */
CancelUpdateStackRequestPrivate::CancelUpdateStackRequestPrivate(
    const CancelUpdateStackRequestPrivate &other, CancelUpdateStackRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
