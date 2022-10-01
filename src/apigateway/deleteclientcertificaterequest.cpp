// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclientcertificaterequest.h"
#include "deleteclientcertificaterequest_p.h"
#include "deleteclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteClientCertificateRequest
 * \brief The DeleteClientCertificateRequest class provides an interface for ApiGateway DeleteClientCertificate requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteClientCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClientCertificateRequest::DeleteClientCertificateRequest(const DeleteClientCertificateRequest &other)
    : ApiGatewayRequest(new DeleteClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClientCertificateRequest object.
 */
DeleteClientCertificateRequest::DeleteClientCertificateRequest()
    : ApiGatewayRequest(new DeleteClientCertificateRequestPrivate(ApiGatewayRequest::DeleteClientCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClientCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClientCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClientCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteClientCertificateRequestPrivate
 * \brief The DeleteClientCertificateRequestPrivate class provides private implementation for DeleteClientCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteClientCertificateRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteClientCertificateRequestPrivate::DeleteClientCertificateRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClientCertificateRequest
 * class' copy constructor.
 */
DeleteClientCertificateRequestPrivate::DeleteClientCertificateRequestPrivate(
    const DeleteClientCertificateRequestPrivate &other, DeleteClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
