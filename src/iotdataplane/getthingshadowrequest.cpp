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
