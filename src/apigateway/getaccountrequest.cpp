// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountrequest.h"
#include "getaccountrequest_p.h"
#include "getaccountresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetAccountRequest
 * \brief The GetAccountRequest class provides an interface for ApiGateway GetAccount requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountRequest::GetAccountRequest(const GetAccountRequest &other)
    : ApiGatewayRequest(new GetAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountRequest object.
 */
GetAccountRequest::GetAccountRequest()
    : ApiGatewayRequest(new GetAccountRequestPrivate(ApiGatewayRequest::GetAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetAccountRequestPrivate
 * \brief The GetAccountRequestPrivate class provides private implementation for GetAccountRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetAccountRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetAccountRequestPrivate::GetAccountRequestPrivate(
    const ApiGatewayRequest::Action action, GetAccountRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountRequest
 * class' copy constructor.
 */
GetAccountRequestPrivate::GetAccountRequestPrivate(
    const GetAccountRequestPrivate &other, GetAccountRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
