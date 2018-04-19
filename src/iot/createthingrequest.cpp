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

#include "createthingrequest.h"
#include "createthingrequest_p.h"
#include "createthingresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateThingRequest
 * \brief The CreateThingRequest class provides an interface for IoT CreateThing requests.
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
 * \sa IoTClient::createThing
 */

/*!
 * Constructs a copy of \a other.
 */
CreateThingRequest::CreateThingRequest(const CreateThingRequest &other)
    : IoTRequest(new CreateThingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateThingRequest object.
 */
CreateThingRequest::CreateThingRequest()
    : IoTRequest(new CreateThingRequestPrivate(IoTRequest::CreateThingAction, this))
{

}

/*!
 * \reimp
 */
bool CreateThingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateThingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateThingRequest::response(QNetworkReply * const reply) const
{
    return new CreateThingResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::CreateThingRequestPrivate
 * \brief The CreateThingRequestPrivate class provides private implementation for CreateThingRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 *
 * Constructs a CreateThingRequestPrivate object for IoT \a action with,
 * public implementation \a q.
 */
CreateThingRequestPrivate::CreateThingRequestPrivate(
    const IoTRequest::Action action, CreateThingRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateThingRequest
 * class' copy constructor.
 */
CreateThingRequestPrivate::CreateThingRequestPrivate(
    const CreateThingRequestPrivate &other, CreateThingRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
