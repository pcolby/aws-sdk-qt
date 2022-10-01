// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "countpendingactivitytasksrequest.h"
#include "countpendingactivitytasksrequest_p.h"
#include "countpendingactivitytasksresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::CountPendingActivityTasksRequest
 * \brief The CountPendingActivityTasksRequest class provides an interface for Swf CountPendingActivityTasks requests.
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
 * \class QtAws::Swf::CountPendingActivityTasksRequestPrivate
 * \brief The CountPendingActivityTasksRequestPrivate class provides private implementation for CountPendingActivityTasksRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
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

} // namespace Swf
} // namespace QtAws
