// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "respondactivitytaskcanceledrequest.h"
#include "respondactivitytaskcanceledrequest_p.h"
#include "respondactivitytaskcanceledresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RespondActivityTaskCanceledRequest
 * \brief The RespondActivityTaskCanceledRequest class provides an interface for Swf RespondActivityTaskCanceled requests.
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
 * \sa SwfClient::respondActivityTaskCanceled
 */

/*!
 * Constructs a copy of \a other.
 */
RespondActivityTaskCanceledRequest::RespondActivityTaskCanceledRequest(const RespondActivityTaskCanceledRequest &other)
    : SwfRequest(new RespondActivityTaskCanceledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RespondActivityTaskCanceledRequest object.
 */
RespondActivityTaskCanceledRequest::RespondActivityTaskCanceledRequest()
    : SwfRequest(new RespondActivityTaskCanceledRequestPrivate(SwfRequest::RespondActivityTaskCanceledAction, this))
{

}

/*!
 * \reimp
 */
bool RespondActivityTaskCanceledRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RespondActivityTaskCanceledResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RespondActivityTaskCanceledRequest::response(QNetworkReply * const reply) const
{
    return new RespondActivityTaskCanceledResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::RespondActivityTaskCanceledRequestPrivate
 * \brief The RespondActivityTaskCanceledRequestPrivate class provides private implementation for RespondActivityTaskCanceledRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RespondActivityTaskCanceledRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
RespondActivityTaskCanceledRequestPrivate::RespondActivityTaskCanceledRequestPrivate(
    const SwfRequest::Action action, RespondActivityTaskCanceledRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RespondActivityTaskCanceledRequest
 * class' copy constructor.
 */
RespondActivityTaskCanceledRequestPrivate::RespondActivityTaskCanceledRequestPrivate(
    const RespondActivityTaskCanceledRequestPrivate &other, RespondActivityTaskCanceledRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
