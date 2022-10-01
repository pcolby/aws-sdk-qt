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

#include "getrequestvalidatorsrequest.h"
#include "getrequestvalidatorsrequest_p.h"
#include "getrequestvalidatorsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorsRequest
 * \brief The GetRequestValidatorsRequest class provides an interface for ApiGateway GetRequestValidators requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getRequestValidators
 */

/*!
 * Constructs a copy of \a other.
 */
GetRequestValidatorsRequest::GetRequestValidatorsRequest(const GetRequestValidatorsRequest &other)
    : ApiGatewayRequest(new GetRequestValidatorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRequestValidatorsRequest object.
 */
GetRequestValidatorsRequest::GetRequestValidatorsRequest()
    : ApiGatewayRequest(new GetRequestValidatorsRequestPrivate(ApiGatewayRequest::GetRequestValidatorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRequestValidatorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRequestValidatorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRequestValidatorsRequest::response(QNetworkReply * const reply) const
{
    return new GetRequestValidatorsResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetRequestValidatorsRequestPrivate
 * \brief The GetRequestValidatorsRequestPrivate class provides private implementation for GetRequestValidatorsRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetRequestValidatorsRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetRequestValidatorsRequestPrivate::GetRequestValidatorsRequestPrivate(
    const ApiGatewayRequest::Action action, GetRequestValidatorsRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRequestValidatorsRequest
 * class' copy constructor.
 */
GetRequestValidatorsRequestPrivate::GetRequestValidatorsRequestPrivate(
    const GetRequestValidatorsRequestPrivate &other, GetRequestValidatorsRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
