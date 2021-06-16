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

#include "listjourneysrequest.h"
#include "listjourneysrequest_p.h"
#include "listjourneysresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListJourneysRequest
 * \brief The ListJourneysRequest class provides an interface for Pinpoint ListJourneys requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listJourneys
 */

/*!
 * Constructs a copy of \a other.
 */
ListJourneysRequest::ListJourneysRequest(const ListJourneysRequest &other)
    : PinpointRequest(new ListJourneysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJourneysRequest object.
 */
ListJourneysRequest::ListJourneysRequest()
    : PinpointRequest(new ListJourneysRequestPrivate(PinpointRequest::ListJourneysAction, this))
{

}

/*!
 * \reimp
 */
bool ListJourneysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJourneysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJourneysRequest::response(QNetworkReply * const reply) const
{
    return new ListJourneysResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::ListJourneysRequestPrivate
 * \brief The ListJourneysRequestPrivate class provides private implementation for ListJourneysRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListJourneysRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
ListJourneysRequestPrivate::ListJourneysRequestPrivate(
    const PinpointRequest::Action action, ListJourneysRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJourneysRequest
 * class' copy constructor.
 */
ListJourneysRequestPrivate::ListJourneysRequestPrivate(
    const ListJourneysRequestPrivate &other, ListJourneysRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
