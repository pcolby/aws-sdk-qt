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
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">AWS IoT Core Endpoints and Quotas</a>. You must use
 *  the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">AWS Signature
 *  Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
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
