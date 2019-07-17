/*
    Copyright 2013-2019 Paul Colby

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

#include "startworkflowexecutionrequest.h"
#include "startworkflowexecutionrequest_p.h"
#include "startworkflowexecutionresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::StartWorkflowExecutionRequest
 * \brief The StartWorkflowExecutionRequest class provides an interface for SWF StartWorkflowExecution requests.
 *
 * \inmodule QtAwsSWF
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
 * \sa SwfClient::startWorkflowExecution
 */

/*!
 * Constructs a copy of \a other.
 */
StartWorkflowExecutionRequest::StartWorkflowExecutionRequest(const StartWorkflowExecutionRequest &other)
    : SwfRequest(new StartWorkflowExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartWorkflowExecutionRequest object.
 */
StartWorkflowExecutionRequest::StartWorkflowExecutionRequest()
    : SwfRequest(new StartWorkflowExecutionRequestPrivate(SwfRequest::StartWorkflowExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StartWorkflowExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartWorkflowExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartWorkflowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartWorkflowExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::SWF::StartWorkflowExecutionRequestPrivate
 * \brief The StartWorkflowExecutionRequestPrivate class provides private implementation for StartWorkflowExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a StartWorkflowExecutionRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
StartWorkflowExecutionRequestPrivate::StartWorkflowExecutionRequestPrivate(
    const SwfRequest::Action action, StartWorkflowExecutionRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartWorkflowExecutionRequest
 * class' copy constructor.
 */
StartWorkflowExecutionRequestPrivate::StartWorkflowExecutionRequestPrivate(
    const StartWorkflowExecutionRequestPrivate &other, StartWorkflowExecutionRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
