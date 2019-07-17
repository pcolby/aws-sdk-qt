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

#include "countpendingdecisiontasksrequest.h"
#include "countpendingdecisiontasksrequest_p.h"
#include "countpendingdecisiontasksresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::CountPendingDecisionTasksRequest
 * \brief The CountPendingDecisionTasksRequest class provides an interface for SWF CountPendingDecisionTasks requests.
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
 * \sa SwfClient::countPendingDecisionTasks
 */

/*!
 * Constructs a copy of \a other.
 */
CountPendingDecisionTasksRequest::CountPendingDecisionTasksRequest(const CountPendingDecisionTasksRequest &other)
    : SwfRequest(new CountPendingDecisionTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CountPendingDecisionTasksRequest object.
 */
CountPendingDecisionTasksRequest::CountPendingDecisionTasksRequest()
    : SwfRequest(new CountPendingDecisionTasksRequestPrivate(SwfRequest::CountPendingDecisionTasksAction, this))
{

}

/*!
 * \reimp
 */
bool CountPendingDecisionTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CountPendingDecisionTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CountPendingDecisionTasksRequest::response(QNetworkReply * const reply) const
{
    return new CountPendingDecisionTasksResponse(*this, reply);
}

/*!
 * \class QtAws::SWF::CountPendingDecisionTasksRequestPrivate
 * \brief The CountPendingDecisionTasksRequestPrivate class provides private implementation for CountPendingDecisionTasksRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a CountPendingDecisionTasksRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
CountPendingDecisionTasksRequestPrivate::CountPendingDecisionTasksRequestPrivate(
    const SwfRequest::Action action, CountPendingDecisionTasksRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CountPendingDecisionTasksRequest
 * class' copy constructor.
 */
CountPendingDecisionTasksRequestPrivate::CountPendingDecisionTasksRequestPrivate(
    const CountPendingDecisionTasksRequestPrivate &other, CountPendingDecisionTasksRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
