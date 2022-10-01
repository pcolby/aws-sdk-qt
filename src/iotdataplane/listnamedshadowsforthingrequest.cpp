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

#include "listnamedshadowsforthingrequest.h"
#include "listnamedshadowsforthingrequest_p.h"
#include "listnamedshadowsforthingresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::ListNamedShadowsForThingRequest
 * \brief The ListNamedShadowsForThingRequest class provides an interface for IoTDataPlane ListNamedShadowsForThing requests.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>IoT data</fullname>
 * 
 *  IoT data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. It implements a broker for applications and
 *  things to publish messages over HTTP (Publish) and retrieve, update, and delete shadows. A shadow is a persistent
 *  representation of your things and their state in the Amazon Web Services
 * 
 *  cloud>
 * 
 *  Find the endpoint address for actions in IoT data by running this CLI
 * 
 *  command>
 * 
 *  <code>aws iot describe-endpoint --endpoint-type iot:Data-ATS</code>
 * 
 *  </p
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  ServicesSignature Version 4</a> to sign requests is:
 *
 * \sa IoTDataPlaneClient::listNamedShadowsForThing
 */

/*!
 * Constructs a copy of \a other.
 */
ListNamedShadowsForThingRequest::ListNamedShadowsForThingRequest(const ListNamedShadowsForThingRequest &other)
    : IoTDataPlaneRequest(new ListNamedShadowsForThingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNamedShadowsForThingRequest object.
 */
ListNamedShadowsForThingRequest::ListNamedShadowsForThingRequest()
    : IoTDataPlaneRequest(new ListNamedShadowsForThingRequestPrivate(IoTDataPlaneRequest::ListNamedShadowsForThingAction, this))
{

}

/*!
 * \reimp
 */
bool ListNamedShadowsForThingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNamedShadowsForThingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNamedShadowsForThingRequest::response(QNetworkReply * const reply) const
{
    return new ListNamedShadowsForThingResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDataPlane::ListNamedShadowsForThingRequestPrivate
 * \brief The ListNamedShadowsForThingRequestPrivate class provides private implementation for ListNamedShadowsForThingRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a ListNamedShadowsForThingRequestPrivate object for IoTDataPlane \a action,
 * with public implementation \a q.
 */
ListNamedShadowsForThingRequestPrivate::ListNamedShadowsForThingRequestPrivate(
    const IoTDataPlaneRequest::Action action, ListNamedShadowsForThingRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNamedShadowsForThingRequest
 * class' copy constructor.
 */
ListNamedShadowsForThingRequestPrivate::ListNamedShadowsForThingRequestPrivate(
    const ListNamedShadowsForThingRequestPrivate &other, ListNamedShadowsForThingRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
