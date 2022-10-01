// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchresetalarmrequest.h"
#include "batchresetalarmrequest_p.h"
#include "batchresetalarmresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchResetAlarmRequest
 * \brief The BatchResetAlarmRequest class provides an interface for IoTEventsData BatchResetAlarm requests.
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
 * \sa IoTEventsDataClient::batchResetAlarm
 */

/*!
 * Constructs a copy of \a other.
 */
BatchResetAlarmRequest::BatchResetAlarmRequest(const BatchResetAlarmRequest &other)
    : IoTEventsDataRequest(new BatchResetAlarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchResetAlarmRequest object.
 */
BatchResetAlarmRequest::BatchResetAlarmRequest()
    : IoTEventsDataRequest(new BatchResetAlarmRequestPrivate(IoTEventsDataRequest::BatchResetAlarmAction, this))
{

}

/*!
 * \reimp
 */
bool BatchResetAlarmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchResetAlarmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchResetAlarmRequest::response(QNetworkReply * const reply) const
{
    return new BatchResetAlarmResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::BatchResetAlarmRequestPrivate
 * \brief The BatchResetAlarmRequestPrivate class provides private implementation for BatchResetAlarmRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchResetAlarmRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
BatchResetAlarmRequestPrivate::BatchResetAlarmRequestPrivate(
    const IoTEventsDataRequest::Action action, BatchResetAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchResetAlarmRequest
 * class' copy constructor.
 */
BatchResetAlarmRequestPrivate::BatchResetAlarmRequestPrivate(
    const BatchResetAlarmRequestPrivate &other, BatchResetAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
