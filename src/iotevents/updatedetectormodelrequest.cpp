// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedetectormodelrequest.h"
#include "updatedetectormodelrequest_p.h"
#include "updatedetectormodelresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::UpdateDetectorModelRequest
 * \brief The UpdateDetectorModelRequest class provides an interface for IoTEvents UpdateDetectorModel requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::updateDetectorModel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDetectorModelRequest::UpdateDetectorModelRequest(const UpdateDetectorModelRequest &other)
    : IoTEventsRequest(new UpdateDetectorModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDetectorModelRequest object.
 */
UpdateDetectorModelRequest::UpdateDetectorModelRequest()
    : IoTEventsRequest(new UpdateDetectorModelRequestPrivate(IoTEventsRequest::UpdateDetectorModelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDetectorModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDetectorModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDetectorModelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDetectorModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::UpdateDetectorModelRequestPrivate
 * \brief The UpdateDetectorModelRequestPrivate class provides private implementation for UpdateDetectorModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a UpdateDetectorModelRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
UpdateDetectorModelRequestPrivate::UpdateDetectorModelRequestPrivate(
    const IoTEventsRequest::Action action, UpdateDetectorModelRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDetectorModelRequest
 * class' copy constructor.
 */
UpdateDetectorModelRequestPrivate::UpdateDetectorModelRequestPrivate(
    const UpdateDetectorModelRequestPrivate &other, UpdateDetectorModelRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
