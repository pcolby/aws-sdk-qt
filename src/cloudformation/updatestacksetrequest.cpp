// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a UpdateStackSetRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
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
