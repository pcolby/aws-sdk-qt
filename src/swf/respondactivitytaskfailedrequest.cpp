// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "respondactivitytaskfailedrequest.h"
#include "respondactivitytaskfailedrequest_p.h"
#include "respondactivitytaskfailedresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RespondActivityTaskFailedRequest
 * \brief The RespondActivityTaskFailedRequest class provides an interface for Swf RespondActivityTaskFailed requests.
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
 * \sa SwfClient::respondActivityTaskFailed
 */

/*!
 * Constructs a copy of \a other.
 */
RespondActivityTaskFailedRequest::RespondActivityTaskFailedRequest(const RespondActivityTaskFailedRequest &other)
    : SwfRequest(new RespondActivityTaskFailedRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RespondActivityTaskFailedRequest object.
 */
RespondActivityTaskFailedRequest::RespondActivityTaskFailedRequest()
    : SwfRequest(new RespondActivityTaskFailedRequestPrivate(SwfRequest::RespondActivityTaskFailedAction, this))
{

}

/*!
 * \reimp
 */
bool RespondActivityTaskFailedRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RespondActivityTaskFailedResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RespondActivityTaskFailedRequest::response(QNetworkReply * const reply) const
{
    return new RespondActivityTaskFailedResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::RespondActivityTaskFailedRequestPrivate
 * \brief The RespondActivityTaskFailedRequestPrivate class provides private implementation for RespondActivityTaskFailedRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RespondActivityTaskFailedRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
RespondActivityTaskFailedRequestPrivate::RespondActivityTaskFailedRequestPrivate(
    const SwfRequest::Action action, RespondActivityTaskFailedRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RespondActivityTaskFailedRequest
 * class' copy constructor.
 */
RespondActivityTaskFailedRequestPrivate::RespondActivityTaskFailedRequestPrivate(
    const RespondActivityTaskFailedRequestPrivate &other, RespondActivityTaskFailedRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
