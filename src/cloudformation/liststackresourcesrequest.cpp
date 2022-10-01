// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststackresourcesrequest.h"
#include "liststackresourcesrequest_p.h"
#include "liststackresourcesresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ListStackResourcesRequest
 * \brief The ListStackResourcesRequest class provides an interface for CloudFormation ListStackResources requests.
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
 * \sa CloudFormationClient::listStackResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListStackResourcesRequest::ListStackResourcesRequest(const ListStackResourcesRequest &other)
    : CloudFormationRequest(new ListStackResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStackResourcesRequest object.
 */
ListStackResourcesRequest::ListStackResourcesRequest()
    : CloudFormationRequest(new ListStackResourcesRequestPrivate(CloudFormationRequest::ListStackResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListStackResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStackResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStackResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListStackResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::ListStackResourcesRequestPrivate
 * \brief The ListStackResourcesRequestPrivate class provides private implementation for ListStackResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a ListStackResourcesRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
ListStackResourcesRequestPrivate::ListStackResourcesRequestPrivate(
    const CloudFormationRequest::Action action, ListStackResourcesRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStackResourcesRequest
 * class' copy constructor.
 */
ListStackResourcesRequestPrivate::ListStackResourcesRequestPrivate(
    const ListStackResourcesRequestPrivate &other, ListStackResourcesRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
