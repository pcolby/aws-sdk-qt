// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealarmmodelrequest.h"
#include "deletealarmmodelrequest_p.h"
#include "deletealarmmodelresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DeleteAlarmModelRequest
 * \brief The DeleteAlarmModelRequest class provides an interface for IoTEvents DeleteAlarmModel requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::deleteAlarmModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAlarmModelRequest::DeleteAlarmModelRequest(const DeleteAlarmModelRequest &other)
    : IoTEventsRequest(new DeleteAlarmModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAlarmModelRequest object.
 */
DeleteAlarmModelRequest::DeleteAlarmModelRequest()
    : IoTEventsRequest(new DeleteAlarmModelRequestPrivate(IoTEventsRequest::DeleteAlarmModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAlarmModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAlarmModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAlarmModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAlarmModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::DeleteAlarmModelRequestPrivate
 * \brief The DeleteAlarmModelRequestPrivate class provides private implementation for DeleteAlarmModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DeleteAlarmModelRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
DeleteAlarmModelRequestPrivate::DeleteAlarmModelRequestPrivate(
    const IoTEventsRequest::Action action, DeleteAlarmModelRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAlarmModelRequest
 * class' copy constructor.
 */
DeleteAlarmModelRequestPrivate::DeleteAlarmModelRequestPrivate(
    const DeleteAlarmModelRequestPrivate &other, DeleteAlarmModelRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
