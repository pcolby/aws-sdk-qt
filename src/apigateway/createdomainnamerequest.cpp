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

#include "createdomainnamerequest.h"
#include "createdomainnamerequest_p.h"
#include "createdomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateDomainNameRequest
 * \brief The CreateDomainNameRequest class provides an interface for ApiGateway CreateDomainName requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDomainNameRequest::CreateDomainNameRequest(const CreateDomainNameRequest &other)
    : ApiGatewayRequest(new CreateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDomainNameRequest object.
 */
CreateDomainNameRequest::CreateDomainNameRequest()
    : ApiGatewayRequest(new CreateDomainNameRequestPrivate(ApiGatewayRequest::CreateDomainNameAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDomainNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDomainNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainNameResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateDomainNameRequestPrivate
 * \brief The CreateDomainNameRequestPrivate class provides private implementation for CreateDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateDomainNameRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateDomainNameRequestPrivate::CreateDomainNameRequestPrivate(
    const ApiGatewayRequest::Action action, CreateDomainNameRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainNameRequest
 * class' copy constructor.
 */
CreateDomainNameRequestPrivate::CreateDomainNameRequestPrivate(
    const CreateDomainNameRequestPrivate &other, CreateDomainNameRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
