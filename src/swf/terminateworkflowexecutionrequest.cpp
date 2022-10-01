// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminateworkflowexecutionrequest.h"
#include "terminateworkflowexecutionrequest_p.h"
#include "terminateworkflowexecutionresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::TerminateWorkflowExecutionRequest
 * \brief The TerminateWorkflowExecutionRequest class provides an interface for Swf TerminateWorkflowExecution requests.
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
 * \sa SwfClient::terminateWorkflowExecution
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateWorkflowExecutionRequest::TerminateWorkflowExecutionRequest(const TerminateWorkflowExecutionRequest &other)
    : SwfRequest(new TerminateWorkflowExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateWorkflowExecutionRequest object.
 */
TerminateWorkflowExecutionRequest::TerminateWorkflowExecutionRequest()
    : SwfRequest(new TerminateWorkflowExecutionRequestPrivate(SwfRequest::TerminateWorkflowExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateWorkflowExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateWorkflowExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateWorkflowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new TerminateWorkflowExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::TerminateWorkflowExecutionRequestPrivate
 * \brief The TerminateWorkflowExecutionRequestPrivate class provides private implementation for TerminateWorkflowExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a TerminateWorkflowExecutionRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
TerminateWorkflowExecutionRequestPrivate::TerminateWorkflowExecutionRequestPrivate(
    const SwfRequest::Action action, TerminateWorkflowExecutionRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateWorkflowExecutionRequest
 * class' copy constructor.
 */
TerminateWorkflowExecutionRequestPrivate::TerminateWorkflowExecutionRequestPrivate(
    const TerminateWorkflowExecutionRequestPrivate &other, TerminateWorkflowExecutionRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
