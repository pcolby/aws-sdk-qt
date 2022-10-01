// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizerrequest.h"
#include "getauthorizerrequest_p.h"
#include "getauthorizerresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetAuthorizerRequest
 * \brief The GetAuthorizerRequest class provides an interface for ApiGateway GetAuthorizer requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
GetAuthorizerRequest::GetAuthorizerRequest(const GetAuthorizerRequest &other)
    : ApiGatewayRequest(new GetAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAuthorizerRequest object.
 */
GetAuthorizerRequest::GetAuthorizerRequest()
    : ApiGatewayRequest(new GetAuthorizerRequestPrivate(ApiGatewayRequest::GetAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool GetAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new GetAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetAuthorizerRequestPrivate
 * \brief The GetAuthorizerRequestPrivate class provides private implementation for GetAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetAuthorizerRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetAuthorizerRequestPrivate::GetAuthorizerRequestPrivate(
    const ApiGatewayRequest::Action action, GetAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAuthorizerRequest
 * class' copy constructor.
 */
GetAuthorizerRequestPrivate::GetAuthorizerRequestPrivate(
    const GetAuthorizerRequestPrivate &other, GetAuthorizerRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
