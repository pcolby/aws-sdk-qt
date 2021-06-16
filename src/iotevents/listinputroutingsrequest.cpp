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

#include "listinputroutingsrequest.h"
#include "listinputroutingsrequest_p.h"
#include "listinputroutingsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListInputRoutingsRequest
 * \brief The ListInputRoutingsRequest class provides an interface for IoTEvents ListInputRoutings requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listInputRoutings
 */

/*!
 * Constructs a copy of \a other.
 */
ListInputRoutingsRequest::ListInputRoutingsRequest(const ListInputRoutingsRequest &other)
    : IoTEventsRequest(new ListInputRoutingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInputRoutingsRequest object.
 */
ListInputRoutingsRequest::ListInputRoutingsRequest()
    : IoTEventsRequest(new ListInputRoutingsRequestPrivate(IoTEventsRequest::ListInputRoutingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputRoutingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInputRoutingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputRoutingsRequest::response(QNetworkReply * const reply) const
{
    return new ListInputRoutingsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListInputRoutingsRequestPrivate
 * \brief The ListInputRoutingsRequestPrivate class provides private implementation for ListInputRoutingsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListInputRoutingsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListInputRoutingsRequestPrivate::ListInputRoutingsRequestPrivate(
    const IoTEventsRequest::Action action, ListInputRoutingsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInputRoutingsRequest
 * class' copy constructor.
 */
ListInputRoutingsRequestPrivate::ListInputRoutingsRequestPrivate(
    const ListInputRoutingsRequestPrivate &other, ListInputRoutingsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
