/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "subscribetoeventrequest.h"
#include "subscribetoeventrequest_p.h"
#include "subscribetoeventresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::SubscribeToEventRequest
 * \brief The SubscribeToEventRequest class provides an interface for Inspector SubscribeToEvent requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::subscribeToEvent
 */

/*!
 * Constructs a copy of \a other.
 */
SubscribeToEventRequest::SubscribeToEventRequest(const SubscribeToEventRequest &other)
    : InspectorRequest(new SubscribeToEventRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SubscribeToEventRequest object.
 */
SubscribeToEventRequest::SubscribeToEventRequest()
    : InspectorRequest(new SubscribeToEventRequestPrivate(InspectorRequest::SubscribeToEventAction, this))
{

}

/*!
 * \reimp
 */
bool SubscribeToEventRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SubscribeToEventResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SubscribeToEventRequest::response(QNetworkReply * const reply) const
{
    return new SubscribeToEventResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::SubscribeToEventRequestPrivate
 * \brief The SubscribeToEventRequestPrivate class provides private implementation for SubscribeToEventRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a SubscribeToEventRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
SubscribeToEventRequestPrivate::SubscribeToEventRequestPrivate(
    const InspectorRequest::Action action, SubscribeToEventRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SubscribeToEventRequest
 * class' copy constructor.
 */
SubscribeToEventRequestPrivate::SubscribeToEventRequestPrivate(
    const SubscribeToEventRequestPrivate &other, SubscribeToEventRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
