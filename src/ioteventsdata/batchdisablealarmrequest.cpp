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

#include "batchdisablealarmrequest.h"
#include "batchdisablealarmrequest_p.h"
#include "batchdisablealarmresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchDisableAlarmRequest
 * \brief The BatchDisableAlarmRequest class provides an interface for IoTEventsData BatchDisableAlarm requests.
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
 * \sa IoTEventsDataClient::batchDisableAlarm
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDisableAlarmRequest::BatchDisableAlarmRequest(const BatchDisableAlarmRequest &other)
    : IoTEventsDataRequest(new BatchDisableAlarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDisableAlarmRequest object.
 */
BatchDisableAlarmRequest::BatchDisableAlarmRequest()
    : IoTEventsDataRequest(new BatchDisableAlarmRequestPrivate(IoTEventsDataRequest::BatchDisableAlarmAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDisableAlarmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDisableAlarmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDisableAlarmRequest::response(QNetworkReply * const reply) const
{
    return new BatchDisableAlarmResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::BatchDisableAlarmRequestPrivate
 * \brief The BatchDisableAlarmRequestPrivate class provides private implementation for BatchDisableAlarmRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchDisableAlarmRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
BatchDisableAlarmRequestPrivate::BatchDisableAlarmRequestPrivate(
    const IoTEventsDataRequest::Action action, BatchDisableAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDisableAlarmRequest
 * class' copy constructor.
 */
BatchDisableAlarmRequestPrivate::BatchDisableAlarmRequestPrivate(
    const BatchDisableAlarmRequestPrivate &other, BatchDisableAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
