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
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateVpcLinkRequest
 * \brief The CreateVpcLinkRequest class provides an interface for ApiGatewayV2 CreateVpcLink requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVpcLinkRequest::CreateVpcLinkRequest(const CreateVpcLinkRequest &other)
    : ApiGatewayV2Request(new CreateVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVpcLinkRequest object.
 */
CreateVpcLinkRequest::CreateVpcLinkRequest()
    : ApiGatewayV2Request(new CreateVpcLinkRequestPrivate(ApiGatewayV2Request::CreateVpcLinkAction, this))
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
 * \class QtAws::ApiGatewayV2::CreateVpcLinkRequestPrivate
 * \brief The CreateVpcLinkRequestPrivate class provides private implementation for CreateVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateVpcLinkRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
CreateVpcLinkRequestPrivate::CreateVpcLinkRequestPrivate(
    const ApiGatewayV2Request::Action action, CreateVpcLinkRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
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
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
