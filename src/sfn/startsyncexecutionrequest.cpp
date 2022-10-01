// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startsyncexecutionrequest.h"
#include "startsyncexecutionrequest_p.h"
#include "startsyncexecutionresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::StartSyncExecutionRequest
 * \brief The StartSyncExecutionRequest class provides an interface for Sfn StartSyncExecution requests.
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
 * \sa SfnClient::startSyncExecution
 */

/*!
 * Constructs a copy of \a other.
 */
StartSyncExecutionRequest::StartSyncExecutionRequest(const StartSyncExecutionRequest &other)
    : SfnRequest(new StartSyncExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSyncExecutionRequest object.
 */
StartSyncExecutionRequest::StartSyncExecutionRequest()
    : SfnRequest(new StartSyncExecutionRequestPrivate(SfnRequest::StartSyncExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StartSyncExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSyncExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSyncExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartSyncExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::Sfn::StartSyncExecutionRequestPrivate
 * \brief The StartSyncExecutionRequestPrivate class provides private implementation for StartSyncExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a StartSyncExecutionRequestPrivate object for Sfn \a action,
 * with public implementation \a q.
 */
StartSyncExecutionRequestPrivate::StartSyncExecutionRequestPrivate(
    const SfnRequest::Action action, StartSyncExecutionRequest * const q)
    : SfnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSyncExecutionRequest
 * class' copy constructor.
 */
StartSyncExecutionRequestPrivate::StartSyncExecutionRequestPrivate(
    const StartSyncExecutionRequestPrivate &other, StartSyncExecutionRequest * const q)
    : SfnRequestPrivate(other, q)
{

}

} // namespace Sfn
} // namespace QtAws
