// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listopenworkflowexecutionsrequest.h"
#include "listopenworkflowexecutionsrequest_p.h"
#include "listopenworkflowexecutionsresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::ListOpenWorkflowExecutionsRequest
 * \brief The ListOpenWorkflowExecutionsRequest class provides an interface for Swf ListOpenWorkflowExecutions requests.
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
 * \sa SwfClient::listOpenWorkflowExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListOpenWorkflowExecutionsRequest::ListOpenWorkflowExecutionsRequest(const ListOpenWorkflowExecutionsRequest &other)
    : SwfRequest(new ListOpenWorkflowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOpenWorkflowExecutionsRequest object.
 */
ListOpenWorkflowExecutionsRequest::ListOpenWorkflowExecutionsRequest()
    : SwfRequest(new ListOpenWorkflowExecutionsRequestPrivate(SwfRequest::ListOpenWorkflowExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOpenWorkflowExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOpenWorkflowExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOpenWorkflowExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListOpenWorkflowExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::ListOpenWorkflowExecutionsRequestPrivate
 * \brief The ListOpenWorkflowExecutionsRequestPrivate class provides private implementation for ListOpenWorkflowExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a ListOpenWorkflowExecutionsRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
ListOpenWorkflowExecutionsRequestPrivate::ListOpenWorkflowExecutionsRequestPrivate(
    const SwfRequest::Action action, ListOpenWorkflowExecutionsRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOpenWorkflowExecutionsRequest
 * class' copy constructor.
 */
ListOpenWorkflowExecutionsRequestPrivate::ListOpenWorkflowExecutionsRequestPrivate(
    const ListOpenWorkflowExecutionsRequestPrivate &other, ListOpenWorkflowExecutionsRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
