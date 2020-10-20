/*
    Copyright 2013-2020 Paul Colby

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

#include "deletethingshadowrequest.h"
#include "deletethingshadowrequest_p.h"
#include "deletethingshadowresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::DeleteThingShadowRequest
 * \brief The DeleteThingShadowRequest class provides an interface for IoTDataPlane DeleteThingShadow requests.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT-Data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. It implements a broker for applications and things to publish
 *  messages over HTTP (Publish) and retrieve, update, and delete thing shadows. A thing shadow is a persistent
 *  representation of your things and their state in the AWS
 *
 * \sa IoTDataPlaneClient::deleteThingShadow
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThingShadowRequest::DeleteThingShadowRequest(const DeleteThingShadowRequest &other)
    : IoTDataPlaneRequest(new DeleteThingShadowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThingShadowRequest object.
 */
DeleteThingShadowRequest::DeleteThingShadowRequest()
    : IoTDataPlaneRequest(new DeleteThingShadowRequestPrivate(IoTDataPlaneRequest::DeleteThingShadowAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThingShadowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThingShadowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThingShadowRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThingShadowResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDataPlane::DeleteThingShadowRequestPrivate
 * \brief The DeleteThingShadowRequestPrivate class provides private implementation for DeleteThingShadowRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a DeleteThingShadowRequestPrivate object for IoTDataPlane \a action,
 * with public implementation \a q.
 */
DeleteThingShadowRequestPrivate::DeleteThingShadowRequestPrivate(
    const IoTDataPlaneRequest::Action action, DeleteThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThingShadowRequest
 * class' copy constructor.
 */
DeleteThingShadowRequestPrivate::DeleteThingShadowRequestPrivate(
    const DeleteThingShadowRequestPrivate &other, DeleteThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
