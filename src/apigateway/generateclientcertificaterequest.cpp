// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generateclientcertificaterequest.h"
#include "generateclientcertificaterequest_p.h"
#include "generateclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GenerateClientCertificateRequest
 * \brief The GenerateClientCertificateRequest class provides an interface for ApiGateway GenerateClientCertificate requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::generateClientCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateClientCertificateRequest::GenerateClientCertificateRequest(const GenerateClientCertificateRequest &other)
    : ApiGatewayRequest(new GenerateClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateClientCertificateRequest object.
 */
GenerateClientCertificateRequest::GenerateClientCertificateRequest()
    : ApiGatewayRequest(new GenerateClientCertificateRequestPrivate(ApiGatewayRequest::GenerateClientCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateClientCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateClientCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GenerateClientCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GenerateClientCertificateRequestPrivate
 * \brief The GenerateClientCertificateRequestPrivate class provides private implementation for GenerateClientCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GenerateClientCertificateRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GenerateClientCertificateRequestPrivate::GenerateClientCertificateRequestPrivate(
    const ApiGatewayRequest::Action action, GenerateClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateClientCertificateRequest
 * class' copy constructor.
 */
GenerateClientCertificateRequestPrivate::GenerateClientCertificateRequestPrivate(
    const GenerateClientCertificateRequestPrivate &other, GenerateClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
