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

#include "describealarmrequest.h"
#include "describealarmrequest_p.h"
#include "describealarmresponse.h"
#include "ioteventsdatarequest_p.h"

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::DescribeAlarmRequest
 * \brief The DescribeAlarmRequest class provides an interface for IoTEventsData DescribeAlarm requests.
 *
 * \inmodule QtAwsIoTEventsData
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events Data API commands to send inputs to detectors, list detectors, and view or
 *  update a detector's
 * 
 *  status>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/iotevents/latest/developerguide/what-is-iotevents.html">What is AWS IoT Events?</a> in
 *  the <i>AWS IoT Events Developer
 *
 * \sa IoTEventsDataClient::describeAlarm
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlarmRequest::DescribeAlarmRequest(const DescribeAlarmRequest &other)
    : IoTEventsDataRequest(new DescribeAlarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlarmRequest object.
 */
DescribeAlarmRequest::DescribeAlarmRequest()
    : IoTEventsDataRequest(new DescribeAlarmRequestPrivate(IoTEventsDataRequest::DescribeAlarmAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAlarmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAlarmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAlarmRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlarmResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEventsData::DescribeAlarmRequestPrivate
 * \brief The DescribeAlarmRequestPrivate class provides private implementation for DescribeAlarmRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a DescribeAlarmRequestPrivate object for IoTEventsData \a action,
 * with public implementation \a q.
 */
DescribeAlarmRequestPrivate::DescribeAlarmRequestPrivate(
    const IoTEventsDataRequest::Action action, DescribeAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlarmRequest
 * class' copy constructor.
 */
DescribeAlarmRequestPrivate::DescribeAlarmRequestPrivate(
    const DescribeAlarmRequestPrivate &other, DescribeAlarmRequest * const q)
    : IoTEventsDataRequestPrivate(other, q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
