// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachsecurityprofilerequest.h"
#include "attachsecurityprofilerequest_p.h"
#include "attachsecurityprofileresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::AttachSecurityProfileRequest
 * \brief The AttachSecurityProfileRequest class provides an interface for IoT AttachSecurityProfile requests.
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
 * \sa IoTClient::attachSecurityProfile
 */

/*!
 * Constructs a copy of \a other.
 */
AttachSecurityProfileRequest::AttachSecurityProfileRequest(const AttachSecurityProfileRequest &other)
    : IoTRequest(new AttachSecurityProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachSecurityProfileRequest object.
 */
AttachSecurityProfileRequest::AttachSecurityProfileRequest()
    : IoTRequest(new AttachSecurityProfileRequestPrivate(IoTRequest::AttachSecurityProfileAction, this))
{

}

/*!
 * \reimp
 */
bool AttachSecurityProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachSecurityProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachSecurityProfileRequest::response(QNetworkReply * const reply) const
{
    return new AttachSecurityProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::AttachSecurityProfileRequestPrivate
 * \brief The AttachSecurityProfileRequestPrivate class provides private implementation for AttachSecurityProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a AttachSecurityProfileRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
AttachSecurityProfileRequestPrivate::AttachSecurityProfileRequestPrivate(
    const IoTRequest::Action action, AttachSecurityProfileRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachSecurityProfileRequest
 * class' copy constructor.
 */
AttachSecurityProfileRequestPrivate::AttachSecurityProfileRequestPrivate(
    const AttachSecurityProfileRequestPrivate &other, AttachSecurityProfileRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
