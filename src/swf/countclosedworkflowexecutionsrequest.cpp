// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "countclosedworkflowexecutionsrequest.h"
#include "countclosedworkflowexecutionsrequest_p.h"
#include "countclosedworkflowexecutionsresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::CountClosedWorkflowExecutionsRequest
 * \brief The CountClosedWorkflowExecutionsRequest class provides an interface for Swf CountClosedWorkflowExecutions requests.
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
 * \sa SwfClient::countClosedWorkflowExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
CountClosedWorkflowExecutionsRequest::CountClosedWorkflowExecutionsRequest(const CountClosedWorkflowExecutionsRequest &other)
    : SwfRequest(new CountClosedWorkflowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CountClosedWorkflowExecutionsRequest object.
 */
CountClosedWorkflowExecutionsRequest::CountClosedWorkflowExecutionsRequest()
    : SwfRequest(new CountClosedWorkflowExecutionsRequestPrivate(SwfRequest::CountClosedWorkflowExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool CountClosedWorkflowExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CountClosedWorkflowExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CountClosedWorkflowExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new CountClosedWorkflowExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::CountClosedWorkflowExecutionsRequestPrivate
 * \brief The CountClosedWorkflowExecutionsRequestPrivate class provides private implementation for CountClosedWorkflowExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a CountClosedWorkflowExecutionsRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
CountClosedWorkflowExecutionsRequestPrivate::CountClosedWorkflowExecutionsRequestPrivate(
    const SwfRequest::Action action, CountClosedWorkflowExecutionsRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CountClosedWorkflowExecutionsRequest
 * class' copy constructor.
 */
CountClosedWorkflowExecutionsRequestPrivate::CountClosedWorkflowExecutionsRequestPrivate(
    const CountClosedWorkflowExecutionsRequestPrivate &other, CountClosedWorkflowExecutionsRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
