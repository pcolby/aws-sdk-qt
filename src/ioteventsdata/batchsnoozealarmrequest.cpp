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

#include "batchsnoozealarmrequest.h"
#include "batchsnoozealarmrequest_p.h"
#include "batchsnoozealarmresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchSnoozeAlarmRequest
 * \brief The BatchSnoozeAlarmRequest class provides an interface for IoTEventsData BatchSnoozeAlarm requests.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events Data API commands to send inputs to detectors, list detectors, and view or
 *  update a detector's
 * 
 *  status>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/iotevents/latest/developerguide/what-is-iotevents.html">What is AWS IoT Events?</a> in
 *  the <i>AWS IoT Events Developer
 *
 * \sa IoTEventsDataClient::batchSnoozeAlarm
 */

/*!
 * Constructs a copy of \a other.
 */
BatchSnoozeAlarmRequest::BatchSnoozeAlarmRequest(const BatchSnoozeAlarmRequest &other)
    : IoTEventsDataRequest(new BatchSnoozeAlarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchSnoozeAlarmRequest object.
 */
BatchSnoozeAlarmRequest::BatchSnoozeAlarmRequest()
    : IoTEventsDataRequest(new BatchSnoozeAlarmRequestPrivate(IoTEventsDataRequest::BatchSnoozeAlarmAction, this))
{

}

/*!
 * \reimp
 */
bool BatchSnoozeAlarmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchSnoozeAlarmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchSnoozeAlarmRequest::response(QNetworkReply * const reply) const
{
    return new BatchSnoozeAlarmResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::BatchSnoozeAlarmRequestPrivate
 * \brief The BatchSnoozeAlarmRequestPrivate class provides private implementation for BatchSnoozeAlarmRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchSnoozeAlarmRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
BatchSnoozeAlarmRequestPrivate::BatchSnoozeAlarmRequestPrivate(
    const IoTEventsDataRequest::Action action, BatchSnoozeAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchSnoozeAlarmRequest
 * class' copy constructor.
 */
BatchSnoozeAlarmRequestPrivate::BatchSnoozeAlarmRequestPrivate(
    const BatchSnoozeAlarmRequestPrivate &other, BatchSnoozeAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
