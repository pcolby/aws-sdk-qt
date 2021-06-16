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

#include "updatealarmmodelrequest.h"
#include "updatealarmmodelrequest_p.h"
#include "updatealarmmodelresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::UpdateAlarmModelRequest
 * \brief The UpdateAlarmModelRequest class provides an interface for IoTEvents UpdateAlarmModel requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::updateAlarmModel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAlarmModelRequest::UpdateAlarmModelRequest(const UpdateAlarmModelRequest &other)
    : IoTEventsRequest(new UpdateAlarmModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAlarmModelRequest object.
 */
UpdateAlarmModelRequest::UpdateAlarmModelRequest()
    : IoTEventsRequest(new UpdateAlarmModelRequestPrivate(IoTEventsRequest::UpdateAlarmModelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAlarmModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAlarmModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAlarmModelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAlarmModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::UpdateAlarmModelRequestPrivate
 * \brief The UpdateAlarmModelRequestPrivate class provides private implementation for UpdateAlarmModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a UpdateAlarmModelRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
UpdateAlarmModelRequestPrivate::UpdateAlarmModelRequestPrivate(
    const IoTEventsRequest::Action action, UpdateAlarmModelRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAlarmModelRequest
 * class' copy constructor.
 */
UpdateAlarmModelRequestPrivate::UpdateAlarmModelRequestPrivate(
    const UpdateAlarmModelRequestPrivate &other, UpdateAlarmModelRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
