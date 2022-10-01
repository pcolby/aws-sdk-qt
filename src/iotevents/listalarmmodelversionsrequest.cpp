// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
