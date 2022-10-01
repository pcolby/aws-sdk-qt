// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputsrequest.h"
#include "listinputsrequest_p.h"
#include "listinputsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListInputsRequest
 * \brief The ListInputsRequest class provides an interface for IoTEvents ListInputs requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listInputs
 */

/*!
 * Constructs a copy of \a other.
 */
ListInputsRequest::ListInputsRequest(const ListInputsRequest &other)
    : IoTEventsRequest(new ListInputsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInputsRequest object.
 */
ListInputsRequest::ListInputsRequest()
    : IoTEventsRequest(new ListInputsRequestPrivate(IoTEventsRequest::ListInputsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInputsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputsRequest::response(QNetworkReply * const reply) const
{
    return new ListInputsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::ListInputsRequestPrivate
 * \brief The ListInputsRequestPrivate class provides private implementation for ListInputsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListInputsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
ListInputsRequestPrivate::ListInputsRequestPrivate(
    const IoTEventsRequest::Action action, ListInputsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInputsRequest
 * class' copy constructor.
 */
ListInputsRequestPrivate::ListInputsRequestPrivate(
    const ListInputsRequestPrivate &other, ListInputsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
