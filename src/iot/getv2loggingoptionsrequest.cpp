// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getv2loggingoptionsrequest.h"
#include "getv2loggingoptionsrequest_p.h"
#include "getv2loggingoptionsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetV2LoggingOptionsRequest
 * \brief The GetV2LoggingOptionsRequest class provides an interface for IoT GetV2LoggingOptions requests.
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
 * \sa IoTClient::getV2LoggingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
GetV2LoggingOptionsRequest::GetV2LoggingOptionsRequest(const GetV2LoggingOptionsRequest &other)
    : IoTRequest(new GetV2LoggingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetV2LoggingOptionsRequest object.
 */
GetV2LoggingOptionsRequest::GetV2LoggingOptionsRequest()
    : IoTRequest(new GetV2LoggingOptionsRequestPrivate(IoTRequest::GetV2LoggingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetV2LoggingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetV2LoggingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetV2LoggingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new GetV2LoggingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::GetV2LoggingOptionsRequestPrivate
 * \brief The GetV2LoggingOptionsRequestPrivate class provides private implementation for GetV2LoggingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a GetV2LoggingOptionsRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
GetV2LoggingOptionsRequestPrivate::GetV2LoggingOptionsRequestPrivate(
    const IoTRequest::Action action, GetV2LoggingOptionsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetV2LoggingOptionsRequest
 * class' copy constructor.
 */
GetV2LoggingOptionsRequestPrivate::GetV2LoggingOptionsRequestPrivate(
    const GetV2LoggingOptionsRequestPrivate &other, GetV2LoggingOptionsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
