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

#include "listthinggroupsforthingrequest.h"
#include "listthinggroupsforthingrequest_p.h"
#include "listthinggroupsforthingresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListThingGroupsForThingRequest
 * \brief The ListThingGroupsForThingRequest class provides an interface for IoT ListThingGroupsForThing requests.
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
 * \sa IoTClient::listThingGroupsForThing
 */

/*!
 * Constructs a copy of \a other.
 */
ListThingGroupsForThingRequest::ListThingGroupsForThingRequest(const ListThingGroupsForThingRequest &other)
    : IoTRequest(new ListThingGroupsForThingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListThingGroupsForThingRequest object.
 */
ListThingGroupsForThingRequest::ListThingGroupsForThingRequest()
    : IoTRequest(new ListThingGroupsForThingRequestPrivate(IoTRequest::ListThingGroupsForThingAction, this))
{

}

/*!
 * \reimp
 */
bool ListThingGroupsForThingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListThingGroupsForThingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListThingGroupsForThingRequest::response(QNetworkReply * const reply) const
{
    return new ListThingGroupsForThingResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::ListThingGroupsForThingRequestPrivate
 * \brief The ListThingGroupsForThingRequestPrivate class provides private implementation for ListThingGroupsForThingRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 *
 * Constructs a ListThingGroupsForThingRequestPrivate object for IoT \a action with,
 * public implementation \a q.
 */
ListThingGroupsForThingRequestPrivate::ListThingGroupsForThingRequestPrivate(
    const IoTRequest::Action action, ListThingGroupsForThingRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListThingGroupsForThingRequest
 * class' copy constructor.
 */
ListThingGroupsForThingRequestPrivate::ListThingGroupsForThingRequestPrivate(
    const ListThingGroupsForThingRequestPrivate &other, ListThingGroupsForThingRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
