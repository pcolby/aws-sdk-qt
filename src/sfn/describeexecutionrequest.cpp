// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexecutionrequest.h"
#include "describeexecutionrequest_p.h"
#include "describeexecutionresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::DescribeExecutionRequest
 * \brief The DescribeExecutionRequest class provides an interface for Sfn DescribeExecution requests.
 *
 * \inmodule QtAwsSfn
 *
 *  <fullname>AWS Step Functions</fullname>
 * 
 *  AWS Step Functions is a service that lets you coordinate the components of distributed applications and microservices
 *  using visual
 * 
 *  workflows>
 * 
 *  You can use Step Functions to build applications from individual components, each of which performs a discrete function,
 *  or <i>task</i>, allowing you to scale and change applications quickly. Step Functions provides a console that helps
 *  visualize the components of your application as a series of steps. Step Functions automatically triggers and tracks each
 *  step, and retries steps when there are errors, so your application executes predictably and in the right order every
 *  time. Step Functions logs the state of each step, so you can quickly diagnose and debug any
 * 
 *  issues>
 * 
 *  Step Functions manages operations and underlying infrastructure to ensure your application is available at any scale.
 *  You can run tasks on AWS, your own servers, or any system that has access to AWS. You can access and use Step Functions
 *  using the console, the AWS SDKs, or an HTTP API. For more information about Step Functions, see the <i> <a
 *  href="https://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 *
 * \sa SfnClient::describeExecution
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExecutionRequest::DescribeExecutionRequest(const DescribeExecutionRequest &other)
    : SfnRequest(new DescribeExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExecutionRequest object.
 */
DescribeExecutionRequest::DescribeExecutionRequest()
    : SfnRequest(new DescribeExecutionRequestPrivate(SfnRequest::DescribeExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::Sfn::DescribeExecutionRequestPrivate
 * \brief The DescribeExecutionRequestPrivate class provides private implementation for DescribeExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a DescribeExecutionRequestPrivate object for Sfn \a action,
 * with public implementation \a q.
 */
DescribeExecutionRequestPrivate::DescribeExecutionRequestPrivate(
    const SfnRequest::Action action, DescribeExecutionRequest * const q)
    : SfnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExecutionRequest
 * class' copy constructor.
 */
DescribeExecutionRequestPrivate::DescribeExecutionRequestPrivate(
    const DescribeExecutionRequestPrivate &other, DescribeExecutionRequest * const q)
    : SfnRequestPrivate(other, q)
{

}

} // namespace Sfn
} // namespace QtAws
