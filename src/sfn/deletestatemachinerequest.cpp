// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestatemachinerequest.h"
#include "deletestatemachinerequest_p.h"
#include "deletestatemachineresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::DeleteStateMachineRequest
 * \brief The DeleteStateMachineRequest class provides an interface for Sfn DeleteStateMachine requests.
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
 * \sa SfnClient::deleteStateMachine
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStateMachineRequest::DeleteStateMachineRequest(const DeleteStateMachineRequest &other)
    : SfnRequest(new DeleteStateMachineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStateMachineRequest object.
 */
DeleteStateMachineRequest::DeleteStateMachineRequest()
    : SfnRequest(new DeleteStateMachineRequestPrivate(SfnRequest::DeleteStateMachineAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStateMachineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStateMachineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStateMachineRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStateMachineResponse(*this, reply);
}

/*!
 * \class QtAws::Sfn::DeleteStateMachineRequestPrivate
 * \brief The DeleteStateMachineRequestPrivate class provides private implementation for DeleteStateMachineRequest.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a DeleteStateMachineRequestPrivate object for Sfn \a action,
 * with public implementation \a q.
 */
DeleteStateMachineRequestPrivate::DeleteStateMachineRequestPrivate(
    const SfnRequest::Action action, DeleteStateMachineRequest * const q)
    : SfnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStateMachineRequest
 * class' copy constructor.
 */
DeleteStateMachineRequestPrivate::DeleteStateMachineRequestPrivate(
    const DeleteStateMachineRequestPrivate &other, DeleteStateMachineRequest * const q)
    : SfnRequestPrivate(other, q)
{

}

} // namespace Sfn
} // namespace QtAws
