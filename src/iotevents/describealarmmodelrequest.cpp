// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
