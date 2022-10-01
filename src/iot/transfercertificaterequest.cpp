// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "transfercertificaterequest.h"
#include "transfercertificaterequest_p.h"
#include "transfercertificateresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::TransferCertificateRequest
 * \brief The TransferCertificateRequest class provides an interface for IoT TransferCertificate requests.
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
 * \sa IoTClient::transferCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
TransferCertificateRequest::TransferCertificateRequest(const TransferCertificateRequest &other)
    : IoTRequest(new TransferCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TransferCertificateRequest object.
 */
TransferCertificateRequest::TransferCertificateRequest()
    : IoTRequest(new TransferCertificateRequestPrivate(IoTRequest::TransferCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool TransferCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TransferCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TransferCertificateRequest::response(QNetworkReply * const reply) const
{
    return new TransferCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::TransferCertificateRequestPrivate
 * \brief The TransferCertificateRequestPrivate class provides private implementation for TransferCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a TransferCertificateRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
TransferCertificateRequestPrivate::TransferCertificateRequestPrivate(
    const IoTRequest::Action action, TransferCertificateRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TransferCertificateRequest
 * class' copy constructor.
 */
TransferCertificateRequestPrivate::TransferCertificateRequestPrivate(
    const TransferCertificateRequestPrivate &other, TransferCertificateRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
