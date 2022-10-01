// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecertificaterequest.h"
#include "updatecertificaterequest_p.h"
#include "updatecertificateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateCertificateRequest
 * \brief The UpdateCertificateRequest class provides an interface for IoT UpdateCertificate requests.
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
 * \sa IoTClient::updateCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCertificateRequest::UpdateCertificateRequest(const UpdateCertificateRequest &other)
    : IoTRequest(new UpdateCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCertificateRequest object.
 */
UpdateCertificateRequest::UpdateCertificateRequest()
    : IoTRequest(new UpdateCertificateRequestPrivate(IoTRequest::UpdateCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::UpdateCertificateRequestPrivate
 * \brief The UpdateCertificateRequestPrivate class provides private implementation for UpdateCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a UpdateCertificateRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
UpdateCertificateRequestPrivate::UpdateCertificateRequestPrivate(
    const IoTRequest::Action action, UpdateCertificateRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCertificateRequest
 * class' copy constructor.
 */
UpdateCertificateRequestPrivate::UpdateCertificateRequestPrivate(
    const UpdateCertificateRequestPrivate &other, UpdateCertificateRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
