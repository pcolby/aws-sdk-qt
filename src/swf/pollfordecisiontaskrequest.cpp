// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pollfordecisiontaskrequest.h"
#include "pollfordecisiontaskrequest_p.h"
#include "pollfordecisiontaskresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::PollForDecisionTaskRequest
 * \brief The PollForDecisionTaskRequest class provides an interface for Swf PollForDecisionTask requests.
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
 * \sa SwfClient::pollForDecisionTask
 */

/*!
 * Constructs a copy of \a other.
 */
PollForDecisionTaskRequest::PollForDecisionTaskRequest(const PollForDecisionTaskRequest &other)
    : SwfRequest(new PollForDecisionTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PollForDecisionTaskRequest object.
 */
PollForDecisionTaskRequest::PollForDecisionTaskRequest()
    : SwfRequest(new PollForDecisionTaskRequestPrivate(SwfRequest::PollForDecisionTaskAction, this))
{

}

/*!
 * \reimp
 */
bool PollForDecisionTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PollForDecisionTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PollForDecisionTaskRequest::response(QNetworkReply * const reply) const
{
    return new PollForDecisionTaskResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::PollForDecisionTaskRequestPrivate
 * \brief The PollForDecisionTaskRequestPrivate class provides private implementation for PollForDecisionTaskRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a PollForDecisionTaskRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
PollForDecisionTaskRequestPrivate::PollForDecisionTaskRequestPrivate(
    const SwfRequest::Action action, PollForDecisionTaskRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PollForDecisionTaskRequest
 * class' copy constructor.
 */
PollForDecisionTaskRequestPrivate::PollForDecisionTaskRequestPrivate(
    const PollForDecisionTaskRequestPrivate &other, PollForDecisionTaskRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
