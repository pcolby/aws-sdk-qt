// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinputrequest.h"
#include "deleteinputrequest_p.h"
#include "deleteinputresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DeleteInputRequest
 * \brief The DeleteInputRequest class provides an interface for IoTEvents DeleteInput requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::deleteInput
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInputRequest::DeleteInputRequest(const DeleteInputRequest &other)
    : IoTEventsRequest(new DeleteInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInputRequest object.
 */
DeleteInputRequest::DeleteInputRequest()
    : IoTEventsRequest(new DeleteInputRequestPrivate(IoTEventsRequest::DeleteInputAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInputRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInputResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DeleteInputRequestPrivate
 * \brief The DeleteInputRequestPrivate class provides private implementation for DeleteInputRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DeleteInputRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DeleteInputRequestPrivate::DeleteInputRequestPrivate(
    const IoTEventsRequest::Action action, DeleteInputRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInputRequest
 * class' copy constructor.
 */
DeleteInputRequestPrivate::DeleteInputRequestPrivate(
    const DeleteInputRequestPrivate &other, DeleteInputRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
