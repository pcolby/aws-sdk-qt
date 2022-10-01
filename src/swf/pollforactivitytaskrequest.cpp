// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pollforactivitytaskrequest.h"
#include "pollforactivitytaskrequest_p.h"
#include "pollforactivitytaskresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::PollForActivityTaskRequest
 * \brief The PollForActivityTaskRequest class provides an interface for Swf PollForActivityTask requests.
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
 * \sa SwfClient::pollForActivityTask
 */

/*!
 * Constructs a copy of \a other.
 */
PollForActivityTaskRequest::PollForActivityTaskRequest(const PollForActivityTaskRequest &other)
    : SwfRequest(new PollForActivityTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PollForActivityTaskRequest object.
 */
PollForActivityTaskRequest::PollForActivityTaskRequest()
    : SwfRequest(new PollForActivityTaskRequestPrivate(SwfRequest::PollForActivityTaskAction, this))
{

}

/*!
 * \reimp
 */
bool PollForActivityTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PollForActivityTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PollForActivityTaskRequest::response(QNetworkReply * const reply) const
{
    return new PollForActivityTaskResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::PollForActivityTaskRequestPrivate
 * \brief The PollForActivityTaskRequestPrivate class provides private implementation for PollForActivityTaskRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a PollForActivityTaskRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
PollForActivityTaskRequestPrivate::PollForActivityTaskRequestPrivate(
    const SwfRequest::Action action, PollForActivityTaskRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PollForActivityTaskRequest
 * class' copy constructor.
 */
PollForActivityTaskRequestPrivate::PollForActivityTaskRequestPrivate(
    const PollForActivityTaskRequestPrivate &other, PollForActivityTaskRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
