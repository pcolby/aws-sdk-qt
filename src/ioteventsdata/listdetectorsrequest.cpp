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

#include "listdetectorsrequest.h"
#include "listdetectorsrequest_p.h"
#include "listdetectorsresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::ListDetectorsRequest
 * \brief The ListDetectorsRequest class provides an interface for IoTEventsData ListDetectors requests.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. AWS IoT Events Data API commands enable you to send inputs to detectors, list detectors, and view or
 *  update a detector's
 *
 * \sa IoTEventsDataClient::listDetectors
 */

/*!
 * Constructs a copy of \a other.
 */
ListDetectorsRequest::ListDetectorsRequest(const ListDetectorsRequest &other)
    : IoTEventsDataRequest(new ListDetectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDetectorsRequest object.
 */
ListDetectorsRequest::ListDetectorsRequest()
    : IoTEventsDataRequest(new ListDetectorsRequestPrivate(IoTEventsDataRequest::ListDetectorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDetectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDetectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDetectorsRequest::response(QNetworkReply * const reply) const
{
    return new ListDetectorsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::ListDetectorsRequestPrivate
 * \brief The ListDetectorsRequestPrivate class provides private implementation for ListDetectorsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a ListDetectorsRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
ListDetectorsRequestPrivate::ListDetectorsRequestPrivate(
    const IoTEventsDataRequest::Action action, ListDetectorsRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDetectorsRequest
 * class' copy constructor.
 */
ListDetectorsRequestPrivate::ListDetectorsRequestPrivate(
    const ListDetectorsRequestPrivate &other, ListDetectorsRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
