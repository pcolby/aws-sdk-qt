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

#include "describestatemachinerequest.h"
#include "describestatemachinerequest_p.h"
#include "describestatemachineresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::DescribeStateMachineRequest
 * \brief The DescribeStateMachineRequest class provides an interface for SFN DescribeStateMachine requests.
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
 * \sa SFNClient::describeStateMachine
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStateMachineRequest::DescribeStateMachineRequest(const DescribeStateMachineRequest &other)
    : SFNRequest(new DescribeStateMachineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStateMachineRequest object.
 */
DescribeStateMachineRequest::DescribeStateMachineRequest()
    : SFNRequest(new DescribeStateMachineRequestPrivate(SFNRequest::DescribeStateMachineAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStateMachineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStateMachineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStateMachineRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStateMachineResponse(*this, reply);
}

/*!
 * \class QtAws::SFN::DescribeStateMachineRequestPrivate
 * \brief The DescribeStateMachineRequestPrivate class provides private implementation for DescribeStateMachineRequest.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 *
 * Constructs a DescribeStateMachineRequestPrivate object for SFN \a action with,
 * public implementation \a q.
 */
DescribeStateMachineRequestPrivate::DescribeStateMachineRequestPrivate(
    const SFNRequest::Action action, DescribeStateMachineRequest * const q)
    : SFNRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStateMachineRequest
 * class' copy constructor.
 */
DescribeStateMachineRequestPrivate::DescribeStateMachineRequestPrivate(
    const DescribeStateMachineRequestPrivate &other, DescribeStateMachineRequest * const q)
    : SFNRequestPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
