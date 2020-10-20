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

#include "describeinputrequest.h"
#include "describeinputrequest_p.h"
#include "describeinputresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeInputRequest
 * \brief The DescribeInputRequest class provides an interface for IoTEvents DescribeInput requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::describeInput
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInputRequest::DescribeInputRequest(const DescribeInputRequest &other)
    : IoTEventsRequest(new DescribeInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInputRequest object.
 */
DescribeInputRequest::DescribeInputRequest()
    : IoTEventsRequest(new DescribeInputRequestPrivate(IoTEventsRequest::DescribeInputAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInputRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInputResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DescribeInputRequestPrivate
 * \brief The DescribeInputRequestPrivate class provides private implementation for DescribeInputRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeInputRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DescribeInputRequestPrivate::DescribeInputRequestPrivate(
    const IoTEventsRequest::Action action, DescribeInputRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInputRequest
 * class' copy constructor.
 */
DescribeInputRequestPrivate::DescribeInputRequestPrivate(
    const DescribeInputRequestPrivate &other, DescribeInputRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
