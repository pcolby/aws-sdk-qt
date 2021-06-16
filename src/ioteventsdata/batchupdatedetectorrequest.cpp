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

#include "batchupdatedetectorrequest.h"
#include "batchupdatedetectorrequest_p.h"
#include "batchupdatedetectorresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchUpdateDetectorRequest
 * \brief The BatchUpdateDetectorRequest class provides an interface for IoTEventsData BatchUpdateDetector requests.
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
 * \sa IoTEventsDataClient::batchUpdateDetector
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpdateDetectorRequest::BatchUpdateDetectorRequest(const BatchUpdateDetectorRequest &other)
    : IoTEventsDataRequest(new BatchUpdateDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpdateDetectorRequest object.
 */
BatchUpdateDetectorRequest::BatchUpdateDetectorRequest()
    : IoTEventsDataRequest(new BatchUpdateDetectorRequestPrivate(IoTEventsDataRequest::BatchUpdateDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpdateDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpdateDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpdateDetectorRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpdateDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::BatchUpdateDetectorRequestPrivate
 * \brief The BatchUpdateDetectorRequestPrivate class provides private implementation for BatchUpdateDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchUpdateDetectorRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
BatchUpdateDetectorRequestPrivate::BatchUpdateDetectorRequestPrivate(
    const IoTEventsDataRequest::Action action, BatchUpdateDetectorRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpdateDetectorRequest
 * class' copy constructor.
 */
BatchUpdateDetectorRequestPrivate::BatchUpdateDetectorRequestPrivate(
    const BatchUpdateDetectorRequestPrivate &other, BatchUpdateDetectorRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
