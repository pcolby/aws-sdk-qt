// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexecutionhistoryrequest.h"
#include "getexecutionhistoryrequest_p.h"
#include "getexecutionhistoryresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::GetExecutionHistoryRequest
 * \brief The GetExecutionHistoryRequest class provides an interface for Sfn GetExecutionHistory requests.
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
 * \sa SfnClient::getExecutionHistory
 */

/*!
 * Constructs a copy of \a other.
 */
GetExecutionHistoryRequest::GetExecutionHistoryRequest(const GetExecutionHistoryRequest &other)
    : SfnRequest(new GetExecutionHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExecutionHistoryRequest object.
 */
GetExecutionHistoryRequest::GetExecutionHistoryRequest()
    : SfnRequest(new GetExecutionHistoryRequestPrivate(SfnRequest::GetExecutionHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetExecutionHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExecutionHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExecutionHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetExecutionHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::Sfn::GetExecutionHistoryRequestPrivate
 * \brief The GetExecutionHistoryRequestPrivate class provides private implementation for GetExecutionHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a GetExecutionHistoryRequestPrivate object for Sfn \a action,
 * with public implementation \a q.
 */
GetExecutionHistoryRequestPrivate::GetExecutionHistoryRequestPrivate(
    const SfnRequest::Action action, GetExecutionHistoryRequest * const q)
    : SfnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExecutionHistoryRequest
 * class' copy constructor.
 */
GetExecutionHistoryRequestPrivate::GetExecutionHistoryRequestPrivate(
    const GetExecutionHistoryRequestPrivate &other, GetExecutionHistoryRequest * const q)
    : SfnRequestPrivate(other, q)
{

}

} // namespace Sfn
} // namespace QtAws
