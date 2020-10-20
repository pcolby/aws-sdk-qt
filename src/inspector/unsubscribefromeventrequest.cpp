/*
    Copyright 2013-2020 Paul Colby

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

#include "unsubscribefromeventrequest.h"
#include "unsubscribefromeventrequest_p.h"
#include "unsubscribefromeventresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::UnsubscribeFromEventRequest
 * \brief The UnsubscribeFromEventRequest class provides an interface for Inspector UnsubscribeFromEvent requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::unsubscribeFromEvent
 */

/*!
 * Constructs a copy of \a other.
 */
UnsubscribeFromEventRequest::UnsubscribeFromEventRequest(const UnsubscribeFromEventRequest &other)
    : InspectorRequest(new UnsubscribeFromEventRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnsubscribeFromEventRequest object.
 */
UnsubscribeFromEventRequest::UnsubscribeFromEventRequest()
    : InspectorRequest(new UnsubscribeFromEventRequestPrivate(InspectorRequest::UnsubscribeFromEventAction, this))
{

}

/*!
 * \reimp
 */
bool UnsubscribeFromEventRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UnsubscribeFromEventResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UnsubscribeFromEventRequest::response(QNetworkReply * const reply) const
{
    return new UnsubscribeFromEventResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::UnsubscribeFromEventRequestPrivate
 * \brief The UnsubscribeFromEventRequestPrivate class provides private implementation for UnsubscribeFromEventRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a UnsubscribeFromEventRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
UnsubscribeFromEventRequestPrivate::UnsubscribeFromEventRequestPrivate(
    const InspectorRequest::Action action, UnsubscribeFromEventRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UnsubscribeFromEventRequest
 * class' copy constructor.
 */
UnsubscribeFromEventRequestPrivate::UnsubscribeFromEventRequestPrivate(
    const UnsubscribeFromEventRequestPrivate &other, UnsubscribeFromEventRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
