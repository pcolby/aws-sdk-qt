/*
    Copyright 2013-2020 Paul Colby

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

#include "putloggingoptionsrequest.h"
#include "putloggingoptionsrequest_p.h"
#include "putloggingoptionsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::PutLoggingOptionsRequest
 * \brief The PutLoggingOptionsRequest class provides an interface for IoTEvents PutLoggingOptions requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::putLoggingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
PutLoggingOptionsRequest::PutLoggingOptionsRequest(const PutLoggingOptionsRequest &other)
    : IoTEventsRequest(new PutLoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLoggingOptionsRequest object.
 */
PutLoggingOptionsRequest::PutLoggingOptionsRequest()
    : IoTEventsRequest(new PutLoggingOptionsRequestPrivate(IoTEventsRequest::PutLoggingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool PutLoggingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLoggingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new PutLoggingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::PutLoggingOptionsRequestPrivate
 * \brief The PutLoggingOptionsRequestPrivate class provides private implementation for PutLoggingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a PutLoggingOptionsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
PutLoggingOptionsRequestPrivate::PutLoggingOptionsRequestPrivate(
    const IoTEventsRequest::Action action, PutLoggingOptionsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLoggingOptionsRequest
 * class' copy constructor.
 */
PutLoggingOptionsRequestPrivate::PutLoggingOptionsRequestPrivate(
    const PutLoggingOptionsRequestPrivate &other, PutLoggingOptionsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
