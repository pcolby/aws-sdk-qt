// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listclosedworkflowexecutionsrequest.h"
#include "listclosedworkflowexecutionsrequest_p.h"
#include "listclosedworkflowexecutionsresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::ListClosedWorkflowExecutionsRequest
 * \brief The ListClosedWorkflowExecutionsRequest class provides an interface for Swf ListClosedWorkflowExecutions requests.
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
 * \sa SwfClient::listClosedWorkflowExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListClosedWorkflowExecutionsRequest::ListClosedWorkflowExecutionsRequest(const ListClosedWorkflowExecutionsRequest &other)
    : SwfRequest(new ListClosedWorkflowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListClosedWorkflowExecutionsRequest object.
 */
ListClosedWorkflowExecutionsRequest::ListClosedWorkflowExecutionsRequest()
    : SwfRequest(new ListClosedWorkflowExecutionsRequestPrivate(SwfRequest::ListClosedWorkflowExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListClosedWorkflowExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListClosedWorkflowExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListClosedWorkflowExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListClosedWorkflowExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::ListClosedWorkflowExecutionsRequestPrivate
 * \brief The ListClosedWorkflowExecutionsRequestPrivate class provides private implementation for ListClosedWorkflowExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a ListClosedWorkflowExecutionsRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
ListClosedWorkflowExecutionsRequestPrivate::ListClosedWorkflowExecutionsRequestPrivate(
    const SwfRequest::Action action, ListClosedWorkflowExecutionsRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListClosedWorkflowExecutionsRequest
 * class' copy constructor.
 */
ListClosedWorkflowExecutionsRequestPrivate::ListClosedWorkflowExecutionsRequestPrivate(
    const ListClosedWorkflowExecutionsRequestPrivate &other, ListClosedWorkflowExecutionsRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
