// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgatewayresponsesrequest.h"
#include "getgatewayresponsesrequest_p.h"
#include "getgatewayresponsesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetGatewayResponsesRequest
 * \brief The GetGatewayResponsesRequest class provides an interface for ApiGateway GetGatewayResponses requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getGatewayResponses
 */

/*!
 * Constructs a copy of \a other.
 */
GetGatewayResponsesRequest::GetGatewayResponsesRequest(const GetGatewayResponsesRequest &other)
    : ApiGatewayRequest(new GetGatewayResponsesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGatewayResponsesRequest object.
 */
GetGatewayResponsesRequest::GetGatewayResponsesRequest()
    : ApiGatewayRequest(new GetGatewayResponsesRequestPrivate(ApiGatewayRequest::GetGatewayResponsesAction, this))
{

}

/*!
 * \reimp
 */
bool GetGatewayResponsesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGatewayResponsesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGatewayResponsesRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayResponsesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetGatewayResponsesRequestPrivate
 * \brief The GetGatewayResponsesRequestPrivate class provides private implementation for GetGatewayResponsesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetGatewayResponsesRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetGatewayResponsesRequestPrivate::GetGatewayResponsesRequestPrivate(
    const ApiGatewayRequest::Action action, GetGatewayResponsesRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayResponsesRequest
 * class' copy constructor.
 */
GetGatewayResponsesRequestPrivate::GetGatewayResponsesRequestPrivate(
    const GetGatewayResponsesRequestPrivate &other, GetGatewayResponsesRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
