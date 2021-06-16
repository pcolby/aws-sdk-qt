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

#include "updateclientcertificaterequest.h"
#include "updateclientcertificaterequest_p.h"
#include "updateclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateClientCertificateRequest
 * \brief The UpdateClientCertificateRequest class provides an interface for APIGateway UpdateClientCertificate requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateClientCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClientCertificateRequest::UpdateClientCertificateRequest(const UpdateClientCertificateRequest &other)
    : APIGatewayRequest(new UpdateClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClientCertificateRequest object.
 */
UpdateClientCertificateRequest::UpdateClientCertificateRequest()
    : APIGatewayRequest(new UpdateClientCertificateRequestPrivate(APIGatewayRequest::UpdateClientCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClientCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClientCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClientCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::UpdateClientCertificateRequestPrivate
 * \brief The UpdateClientCertificateRequestPrivate class provides private implementation for UpdateClientCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateClientCertificateRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
UpdateClientCertificateRequestPrivate::UpdateClientCertificateRequestPrivate(
    const APIGatewayRequest::Action action, UpdateClientCertificateRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClientCertificateRequest
 * class' copy constructor.
 */
UpdateClientCertificateRequestPrivate::UpdateClientCertificateRequestPrivate(
    const UpdateClientCertificateRequestPrivate &other, UpdateClientCertificateRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
