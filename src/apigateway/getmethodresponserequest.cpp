// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmethodresponserequest.h"
#include "getmethodresponserequest_p.h"
#include "getmethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetMethodResponseRequest
 * \brief The GetMethodResponseRequest class provides an interface for ApiGateway GetMethodResponse requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getMethodResponse
 */

/*!
 * Constructs a copy of \a other.
 */
GetMethodResponseRequest::GetMethodResponseRequest(const GetMethodResponseRequest &other)
    : ApiGatewayRequest(new GetMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMethodResponseRequest object.
 */
GetMethodResponseRequest::GetMethodResponseRequest()
    : ApiGatewayRequest(new GetMethodResponseRequestPrivate(ApiGatewayRequest::GetMethodResponseAction, this))
{

}

/*!
 * \reimp
 */
bool GetMethodResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMethodResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetMethodResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetMethodResponseRequestPrivate
 * \brief The GetMethodResponseRequestPrivate class provides private implementation for GetMethodResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetMethodResponseRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetMethodResponseRequestPrivate::GetMethodResponseRequestPrivate(
    const ApiGatewayRequest::Action action, GetMethodResponseRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMethodResponseRequest
 * class' copy constructor.
 */
GetMethodResponseRequestPrivate::GetMethodResponseRequestPrivate(
    const GetMethodResponseRequestPrivate &other, GetMethodResponseRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
