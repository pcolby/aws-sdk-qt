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

#include "updatethingshadowrequest.h"
#include "updatethingshadowrequest_p.h"
#include "updatethingshadowresponse.h"
#include "iotdataplanerequest_p.h"

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::UpdateThingShadowRequest
 * \brief The UpdateThingShadowRequest class provides an interface for IoTDataPlane UpdateThingShadow requests.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT-Data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. It implements a broker for applications and things to publish
 *  messages over HTTP (Publish) and retrieve, update, and delete shadows. A shadow is a persistent representation of your
 *  things and their state in the AWS
 * 
 *  cloud>
 * 
 *  Find the endpoint address for actions in the AWS IoT data plane by running this CLI
 * 
 *  command>
 * 
 *  <code>aws iot describe-endpoint --endpoint-type iot:Data-ATS</code>
 * 
 *  </p
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">AWS Signature
 *  Version 4</a> to sign requests is:
 *
 * \sa IoTDataPlaneClient::updateThingShadow
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThingShadowRequest::UpdateThingShadowRequest(const UpdateThingShadowRequest &other)
    : IoTDataPlaneRequest(new UpdateThingShadowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThingShadowRequest object.
 */
UpdateThingShadowRequest::UpdateThingShadowRequest()
    : IoTDataPlaneRequest(new UpdateThingShadowRequestPrivate(IoTDataPlaneRequest::UpdateThingShadowAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateThingShadowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateThingShadowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThingShadowRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThingShadowResponse(*this, reply);
}

/*!
 * \class QtAws::IoTDataPlane::UpdateThingShadowRequestPrivate
 * \brief The UpdateThingShadowRequestPrivate class provides private implementation for UpdateThingShadowRequest.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a UpdateThingShadowRequestPrivate object for IoTDataPlane \a action,
 * with public implementation \a q.
 */
UpdateThingShadowRequestPrivate::UpdateThingShadowRequestPrivate(
    const IoTDataPlaneRequest::Action action, UpdateThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateThingShadowRequest
 * class' copy constructor.
 */
UpdateThingShadowRequestPrivate::UpdateThingShadowRequestPrivate(
    const UpdateThingShadowRequestPrivate &other, UpdateThingShadowRequest * const q)
    : IoTDataPlaneRequestPrivate(other, q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
