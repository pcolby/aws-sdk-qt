// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputroutingsrequest.h"
#include "listinputroutingsrequest_p.h"
#include "listinputroutingsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListInputRoutingsRequest
 * \brief The ListInputRoutingsRequest class provides an interface for IoTEvents ListInputRoutings requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listInputRoutings
 */

/*!
 * Constructs a copy of \a other.
 */
ListInputRoutingsRequest::ListInputRoutingsRequest(const ListInputRoutingsRequest &other)
    : IoTEventsRequest(new ListInputRoutingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInputRoutingsRequest object.
 */
ListInputRoutingsRequest::ListInputRoutingsRequest()
    : IoTEventsRequest(new ListInputRoutingsRequestPrivate(IoTEventsRequest::ListInputRoutingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputRoutingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInputRoutingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputRoutingsRequest::response(QNetworkReply * const reply) const
{
    return new ListInputRoutingsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListInputRoutingsRequestPrivate
 * \brief The ListInputRoutingsRequestPrivate class provides private implementation for ListInputRoutingsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListInputRoutingsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListInputRoutingsRequestPrivate::ListInputRoutingsRequestPrivate(
    const IoTEventsRequest::Action action, ListInputRoutingsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInputRoutingsRequest
 * class' copy constructor.
 */
ListInputRoutingsRequestPrivate::ListInputRoutingsRequestPrivate(
    const ListInputRoutingsRequestPrivate &other, ListInputRoutingsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
