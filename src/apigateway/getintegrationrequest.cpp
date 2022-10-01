// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintegrationrequest.h"
#include "getintegrationrequest_p.h"
#include "getintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetIntegrationRequest
 * \brief The GetIntegrationRequest class provides an interface for ApiGateway GetIntegration requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntegrationRequest::GetIntegrationRequest(const GetIntegrationRequest &other)
    : ApiGatewayRequest(new GetIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntegrationRequest object.
 */
GetIntegrationRequest::GetIntegrationRequest()
    : ApiGatewayRequest(new GetIntegrationRequestPrivate(ApiGatewayRequest::GetIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetIntegrationRequestPrivate
 * \brief The GetIntegrationRequestPrivate class provides private implementation for GetIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetIntegrationRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const ApiGatewayRequest::Action action, GetIntegrationRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationRequest
 * class' copy constructor.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const GetIntegrationRequestPrivate &other, GetIntegrationRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
