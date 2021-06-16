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

#include "describealarmmodelrequest.h"
#include "describealarmmodelrequest_p.h"
#include "describealarmmodelresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeAlarmModelRequest
 * \brief The DescribeAlarmModelRequest class provides an interface for IoTEvents DescribeAlarmModel requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeAlarmModel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlarmModelRequest::DescribeAlarmModelRequest(const DescribeAlarmModelRequest &other)
    : IoTEventsRequest(new DescribeAlarmModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlarmModelRequest object.
 */
DescribeAlarmModelRequest::DescribeAlarmModelRequest()
    : IoTEventsRequest(new DescribeAlarmModelRequestPrivate(IoTEventsRequest::DescribeAlarmModelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAlarmModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAlarmModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAlarmModelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlarmModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DescribeAlarmModelRequestPrivate
 * \brief The DescribeAlarmModelRequestPrivate class provides private implementation for DescribeAlarmModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeAlarmModelRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DescribeAlarmModelRequestPrivate::DescribeAlarmModelRequestPrivate(
    const IoTEventsRequest::Action action, DescribeAlarmModelRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlarmModelRequest
 * class' copy constructor.
 */
DescribeAlarmModelRequestPrivate::DescribeAlarmModelRequestPrivate(
    const DescribeAlarmModelRequestPrivate &other, DescribeAlarmModelRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
