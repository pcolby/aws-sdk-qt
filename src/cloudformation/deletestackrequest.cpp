// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestackrequest.h"
#include "deletestackrequest_p.h"
#include "deletestackresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::DeleteStackRequest
 * \brief The DeleteStackRequest class provides an interface for CloudFormation DeleteStack requests.
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
 * \sa CloudFormationClient::deleteStack
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStackRequest::DeleteStackRequest(const DeleteStackRequest &other)
    : CloudFormationRequest(new DeleteStackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStackRequest object.
 */
DeleteStackRequest::DeleteStackRequest()
    : CloudFormationRequest(new DeleteStackRequestPrivate(CloudFormationRequest::DeleteStackAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStackRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStackResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::DeleteStackRequestPrivate
 * \brief The DeleteStackRequestPrivate class provides private implementation for DeleteStackRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a DeleteStackRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
DeleteStackRequestPrivate::DeleteStackRequestPrivate(
    const CloudFormationRequest::Action action, DeleteStackRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStackRequest
 * class' copy constructor.
 */
DeleteStackRequestPrivate::DeleteStackRequestPrivate(
    const DeleteStackRequestPrivate &other, DeleteStackRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
