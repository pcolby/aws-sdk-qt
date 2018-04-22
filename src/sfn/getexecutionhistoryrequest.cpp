/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getexecutionhistoryrequest.h"
#include "getexecutionhistoryrequest_p.h"
#include "getexecutionhistoryresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::GetExecutionHistoryRequest
 * \brief The GetExecutionHistoryRequest class provides an interface for SFN GetExecutionHistory requests.
 *
 * \inmodule QtAwsSFN
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
 *  href="http://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
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
 * \class QtAws::SFN::GetExecutionHistoryRequestPrivate
 * \brief The GetExecutionHistoryRequestPrivate class provides private implementation for GetExecutionHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsSFN
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

} // namespace SFN
} // namespace QtAws
