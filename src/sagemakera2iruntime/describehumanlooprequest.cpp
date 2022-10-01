/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describehumanlooprequest.h"
#include "describehumanlooprequest_p.h"
#include "describehumanloopresponse.h"
#include "sagemakera2iruntimerequest_p.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

/*!
 * \class QtAws::SageMakerA2IRuntime::DescribeHumanLoopRequest
 * \brief The DescribeHumanLoopRequest class provides an interface for SageMakerA2IRuntime DescribeHumanLoop requests.
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 *
 *  Amazon Augmented AI (Amazon A2I) adds the benefit of human judgment to any machine learning application. When an AI
 *  application can't evaluate data with a high degree of confidence, human reviewers can take over. This human review is
 *  called a human review workflow. To create and start a human review workflow, you need three resources: a <i>worker task
 *  template</i>, a <i>flow definition</i>, and a <i>human
 * 
 *  loop</i>>
 * 
 *  For information about these resources and prerequisites for using Amazon A2I, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-getting-started.html">Get Started with Amazon Augmented AI</a>
 *  in the Amazon SageMaker Developer
 * 
 *  Guide>
 * 
 *  This API reference includes information about API actions and data types that you can use to interact with Amazon A2I
 *  programmatically. Use this guide
 * 
 *  to> <ul> <li>
 * 
 *  Start a human loop with the <code>StartHumanLoop</code> operation when using Amazon A2I with a <i>custom task type</i>.
 *  To learn more about the difference between custom and built-in task types, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-task-types-general.html">Use Task Types </a>. To learn how to
 *  start a human loop using this API, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-start-human-loop.html#a2i-instructions-starthumanloop">Create
 *  and Start a Human Loop for a Custom Task Type </a> in the Amazon SageMaker Developer
 * 
 *  Guide> </li> <li>
 * 
 *  Manage your human loops. You can list all human loops that you have created, describe individual human loops, and stop
 *  and delete human loops. To learn more, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-monitor-humanloop-results.html">Monitor and Manage Your Human
 *  Loop </a> in the Amazon SageMaker Developer
 * 
 *  Guide> </li> </ul>
 * 
 *  Amazon A2I integrates APIs from various AWS services to create and start human review workflows for those services. To
 *  learn how Amazon A2I uses these APIs, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-api-references.html">Use APIs in Amazon A2I</a> in the Amazon
 *  SageMaker Developer
 *
 * \sa SageMakerA2IRuntimeClient::describeHumanLoop
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHumanLoopRequest::DescribeHumanLoopRequest(const DescribeHumanLoopRequest &other)
    : SageMakerA2IRuntimeRequest(new DescribeHumanLoopRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHumanLoopRequest object.
 */
DescribeHumanLoopRequest::DescribeHumanLoopRequest()
    : SageMakerA2IRuntimeRequest(new DescribeHumanLoopRequestPrivate(SageMakerA2IRuntimeRequest::DescribeHumanLoopAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHumanLoopRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHumanLoopResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHumanLoopRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHumanLoopResponse(*this, reply);
}

/*!
 * \class QtAws::SageMakerA2IRuntime::DescribeHumanLoopRequestPrivate
 * \brief The DescribeHumanLoopRequestPrivate class provides private implementation for DescribeHumanLoopRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 */

/*!
 * Constructs a DescribeHumanLoopRequestPrivate object for SageMakerA2IRuntime \a action,
 * with public implementation \a q.
 */
DescribeHumanLoopRequestPrivate::DescribeHumanLoopRequestPrivate(
    const SageMakerA2IRuntimeRequest::Action action, DescribeHumanLoopRequest * const q)
    : SageMakerA2IRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHumanLoopRequest
 * class' copy constructor.
 */
DescribeHumanLoopRequestPrivate::DescribeHumanLoopRequestPrivate(
    const DescribeHumanLoopRequestPrivate &other, DescribeHumanLoopRequest * const q)
    : SageMakerA2IRuntimeRequestPrivate(other, q)
{

}

} // namespace SageMakerA2IRuntime
} // namespace QtAws
