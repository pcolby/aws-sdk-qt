/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "respondactivitytaskfailedrequest.h"
#include "respondactivitytaskfailedrequest_p.h"
#include "respondactivitytaskfailedresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::RespondActivityTaskFailedRequest
 * \brief The RespondActivityTaskFailedRequest class provides an interface for SWF RespondActivityTaskFailed requests.
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
 * \sa SWFClient::respondActivityTaskFailed
 */

/*!
 * Constructs a copy of \a other.
 */
RespondActivityTaskFailedRequest::RespondActivityTaskFailedRequest(const RespondActivityTaskFailedRequest &other)
    : SWFRequest(new RespondActivityTaskFailedRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RespondActivityTaskFailedRequest object.
 */
RespondActivityTaskFailedRequest::RespondActivityTaskFailedRequest()
    : SWFRequest(new RespondActivityTaskFailedRequestPrivate(SWFRequest::RespondActivityTaskFailedAction, this))
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
 * \class QtAws::SWF::RespondActivityTaskFailedRequestPrivate
 * \brief The RespondActivityTaskFailedRequestPrivate class provides private implementation for RespondActivityTaskFailedRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 *
 * Constructs a RespondActivityTaskFailedRequestPrivate object for SWF \a action with,
 * public implementation \a q.
 */
RespondActivityTaskFailedRequestPrivate::RespondActivityTaskFailedRequestPrivate(
    const SWFRequest::Action action, RespondActivityTaskFailedRequest * const q)
    : SWFRequestPrivate(action, q)
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
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
