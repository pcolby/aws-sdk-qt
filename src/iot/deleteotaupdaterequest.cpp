/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteotaupdaterequest.h"
#include "deleteotaupdaterequest_p.h"
#include "deleteotaupdateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteOTAUpdateRequest
 * \brief The DeleteOTAUpdateRequest class provides an interface for IoT DeleteOTAUpdate requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::deleteOTAUpdate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteOTAUpdateRequest::DeleteOTAUpdateRequest(const DeleteOTAUpdateRequest &other)
    : IoTRequest(new DeleteOTAUpdateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteOTAUpdateRequest object.
 */
DeleteOTAUpdateRequest::DeleteOTAUpdateRequest()
    : IoTRequest(new DeleteOTAUpdateRequestPrivate(IoTRequest::DeleteOTAUpdateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteOTAUpdateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteOTAUpdateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteOTAUpdateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOTAUpdateResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DeleteOTAUpdateRequestPrivate
 * \brief The DeleteOTAUpdateRequestPrivate class provides private implementation for DeleteOTAUpdateRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 *
 * Constructs a DeleteOTAUpdateRequestPrivate object for IoT \a action with,
 * public implementation \a q.
 */
DeleteOTAUpdateRequestPrivate::DeleteOTAUpdateRequestPrivate(
    const IoTRequest::Action action, DeleteOTAUpdateRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteOTAUpdateRequest
 * class' copy constructor.
 */
DeleteOTAUpdateRequestPrivate::DeleteOTAUpdateRequestPrivate(
    const DeleteOTAUpdateRequestPrivate &other, DeleteOTAUpdateRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
