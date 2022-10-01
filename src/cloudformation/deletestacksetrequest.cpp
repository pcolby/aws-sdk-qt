// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestacksetrequest.h"
#include "deletestacksetrequest_p.h"
#include "deletestacksetresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::DeleteStackSetRequest
 * \brief The DeleteStackSetRequest class provides an interface for CloudFormation DeleteStackSet requests.
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
 * \sa CloudFormationClient::deleteStackSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStackSetRequest::DeleteStackSetRequest(const DeleteStackSetRequest &other)
    : CloudFormationRequest(new DeleteStackSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStackSetRequest object.
 */
DeleteStackSetRequest::DeleteStackSetRequest()
    : CloudFormationRequest(new DeleteStackSetRequestPrivate(CloudFormationRequest::DeleteStackSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStackSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStackSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStackSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStackSetResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::DeleteStackSetRequestPrivate
 * \brief The DeleteStackSetRequestPrivate class provides private implementation for DeleteStackSetRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a DeleteStackSetRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
DeleteStackSetRequestPrivate::DeleteStackSetRequestPrivate(
    const CloudFormationRequest::Action action, DeleteStackSetRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStackSetRequest
 * class' copy constructor.
 */
DeleteStackSetRequestPrivate::DeleteStackSetRequestPrivate(
    const DeleteStackSetRequestPrivate &other, DeleteStackSetRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
