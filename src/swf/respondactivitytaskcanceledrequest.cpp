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

#include "respondactivitytaskcanceledrequest.h"
#include "respondactivitytaskcanceledrequest_p.h"
#include "respondactivitytaskcanceledresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::RespondActivityTaskCanceledRequest
 * \brief The RespondActivityTaskCanceledRequest class provides an interface for SWF RespondActivityTaskCanceled requests.
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
 * \sa SWFClient::respondActivityTaskCanceled
 */

/*!
 * Constructs a copy of \a other.
 */
RespondActivityTaskCanceledRequest::RespondActivityTaskCanceledRequest(const RespondActivityTaskCanceledRequest &other)
    : SWFRequest(new RespondActivityTaskCanceledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RespondActivityTaskCanceledRequest object.
 */
RespondActivityTaskCanceledRequest::RespondActivityTaskCanceledRequest()
    : SWFRequest(new RespondActivityTaskCanceledRequestPrivate(SWFRequest::RespondActivityTaskCanceledAction, this))
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
 * \class QtAws::SWF::RespondActivityTaskCanceledRequestPrivate
 * \brief The RespondActivityTaskCanceledRequestPrivate class provides private implementation for RespondActivityTaskCanceledRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a RespondActivityTaskCanceledRequestPrivate object for SWF \a action,
 * with public implementation \a q.
 */
RespondActivityTaskCanceledRequestPrivate::RespondActivityTaskCanceledRequestPrivate(
    const SWFRequest::Action action, RespondActivityTaskCanceledRequest * const q)
    : SWFRequestPrivate(action, q)
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
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
