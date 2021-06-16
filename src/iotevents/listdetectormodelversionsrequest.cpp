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

#include "listdetectormodelversionsrequest.h"
#include "listdetectormodelversionsrequest_p.h"
#include "listdetectormodelversionsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListDetectorModelVersionsRequest
 * \brief The ListDetectorModelVersionsRequest class provides an interface for IoTEvents ListDetectorModelVersions requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::listDetectorModelVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDetectorModelVersionsRequest::ListDetectorModelVersionsRequest(const ListDetectorModelVersionsRequest &other)
    : IoTEventsRequest(new ListDetectorModelVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDetectorModelVersionsRequest object.
 */
ListDetectorModelVersionsRequest::ListDetectorModelVersionsRequest()
    : IoTEventsRequest(new ListDetectorModelVersionsRequestPrivate(IoTEventsRequest::ListDetectorModelVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDetectorModelVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDetectorModelVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDetectorModelVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDetectorModelVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListDetectorModelVersionsRequestPrivate
 * \brief The ListDetectorModelVersionsRequestPrivate class provides private implementation for ListDetectorModelVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListDetectorModelVersionsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListDetectorModelVersionsRequestPrivate::ListDetectorModelVersionsRequestPrivate(
    const IoTEventsRequest::Action action, ListDetectorModelVersionsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDetectorModelVersionsRequest
 * class' copy constructor.
 */
ListDetectorModelVersionsRequestPrivate::ListDetectorModelVersionsRequestPrivate(
    const ListDetectorModelVersionsRequestPrivate &other, ListDetectorModelVersionsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
