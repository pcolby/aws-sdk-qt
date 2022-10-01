// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "countpendingdecisiontasksrequest.h"
#include "countpendingdecisiontasksrequest_p.h"
#include "countpendingdecisiontasksresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::CountPendingDecisionTasksRequest
 * \brief The CountPendingDecisionTasksRequest class provides an interface for Swf CountPendingDecisionTasks requests.
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
 * \class QtAws::Swf::CountPendingDecisionTasksRequestPrivate
 * \brief The CountPendingDecisionTasksRequestPrivate class provides private implementation for CountPendingDecisionTasksRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
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

} // namespace Swf
} // namespace QtAws
