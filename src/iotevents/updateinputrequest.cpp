// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinputrequest.h"
#include "updateinputrequest_p.h"
#include "updateinputresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::UpdateInputRequest
 * \brief The UpdateInputRequest class provides an interface for IoTEvents UpdateInput requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::updateInput
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInputRequest::UpdateInputRequest(const UpdateInputRequest &other)
    : IoTEventsRequest(new UpdateInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInputRequest object.
 */
UpdateInputRequest::UpdateInputRequest()
    : IoTEventsRequest(new UpdateInputRequestPrivate(IoTEventsRequest::UpdateInputAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInputRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInputResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::UpdateInputRequestPrivate
 * \brief The UpdateInputRequestPrivate class provides private implementation for UpdateInputRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a UpdateInputRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
UpdateInputRequestPrivate::UpdateInputRequestPrivate(
    const IoTEventsRequest::Action action, UpdateInputRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInputRequest
 * class' copy constructor.
 */
UpdateInputRequestPrivate::UpdateInputRequestPrivate(
    const UpdateInputRequestPrivate &other, UpdateInputRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
