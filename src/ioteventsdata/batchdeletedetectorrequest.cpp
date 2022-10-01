// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletedetectorrequest.h"
#include "batchdeletedetectorrequest_p.h"
#include "batchdeletedetectorresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchDeleteDetectorRequest
 * \brief The BatchDeleteDetectorRequest class provides an interface for IoTEventsData BatchDeleteDetector requests.
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
 * \sa IoTEventsDataClient::batchDeleteDetector
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteDetectorRequest::BatchDeleteDetectorRequest(const BatchDeleteDetectorRequest &other)
    : IoTEventsDataRequest(new BatchDeleteDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteDetectorRequest object.
 */
BatchDeleteDetectorRequest::BatchDeleteDetectorRequest()
    : IoTEventsDataRequest(new BatchDeleteDetectorRequestPrivate(IoTEventsDataRequest::BatchDeleteDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteDetectorRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::BatchDeleteDetectorRequestPrivate
 * \brief The BatchDeleteDetectorRequestPrivate class provides private implementation for BatchDeleteDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchDeleteDetectorRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
BatchDeleteDetectorRequestPrivate::BatchDeleteDetectorRequestPrivate(
    const IoTEventsDataRequest::Action action, BatchDeleteDetectorRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteDetectorRequest
 * class' copy constructor.
 */
BatchDeleteDetectorRequestPrivate::BatchDeleteDetectorRequestPrivate(
    const BatchDeleteDetectorRequestPrivate &other, BatchDeleteDetectorRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
