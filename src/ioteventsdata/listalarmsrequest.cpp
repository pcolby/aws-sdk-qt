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

#include "listalarmsrequest.h"
#include "listalarmsrequest_p.h"
#include "listalarmsresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::ListAlarmsRequest
 * \brief The ListAlarmsRequest class provides an interface for IoTEventsData ListAlarms requests.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when such
 *  events occur. You can use IoT Events Data API commands to send inputs to detectors, list detectors, and view or update a
 *  detector's
 * 
 *  status>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/iotevents/latest/developerguide/what-is-iotevents.html">What is IoT Events?</a> in the
 *  <i>IoT Events Developer
 *
 * \sa IoTEventsDataClient::listAlarms
 */

/*!
 * Constructs a copy of \a other.
 */
ListAlarmsRequest::ListAlarmsRequest(const ListAlarmsRequest &other)
    : IoTEventsDataRequest(new ListAlarmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAlarmsRequest object.
 */
ListAlarmsRequest::ListAlarmsRequest()
    : IoTEventsDataRequest(new ListAlarmsRequestPrivate(IoTEventsDataRequest::ListAlarmsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAlarmsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAlarmsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAlarmsRequest::response(QNetworkReply * const reply) const
{
    return new ListAlarmsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::ListAlarmsRequestPrivate
 * \brief The ListAlarmsRequestPrivate class provides private implementation for ListAlarmsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a ListAlarmsRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
ListAlarmsRequestPrivate::ListAlarmsRequestPrivate(
    const IoTEventsDataRequest::Action action, ListAlarmsRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAlarmsRequest
 * class' copy constructor.
 */
ListAlarmsRequestPrivate::ListAlarmsRequestPrivate(
    const ListAlarmsRequestPrivate &other, ListAlarmsRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
