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

#include "createvpclinkrequest.h"
#include "createvpclinkrequest_p.h"
#include "createvpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateVpcLinkRequest
 * \brief The CreateVpcLinkRequest class provides an interface for ApiGateway CreateVpcLink requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVpcLinkRequest::CreateVpcLinkRequest(const CreateVpcLinkRequest &other)
    : ApiGatewayRequest(new CreateVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVpcLinkRequest object.
 */
CreateVpcLinkRequest::CreateVpcLinkRequest()
    : ApiGatewayRequest(new CreateVpcLinkRequestPrivate(ApiGatewayRequest::CreateVpcLinkAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVpcLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVpcLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcLinkResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::CreateVpcLinkRequestPrivate
 * \brief The CreateVpcLinkRequestPrivate class provides private implementation for CreateVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateVpcLinkRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
CreateVpcLinkRequestPrivate::CreateVpcLinkRequestPrivate(
    const ApiGatewayRequest::Action action, CreateVpcLinkRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcLinkRequest
 * class' copy constructor.
 */
CreateVpcLinkRequestPrivate::CreateVpcLinkRequestPrivate(
    const CreateVpcLinkRequestPrivate &other, CreateVpcLinkRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
