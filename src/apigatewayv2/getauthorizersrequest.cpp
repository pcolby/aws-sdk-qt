// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizersrequest.h"
#include "getauthorizersrequest_p.h"
#include "getauthorizersresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizersRequest
 * \brief The GetAuthorizersRequest class provides an interface for ApiGatewayV2 GetAuthorizers requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getAuthorizers
 */

/*!
 * Constructs a copy of \a other.
 */
GetAuthorizersRequest::GetAuthorizersRequest(const GetAuthorizersRequest &other)
    : ApiGatewayV2Request(new GetAuthorizersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAuthorizersRequest object.
 */
GetAuthorizersRequest::GetAuthorizersRequest()
    : ApiGatewayV2Request(new GetAuthorizersRequestPrivate(ApiGatewayV2Request::GetAuthorizersAction, this))
{

}

/*!
 * \reimp
 */
bool GetAuthorizersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAuthorizersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAuthorizersRequest::response(QNetworkReply * const reply) const
{
    return new GetAuthorizersResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetAuthorizersRequestPrivate
 * \brief The GetAuthorizersRequestPrivate class provides private implementation for GetAuthorizersRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetAuthorizersRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetAuthorizersRequestPrivate::GetAuthorizersRequestPrivate(
    const ApiGatewayV2Request::Action action, GetAuthorizersRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAuthorizersRequest
 * class' copy constructor.
 */
GetAuthorizersRequestPrivate::GetAuthorizersRequestPrivate(
    const GetAuthorizersRequestPrivate &other, GetAuthorizersRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
