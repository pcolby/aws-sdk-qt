// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendtaskfailurerequest.h"
#include "sendtaskfailurerequest_p.h"
#include "sendtaskfailureresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::SendTaskFailureRequest
 * \brief The SendTaskFailureRequest class provides an interface for Sfn SendTaskFailure requests.
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
 * \sa SfnClient::sendTaskFailure
 */

/*!
 * Constructs a copy of \a other.
 */
SendTaskFailureRequest::SendTaskFailureRequest(const SendTaskFailureRequest &other)
    : SfnRequest(new SendTaskFailureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendTaskFailureRequest object.
 */
SendTaskFailureRequest::SendTaskFailureRequest()
    : SfnRequest(new SendTaskFailureRequestPrivate(SfnRequest::SendTaskFailureAction, this))
{

}

/*!
 * \reimp
 */
bool SendTaskFailureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendTaskFailureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendTaskFailureRequest::response(QNetworkReply * const reply) const
{
    return new SendTaskFailureResponse(*this, reply);
}

/*!
 * \class QtAws::Sfn::SendTaskFailureRequestPrivate
 * \brief The SendTaskFailureRequestPrivate class provides private implementation for SendTaskFailureRequest.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a SendTaskFailureRequestPrivate object for Sfn \a action,
 * with public implementation \a q.
 */
SendTaskFailureRequestPrivate::SendTaskFailureRequestPrivate(
    const SfnRequest::Action action, SendTaskFailureRequest * const q)
    : SfnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendTaskFailureRequest
 * class' copy constructor.
 */
SendTaskFailureRequestPrivate::SendTaskFailureRequestPrivate(
    const SendTaskFailureRequestPrivate &other, SendTaskFailureRequest * const q)
    : SfnRequestPrivate(other, q)
{

}

} // namespace Sfn
} // namespace QtAws
