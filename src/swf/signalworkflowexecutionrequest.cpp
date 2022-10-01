// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "signalworkflowexecutionrequest.h"
#include "signalworkflowexecutionrequest_p.h"
#include "signalworkflowexecutionresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::SignalWorkflowExecutionRequest
 * \brief The SignalWorkflowExecutionRequest class provides an interface for Swf SignalWorkflowExecution requests.
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
 * \sa SwfClient::signalWorkflowExecution
 */

/*!
 * Constructs a copy of \a other.
 */
SignalWorkflowExecutionRequest::SignalWorkflowExecutionRequest(const SignalWorkflowExecutionRequest &other)
    : SwfRequest(new SignalWorkflowExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SignalWorkflowExecutionRequest object.
 */
SignalWorkflowExecutionRequest::SignalWorkflowExecutionRequest()
    : SwfRequest(new SignalWorkflowExecutionRequestPrivate(SwfRequest::SignalWorkflowExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool SignalWorkflowExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SignalWorkflowExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SignalWorkflowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new SignalWorkflowExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::SignalWorkflowExecutionRequestPrivate
 * \brief The SignalWorkflowExecutionRequestPrivate class provides private implementation for SignalWorkflowExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a SignalWorkflowExecutionRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
SignalWorkflowExecutionRequestPrivate::SignalWorkflowExecutionRequestPrivate(
    const SwfRequest::Action action, SignalWorkflowExecutionRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SignalWorkflowExecutionRequest
 * class' copy constructor.
 */
SignalWorkflowExecutionRequestPrivate::SignalWorkflowExecutionRequestPrivate(
    const SignalWorkflowExecutionRequestPrivate &other, SignalWorkflowExecutionRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
