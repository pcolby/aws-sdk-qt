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

#include "getsdktyperequest.h"
#include "getsdktyperequest_p.h"
#include "getsdktyperesponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetSdkTypeRequest
 * \brief The GetSdkTypeRequest class provides an interface for ApiGateway GetSdkType requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getSdkType
 */

/*!
 * Constructs a copy of \a other.
 */
GetSdkTypeRequest::GetSdkTypeRequest(const GetSdkTypeRequest &other)
    : ApiGatewayRequest(new GetSdkTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSdkTypeRequest object.
 */
GetSdkTypeRequest::GetSdkTypeRequest()
    : ApiGatewayRequest(new GetSdkTypeRequestPrivate(ApiGatewayRequest::GetSdkTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetSdkTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSdkTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSdkTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetSdkTypeResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetSdkTypeRequestPrivate
 * \brief The GetSdkTypeRequestPrivate class provides private implementation for GetSdkTypeRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetSdkTypeRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetSdkTypeRequestPrivate::GetSdkTypeRequestPrivate(
    const ApiGatewayRequest::Action action, GetSdkTypeRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSdkTypeRequest
 * class' copy constructor.
 */
GetSdkTypeRequestPrivate::GetSdkTypeRequestPrivate(
    const GetSdkTypeRequestPrivate &other, GetSdkTypeRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
