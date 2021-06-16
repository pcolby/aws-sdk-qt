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
