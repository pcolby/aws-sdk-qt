// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
