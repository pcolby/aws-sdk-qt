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

#include "setv2loggingoptionsrequest.h"
#include "setv2loggingoptionsrequest_p.h"
#include "setv2loggingoptionsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::SetV2LoggingOptionsRequest
 * \brief The SetV2LoggingOptionsRequest class provides an interface for IoT SetV2LoggingOptions requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
 *
 * \sa IoTClient::setV2LoggingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
SetV2LoggingOptionsRequest::SetV2LoggingOptionsRequest(const SetV2LoggingOptionsRequest &other)
    : IoTRequest(new SetV2LoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetV2LoggingOptionsRequest object.
 */
SetV2LoggingOptionsRequest::SetV2LoggingOptionsRequest()
    : IoTRequest(new SetV2LoggingOptionsRequestPrivate(IoTRequest::SetV2LoggingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool SetV2LoggingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetV2LoggingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetV2LoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new SetV2LoggingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::SetV2LoggingOptionsRequestPrivate
 * \brief The SetV2LoggingOptionsRequestPrivate class provides private implementation for SetV2LoggingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a SetV2LoggingOptionsRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
SetV2LoggingOptionsRequestPrivate::SetV2LoggingOptionsRequestPrivate(
    const IoTRequest::Action action, SetV2LoggingOptionsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetV2LoggingOptionsRequest
 * class' copy constructor.
 */
SetV2LoggingOptionsRequestPrivate::SetV2LoggingOptionsRequestPrivate(
    const SetV2LoggingOptionsRequestPrivate &other, SetV2LoggingOptionsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
