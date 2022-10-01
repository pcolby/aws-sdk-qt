// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchacknowledgealarmrequest.h"
#include "batchacknowledgealarmrequest_p.h"
#include "batchacknowledgealarmresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchAcknowledgeAlarmRequest
 * \brief The BatchAcknowledgeAlarmRequest class provides an interface for IoTEventsData BatchAcknowledgeAlarm requests.
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
 * \sa IoTEventsDataClient::batchAcknowledgeAlarm
 */

/*!
 * Constructs a copy of \a other.
 */
BatchAcknowledgeAlarmRequest::BatchAcknowledgeAlarmRequest(const BatchAcknowledgeAlarmRequest &other)
    : IoTEventsDataRequest(new BatchAcknowledgeAlarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchAcknowledgeAlarmRequest object.
 */
BatchAcknowledgeAlarmRequest::BatchAcknowledgeAlarmRequest()
    : IoTEventsDataRequest(new BatchAcknowledgeAlarmRequestPrivate(IoTEventsDataRequest::BatchAcknowledgeAlarmAction, this))
{

}

/*!
 * \reimp
 */
bool BatchAcknowledgeAlarmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchAcknowledgeAlarmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchAcknowledgeAlarmRequest::response(QNetworkReply * const reply) const
{
    return new BatchAcknowledgeAlarmResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::BatchAcknowledgeAlarmRequestPrivate
 * \brief The BatchAcknowledgeAlarmRequestPrivate class provides private implementation for BatchAcknowledgeAlarmRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchAcknowledgeAlarmRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
BatchAcknowledgeAlarmRequestPrivate::BatchAcknowledgeAlarmRequestPrivate(
    const IoTEventsDataRequest::Action action, BatchAcknowledgeAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchAcknowledgeAlarmRequest
 * class' copy constructor.
 */
BatchAcknowledgeAlarmRequestPrivate::BatchAcknowledgeAlarmRequestPrivate(
    const BatchAcknowledgeAlarmRequestPrivate &other, BatchAcknowledgeAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
