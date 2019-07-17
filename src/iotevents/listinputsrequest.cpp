/*
    Copyright 2013-2019 Paul Colby

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

#include "listinputsrequest.h"
#include "listinputsrequest_p.h"
#include "listinputsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListInputsRequest
 * \brief The ListInputsRequest class provides an interface for IoTEvents ListInputs requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::listInputs
 */

/*!
 * Constructs a copy of \a other.
 */
ListInputsRequest::ListInputsRequest(const ListInputsRequest &other)
    : IoTEventsRequest(new ListInputsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInputsRequest object.
 */
ListInputsRequest::ListInputsRequest()
    : IoTEventsRequest(new ListInputsRequestPrivate(IoTEventsRequest::ListInputsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInputsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputsRequest::response(QNetworkReply * const reply) const
{
    return new ListInputsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListInputsRequestPrivate
 * \brief The ListInputsRequestPrivate class provides private implementation for ListInputsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListInputsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListInputsRequestPrivate::ListInputsRequestPrivate(
    const IoTEventsRequest::Action action, ListInputsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInputsRequest
 * class' copy constructor.
 */
ListInputsRequestPrivate::ListInputsRequestPrivate(
    const ListInputsRequestPrivate &other, ListInputsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
