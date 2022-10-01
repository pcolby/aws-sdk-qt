// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinputrequest.h"
#include "createinputrequest_p.h"
#include "createinputresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::CreateInputRequest
 * \brief The CreateInputRequest class provides an interface for IoTEvents CreateInput requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::createInput
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInputRequest::CreateInputRequest(const CreateInputRequest &other)
    : IoTEventsRequest(new CreateInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInputRequest object.
 */
CreateInputRequest::CreateInputRequest()
    : IoTEventsRequest(new CreateInputRequestPrivate(IoTEventsRequest::CreateInputAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInputRequest::response(QNetworkReply * const reply) const
{
    return new CreateInputResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::CreateInputRequestPrivate
 * \brief The CreateInputRequestPrivate class provides private implementation for CreateInputRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a CreateInputRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
CreateInputRequestPrivate::CreateInputRequestPrivate(
    const IoTEventsRequest::Action action, CreateInputRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInputRequest
 * class' copy constructor.
 */
CreateInputRequestPrivate::CreateInputRequestPrivate(
    const CreateInputRequestPrivate &other, CreateInputRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
