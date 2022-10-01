// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdetectorsrequest.h"
#include "listdetectorsrequest_p.h"
#include "listdetectorsresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::ListDetectorsRequest
 * \brief The ListDetectorsRequest class provides an interface for IoTEventsData ListDetectors requests.
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
 * \sa IoTEventsDataClient::listDetectors
 */

/*!
 * Constructs a copy of \a other.
 */
ListDetectorsRequest::ListDetectorsRequest(const ListDetectorsRequest &other)
    : IoTEventsDataRequest(new ListDetectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDetectorsRequest object.
 */
ListDetectorsRequest::ListDetectorsRequest()
    : IoTEventsDataRequest(new ListDetectorsRequestPrivate(IoTEventsDataRequest::ListDetectorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDetectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDetectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDetectorsRequest::response(QNetworkReply * const reply) const
{
    return new ListDetectorsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::ListDetectorsRequestPrivate
 * \brief The ListDetectorsRequestPrivate class provides private implementation for ListDetectorsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a ListDetectorsRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
ListDetectorsRequestPrivate::ListDetectorsRequestPrivate(
    const IoTEventsDataRequest::Action action, ListDetectorsRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDetectorsRequest
 * class' copy constructor.
 */
ListDetectorsRequestPrivate::ListDetectorsRequestPrivate(
    const ListDetectorsRequestPrivate &other, ListDetectorsRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
