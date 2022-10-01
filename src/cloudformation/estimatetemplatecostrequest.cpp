// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "estimatetemplatecostrequest.h"
#include "estimatetemplatecostrequest_p.h"
#include "estimatetemplatecostresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::EstimateTemplateCostRequest
 * \brief The EstimateTemplateCostRequest class provides an interface for CloudFormation EstimateTemplateCost requests.
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
 * \sa CloudFormationClient::estimateTemplateCost
 */

/*!
 * Constructs a copy of \a other.
 */
EstimateTemplateCostRequest::EstimateTemplateCostRequest(const EstimateTemplateCostRequest &other)
    : CloudFormationRequest(new EstimateTemplateCostRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EstimateTemplateCostRequest object.
 */
EstimateTemplateCostRequest::EstimateTemplateCostRequest()
    : CloudFormationRequest(new EstimateTemplateCostRequestPrivate(CloudFormationRequest::EstimateTemplateCostAction, this))
{

}

/*!
 * \reimp
 */
bool EstimateTemplateCostRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EstimateTemplateCostResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EstimateTemplateCostRequest::response(QNetworkReply * const reply) const
{
    return new EstimateTemplateCostResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::EstimateTemplateCostRequestPrivate
 * \brief The EstimateTemplateCostRequestPrivate class provides private implementation for EstimateTemplateCostRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a EstimateTemplateCostRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
EstimateTemplateCostRequestPrivate::EstimateTemplateCostRequestPrivate(
    const CloudFormationRequest::Action action, EstimateTemplateCostRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EstimateTemplateCostRequest
 * class' copy constructor.
 */
EstimateTemplateCostRequestPrivate::EstimateTemplateCostRequestPrivate(
    const EstimateTemplateCostRequestPrivate &other, EstimateTemplateCostRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
