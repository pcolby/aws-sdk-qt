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

#include "batchputmessagerequest.h"
#include "batchputmessagerequest_p.h"
#include "batchputmessageresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::BatchPutMessageRequest
 * \brief The BatchPutMessageRequest class provides an interface for IoTEventsData BatchPutMessage requests.
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
 * \sa IoTEventsDataClient::batchPutMessage
 */

/*!
 * Constructs a copy of \a other.
 */
BatchPutMessageRequest::BatchPutMessageRequest(const BatchPutMessageRequest &other)
    : IoTEventsDataRequest(new BatchPutMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchPutMessageRequest object.
 */
BatchPutMessageRequest::BatchPutMessageRequest()
    : IoTEventsDataRequest(new BatchPutMessageRequestPrivate(IoTEventsDataRequest::BatchPutMessageAction, this))
{

}

/*!
 * \reimp
 */
bool BatchPutMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchPutMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchPutMessageRequest::response(QNetworkReply * const reply) const
{
    return new BatchPutMessageResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::BatchPutMessageRequestPrivate
 * \brief The BatchPutMessageRequestPrivate class provides private implementation for BatchPutMessageRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a BatchPutMessageRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
BatchPutMessageRequestPrivate::BatchPutMessageRequestPrivate(
    const IoTEventsDataRequest::Action action, BatchPutMessageRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchPutMessageRequest
 * class' copy constructor.
 */
BatchPutMessageRequestPrivate::BatchPutMessageRequestPrivate(
    const BatchPutMessageRequestPrivate &other, BatchPutMessageRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
