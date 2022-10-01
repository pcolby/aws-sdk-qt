// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchenablealarmrequest.h"
#include "batchenablealarmrequest_p.h"
#include "batchenablealarmresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchEnableAlarmRequest
 * \brief The BatchEnableAlarmRequest class provides an interface for IoTEventsData BatchEnableAlarm requests.
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
 * \sa IoTEventsDataClient::batchEnableAlarm
 */

/*!
 * Constructs a copy of \a other.
 */
BatchEnableAlarmRequest::BatchEnableAlarmRequest(const BatchEnableAlarmRequest &other)
    : IoTEventsDataRequest(new BatchEnableAlarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchEnableAlarmRequest object.
 */
BatchEnableAlarmRequest::BatchEnableAlarmRequest()
    : IoTEventsDataRequest(new BatchEnableAlarmRequestPrivate(IoTEventsDataRequest::BatchEnableAlarmAction, this))
{

}

/*!
 * \reimp
 */
bool BatchEnableAlarmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchEnableAlarmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchEnableAlarmRequest::response(QNetworkReply * const reply) const
{
    return new BatchEnableAlarmResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::BatchEnableAlarmRequestPrivate
 * \brief The BatchEnableAlarmRequestPrivate class provides private implementation for BatchEnableAlarmRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchEnableAlarmRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
BatchEnableAlarmRequestPrivate::BatchEnableAlarmRequestPrivate(
    const IoTEventsDataRequest::Action action, BatchEnableAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchEnableAlarmRequest
 * class' copy constructor.
 */
BatchEnableAlarmRequestPrivate::BatchEnableAlarmRequestPrivate(
    const BatchEnableAlarmRequestPrivate &other, BatchEnableAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
