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

#include "countpendingactivitytasksrequest.h"
#include "countpendingactivitytasksrequest_p.h"
#include "countpendingactivitytasksresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::CountPendingActivityTasksRequest
 * \brief The CountPendingActivityTasksRequest class provides an interface for SWF CountPendingActivityTasks requests.
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
 * \sa SwfClient::countPendingActivityTasks
 */

/*!
 * Constructs a copy of \a other.
 */
CountPendingActivityTasksRequest::CountPendingActivityTasksRequest(const CountPendingActivityTasksRequest &other)
    : SwfRequest(new CountPendingActivityTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CountPendingActivityTasksRequest object.
 */
CountPendingActivityTasksRequest::CountPendingActivityTasksRequest()
    : SwfRequest(new CountPendingActivityTasksRequestPrivate(SwfRequest::CountPendingActivityTasksAction, this))
{

}

/*!
 * \reimp
 */
bool CountPendingActivityTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CountPendingActivityTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CountPendingActivityTasksRequest::response(QNetworkReply * const reply) const
{
    return new CountPendingActivityTasksResponse(*this, reply);
}

/*!
 * \class QtAws::SWF::CountPendingActivityTasksRequestPrivate
 * \brief The CountPendingActivityTasksRequestPrivate class provides private implementation for CountPendingActivityTasksRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a CountPendingActivityTasksRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
CountPendingActivityTasksRequestPrivate::CountPendingActivityTasksRequestPrivate(
    const SwfRequest::Action action, CountPendingActivityTasksRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CountPendingActivityTasksRequest
 * class' copy constructor.
 */
CountPendingActivityTasksRequestPrivate::CountPendingActivityTasksRequestPrivate(
    const CountPendingActivityTasksRequestPrivate &other, CountPendingActivityTasksRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
