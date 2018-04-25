/*
    Copyright 2013-2018 Paul Colby

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

#include "getdomainnamerequest.h"
#include "getdomainnamerequest_p.h"
#include "getdomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetDomainNameRequest
 * \brief The GetDomainNameRequest class provides an interface for APIGateway GetDomainName requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainNameRequest::GetDomainNameRequest(const GetDomainNameRequest &other)
    : APIGatewayRequest(new GetDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainNameRequest object.
 */
GetDomainNameRequest::GetDomainNameRequest()
    : APIGatewayRequest(new GetDomainNameRequestPrivate(APIGatewayRequest::GetDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetDomainNameRequestPrivate
 * \brief The GetDomainNameRequestPrivate class provides private implementation for GetDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetDomainNameRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetDomainNameRequestPrivate::GetDomainNameRequestPrivate(
    const APIGatewayRequest::Action action, GetDomainNameRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainNameRequest
 * class' copy constructor.
 */
GetDomainNameRequestPrivate::GetDomainNameRequestPrivate(
    const GetDomainNameRequestPrivate &other, GetDomainNameRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
