// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "responddecisiontaskcompletedrequest.h"
#include "responddecisiontaskcompletedrequest_p.h"
#include "responddecisiontaskcompletedresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RespondDecisionTaskCompletedRequest
 * \brief The RespondDecisionTaskCompletedRequest class provides an interface for Swf RespondDecisionTaskCompleted requests.
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
 * \sa SwfClient::respondDecisionTaskCompleted
 */

/*!
 * Constructs a copy of \a other.
 */
RespondDecisionTaskCompletedRequest::RespondDecisionTaskCompletedRequest(const RespondDecisionTaskCompletedRequest &other)
    : SwfRequest(new RespondDecisionTaskCompletedRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RespondDecisionTaskCompletedRequest object.
 */
RespondDecisionTaskCompletedRequest::RespondDecisionTaskCompletedRequest()
    : SwfRequest(new RespondDecisionTaskCompletedRequestPrivate(SwfRequest::RespondDecisionTaskCompletedAction, this))
{

}

/*!
 * \reimp
 */
bool RespondDecisionTaskCompletedRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RespondDecisionTaskCompletedResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RespondDecisionTaskCompletedRequest::response(QNetworkReply * const reply) const
{
    return new RespondDecisionTaskCompletedResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::RespondDecisionTaskCompletedRequestPrivate
 * \brief The RespondDecisionTaskCompletedRequestPrivate class provides private implementation for RespondDecisionTaskCompletedRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RespondDecisionTaskCompletedRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
RespondDecisionTaskCompletedRequestPrivate::RespondDecisionTaskCompletedRequestPrivate(
    const SwfRequest::Action action, RespondDecisionTaskCompletedRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RespondDecisionTaskCompletedRequest
 * class' copy constructor.
 */
RespondDecisionTaskCompletedRequestPrivate::RespondDecisionTaskCompletedRequestPrivate(
    const RespondDecisionTaskCompletedRequestPrivate &other, RespondDecisionTaskCompletedRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
