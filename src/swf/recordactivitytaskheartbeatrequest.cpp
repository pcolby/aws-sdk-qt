// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "recordactivitytaskheartbeatrequest.h"
#include "recordactivitytaskheartbeatrequest_p.h"
#include "recordactivitytaskheartbeatresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RecordActivityTaskHeartbeatRequest
 * \brief The RecordActivityTaskHeartbeatRequest class provides an interface for Swf RecordActivityTaskHeartbeat requests.
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
 * \sa SwfClient::recordActivityTaskHeartbeat
 */

/*!
 * Constructs a copy of \a other.
 */
RecordActivityTaskHeartbeatRequest::RecordActivityTaskHeartbeatRequest(const RecordActivityTaskHeartbeatRequest &other)
    : SwfRequest(new RecordActivityTaskHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RecordActivityTaskHeartbeatRequest object.
 */
RecordActivityTaskHeartbeatRequest::RecordActivityTaskHeartbeatRequest()
    : SwfRequest(new RecordActivityTaskHeartbeatRequestPrivate(SwfRequest::RecordActivityTaskHeartbeatAction, this))
{

}

/*!
 * \reimp
 */
bool RecordActivityTaskHeartbeatRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RecordActivityTaskHeartbeatResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RecordActivityTaskHeartbeatRequest::response(QNetworkReply * const reply) const
{
    return new RecordActivityTaskHeartbeatResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::RecordActivityTaskHeartbeatRequestPrivate
 * \brief The RecordActivityTaskHeartbeatRequestPrivate class provides private implementation for RecordActivityTaskHeartbeatRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RecordActivityTaskHeartbeatRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
RecordActivityTaskHeartbeatRequestPrivate::RecordActivityTaskHeartbeatRequestPrivate(
    const SwfRequest::Action action, RecordActivityTaskHeartbeatRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RecordActivityTaskHeartbeatRequest
 * class' copy constructor.
 */
RecordActivityTaskHeartbeatRequestPrivate::RecordActivityTaskHeartbeatRequestPrivate(
    const RecordActivityTaskHeartbeatRequestPrivate &other, RecordActivityTaskHeartbeatRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
