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
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetRequestValidatorsRequest
 * \brief The GetRequestValidatorsRequest class provides an interface for APIGateway GetRequestValidators requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getRequestValidators
 */

/*!
 * Constructs a copy of \a other.
 */
GetRequestValidatorsRequest::GetRequestValidatorsRequest(const GetRequestValidatorsRequest &other)
    : APIGatewayRequest(new GetRequestValidatorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRequestValidatorsRequest object.
 */
GetRequestValidatorsRequest::GetRequestValidatorsRequest()
    : APIGatewayRequest(new GetRequestValidatorsRequestPrivate(APIGatewayRequest::GetRequestValidatorsAction, this))
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
 * \class QtAws::APIGateway::GetRequestValidatorsRequestPrivate
 * \brief The GetRequestValidatorsRequestPrivate class provides private implementation for GetRequestValidatorsRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetRequestValidatorsRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetRequestValidatorsRequestPrivate::GetRequestValidatorsRequestPrivate(
    const APIGatewayRequest::Action action, GetRequestValidatorsRequest * const q)
    : APIGatewayRequestPrivate(action, q)
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
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
