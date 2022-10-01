// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
