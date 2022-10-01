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

#include "getstagesrequest.h"
#include "getstagesrequest_p.h"
#include "getstagesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetStagesRequest
 * \brief The GetStagesRequest class provides an interface for ApiGateway GetStages requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getStages
 */

/*!
 * Constructs a copy of \a other.
 */
GetStagesRequest::GetStagesRequest(const GetStagesRequest &other)
    : ApiGatewayRequest(new GetStagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStagesRequest object.
 */
GetStagesRequest::GetStagesRequest()
    : ApiGatewayRequest(new GetStagesRequestPrivate(ApiGatewayRequest::GetStagesAction, this))
{

}

/*!
 * \reimp
 */
bool GetStagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStagesRequest::response(QNetworkReply * const reply) const
{
    return new GetStagesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetStagesRequestPrivate
 * \brief The GetStagesRequestPrivate class provides private implementation for GetStagesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetStagesRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const ApiGatewayRequest::Action action, GetStagesRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStagesRequest
 * class' copy constructor.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const GetStagesRequestPrivate &other, GetStagesRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
