/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getsdkrequest.h"
#include "getsdkrequest_p.h"
#include "getsdkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetSdkRequest
 * \brief The GetSdkRequest class provides an interface for ApiGateway GetSdk requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getSdk
 */

/*!
 * Constructs a copy of \a other.
 */
GetSdkRequest::GetSdkRequest(const GetSdkRequest &other)
    : ApiGatewayRequest(new GetSdkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSdkRequest object.
 */
GetSdkRequest::GetSdkRequest()
    : ApiGatewayRequest(new GetSdkRequestPrivate(ApiGatewayRequest::GetSdkAction, this))
{

}

/*!
 * \reimp
 */
bool GetSdkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSdkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSdkRequest::response(QNetworkReply * const reply) const
{
    return new GetSdkResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetSdkRequestPrivate
 * \brief The GetSdkRequestPrivate class provides private implementation for GetSdkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetSdkRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetSdkRequestPrivate::GetSdkRequestPrivate(
    const ApiGatewayRequest::Action action, GetSdkRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSdkRequest
 * class' copy constructor.
 */
GetSdkRequestPrivate::GetSdkRequestPrivate(
    const GetSdkRequestPrivate &other, GetSdkRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
