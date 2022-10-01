// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
