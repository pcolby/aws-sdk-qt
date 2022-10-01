// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgatewayresponserequest.h"
#include "getgatewayresponserequest_p.h"
#include "getgatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetGatewayResponseRequest
 * \brief The GetGatewayResponseRequest class provides an interface for ApiGateway GetGatewayResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getGatewayResponse
 */

/*!
 * Constructs a copy of \a other.
 */
GetGatewayResponseRequest::GetGatewayResponseRequest(const GetGatewayResponseRequest &other)
    : ApiGatewayRequest(new GetGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGatewayResponseRequest object.
 */
GetGatewayResponseRequest::GetGatewayResponseRequest()
    : ApiGatewayRequest(new GetGatewayResponseRequestPrivate(ApiGatewayRequest::GetGatewayResponseAction, this))
{

}

/*!
 * \reimp
 */
bool GetGatewayResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGatewayResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetGatewayResponseRequestPrivate
 * \brief The GetGatewayResponseRequestPrivate class provides private implementation for GetGatewayResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetGatewayResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetGatewayResponseRequestPrivate::GetGatewayResponseRequestPrivate(
    const ApiGatewayRequest::Action action, GetGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayResponseRequest
 * class' copy constructor.
 */
GetGatewayResponseRequestPrivate::GetGatewayResponseRequestPrivate(
    const GetGatewayResponseRequestPrivate &other, GetGatewayResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
