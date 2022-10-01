// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
