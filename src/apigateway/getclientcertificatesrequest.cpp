// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclientcertificatesrequest.h"
#include "getclientcertificatesrequest_p.h"
#include "getclientcertificatesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetClientCertificatesRequest
 * \brief The GetClientCertificatesRequest class provides an interface for ApiGateway GetClientCertificates requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getClientCertificates
 */

/*!
 * Constructs a copy of \a other.
 */
GetClientCertificatesRequest::GetClientCertificatesRequest(const GetClientCertificatesRequest &other)
    : ApiGatewayRequest(new GetClientCertificatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetClientCertificatesRequest object.
 */
GetClientCertificatesRequest::GetClientCertificatesRequest()
    : ApiGatewayRequest(new GetClientCertificatesRequestPrivate(ApiGatewayRequest::GetClientCertificatesAction, this))
{

}

/*!
 * \reimp
 */
bool GetClientCertificatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetClientCertificatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClientCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new GetClientCertificatesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetClientCertificatesRequestPrivate
 * \brief The GetClientCertificatesRequestPrivate class provides private implementation for GetClientCertificatesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetClientCertificatesRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetClientCertificatesRequestPrivate::GetClientCertificatesRequestPrivate(
    const ApiGatewayRequest::Action action, GetClientCertificatesRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetClientCertificatesRequest
 * class' copy constructor.
 */
GetClientCertificatesRequestPrivate::GetClientCertificatesRequestPrivate(
    const GetClientCertificatesRequestPrivate &other, GetClientCertificatesRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
