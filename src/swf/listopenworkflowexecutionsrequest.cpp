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

#include "listopenworkflowexecutionsrequest.h"
#include "listopenworkflowexecutionsrequest_p.h"
#include "listopenworkflowexecutionsresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::ListOpenWorkflowExecutionsRequest
 * \brief The ListOpenWorkflowExecutionsRequest class provides an interface for SWF ListOpenWorkflowExecutions requests.
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
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::listOpenWorkflowExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListOpenWorkflowExecutionsRequest::ListOpenWorkflowExecutionsRequest(const ListOpenWorkflowExecutionsRequest &other)
    : SWFRequest(new ListOpenWorkflowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOpenWorkflowExecutionsRequest object.
 */
ListOpenWorkflowExecutionsRequest::ListOpenWorkflowExecutionsRequest()
    : SWFRequest(new ListOpenWorkflowExecutionsRequestPrivate(SWFRequest::ListOpenWorkflowExecutionsAction, this))
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
 * \class QtAws::SWF::ListOpenWorkflowExecutionsRequestPrivate
 * \brief The ListOpenWorkflowExecutionsRequestPrivate class provides private implementation for ListOpenWorkflowExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a ListOpenWorkflowExecutionsRequestPrivate object for SWF \a action,
 * with public implementation \a q.
 */
ListOpenWorkflowExecutionsRequestPrivate::ListOpenWorkflowExecutionsRequestPrivate(
    const SWFRequest::Action action, ListOpenWorkflowExecutionsRequest * const q)
    : SWFRequestPrivate(action, q)
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
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
