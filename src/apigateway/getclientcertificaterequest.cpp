// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclientcertificaterequest.h"
#include "getclientcertificaterequest_p.h"
#include "getclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetClientCertificateRequest
 * \brief The GetClientCertificateRequest class provides an interface for ApiGateway GetClientCertificate requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getClientCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
GetClientCertificateRequest::GetClientCertificateRequest(const GetClientCertificateRequest &other)
    : ApiGatewayRequest(new GetClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetClientCertificateRequest object.
 */
GetClientCertificateRequest::GetClientCertificateRequest()
    : ApiGatewayRequest(new GetClientCertificateRequestPrivate(ApiGatewayRequest::GetClientCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool GetClientCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetClientCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new GetClientCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetClientCertificateRequestPrivate
 * \brief The GetClientCertificateRequestPrivate class provides private implementation for GetClientCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetClientCertificateRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetClientCertificateRequestPrivate::GetClientCertificateRequestPrivate(
    const ApiGatewayRequest::Action action, GetClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetClientCertificateRequest
 * class' copy constructor.
 */
GetClientCertificateRequestPrivate::GetClientCertificateRequestPrivate(
    const GetClientCertificateRequestPrivate &other, GetClientCertificateRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
