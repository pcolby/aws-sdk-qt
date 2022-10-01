// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrestapisrequest.h"
#include "getrestapisrequest_p.h"
#include "getrestapisresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRestApisRequest
 * \brief The GetRestApisRequest class provides an interface for ApiGateway GetRestApis requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRestApis
 */

/*!
 * Constructs a copy of \a other.
 */
GetRestApisRequest::GetRestApisRequest(const GetRestApisRequest &other)
    : ApiGatewayRequest(new GetRestApisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRestApisRequest object.
 */
GetRestApisRequest::GetRestApisRequest()
    : ApiGatewayRequest(new GetRestApisRequestPrivate(ApiGatewayRequest::GetRestApisAction, this))
{

}

/*!
 * \reimp
 */
bool GetRestApisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRestApisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRestApisRequest::response(QNetworkReply * const reply) const
{
    return new GetRestApisResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetRestApisRequestPrivate
 * \brief The GetRestApisRequestPrivate class provides private implementation for GetRestApisRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRestApisRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetRestApisRequestPrivate::GetRestApisRequestPrivate(
    const ApiGatewayRequest::Action action, GetRestApisRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRestApisRequest
 * class' copy constructor.
 */
GetRestApisRequestPrivate::GetRestApisRequestPrivate(
    const GetRestApisRequestPrivate &other, GetRestApisRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
