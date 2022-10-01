// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createalarmmodelrequest.h"
#include "createalarmmodelrequest_p.h"
#include "createalarmmodelresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::CreateAlarmModelRequest
 * \brief The CreateAlarmModelRequest class provides an interface for IoTEvents CreateAlarmModel requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::createAlarmModel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAlarmModelRequest::CreateAlarmModelRequest(const CreateAlarmModelRequest &other)
    : IoTEventsRequest(new CreateAlarmModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAlarmModelRequest object.
 */
CreateAlarmModelRequest::CreateAlarmModelRequest()
    : IoTEventsRequest(new CreateAlarmModelRequestPrivate(IoTEventsRequest::CreateAlarmModelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAlarmModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAlarmModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAlarmModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateAlarmModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::CreateAlarmModelRequestPrivate
 * \brief The CreateAlarmModelRequestPrivate class provides private implementation for CreateAlarmModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a CreateAlarmModelRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
CreateAlarmModelRequestPrivate::CreateAlarmModelRequestPrivate(
    const IoTEventsRequest::Action action, CreateAlarmModelRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAlarmModelRequest
 * class' copy constructor.
 */
CreateAlarmModelRequestPrivate::CreateAlarmModelRequestPrivate(
    const CreateAlarmModelRequestPrivate &other, CreateAlarmModelRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
