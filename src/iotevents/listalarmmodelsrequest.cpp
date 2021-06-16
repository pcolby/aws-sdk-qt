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

#include "listalarmmodelsrequest.h"
#include "listalarmmodelsrequest_p.h"
#include "listalarmmodelsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListAlarmModelsRequest
 * \brief The ListAlarmModelsRequest class provides an interface for IoTEvents ListAlarmModels requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listAlarmModels
 */

/*!
 * Constructs a copy of \a other.
 */
ListAlarmModelsRequest::ListAlarmModelsRequest(const ListAlarmModelsRequest &other)
    : IoTEventsRequest(new ListAlarmModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAlarmModelsRequest object.
 */
ListAlarmModelsRequest::ListAlarmModelsRequest()
    : IoTEventsRequest(new ListAlarmModelsRequestPrivate(IoTEventsRequest::ListAlarmModelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAlarmModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAlarmModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAlarmModelsRequest::response(QNetworkReply * const reply) const
{
    return new ListAlarmModelsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListAlarmModelsRequestPrivate
 * \brief The ListAlarmModelsRequestPrivate class provides private implementation for ListAlarmModelsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListAlarmModelsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListAlarmModelsRequestPrivate::ListAlarmModelsRequestPrivate(
    const IoTEventsRequest::Action action, ListAlarmModelsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAlarmModelsRequest
 * class' copy constructor.
 */
ListAlarmModelsRequestPrivate::ListAlarmModelsRequestPrivate(
    const ListAlarmModelsRequestPrivate &other, ListAlarmModelsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
