// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizerrequest.h"
#include "getauthorizerrequest_p.h"
#include "getauthorizerresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizerRequest
 * \brief The GetAuthorizerRequest class provides an interface for ApiGatewayV2 GetAuthorizer requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
GetAuthorizerRequest::GetAuthorizerRequest(const GetAuthorizerRequest &other)
    : ApiGatewayV2Request(new GetAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAuthorizerRequest object.
 */
GetAuthorizerRequest::GetAuthorizerRequest()
    : ApiGatewayV2Request(new GetAuthorizerRequestPrivate(ApiGatewayV2Request::GetAuthorizerAction, this))
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
 * \class QtAws::ApiGatewayV2::GetAuthorizerRequestPrivate
 * \brief The GetAuthorizerRequestPrivate class provides private implementation for GetAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetAuthorizerRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetAuthorizerRequestPrivate::GetAuthorizerRequestPrivate(
    const ApiGatewayV2Request::Action action, GetAuthorizerRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
