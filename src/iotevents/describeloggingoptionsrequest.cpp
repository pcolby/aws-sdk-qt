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

#include "describeloggingoptionsrequest.h"
#include "describeloggingoptionsrequest_p.h"
#include "describeloggingoptionsresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeLoggingOptionsRequest
 * \brief The DescribeLoggingOptionsRequest class provides an interface for IoTEvents DescribeLoggingOptions requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeLoggingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLoggingOptionsRequest::DescribeLoggingOptionsRequest(const DescribeLoggingOptionsRequest &other)
    : IoTEventsRequest(new DescribeLoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLoggingOptionsRequest object.
 */
DescribeLoggingOptionsRequest::DescribeLoggingOptionsRequest()
    : IoTEventsRequest(new DescribeLoggingOptionsRequestPrivate(IoTEventsRequest::DescribeLoggingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLoggingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLoggingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoggingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DescribeLoggingOptionsRequestPrivate
 * \brief The DescribeLoggingOptionsRequestPrivate class provides private implementation for DescribeLoggingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeLoggingOptionsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DescribeLoggingOptionsRequestPrivate::DescribeLoggingOptionsRequestPrivate(
    const IoTEventsRequest::Action action, DescribeLoggingOptionsRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoggingOptionsRequest
 * class' copy constructor.
 */
DescribeLoggingOptionsRequestPrivate::DescribeLoggingOptionsRequestPrivate(
    const DescribeLoggingOptionsRequestPrivate &other, DescribeLoggingOptionsRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
