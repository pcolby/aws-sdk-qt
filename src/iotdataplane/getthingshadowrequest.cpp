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

#include "getthingshadowrequest.h"
#include "getthingshadowrequest_p.h"
#include "getthingshadowresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::GetThingShadowRequest
 * \brief The GetThingShadowRequest class provides an interface for IoTDataPlane GetThingShadow requests.
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
 * \sa IoTDataPlaneClient::getThingShadow
 */

/*!
 * Constructs a copy of \a other.
 */
GetThingShadowRequest::GetThingShadowRequest(const GetThingShadowRequest &other)
    : IoTDataPlaneRequest(new GetThingShadowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetThingShadowRequest object.
 */
GetThingShadowRequest::GetThingShadowRequest()
    : IoTDataPlaneRequest(new GetThingShadowRequestPrivate(IoTDataPlaneRequest::GetThingShadowAction, this))
{

}

/*!
 * \reimp
 */
bool GetThingShadowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetThingShadowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetThingShadowRequest::response(QNetworkReply * const reply) const
{
    return new GetThingShadowResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDataPlane::GetThingShadowRequestPrivate
 * \brief The GetThingShadowRequestPrivate class provides private implementation for GetThingShadowRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a GetThingShadowRequestPrivate object for IoTDataPlane \a action,
 * with public implementation \a q.
 */
GetThingShadowRequestPrivate::GetThingShadowRequestPrivate(
    const IoTDataPlaneRequest::Action action, GetThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetThingShadowRequest
 * class' copy constructor.
 */
GetThingShadowRequestPrivate::GetThingShadowRequestPrivate(
    const GetThingShadowRequestPrivate &other, GetThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
