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

#include "listalarmmodelversionsrequest.h"
#include "listalarmmodelversionsrequest_p.h"
#include "listalarmmodelversionsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListAlarmModelVersionsRequest
 * \brief The ListAlarmModelVersionsRequest class provides an interface for IoTEvents ListAlarmModelVersions requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listAlarmModelVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListAlarmModelVersionsRequest::ListAlarmModelVersionsRequest(const ListAlarmModelVersionsRequest &other)
    : IoTEventsRequest(new ListAlarmModelVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAlarmModelVersionsRequest object.
 */
ListAlarmModelVersionsRequest::ListAlarmModelVersionsRequest()
    : IoTEventsRequest(new ListAlarmModelVersionsRequestPrivate(IoTEventsRequest::ListAlarmModelVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAlarmModelVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAlarmModelVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAlarmModelVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListAlarmModelVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListAlarmModelVersionsRequestPrivate
 * \brief The ListAlarmModelVersionsRequestPrivate class provides private implementation for ListAlarmModelVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListAlarmModelVersionsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListAlarmModelVersionsRequestPrivate::ListAlarmModelVersionsRequestPrivate(
    const IoTEventsRequest::Action action, ListAlarmModelVersionsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAlarmModelVersionsRequest
 * class' copy constructor.
 */
ListAlarmModelVersionsRequestPrivate::ListAlarmModelVersionsRequestPrivate(
    const ListAlarmModelVersionsRequestPrivate &other, ListAlarmModelVersionsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
