// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtyperegistrationsrequest.h"
#include "listtyperegistrationsrequest_p.h"
#include "listtyperegistrationsresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ListTypeRegistrationsRequest
 * \brief The ListTypeRegistrationsRequest class provides an interface for CloudFormation ListTypeRegistrations requests.
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
 * \sa CloudFormationClient::listTypeRegistrations
 */

/*!
 * Constructs a copy of \a other.
 */
ListTypeRegistrationsRequest::ListTypeRegistrationsRequest(const ListTypeRegistrationsRequest &other)
    : CloudFormationRequest(new ListTypeRegistrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTypeRegistrationsRequest object.
 */
ListTypeRegistrationsRequest::ListTypeRegistrationsRequest()
    : CloudFormationRequest(new ListTypeRegistrationsRequestPrivate(CloudFormationRequest::ListTypeRegistrationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTypeRegistrationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTypeRegistrationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTypeRegistrationsRequest::response(QNetworkReply * const reply) const
{
    return new ListTypeRegistrationsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::ListTypeRegistrationsRequestPrivate
 * \brief The ListTypeRegistrationsRequestPrivate class provides private implementation for ListTypeRegistrationsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a ListTypeRegistrationsRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
ListTypeRegistrationsRequestPrivate::ListTypeRegistrationsRequestPrivate(
    const CloudFormationRequest::Action action, ListTypeRegistrationsRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTypeRegistrationsRequest
 * class' copy constructor.
 */
ListTypeRegistrationsRequestPrivate::ListTypeRegistrationsRequestPrivate(
    const ListTypeRegistrationsRequestPrivate &other, ListTypeRegistrationsRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
