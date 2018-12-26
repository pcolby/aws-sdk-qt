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

#include "createdomainnamerequest.h"
#include "createdomainnamerequest_p.h"
#include "createdomainnameresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateDomainNameRequest
 * \brief The CreateDomainNameRequest class provides an interface for ApiGatewayV2 CreateDomainName requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createDomainName
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDomainNameRequest::CreateDomainNameRequest(const CreateDomainNameRequest &other)
    : ApiGatewayV2Request(new CreateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDomainNameRequest object.
 */
CreateDomainNameRequest::CreateDomainNameRequest()
    : ApiGatewayV2Request(new CreateDomainNameRequestPrivate(ApiGatewayV2Request::CreateDomainNameAction, this))
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
 * \class QtAws::ApiGatewayV2::CreateDomainNameRequestPrivate
 * \brief The CreateDomainNameRequestPrivate class provides private implementation for CreateDomainNameRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateDomainNameRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateDomainNameRequestPrivate::CreateDomainNameRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateDomainNameRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
