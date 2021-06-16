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

#include "createdetectormodelrequest.h"
#include "createdetectormodelrequest_p.h"
#include "createdetectormodelresponse.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::CreateDetectorModelRequest
 * \brief The CreateDetectorModelRequest class provides an interface for IoTEvents CreateDetectorModel requests.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::createDetectorModel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDetectorModelRequest::CreateDetectorModelRequest(const CreateDetectorModelRequest &other)
    : IoTEventsRequest(new CreateDetectorModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDetectorModelRequest object.
 */
CreateDetectorModelRequest::CreateDetectorModelRequest()
    : IoTEventsRequest(new CreateDetectorModelRequestPrivate(IoTEventsRequest::CreateDetectorModelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDetectorModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDetectorModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDetectorModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateDetectorModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTEvents::CreateDetectorModelRequestPrivate
 * \brief The CreateDetectorModelRequestPrivate class provides private implementation for CreateDetectorModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a CreateDetectorModelRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
CreateDetectorModelRequestPrivate::CreateDetectorModelRequestPrivate(
    const IoTEventsRequest::Action action, CreateDetectorModelRequest * const q)
    : IoTEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDetectorModelRequest
 * class' copy constructor.
 */
CreateDetectorModelRequestPrivate::CreateDetectorModelRequestPrivate(
    const CreateDetectorModelRequestPrivate &other, CreateDetectorModelRequest * const q)
    : IoTEventsRequestPrivate(other, q)
{

}

} // namespace IoTEvents
} // namespace QtAws
