// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestackrequest.h"
#include "updatestackrequest_p.h"
#include "updatestackresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::UpdateStackRequest
 * \brief The UpdateStackRequest class provides an interface for CloudFormation UpdateStack requests.
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
 * \sa CloudFormationClient::updateStack
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStackRequest::UpdateStackRequest(const UpdateStackRequest &other)
    : CloudFormationRequest(new UpdateStackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStackRequest object.
 */
UpdateStackRequest::UpdateStackRequest()
    : CloudFormationRequest(new UpdateStackRequestPrivate(CloudFormationRequest::UpdateStackAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStackRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStackResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::UpdateStackRequestPrivate
 * \brief The UpdateStackRequestPrivate class provides private implementation for UpdateStackRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a UpdateStackRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
UpdateStackRequestPrivate::UpdateStackRequestPrivate(
    const CloudFormationRequest::Action action, UpdateStackRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStackRequest
 * class' copy constructor.
 */
UpdateStackRequestPrivate::UpdateStackRequestPrivate(
    const UpdateStackRequestPrivate &other, UpdateStackRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
