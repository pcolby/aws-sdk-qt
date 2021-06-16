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
