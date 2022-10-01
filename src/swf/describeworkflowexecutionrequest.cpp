// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkflowexecutionrequest.h"
#include "describeworkflowexecutionrequest_p.h"
#include "describeworkflowexecutionresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DescribeWorkflowExecutionRequest
 * \brief The DescribeWorkflowExecutionRequest class provides an interface for Swf DescribeWorkflowExecution requests.
 *
 * \inmodule QtAwsSwf
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::describeWorkflowExecution
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkflowExecutionRequest::DescribeWorkflowExecutionRequest(const DescribeWorkflowExecutionRequest &other)
    : SwfRequest(new DescribeWorkflowExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkflowExecutionRequest object.
 */
DescribeWorkflowExecutionRequest::DescribeWorkflowExecutionRequest()
    : SwfRequest(new DescribeWorkflowExecutionRequestPrivate(SwfRequest::DescribeWorkflowExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkflowExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkflowExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkflowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkflowExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::DescribeWorkflowExecutionRequestPrivate
 * \brief The DescribeWorkflowExecutionRequestPrivate class provides private implementation for DescribeWorkflowExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DescribeWorkflowExecutionRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
DescribeWorkflowExecutionRequestPrivate::DescribeWorkflowExecutionRequestPrivate(
    const SwfRequest::Action action, DescribeWorkflowExecutionRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkflowExecutionRequest
 * class' copy constructor.
 */
DescribeWorkflowExecutionRequestPrivate::DescribeWorkflowExecutionRequestPrivate(
    const DescribeWorkflowExecutionRequestPrivate &other, DescribeWorkflowExecutionRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
