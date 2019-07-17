/*
    Copyright 2013-2019 Paul Colby

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

#include "listdetectormodelsrequest.h"
#include "listdetectormodelsrequest_p.h"
#include "listdetectormodelsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListDetectorModelsRequest
 * \brief The ListDetectorModelsRequest class provides an interface for IoTEvents ListDetectorModels requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::listDetectorModels
 */

/*!
 * Constructs a copy of \a other.
 */
ListDetectorModelsRequest::ListDetectorModelsRequest(const ListDetectorModelsRequest &other)
    : IoTEventsRequest(new ListDetectorModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDetectorModelsRequest object.
 */
ListDetectorModelsRequest::ListDetectorModelsRequest()
    : IoTEventsRequest(new ListDetectorModelsRequestPrivate(IoTEventsRequest::ListDetectorModelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDetectorModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDetectorModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDetectorModelsRequest::response(QNetworkReply * const reply) const
{
    return new ListDetectorModelsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListDetectorModelsRequestPrivate
 * \brief The ListDetectorModelsRequestPrivate class provides private implementation for ListDetectorModelsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListDetectorModelsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListDetectorModelsRequestPrivate::ListDetectorModelsRequestPrivate(
    const IoTEventsRequest::Action action, ListDetectorModelsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDetectorModelsRequest
 * class' copy constructor.
 */
ListDetectorModelsRequestPrivate::ListDetectorModelsRequestPrivate(
    const ListDetectorModelsRequestPrivate &other, ListDetectorModelsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
