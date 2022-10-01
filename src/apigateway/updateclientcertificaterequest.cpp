// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclientcertificaterequest.h"
#include "updateclientcertificaterequest_p.h"
#include "updateclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateClientCertificateRequest
 * \brief The UpdateClientCertificateRequest class provides an interface for ApiGateway UpdateClientCertificate requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateClientCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClientCertificateRequest::UpdateClientCertificateRequest(const UpdateClientCertificateRequest &other)
    : ApiGatewayRequest(new UpdateClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClientCertificateRequest object.
 */
UpdateClientCertificateRequest::UpdateClientCertificateRequest()
    : ApiGatewayRequest(new UpdateClientCertificateRequestPrivate(ApiGatewayRequest::UpdateClientCertificateAction, this))
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
 * \class QtAws::ApiGateway::UpdateClientCertificateRequestPrivate
 * \brief The UpdateClientCertificateRequestPrivate class provides private implementation for UpdateClientCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateClientCertificateRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
UpdateClientCertificateRequestPrivate::UpdateClientCertificateRequestPrivate(
    const ApiGatewayRequest::Action action, UpdateClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
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
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
