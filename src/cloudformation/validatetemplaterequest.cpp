// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "validatetemplaterequest.h"
#include "validatetemplaterequest_p.h"
#include "validatetemplateresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ValidateTemplateRequest
 * \brief The ValidateTemplateRequest class provides an interface for CloudFormation ValidateTemplate requests.
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
 * \sa CloudFormationClient::validateTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
ValidateTemplateRequest::ValidateTemplateRequest(const ValidateTemplateRequest &other)
    : CloudFormationRequest(new ValidateTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ValidateTemplateRequest object.
 */
ValidateTemplateRequest::ValidateTemplateRequest()
    : CloudFormationRequest(new ValidateTemplateRequestPrivate(CloudFormationRequest::ValidateTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool ValidateTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ValidateTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ValidateTemplateRequest::response(QNetworkReply * const reply) const
{
    return new ValidateTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::ValidateTemplateRequestPrivate
 * \brief The ValidateTemplateRequestPrivate class provides private implementation for ValidateTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a ValidateTemplateRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
ValidateTemplateRequestPrivate::ValidateTemplateRequestPrivate(
    const CloudFormationRequest::Action action, ValidateTemplateRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ValidateTemplateRequest
 * class' copy constructor.
 */
ValidateTemplateRequestPrivate::ValidateTemplateRequestPrivate(
    const ValidateTemplateRequestPrivate &other, ValidateTemplateRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
