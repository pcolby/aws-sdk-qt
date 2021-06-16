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

#include "describeapplicationrequest.h"
#include "describeapplicationrequest_p.h"
#include "describeapplicationresponse.h"
#include "iotfleethubrequest_p.h"

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::DescribeApplicationRequest
 * \brief The DescribeApplicationRequest class provides an interface for IoTFleetHub DescribeApplication requests.
 *
 * \inmodule QtAwsIoTFleetHub
 *
 *  With Fleet Hub for AWS IoT Device Management you can build stand-alone web applications for monitoring the health of
 *  your device
 * 
 *  fleets> <note>
 * 
 *  Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 *
 * \sa IoTFleetHubClient::describeApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApplicationRequest::DescribeApplicationRequest(const DescribeApplicationRequest &other)
    : IoTFleetHubRequest(new DescribeApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApplicationRequest object.
 */
DescribeApplicationRequest::DescribeApplicationRequest()
    : IoTFleetHubRequest(new DescribeApplicationRequestPrivate(IoTFleetHubRequest::DescribeApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTFleetHub::DescribeApplicationRequestPrivate
 * \brief The DescribeApplicationRequestPrivate class provides private implementation for DescribeApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a DescribeApplicationRequestPrivate object for IoTFleetHub \a action,
 * with public implementation \a q.
 */
DescribeApplicationRequestPrivate::DescribeApplicationRequestPrivate(
    const IoTFleetHubRequest::Action action, DescribeApplicationRequest * const q)
    : IoTFleetHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationRequest
 * class' copy constructor.
 */
DescribeApplicationRequestPrivate::DescribeApplicationRequestPrivate(
    const DescribeApplicationRequestPrivate &other, DescribeApplicationRequest * const q)
    : IoTFleetHubRequestPrivate(other, q)
{

}

} // namespace IoTFleetHub
} // namespace QtAws
